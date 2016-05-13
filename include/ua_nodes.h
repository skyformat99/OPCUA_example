#ifndef UA_NODES_H_
#define UA_NODES_H_

#include "ua_server.h"
#include "ua_types_generated.h"
#include "ua_types_encoding_binary.h"

/*
 * Most APIs take and return UA_EditNode and UA_ConstNode. By looking up the
 * nodeclass, nodes can be cast to their "true" class, i.e. UA_VariableNode,
 * UA_ObjectNode, and so on.
 */

#define UA_STANDARD_NODEMEMBERS                 \
    UA_NodeId nodeId;                           \
    UA_NodeClass nodeClass;                     \
    UA_QualifiedName browseName;                \
    UA_LocalizedText displayName;               \
    UA_LocalizedText description;               \
    UA_UInt32 writeMask;                        \
    UA_UInt32 userWriteMask;                    \
    size_t referencesSize;                      \
    UA_ReferenceNode *references;

typedef struct {
    UA_STANDARD_NODEMEMBERS
} UA_Node;

void UA_Node_deleteMembersAnyNodeClass(UA_Node *node);
UA_StatusCode UA_Node_copyAnyNodeClass(const UA_Node *src, UA_Node *dst);

/**************/
/* ObjectNode */
/**************/

typedef struct {
    UA_STANDARD_NODEMEMBERS
    UA_Byte eventNotifier;
    void *instanceHandle;
} UA_ObjectNode;

/******************/
/* ObjectTypeNode */
/******************/

typedef struct {
    UA_STANDARD_NODEMEMBERS
    UA_Boolean isAbstract;
    UA_ObjectLifecycleManagement lifecycleManagement;
} UA_ObjectTypeNode;

typedef enum {
    UA_VALUESOURCE_VARIANT,
    UA_VALUESOURCE_DATASOURCE
} UA_ValueSource;

/****************/
/* VariableNode */
/****************/

typedef struct {
    UA_STANDARD_NODEMEMBERS
    UA_Int32 valueRank; /**< n >= 1: the value is an array with the specified number of dimensions.
                             n = 0: the value is an array with one or more dimensions.
                             n = -1: the value is a scalar.
                             n = -2: the value can be a scalar or an array with any number of dimensions.
                             n = -3:  the value can be a scalar or a one dimensional array. */
    UA_ValueSource valueSource;
    union {
        struct {
        UA_Variant value;
        UA_ValueCallback callback;
        } variant;
        UA_DataSource dataSource;
    } value;
    /* <--- similar to variabletypenodes up to there--->*/
    UA_Byte accessLevel;
    UA_Byte userAccessLevel;
    UA_Double minimumSamplingInterval;
    UA_Boolean historizing;
} UA_VariableNode;

/********************/
/* VariableTypeNode */
/********************/

typedef struct {
    UA_STANDARD_NODEMEMBERS
    UA_Int32 valueRank;
    UA_ValueSource valueSource;
    union {
        struct {
            UA_Variant value;
            UA_ValueCallback callback;
        } variant;
        UA_DataSource dataSource;
    } value;
    /* <--- similar to variablenodes up to there--->*/
    UA_Boolean isAbstract;
} UA_VariableTypeNode;

/*********************/
/* ReferenceTypeNode */
/*********************/

typedef struct {
    UA_STANDARD_NODEMEMBERS
    UA_Boolean isAbstract;
    UA_Boolean symmetric;
    UA_LocalizedText inverseName;
} UA_ReferenceTypeNode;

/**************/
/* MethodNode */
/**************/

typedef struct {
    UA_STANDARD_NODEMEMBERS
    UA_Boolean executable;
    UA_Boolean userExecutable;
    void *methodHandle;
    UA_MethodCallback attachedMethod;
} UA_MethodNode;

/************/
/* ViewNode */
/************/

typedef struct {
    UA_STANDARD_NODEMEMBERS
    UA_Byte eventNotifier;
    /* <-- the same as objectnode until here --> */
    UA_Boolean containsNoLoops;
} UA_ViewNode;

/****************/
/* DataTypeNode */
/****************/

typedef struct {
    UA_STANDARD_NODEMEMBERS
    UA_Boolean isAbstract;
} UA_DataTypeNode;

#endif /* UA_NODES_H_ */
