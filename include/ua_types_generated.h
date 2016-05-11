/* Generated from Opc.Ua.Types.bsd with script /home/phil/openCUA/source/open62541/tools/generate_datatypes.py
 * on host phil-ubuntu by user phil at 2016-05-05 01:26:08 */

#ifndef UA_TYPES_GENERATED_H_
#define UA_TYPES_GENERATED_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "ua_types.h"
#ifdef UA_INTERNAL
#include "ua_types_encoding_binary.h"
#endif

/**
 * Additional Data Type Definitions
 * ================================
 */

#define UA_TYPES_COUNT 154
extern UA_EXPORT const UA_DataType UA_TYPES[UA_TYPES_COUNT];

/**
 * Boolean
 * -------
 */
#define UA_TYPES_BOOLEAN 0
static UA_INLINE void UA_Boolean_init(UA_Boolean *p) { memset(p, 0, sizeof(UA_Boolean)); }
static UA_INLINE UA_Boolean * UA_Boolean_new(void) { return (UA_Boolean*) UA_new(&UA_TYPES[UA_TYPES_BOOLEAN]); }
static UA_INLINE UA_StatusCode UA_Boolean_copy(const UA_Boolean *src, UA_Boolean *dst) { *dst = *src; return UA_STATUSCODE_GOOD; }
static UA_INLINE void UA_Boolean_deleteMembers(UA_Boolean *p) { }
static UA_INLINE void UA_Boolean_delete(UA_Boolean *p) { UA_delete(p, &UA_TYPES[UA_TYPES_BOOLEAN]); }

/**
 * SByte
 * -----
 */
#define UA_TYPES_SBYTE 1
static UA_INLINE void UA_SByte_init(UA_SByte *p) { memset(p, 0, sizeof(UA_SByte)); }
static UA_INLINE UA_SByte * UA_SByte_new(void) { return (UA_SByte*) UA_new(&UA_TYPES[UA_TYPES_SBYTE]); }
static UA_INLINE UA_StatusCode UA_SByte_copy(const UA_SByte *src, UA_SByte *dst) { *dst = *src; return UA_STATUSCODE_GOOD; }
static UA_INLINE void UA_SByte_deleteMembers(UA_SByte *p) { }
static UA_INLINE void UA_SByte_delete(UA_SByte *p) { UA_delete(p, &UA_TYPES[UA_TYPES_SBYTE]); }

/**
 * Byte
 * ----
 */
#define UA_TYPES_BYTE 2
static UA_INLINE void UA_Byte_init(UA_Byte *p) { memset(p, 0, sizeof(UA_Byte)); }
static UA_INLINE UA_Byte * UA_Byte_new(void) { return (UA_Byte*) UA_new(&UA_TYPES[UA_TYPES_BYTE]); }
static UA_INLINE UA_StatusCode UA_Byte_copy(const UA_Byte *src, UA_Byte *dst) { *dst = *src; return UA_STATUSCODE_GOOD; }
static UA_INLINE void UA_Byte_deleteMembers(UA_Byte *p) { }
static UA_INLINE void UA_Byte_delete(UA_Byte *p) { UA_delete(p, &UA_TYPES[UA_TYPES_BYTE]); }

/**
 * Int16
 * -----
 */
#define UA_TYPES_INT16 3
static UA_INLINE void UA_Int16_init(UA_Int16 *p) { memset(p, 0, sizeof(UA_Int16)); }
static UA_INLINE UA_Int16 * UA_Int16_new(void) { return (UA_Int16*) UA_new(&UA_TYPES[UA_TYPES_INT16]); }
static UA_INLINE UA_StatusCode UA_Int16_copy(const UA_Int16 *src, UA_Int16 *dst) { *dst = *src; return UA_STATUSCODE_GOOD; }
static UA_INLINE void UA_Int16_deleteMembers(UA_Int16 *p) { }
static UA_INLINE void UA_Int16_delete(UA_Int16 *p) { UA_delete(p, &UA_TYPES[UA_TYPES_INT16]); }

/**
 * UInt16
 * ------
 */
#define UA_TYPES_UINT16 4
static UA_INLINE void UA_UInt16_init(UA_UInt16 *p) { memset(p, 0, sizeof(UA_UInt16)); }
static UA_INLINE UA_UInt16 * UA_UInt16_new(void) { return (UA_UInt16*) UA_new(&UA_TYPES[UA_TYPES_UINT16]); }
static UA_INLINE UA_StatusCode UA_UInt16_copy(const UA_UInt16 *src, UA_UInt16 *dst) { *dst = *src; return UA_STATUSCODE_GOOD; }
static UA_INLINE void UA_UInt16_deleteMembers(UA_UInt16 *p) { }
static UA_INLINE void UA_UInt16_delete(UA_UInt16 *p) { UA_delete(p, &UA_TYPES[UA_TYPES_UINT16]); }

/**
 * Int32
 * -----
 */
#define UA_TYPES_INT32 5
static UA_INLINE void UA_Int32_init(UA_Int32 *p) { memset(p, 0, sizeof(UA_Int32)); }
static UA_INLINE UA_Int32 * UA_Int32_new(void) { return (UA_Int32*) UA_new(&UA_TYPES[UA_TYPES_INT32]); }
static UA_INLINE UA_StatusCode UA_Int32_copy(const UA_Int32 *src, UA_Int32 *dst) { *dst = *src; return UA_STATUSCODE_GOOD; }
static UA_INLINE void UA_Int32_deleteMembers(UA_Int32 *p) { }
static UA_INLINE void UA_Int32_delete(UA_Int32 *p) { UA_delete(p, &UA_TYPES[UA_TYPES_INT32]); }

/**
 * UInt32
 * ------
 */
#define UA_TYPES_UINT32 6
static UA_INLINE void UA_UInt32_init(UA_UInt32 *p) { memset(p, 0, sizeof(UA_UInt32)); }
static UA_INLINE UA_UInt32 * UA_UInt32_new(void) { return (UA_UInt32*) UA_new(&UA_TYPES[UA_TYPES_UINT32]); }
static UA_INLINE UA_StatusCode UA_UInt32_copy(const UA_UInt32 *src, UA_UInt32 *dst) { *dst = *src; return UA_STATUSCODE_GOOD; }
static UA_INLINE void UA_UInt32_deleteMembers(UA_UInt32 *p) { }
static UA_INLINE void UA_UInt32_delete(UA_UInt32 *p) { UA_delete(p, &UA_TYPES[UA_TYPES_UINT32]); }

/**
 * Int64
 * -----
 */
#define UA_TYPES_INT64 7
static UA_INLINE void UA_Int64_init(UA_Int64 *p) { memset(p, 0, sizeof(UA_Int64)); }
static UA_INLINE UA_Int64 * UA_Int64_new(void) { return (UA_Int64*) UA_new(&UA_TYPES[UA_TYPES_INT64]); }
static UA_INLINE UA_StatusCode UA_Int64_copy(const UA_Int64 *src, UA_Int64 *dst) { *dst = *src; return UA_STATUSCODE_GOOD; }
static UA_INLINE void UA_Int64_deleteMembers(UA_Int64 *p) { }
static UA_INLINE void UA_Int64_delete(UA_Int64 *p) { UA_delete(p, &UA_TYPES[UA_TYPES_INT64]); }

/**
 * UInt64
 * ------
 */
#define UA_TYPES_UINT64 8
static UA_INLINE void UA_UInt64_init(UA_UInt64 *p) { memset(p, 0, sizeof(UA_UInt64)); }
static UA_INLINE UA_UInt64 * UA_UInt64_new(void) { return (UA_UInt64*) UA_new(&UA_TYPES[UA_TYPES_UINT64]); }
static UA_INLINE UA_StatusCode UA_UInt64_copy(const UA_UInt64 *src, UA_UInt64 *dst) { *dst = *src; return UA_STATUSCODE_GOOD; }
static UA_INLINE void UA_UInt64_deleteMembers(UA_UInt64 *p) { }
static UA_INLINE void UA_UInt64_delete(UA_UInt64 *p) { UA_delete(p, &UA_TYPES[UA_TYPES_UINT64]); }

/**
 * Float
 * -----
 */
#define UA_TYPES_FLOAT 9
static UA_INLINE void UA_Float_init(UA_Float *p) { memset(p, 0, sizeof(UA_Float)); }
static UA_INLINE UA_Float * UA_Float_new(void) { return (UA_Float*) UA_new(&UA_TYPES[UA_TYPES_FLOAT]); }
static UA_INLINE UA_StatusCode UA_Float_copy(const UA_Float *src, UA_Float *dst) { *dst = *src; return UA_STATUSCODE_GOOD; }
static UA_INLINE void UA_Float_deleteMembers(UA_Float *p) { }
static UA_INLINE void UA_Float_delete(UA_Float *p) { UA_delete(p, &UA_TYPES[UA_TYPES_FLOAT]); }

/**
 * Double
 * ------
 */
#define UA_TYPES_DOUBLE 10
static UA_INLINE void UA_Double_init(UA_Double *p) { memset(p, 0, sizeof(UA_Double)); }
static UA_INLINE UA_Double * UA_Double_new(void) { return (UA_Double*) UA_new(&UA_TYPES[UA_TYPES_DOUBLE]); }
static UA_INLINE UA_StatusCode UA_Double_copy(const UA_Double *src, UA_Double *dst) { *dst = *src; return UA_STATUSCODE_GOOD; }
static UA_INLINE void UA_Double_deleteMembers(UA_Double *p) { }
static UA_INLINE void UA_Double_delete(UA_Double *p) { UA_delete(p, &UA_TYPES[UA_TYPES_DOUBLE]); }

/**
 * String
 * ------
 */
#define UA_TYPES_STRING 11
static UA_INLINE void UA_String_init(UA_String *p) { memset(p, 0, sizeof(UA_String)); }
static UA_INLINE UA_String * UA_String_new(void) { return (UA_String*) UA_new(&UA_TYPES[UA_TYPES_STRING]); }
static UA_INLINE UA_StatusCode UA_String_copy(const UA_String *src, UA_String *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_STRING]); }
static UA_INLINE void UA_String_deleteMembers(UA_String *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_STRING]); }
static UA_INLINE void UA_String_delete(UA_String *p) { UA_delete(p, &UA_TYPES[UA_TYPES_STRING]); }

/**
 * DateTime
 * --------
 */
#define UA_TYPES_DATETIME 12
static UA_INLINE void UA_DateTime_init(UA_DateTime *p) { memset(p, 0, sizeof(UA_DateTime)); }
static UA_INLINE UA_DateTime * UA_DateTime_new(void) { return (UA_DateTime*) UA_new(&UA_TYPES[UA_TYPES_DATETIME]); }
static UA_INLINE UA_StatusCode UA_DateTime_copy(const UA_DateTime *src, UA_DateTime *dst) { *dst = *src; return UA_STATUSCODE_GOOD; }
static UA_INLINE void UA_DateTime_deleteMembers(UA_DateTime *p) { }
static UA_INLINE void UA_DateTime_delete(UA_DateTime *p) { UA_delete(p, &UA_TYPES[UA_TYPES_DATETIME]); }

/**
 * Guid
 * ----
 */
#define UA_TYPES_GUID 13
static UA_INLINE void UA_Guid_init(UA_Guid *p) { memset(p, 0, sizeof(UA_Guid)); }
static UA_INLINE UA_Guid * UA_Guid_new(void) { return (UA_Guid*) UA_new(&UA_TYPES[UA_TYPES_GUID]); }
static UA_INLINE UA_StatusCode UA_Guid_copy(const UA_Guid *src, UA_Guid *dst) { *dst = *src; return UA_STATUSCODE_GOOD; }
static UA_INLINE void UA_Guid_deleteMembers(UA_Guid *p) { }
static UA_INLINE void UA_Guid_delete(UA_Guid *p) { UA_delete(p, &UA_TYPES[UA_TYPES_GUID]); }

/**
 * ByteString
 * ----------
 */
#define UA_TYPES_BYTESTRING 14
static UA_INLINE void UA_ByteString_init(UA_ByteString *p) { memset(p, 0, sizeof(UA_ByteString)); }
static UA_INLINE UA_ByteString * UA_ByteString_new(void) { return (UA_ByteString*) UA_new(&UA_TYPES[UA_TYPES_BYTESTRING]); }
static UA_INLINE UA_StatusCode UA_ByteString_copy(const UA_ByteString *src, UA_ByteString *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_BYTESTRING]); }
static UA_INLINE void UA_ByteString_deleteMembers(UA_ByteString *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_BYTESTRING]); }
static UA_INLINE void UA_ByteString_delete(UA_ByteString *p) { UA_delete(p, &UA_TYPES[UA_TYPES_BYTESTRING]); }

/**
 * XmlElement
 * ----------
 */
#define UA_TYPES_XMLELEMENT 15
static UA_INLINE void UA_XmlElement_init(UA_XmlElement *p) { memset(p, 0, sizeof(UA_XmlElement)); }
static UA_INLINE UA_XmlElement * UA_XmlElement_new(void) { return (UA_XmlElement*) UA_new(&UA_TYPES[UA_TYPES_XMLELEMENT]); }
static UA_INLINE UA_StatusCode UA_XmlElement_copy(const UA_XmlElement *src, UA_XmlElement *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_XMLELEMENT]); }
static UA_INLINE void UA_XmlElement_deleteMembers(UA_XmlElement *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_XMLELEMENT]); }
static UA_INLINE void UA_XmlElement_delete(UA_XmlElement *p) { UA_delete(p, &UA_TYPES[UA_TYPES_XMLELEMENT]); }

/**
 * NodeId
 * ------
 */
#define UA_TYPES_NODEID 16
static UA_INLINE void UA_NodeId_init(UA_NodeId *p) { memset(p, 0, sizeof(UA_NodeId)); }
static UA_INLINE UA_NodeId * UA_NodeId_new(void) { return (UA_NodeId*) UA_new(&UA_TYPES[UA_TYPES_NODEID]); }
static UA_INLINE UA_StatusCode UA_NodeId_copy(const UA_NodeId *src, UA_NodeId *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_NODEID]); }
static UA_INLINE void UA_NodeId_deleteMembers(UA_NodeId *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_NODEID]); }
static UA_INLINE void UA_NodeId_delete(UA_NodeId *p) { UA_delete(p, &UA_TYPES[UA_TYPES_NODEID]); }

/**
 * ExpandedNodeId
 * --------------
 */
#define UA_TYPES_EXPANDEDNODEID 17
static UA_INLINE void UA_ExpandedNodeId_init(UA_ExpandedNodeId *p) { memset(p, 0, sizeof(UA_ExpandedNodeId)); }
static UA_INLINE UA_ExpandedNodeId * UA_ExpandedNodeId_new(void) { return (UA_ExpandedNodeId*) UA_new(&UA_TYPES[UA_TYPES_EXPANDEDNODEID]); }
static UA_INLINE UA_StatusCode UA_ExpandedNodeId_copy(const UA_ExpandedNodeId *src, UA_ExpandedNodeId *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_EXPANDEDNODEID]); }
static UA_INLINE void UA_ExpandedNodeId_deleteMembers(UA_ExpandedNodeId *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_EXPANDEDNODEID]); }
static UA_INLINE void UA_ExpandedNodeId_delete(UA_ExpandedNodeId *p) { UA_delete(p, &UA_TYPES[UA_TYPES_EXPANDEDNODEID]); }

/**
 * StatusCode
 * ----------
 */
#define UA_TYPES_STATUSCODE 18
static UA_INLINE void UA_StatusCode_init(UA_StatusCode *p) { memset(p, 0, sizeof(UA_StatusCode)); }
static UA_INLINE UA_StatusCode * UA_StatusCode_new(void) { return (UA_StatusCode*) UA_new(&UA_TYPES[UA_TYPES_STATUSCODE]); }
static UA_INLINE UA_StatusCode UA_StatusCode_copy(const UA_StatusCode *src, UA_StatusCode *dst) { *dst = *src; return UA_STATUSCODE_GOOD; }
static UA_INLINE void UA_StatusCode_deleteMembers(UA_StatusCode *p) { }
static UA_INLINE void UA_StatusCode_delete(UA_StatusCode *p) { UA_delete(p, &UA_TYPES[UA_TYPES_STATUSCODE]); }

/**
 * QualifiedName
 * -------------
 */
#define UA_TYPES_QUALIFIEDNAME 19
static UA_INLINE void UA_QualifiedName_init(UA_QualifiedName *p) { memset(p, 0, sizeof(UA_QualifiedName)); }
static UA_INLINE UA_QualifiedName * UA_QualifiedName_new(void) { return (UA_QualifiedName*) UA_new(&UA_TYPES[UA_TYPES_QUALIFIEDNAME]); }
static UA_INLINE UA_StatusCode UA_QualifiedName_copy(const UA_QualifiedName *src, UA_QualifiedName *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_QUALIFIEDNAME]); }
static UA_INLINE void UA_QualifiedName_deleteMembers(UA_QualifiedName *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_QUALIFIEDNAME]); }
static UA_INLINE void UA_QualifiedName_delete(UA_QualifiedName *p) { UA_delete(p, &UA_TYPES[UA_TYPES_QUALIFIEDNAME]); }

/**
 * LocalizedText
 * -------------
 */
#define UA_TYPES_LOCALIZEDTEXT 20
static UA_INLINE void UA_LocalizedText_init(UA_LocalizedText *p) { memset(p, 0, sizeof(UA_LocalizedText)); }
static UA_INLINE UA_LocalizedText * UA_LocalizedText_new(void) { return (UA_LocalizedText*) UA_new(&UA_TYPES[UA_TYPES_LOCALIZEDTEXT]); }
static UA_INLINE UA_StatusCode UA_LocalizedText_copy(const UA_LocalizedText *src, UA_LocalizedText *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]); }
static UA_INLINE void UA_LocalizedText_deleteMembers(UA_LocalizedText *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]); }
static UA_INLINE void UA_LocalizedText_delete(UA_LocalizedText *p) { UA_delete(p, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]); }

/**
 * ExtensionObject
 * ---------------
 */
#define UA_TYPES_EXTENSIONOBJECT 21
static UA_INLINE void UA_ExtensionObject_init(UA_ExtensionObject *p) { memset(p, 0, sizeof(UA_ExtensionObject)); }
static UA_INLINE UA_ExtensionObject * UA_ExtensionObject_new(void) { return (UA_ExtensionObject*) UA_new(&UA_TYPES[UA_TYPES_EXTENSIONOBJECT]); }
static UA_INLINE UA_StatusCode UA_ExtensionObject_copy(const UA_ExtensionObject *src, UA_ExtensionObject *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_EXTENSIONOBJECT]); }
static UA_INLINE void UA_ExtensionObject_deleteMembers(UA_ExtensionObject *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_EXTENSIONOBJECT]); }
static UA_INLINE void UA_ExtensionObject_delete(UA_ExtensionObject *p) { UA_delete(p, &UA_TYPES[UA_TYPES_EXTENSIONOBJECT]); }

/**
 * DataValue
 * ---------
 */
#define UA_TYPES_DATAVALUE 22
static UA_INLINE void UA_DataValue_init(UA_DataValue *p) { memset(p, 0, sizeof(UA_DataValue)); }
static UA_INLINE UA_DataValue * UA_DataValue_new(void) { return (UA_DataValue*) UA_new(&UA_TYPES[UA_TYPES_DATAVALUE]); }
static UA_INLINE UA_StatusCode UA_DataValue_copy(const UA_DataValue *src, UA_DataValue *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_DATAVALUE]); }
static UA_INLINE void UA_DataValue_deleteMembers(UA_DataValue *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_DATAVALUE]); }
static UA_INLINE void UA_DataValue_delete(UA_DataValue *p) { UA_delete(p, &UA_TYPES[UA_TYPES_DATAVALUE]); }

/**
 * Variant
 * -------
 */
#define UA_TYPES_VARIANT 23
static UA_INLINE void UA_Variant_init(UA_Variant *p) { memset(p, 0, sizeof(UA_Variant)); }
static UA_INLINE UA_Variant * UA_Variant_new(void) { return (UA_Variant*) UA_new(&UA_TYPES[UA_TYPES_VARIANT]); }
static UA_INLINE UA_StatusCode UA_Variant_copy(const UA_Variant *src, UA_Variant *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_VARIANT]); }
static UA_INLINE void UA_Variant_deleteMembers(UA_Variant *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_VARIANT]); }
static UA_INLINE void UA_Variant_delete(UA_Variant *p) { UA_delete(p, &UA_TYPES[UA_TYPES_VARIANT]); }

/**
 * DiagnosticInfo
 * --------------
 */
#define UA_TYPES_DIAGNOSTICINFO 24
static UA_INLINE void UA_DiagnosticInfo_init(UA_DiagnosticInfo *p) { memset(p, 0, sizeof(UA_DiagnosticInfo)); }
static UA_INLINE UA_DiagnosticInfo * UA_DiagnosticInfo_new(void) { return (UA_DiagnosticInfo*) UA_new(&UA_TYPES[UA_TYPES_DIAGNOSTICINFO]); }
static UA_INLINE UA_StatusCode UA_DiagnosticInfo_copy(const UA_DiagnosticInfo *src, UA_DiagnosticInfo *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_DIAGNOSTICINFO]); }
static UA_INLINE void UA_DiagnosticInfo_deleteMembers(UA_DiagnosticInfo *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_DIAGNOSTICINFO]); }
static UA_INLINE void UA_DiagnosticInfo_delete(UA_DiagnosticInfo *p) { UA_delete(p, &UA_TYPES[UA_TYPES_DIAGNOSTICINFO]); }

/**
 * SignedSoftwareCertificate
 * -------------------------
 * A software certificate with a digital signature. */
typedef struct {
    UA_ByteString certificateData;
    UA_ByteString signature;
} UA_SignedSoftwareCertificate;

#define UA_TYPES_SIGNEDSOFTWARECERTIFICATE 25
static UA_INLINE void UA_SignedSoftwareCertificate_init(UA_SignedSoftwareCertificate *p) { memset(p, 0, sizeof(UA_SignedSoftwareCertificate)); }
static UA_INLINE UA_SignedSoftwareCertificate * UA_SignedSoftwareCertificate_new(void) { return (UA_SignedSoftwareCertificate*) UA_new(&UA_TYPES[UA_TYPES_SIGNEDSOFTWARECERTIFICATE]); }
static UA_INLINE UA_StatusCode UA_SignedSoftwareCertificate_copy(const UA_SignedSoftwareCertificate *src, UA_SignedSoftwareCertificate *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_SIGNEDSOFTWARECERTIFICATE]); }
static UA_INLINE void UA_SignedSoftwareCertificate_deleteMembers(UA_SignedSoftwareCertificate *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_SIGNEDSOFTWARECERTIFICATE]); }
static UA_INLINE void UA_SignedSoftwareCertificate_delete(UA_SignedSoftwareCertificate *p) { UA_delete(p, &UA_TYPES[UA_TYPES_SIGNEDSOFTWARECERTIFICATE]); }

/**
 * BrowsePathTarget
 * ----------------
 * The target of the translated path. */
typedef struct {
    UA_ExpandedNodeId targetId;
    UA_UInt32 remainingPathIndex;
} UA_BrowsePathTarget;

#define UA_TYPES_BROWSEPATHTARGET 26
static UA_INLINE void UA_BrowsePathTarget_init(UA_BrowsePathTarget *p) { memset(p, 0, sizeof(UA_BrowsePathTarget)); }
static UA_INLINE UA_BrowsePathTarget * UA_BrowsePathTarget_new(void) { return (UA_BrowsePathTarget*) UA_new(&UA_TYPES[UA_TYPES_BROWSEPATHTARGET]); }
static UA_INLINE UA_StatusCode UA_BrowsePathTarget_copy(const UA_BrowsePathTarget *src, UA_BrowsePathTarget *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_BROWSEPATHTARGET]); }
static UA_INLINE void UA_BrowsePathTarget_deleteMembers(UA_BrowsePathTarget *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_BROWSEPATHTARGET]); }
static UA_INLINE void UA_BrowsePathTarget_delete(UA_BrowsePathTarget *p) { UA_delete(p, &UA_TYPES[UA_TYPES_BROWSEPATHTARGET]); }

/**
 * ViewAttributes
 * --------------
 * The attributes for a view node. */
typedef struct {
    UA_UInt32 specifiedAttributes;
    UA_LocalizedText displayName;
    UA_LocalizedText description;
    UA_UInt32 writeMask;
    UA_UInt32 userWriteMask;
    UA_Boolean containsNoLoops;
    UA_Byte eventNotifier;
} UA_ViewAttributes;

#define UA_TYPES_VIEWATTRIBUTES 27
static UA_INLINE void UA_ViewAttributes_init(UA_ViewAttributes *p) { memset(p, 0, sizeof(UA_ViewAttributes)); }
static UA_INLINE UA_ViewAttributes * UA_ViewAttributes_new(void) { return (UA_ViewAttributes*) UA_new(&UA_TYPES[UA_TYPES_VIEWATTRIBUTES]); }
static UA_INLINE UA_StatusCode UA_ViewAttributes_copy(const UA_ViewAttributes *src, UA_ViewAttributes *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_VIEWATTRIBUTES]); }
static UA_INLINE void UA_ViewAttributes_deleteMembers(UA_ViewAttributes *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_VIEWATTRIBUTES]); }
static UA_INLINE void UA_ViewAttributes_delete(UA_ViewAttributes *p) { UA_delete(p, &UA_TYPES[UA_TYPES_VIEWATTRIBUTES]); }

/**
 * BrowseResultMask
 * ----------------
 * A bit mask which specifies what should be returned in a browse response. */
typedef enum { 
    UA_BROWSERESULTMASK_NONE = 0,
    UA_BROWSERESULTMASK_REFERENCETYPEID = 1,
    UA_BROWSERESULTMASK_ISFORWARD = 2,
    UA_BROWSERESULTMASK_NODECLASS = 4,
    UA_BROWSERESULTMASK_BROWSENAME = 8,
    UA_BROWSERESULTMASK_DISPLAYNAME = 16,
    UA_BROWSERESULTMASK_TYPEDEFINITION = 32,
    UA_BROWSERESULTMASK_ALL = 63,
    UA_BROWSERESULTMASK_REFERENCETYPEINFO = 3,
    UA_BROWSERESULTMASK_TARGETINFO = 60
} UA_BrowseResultMask;

#define UA_TYPES_BROWSERESULTMASK 28
static UA_INLINE void UA_BrowseResultMask_init(UA_BrowseResultMask *p) { memset(p, 0, sizeof(UA_BrowseResultMask)); }
static UA_INLINE UA_BrowseResultMask * UA_BrowseResultMask_new(void) { return (UA_BrowseResultMask*) UA_new(&UA_TYPES[UA_TYPES_BROWSERESULTMASK]); }
static UA_INLINE UA_StatusCode UA_BrowseResultMask_copy(const UA_BrowseResultMask *src, UA_BrowseResultMask *dst) { *dst = *src; return UA_STATUSCODE_GOOD; }
static UA_INLINE void UA_BrowseResultMask_deleteMembers(UA_BrowseResultMask *p) { }
static UA_INLINE void UA_BrowseResultMask_delete(UA_BrowseResultMask *p) { UA_delete(p, &UA_TYPES[UA_TYPES_BROWSERESULTMASK]); }

/**
 * RequestHeader
 * -------------
 * The header passed with every server request. */
typedef struct {
    UA_NodeId authenticationToken;
    UA_DateTime timestamp;
    UA_UInt32 requestHandle;
    UA_UInt32 returnDiagnostics;
    UA_String auditEntryId;
    UA_UInt32 timeoutHint;
    UA_ExtensionObject additionalHeader;
} UA_RequestHeader;

#define UA_TYPES_REQUESTHEADER 29
static UA_INLINE void UA_RequestHeader_init(UA_RequestHeader *p) { memset(p, 0, sizeof(UA_RequestHeader)); }
static UA_INLINE UA_RequestHeader * UA_RequestHeader_new(void) { return (UA_RequestHeader*) UA_new(&UA_TYPES[UA_TYPES_REQUESTHEADER]); }
static UA_INLINE UA_StatusCode UA_RequestHeader_copy(const UA_RequestHeader *src, UA_RequestHeader *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_REQUESTHEADER]); }
static UA_INLINE void UA_RequestHeader_deleteMembers(UA_RequestHeader *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_REQUESTHEADER]); }
static UA_INLINE void UA_RequestHeader_delete(UA_RequestHeader *p) { UA_delete(p, &UA_TYPES[UA_TYPES_REQUESTHEADER]); }

/**
 * ViewDescription
 * ---------------
 * The view to browse. */
typedef struct {
    UA_NodeId viewId;
    UA_DateTime timestamp;
    UA_UInt32 viewVersion;
} UA_ViewDescription;

#define UA_TYPES_VIEWDESCRIPTION 30
static UA_INLINE void UA_ViewDescription_init(UA_ViewDescription *p) { memset(p, 0, sizeof(UA_ViewDescription)); }
static UA_INLINE UA_ViewDescription * UA_ViewDescription_new(void) { return (UA_ViewDescription*) UA_new(&UA_TYPES[UA_TYPES_VIEWDESCRIPTION]); }
static UA_INLINE UA_StatusCode UA_ViewDescription_copy(const UA_ViewDescription *src, UA_ViewDescription *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_VIEWDESCRIPTION]); }
static UA_INLINE void UA_ViewDescription_deleteMembers(UA_ViewDescription *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_VIEWDESCRIPTION]); }
static UA_INLINE void UA_ViewDescription_delete(UA_ViewDescription *p) { UA_delete(p, &UA_TYPES[UA_TYPES_VIEWDESCRIPTION]); }

/**
 * CloseSecureChannelRequest
 * -------------------------
 * Closes a secure channel. */
typedef struct {
    UA_RequestHeader requestHeader;
} UA_CloseSecureChannelRequest;

#define UA_TYPES_CLOSESECURECHANNELREQUEST 31
static UA_INLINE void UA_CloseSecureChannelRequest_init(UA_CloseSecureChannelRequest *p) { memset(p, 0, sizeof(UA_CloseSecureChannelRequest)); }
static UA_INLINE UA_CloseSecureChannelRequest * UA_CloseSecureChannelRequest_new(void) { return (UA_CloseSecureChannelRequest*) UA_new(&UA_TYPES[UA_TYPES_CLOSESECURECHANNELREQUEST]); }
static UA_INLINE UA_StatusCode UA_CloseSecureChannelRequest_copy(const UA_CloseSecureChannelRequest *src, UA_CloseSecureChannelRequest *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_CLOSESECURECHANNELREQUEST]); }
static UA_INLINE void UA_CloseSecureChannelRequest_deleteMembers(UA_CloseSecureChannelRequest *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_CLOSESECURECHANNELREQUEST]); }
static UA_INLINE void UA_CloseSecureChannelRequest_delete(UA_CloseSecureChannelRequest *p) { UA_delete(p, &UA_TYPES[UA_TYPES_CLOSESECURECHANNELREQUEST]); }

/**
 * AddNodesResult
 * --------------
 * A result of an add node operation. */
typedef struct {
    UA_StatusCode statusCode;
    UA_NodeId addedNodeId;
} UA_AddNodesResult;

#define UA_TYPES_ADDNODESRESULT 32
static UA_INLINE void UA_AddNodesResult_init(UA_AddNodesResult *p) { memset(p, 0, sizeof(UA_AddNodesResult)); }
static UA_INLINE UA_AddNodesResult * UA_AddNodesResult_new(void) { return (UA_AddNodesResult*) UA_new(&UA_TYPES[UA_TYPES_ADDNODESRESULT]); }
static UA_INLINE UA_StatusCode UA_AddNodesResult_copy(const UA_AddNodesResult *src, UA_AddNodesResult *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_ADDNODESRESULT]); }
static UA_INLINE void UA_AddNodesResult_deleteMembers(UA_AddNodesResult *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_ADDNODESRESULT]); }
static UA_INLINE void UA_AddNodesResult_delete(UA_AddNodesResult *p) { UA_delete(p, &UA_TYPES[UA_TYPES_ADDNODESRESULT]); }

/**
 * VariableAttributes
 * ------------------
 * The attributes for a variable node. */
typedef struct {
    UA_UInt32 specifiedAttributes;
    UA_LocalizedText displayName;
    UA_LocalizedText description;
    UA_UInt32 writeMask;
    UA_UInt32 userWriteMask;
    UA_Variant value;
    UA_NodeId dataType;
    UA_Int32 valueRank;
    size_t arrayDimensionsSize;
    UA_UInt32 *arrayDimensions;
    UA_Byte accessLevel;
    UA_Byte userAccessLevel;
    UA_Double minimumSamplingInterval;
    UA_Boolean historizing;
} UA_VariableAttributes;

#define UA_TYPES_VARIABLEATTRIBUTES 33
static UA_INLINE void UA_VariableAttributes_init(UA_VariableAttributes *p) { memset(p, 0, sizeof(UA_VariableAttributes)); }
static UA_INLINE UA_VariableAttributes * UA_VariableAttributes_new(void) { return (UA_VariableAttributes*) UA_new(&UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES]); }
static UA_INLINE UA_StatusCode UA_VariableAttributes_copy(const UA_VariableAttributes *src, UA_VariableAttributes *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES]); }
static UA_INLINE void UA_VariableAttributes_deleteMembers(UA_VariableAttributes *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES]); }
static UA_INLINE void UA_VariableAttributes_delete(UA_VariableAttributes *p) { UA_delete(p, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES]); }

/**
 * NotificationMessage
 * -------------------
 */
typedef struct {
    UA_UInt32 sequenceNumber;
    UA_DateTime publishTime;
    size_t notificationDataSize;
    UA_ExtensionObject *notificationData;
} UA_NotificationMessage;

#define UA_TYPES_NOTIFICATIONMESSAGE 34
static UA_INLINE void UA_NotificationMessage_init(UA_NotificationMessage *p) { memset(p, 0, sizeof(UA_NotificationMessage)); }
static UA_INLINE UA_NotificationMessage * UA_NotificationMessage_new(void) { return (UA_NotificationMessage*) UA_new(&UA_TYPES[UA_TYPES_NOTIFICATIONMESSAGE]); }
static UA_INLINE UA_StatusCode UA_NotificationMessage_copy(const UA_NotificationMessage *src, UA_NotificationMessage *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_NOTIFICATIONMESSAGE]); }
static UA_INLINE void UA_NotificationMessage_deleteMembers(UA_NotificationMessage *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_NOTIFICATIONMESSAGE]); }
static UA_INLINE void UA_NotificationMessage_delete(UA_NotificationMessage *p) { UA_delete(p, &UA_TYPES[UA_TYPES_NOTIFICATIONMESSAGE]); }

/**
 * NodeAttributesMask
 * ------------------
 * The bits used to specify default attributes for a new node. */
typedef enum { 
    UA_NODEATTRIBUTESMASK_NONE = 0,
    UA_NODEATTRIBUTESMASK_ACCESSLEVEL = 1,
    UA_NODEATTRIBUTESMASK_ARRAYDIMENSIONS = 2,
    UA_NODEATTRIBUTESMASK_BROWSENAME = 4,
    UA_NODEATTRIBUTESMASK_CONTAINSNOLOOPS = 8,
    UA_NODEATTRIBUTESMASK_DATATYPE = 16,
    UA_NODEATTRIBUTESMASK_DESCRIPTION = 32,
    UA_NODEATTRIBUTESMASK_DISPLAYNAME = 64,
    UA_NODEATTRIBUTESMASK_EVENTNOTIFIER = 128,
    UA_NODEATTRIBUTESMASK_EXECUTABLE = 256,
    UA_NODEATTRIBUTESMASK_HISTORIZING = 512,
    UA_NODEATTRIBUTESMASK_INVERSENAME = 1024,
    UA_NODEATTRIBUTESMASK_ISABSTRACT = 2048,
    UA_NODEATTRIBUTESMASK_MINIMUMSAMPLINGINTERVAL = 4096,
    UA_NODEATTRIBUTESMASK_NODECLASS = 8192,
    UA_NODEATTRIBUTESMASK_NODEID = 16384,
    UA_NODEATTRIBUTESMASK_SYMMETRIC = 32768,
    UA_NODEATTRIBUTESMASK_USERACCESSLEVEL = 65536,
    UA_NODEATTRIBUTESMASK_USEREXECUTABLE = 131072,
    UA_NODEATTRIBUTESMASK_USERWRITEMASK = 262144,
    UA_NODEATTRIBUTESMASK_VALUERANK = 524288,
    UA_NODEATTRIBUTESMASK_WRITEMASK = 1048576,
    UA_NODEATTRIBUTESMASK_VALUE = 2097152,
    UA_NODEATTRIBUTESMASK_ALL = 4194303,
    UA_NODEATTRIBUTESMASK_BASENODE = 1335396,
    UA_NODEATTRIBUTESMASK_OBJECT = 1335524,
    UA_NODEATTRIBUTESMASK_OBJECTTYPEORDATATYPE = 1337444,
    UA_NODEATTRIBUTESMASK_VARIABLE = 4026999,
    UA_NODEATTRIBUTESMASK_VARIABLETYPE = 3958902,
    UA_NODEATTRIBUTESMASK_METHOD = 1466724,
    UA_NODEATTRIBUTESMASK_REFERENCETYPE = 1371236,
    UA_NODEATTRIBUTESMASK_VIEW = 1335532
} UA_NodeAttributesMask;

#define UA_TYPES_NODEATTRIBUTESMASK 35
static UA_INLINE void UA_NodeAttributesMask_init(UA_NodeAttributesMask *p) { memset(p, 0, sizeof(UA_NodeAttributesMask)); }
static UA_INLINE UA_NodeAttributesMask * UA_NodeAttributesMask_new(void) { return (UA_NodeAttributesMask*) UA_new(&UA_TYPES[UA_TYPES_NODEATTRIBUTESMASK]); }
static UA_INLINE UA_StatusCode UA_NodeAttributesMask_copy(const UA_NodeAttributesMask *src, UA_NodeAttributesMask *dst) { *dst = *src; return UA_STATUSCODE_GOOD; }
static UA_INLINE void UA_NodeAttributesMask_deleteMembers(UA_NodeAttributesMask *p) { }
static UA_INLINE void UA_NodeAttributesMask_delete(UA_NodeAttributesMask *p) { UA_delete(p, &UA_TYPES[UA_TYPES_NODEATTRIBUTESMASK]); }

/**
 * MonitoringMode
 * --------------
 */
typedef enum { 
    UA_MONITORINGMODE_DISABLED = 0,
    UA_MONITORINGMODE_SAMPLING = 1,
    UA_MONITORINGMODE_REPORTING = 2
} UA_MonitoringMode;

#define UA_TYPES_MONITORINGMODE 36
static UA_INLINE void UA_MonitoringMode_init(UA_MonitoringMode *p) { memset(p, 0, sizeof(UA_MonitoringMode)); }
static UA_INLINE UA_MonitoringMode * UA_MonitoringMode_new(void) { return (UA_MonitoringMode*) UA_new(&UA_TYPES[UA_TYPES_MONITORINGMODE]); }
static UA_INLINE UA_StatusCode UA_MonitoringMode_copy(const UA_MonitoringMode *src, UA_MonitoringMode *dst) { *dst = *src; return UA_STATUSCODE_GOOD; }
static UA_INLINE void UA_MonitoringMode_deleteMembers(UA_MonitoringMode *p) { }
static UA_INLINE void UA_MonitoringMode_delete(UA_MonitoringMode *p) { UA_delete(p, &UA_TYPES[UA_TYPES_MONITORINGMODE]); }

/**
 * CallMethodResult
 * ----------------
 */
typedef struct {
    UA_StatusCode statusCode;
    size_t inputArgumentResultsSize;
    UA_StatusCode *inputArgumentResults;
    size_t inputArgumentDiagnosticInfosSize;
    UA_DiagnosticInfo *inputArgumentDiagnosticInfos;
    size_t outputArgumentsSize;
    UA_Variant *outputArguments;
} UA_CallMethodResult;

#define UA_TYPES_CALLMETHODRESULT 37
static UA_INLINE void UA_CallMethodResult_init(UA_CallMethodResult *p) { memset(p, 0, sizeof(UA_CallMethodResult)); }
static UA_INLINE UA_CallMethodResult * UA_CallMethodResult_new(void) { return (UA_CallMethodResult*) UA_new(&UA_TYPES[UA_TYPES_CALLMETHODRESULT]); }
static UA_INLINE UA_StatusCode UA_CallMethodResult_copy(const UA_CallMethodResult *src, UA_CallMethodResult *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_CALLMETHODRESULT]); }
static UA_INLINE void UA_CallMethodResult_deleteMembers(UA_CallMethodResult *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_CALLMETHODRESULT]); }
static UA_INLINE void UA_CallMethodResult_delete(UA_CallMethodResult *p) { UA_delete(p, &UA_TYPES[UA_TYPES_CALLMETHODRESULT]); }

/**
 * ParsingResult
 * -------------
 */
typedef struct {
    UA_StatusCode statusCode;
    size_t dataStatusCodesSize;
    UA_StatusCode *dataStatusCodes;
    size_t dataDiagnosticInfosSize;
    UA_DiagnosticInfo *dataDiagnosticInfos;
} UA_ParsingResult;

#define UA_TYPES_PARSINGRESULT 38
static UA_INLINE void UA_ParsingResult_init(UA_ParsingResult *p) { memset(p, 0, sizeof(UA_ParsingResult)); }
static UA_INLINE UA_ParsingResult * UA_ParsingResult_new(void) { return (UA_ParsingResult*) UA_new(&UA_TYPES[UA_TYPES_PARSINGRESULT]); }
static UA_INLINE UA_StatusCode UA_ParsingResult_copy(const UA_ParsingResult *src, UA_ParsingResult *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_PARSINGRESULT]); }
static UA_INLINE void UA_ParsingResult_deleteMembers(UA_ParsingResult *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_PARSINGRESULT]); }
static UA_INLINE void UA_ParsingResult_delete(UA_ParsingResult *p) { UA_delete(p, &UA_TYPES[UA_TYPES_PARSINGRESULT]); }

/**
 * RelativePathElement
 * -------------------
 * An element in a relative path. */
typedef struct {
    UA_NodeId referenceTypeId;
    UA_Boolean isInverse;
    UA_Boolean includeSubtypes;
    UA_QualifiedName targetName;
} UA_RelativePathElement;

#define UA_TYPES_RELATIVEPATHELEMENT 39
static UA_INLINE void UA_RelativePathElement_init(UA_RelativePathElement *p) { memset(p, 0, sizeof(UA_RelativePathElement)); }
static UA_INLINE UA_RelativePathElement * UA_RelativePathElement_new(void) { return (UA_RelativePathElement*) UA_new(&UA_TYPES[UA_TYPES_RELATIVEPATHELEMENT]); }
static UA_INLINE UA_StatusCode UA_RelativePathElement_copy(const UA_RelativePathElement *src, UA_RelativePathElement *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_RELATIVEPATHELEMENT]); }
static UA_INLINE void UA_RelativePathElement_deleteMembers(UA_RelativePathElement *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_RELATIVEPATHELEMENT]); }
static UA_INLINE void UA_RelativePathElement_delete(UA_RelativePathElement *p) { UA_delete(p, &UA_TYPES[UA_TYPES_RELATIVEPATHELEMENT]); }

/**
 * BrowseDirection
 * ---------------
 * The directions of the references to return. */
typedef enum { 
    UA_BROWSEDIRECTION_FORWARD = 0,
    UA_BROWSEDIRECTION_INVERSE = 1,
    UA_BROWSEDIRECTION_BOTH = 2
} UA_BrowseDirection;

#define UA_TYPES_BROWSEDIRECTION 40
static UA_INLINE void UA_BrowseDirection_init(UA_BrowseDirection *p) { memset(p, 0, sizeof(UA_BrowseDirection)); }
static UA_INLINE UA_BrowseDirection * UA_BrowseDirection_new(void) { return (UA_BrowseDirection*) UA_new(&UA_TYPES[UA_TYPES_BROWSEDIRECTION]); }
static UA_INLINE UA_StatusCode UA_BrowseDirection_copy(const UA_BrowseDirection *src, UA_BrowseDirection *dst) { *dst = *src; return UA_STATUSCODE_GOOD; }
static UA_INLINE void UA_BrowseDirection_deleteMembers(UA_BrowseDirection *p) { }
static UA_INLINE void UA_BrowseDirection_delete(UA_BrowseDirection *p) { UA_delete(p, &UA_TYPES[UA_TYPES_BROWSEDIRECTION]); }

/**
 * CallMethodRequest
 * -----------------
 */
typedef struct {
    UA_NodeId objectId;
    UA_NodeId methodId;
    size_t inputArgumentsSize;
    UA_Variant *inputArguments;
} UA_CallMethodRequest;

#define UA_TYPES_CALLMETHODREQUEST 41
static UA_INLINE void UA_CallMethodRequest_init(UA_CallMethodRequest *p) { memset(p, 0, sizeof(UA_CallMethodRequest)); }
static UA_INLINE UA_CallMethodRequest * UA_CallMethodRequest_new(void) { return (UA_CallMethodRequest*) UA_new(&UA_TYPES[UA_TYPES_CALLMETHODREQUEST]); }
static UA_INLINE UA_StatusCode UA_CallMethodRequest_copy(const UA_CallMethodRequest *src, UA_CallMethodRequest *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_CALLMETHODREQUEST]); }
static UA_INLINE void UA_CallMethodRequest_deleteMembers(UA_CallMethodRequest *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_CALLMETHODREQUEST]); }
static UA_INLINE void UA_CallMethodRequest_delete(UA_CallMethodRequest *p) { UA_delete(p, &UA_TYPES[UA_TYPES_CALLMETHODREQUEST]); }

/**
 * ServerState
 * -----------
 */
typedef enum { 
    UA_SERVERSTATE_RUNNING = 0,
    UA_SERVERSTATE_FAILED = 1,
    UA_SERVERSTATE_NOCONFIGURATION = 2,
    UA_SERVERSTATE_SUSPENDED = 3,
    UA_SERVERSTATE_SHUTDOWN = 4,
    UA_SERVERSTATE_TEST = 5,
    UA_SERVERSTATE_COMMUNICATIONFAULT = 6,
    UA_SERVERSTATE_UNKNOWN = 7
} UA_ServerState;

#define UA_TYPES_SERVERSTATE 42
static UA_INLINE void UA_ServerState_init(UA_ServerState *p) { memset(p, 0, sizeof(UA_ServerState)); }
static UA_INLINE UA_ServerState * UA_ServerState_new(void) { return (UA_ServerState*) UA_new(&UA_TYPES[UA_TYPES_SERVERSTATE]); }
static UA_INLINE UA_StatusCode UA_ServerState_copy(const UA_ServerState *src, UA_ServerState *dst) { *dst = *src; return UA_STATUSCODE_GOOD; }
static UA_INLINE void UA_ServerState_deleteMembers(UA_ServerState *p) { }
static UA_INLINE void UA_ServerState_delete(UA_ServerState *p) { UA_delete(p, &UA_TYPES[UA_TYPES_SERVERSTATE]); }

/**
 * UnregisterNodesRequest
 * ----------------------
 * Unregisters one or more previously registered nodes. */
typedef struct {
    UA_RequestHeader requestHeader;
    size_t nodesToUnregisterSize;
    UA_NodeId *nodesToUnregister;
} UA_UnregisterNodesRequest;

#define UA_TYPES_UNREGISTERNODESREQUEST 43
static UA_INLINE void UA_UnregisterNodesRequest_init(UA_UnregisterNodesRequest *p) { memset(p, 0, sizeof(UA_UnregisterNodesRequest)); }
static UA_INLINE UA_UnregisterNodesRequest * UA_UnregisterNodesRequest_new(void) { return (UA_UnregisterNodesRequest*) UA_new(&UA_TYPES[UA_TYPES_UNREGISTERNODESREQUEST]); }
static UA_INLINE UA_StatusCode UA_UnregisterNodesRequest_copy(const UA_UnregisterNodesRequest *src, UA_UnregisterNodesRequest *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_UNREGISTERNODESREQUEST]); }
static UA_INLINE void UA_UnregisterNodesRequest_deleteMembers(UA_UnregisterNodesRequest *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_UNREGISTERNODESREQUEST]); }
static UA_INLINE void UA_UnregisterNodesRequest_delete(UA_UnregisterNodesRequest *p) { UA_delete(p, &UA_TYPES[UA_TYPES_UNREGISTERNODESREQUEST]); }

/**
 * ContentFilterElementResult
 * --------------------------
 */
typedef struct {
    UA_StatusCode statusCode;
    size_t operandStatusCodesSize;
    UA_StatusCode *operandStatusCodes;
    size_t operandDiagnosticInfosSize;
    UA_DiagnosticInfo *operandDiagnosticInfos;
} UA_ContentFilterElementResult;

#define UA_TYPES_CONTENTFILTERELEMENTRESULT 44
static UA_INLINE void UA_ContentFilterElementResult_init(UA_ContentFilterElementResult *p) { memset(p, 0, sizeof(UA_ContentFilterElementResult)); }
static UA_INLINE UA_ContentFilterElementResult * UA_ContentFilterElementResult_new(void) { return (UA_ContentFilterElementResult*) UA_new(&UA_TYPES[UA_TYPES_CONTENTFILTERELEMENTRESULT]); }
static UA_INLINE UA_StatusCode UA_ContentFilterElementResult_copy(const UA_ContentFilterElementResult *src, UA_ContentFilterElementResult *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_CONTENTFILTERELEMENTRESULT]); }
static UA_INLINE void UA_ContentFilterElementResult_deleteMembers(UA_ContentFilterElementResult *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_CONTENTFILTERELEMENTRESULT]); }
static UA_INLINE void UA_ContentFilterElementResult_delete(UA_ContentFilterElementResult *p) { UA_delete(p, &UA_TYPES[UA_TYPES_CONTENTFILTERELEMENTRESULT]); }

/**
 * QueryDataSet
 * ------------
 */
typedef struct {
    UA_ExpandedNodeId nodeId;
    UA_ExpandedNodeId typeDefinitionNode;
    size_t valuesSize;
    UA_Variant *values;
} UA_QueryDataSet;

#define UA_TYPES_QUERYDATASET 45
static UA_INLINE void UA_QueryDataSet_init(UA_QueryDataSet *p) { memset(p, 0, sizeof(UA_QueryDataSet)); }
static UA_INLINE UA_QueryDataSet * UA_QueryDataSet_new(void) { return (UA_QueryDataSet*) UA_new(&UA_TYPES[UA_TYPES_QUERYDATASET]); }
static UA_INLINE UA_StatusCode UA_QueryDataSet_copy(const UA_QueryDataSet *src, UA_QueryDataSet *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_QUERYDATASET]); }
static UA_INLINE void UA_QueryDataSet_deleteMembers(UA_QueryDataSet *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_QUERYDATASET]); }
static UA_INLINE void UA_QueryDataSet_delete(UA_QueryDataSet *p) { UA_delete(p, &UA_TYPES[UA_TYPES_QUERYDATASET]); }

/**
 * SetPublishingModeRequest
 * ------------------------
 */
typedef struct {
    UA_RequestHeader requestHeader;
    UA_Boolean publishingEnabled;
    size_t subscriptionIdsSize;
    UA_UInt32 *subscriptionIds;
} UA_SetPublishingModeRequest;

#define UA_TYPES_SETPUBLISHINGMODEREQUEST 46
static UA_INLINE void UA_SetPublishingModeRequest_init(UA_SetPublishingModeRequest *p) { memset(p, 0, sizeof(UA_SetPublishingModeRequest)); }
static UA_INLINE UA_SetPublishingModeRequest * UA_SetPublishingModeRequest_new(void) { return (UA_SetPublishingModeRequest*) UA_new(&UA_TYPES[UA_TYPES_SETPUBLISHINGMODEREQUEST]); }
static UA_INLINE UA_StatusCode UA_SetPublishingModeRequest_copy(const UA_SetPublishingModeRequest *src, UA_SetPublishingModeRequest *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_SETPUBLISHINGMODEREQUEST]); }
static UA_INLINE void UA_SetPublishingModeRequest_deleteMembers(UA_SetPublishingModeRequest *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_SETPUBLISHINGMODEREQUEST]); }
static UA_INLINE void UA_SetPublishingModeRequest_delete(UA_SetPublishingModeRequest *p) { UA_delete(p, &UA_TYPES[UA_TYPES_SETPUBLISHINGMODEREQUEST]); }

/**
 * TimestampsToReturn
 * ------------------
 */
typedef enum { 
    UA_TIMESTAMPSTORETURN_SOURCE = 0,
    UA_TIMESTAMPSTORETURN_SERVER = 1,
    UA_TIMESTAMPSTORETURN_BOTH = 2,
    UA_TIMESTAMPSTORETURN_NEITHER = 3
} UA_TimestampsToReturn;

#define UA_TYPES_TIMESTAMPSTORETURN 47
static UA_INLINE void UA_TimestampsToReturn_init(UA_TimestampsToReturn *p) { memset(p, 0, sizeof(UA_TimestampsToReturn)); }
static UA_INLINE UA_TimestampsToReturn * UA_TimestampsToReturn_new(void) { return (UA_TimestampsToReturn*) UA_new(&UA_TYPES[UA_TYPES_TIMESTAMPSTORETURN]); }
static UA_INLINE UA_StatusCode UA_TimestampsToReturn_copy(const UA_TimestampsToReturn *src, UA_TimestampsToReturn *dst) { *dst = *src; return UA_STATUSCODE_GOOD; }
static UA_INLINE void UA_TimestampsToReturn_deleteMembers(UA_TimestampsToReturn *p) { }
static UA_INLINE void UA_TimestampsToReturn_delete(UA_TimestampsToReturn *p) { UA_delete(p, &UA_TYPES[UA_TYPES_TIMESTAMPSTORETURN]); }

/**
 * CallRequest
 * -----------
 */
typedef struct {
    UA_RequestHeader requestHeader;
    size_t methodsToCallSize;
    UA_CallMethodRequest *methodsToCall;
} UA_CallRequest;

#define UA_TYPES_CALLREQUEST 48
static UA_INLINE void UA_CallRequest_init(UA_CallRequest *p) { memset(p, 0, sizeof(UA_CallRequest)); }
static UA_INLINE UA_CallRequest * UA_CallRequest_new(void) { return (UA_CallRequest*) UA_new(&UA_TYPES[UA_TYPES_CALLREQUEST]); }
static UA_INLINE UA_StatusCode UA_CallRequest_copy(const UA_CallRequest *src, UA_CallRequest *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_CALLREQUEST]); }
static UA_INLINE void UA_CallRequest_deleteMembers(UA_CallRequest *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_CALLREQUEST]); }
static UA_INLINE void UA_CallRequest_delete(UA_CallRequest *p) { UA_delete(p, &UA_TYPES[UA_TYPES_CALLREQUEST]); }

/**
 * MethodAttributes
 * ----------------
 * The attributes for a method node. */
typedef struct {
    UA_UInt32 specifiedAttributes;
    UA_LocalizedText displayName;
    UA_LocalizedText description;
    UA_UInt32 writeMask;
    UA_UInt32 userWriteMask;
    UA_Boolean executable;
    UA_Boolean userExecutable;
} UA_MethodAttributes;

#define UA_TYPES_METHODATTRIBUTES 49
static UA_INLINE void UA_MethodAttributes_init(UA_MethodAttributes *p) { memset(p, 0, sizeof(UA_MethodAttributes)); }
static UA_INLINE UA_MethodAttributes * UA_MethodAttributes_new(void) { return (UA_MethodAttributes*) UA_new(&UA_TYPES[UA_TYPES_METHODATTRIBUTES]); }
static UA_INLINE UA_StatusCode UA_MethodAttributes_copy(const UA_MethodAttributes *src, UA_MethodAttributes *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_METHODATTRIBUTES]); }
static UA_INLINE void UA_MethodAttributes_deleteMembers(UA_MethodAttributes *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_METHODATTRIBUTES]); }
static UA_INLINE void UA_MethodAttributes_delete(UA_MethodAttributes *p) { UA_delete(p, &UA_TYPES[UA_TYPES_METHODATTRIBUTES]); }

/**
 * DeleteReferencesItem
 * --------------------
 * A request to delete a node from the server address space. */
typedef struct {
    UA_NodeId sourceNodeId;
    UA_NodeId referenceTypeId;
    UA_Boolean isForward;
    UA_ExpandedNodeId targetNodeId;
    UA_Boolean deleteBidirectional;
} UA_DeleteReferencesItem;

#define UA_TYPES_DELETEREFERENCESITEM 50
static UA_INLINE void UA_DeleteReferencesItem_init(UA_DeleteReferencesItem *p) { memset(p, 0, sizeof(UA_DeleteReferencesItem)); }
static UA_INLINE UA_DeleteReferencesItem * UA_DeleteReferencesItem_new(void) { return (UA_DeleteReferencesItem*) UA_new(&UA_TYPES[UA_TYPES_DELETEREFERENCESITEM]); }
static UA_INLINE UA_StatusCode UA_DeleteReferencesItem_copy(const UA_DeleteReferencesItem *src, UA_DeleteReferencesItem *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_DELETEREFERENCESITEM]); }
static UA_INLINE void UA_DeleteReferencesItem_deleteMembers(UA_DeleteReferencesItem *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_DELETEREFERENCESITEM]); }
static UA_INLINE void UA_DeleteReferencesItem_delete(UA_DeleteReferencesItem *p) { UA_delete(p, &UA_TYPES[UA_TYPES_DELETEREFERENCESITEM]); }

/**
 * WriteValue
 * ----------
 */
typedef struct {
    UA_NodeId nodeId;
    UA_UInt32 attributeId;
    UA_String indexRange;
    UA_DataValue value;
} UA_WriteValue;

#define UA_TYPES_WRITEVALUE 51
static UA_INLINE void UA_WriteValue_init(UA_WriteValue *p) { memset(p, 0, sizeof(UA_WriteValue)); }
static UA_INLINE UA_WriteValue * UA_WriteValue_new(void) { return (UA_WriteValue*) UA_new(&UA_TYPES[UA_TYPES_WRITEVALUE]); }
static UA_INLINE UA_StatusCode UA_WriteValue_copy(const UA_WriteValue *src, UA_WriteValue *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_WRITEVALUE]); }
static UA_INLINE void UA_WriteValue_deleteMembers(UA_WriteValue *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_WRITEVALUE]); }
static UA_INLINE void UA_WriteValue_delete(UA_WriteValue *p) { UA_delete(p, &UA_TYPES[UA_TYPES_WRITEVALUE]); }

/**
 * MonitoredItemCreateResult
 * -------------------------
 */
typedef struct {
    UA_StatusCode statusCode;
    UA_UInt32 monitoredItemId;
    UA_Double revisedSamplingInterval;
    UA_UInt32 revisedQueueSize;
    UA_ExtensionObject filterResult;
} UA_MonitoredItemCreateResult;

#define UA_TYPES_MONITOREDITEMCREATERESULT 52
static UA_INLINE void UA_MonitoredItemCreateResult_init(UA_MonitoredItemCreateResult *p) { memset(p, 0, sizeof(UA_MonitoredItemCreateResult)); }
static UA_INLINE UA_MonitoredItemCreateResult * UA_MonitoredItemCreateResult_new(void) { return (UA_MonitoredItemCreateResult*) UA_new(&UA_TYPES[UA_TYPES_MONITOREDITEMCREATERESULT]); }
static UA_INLINE UA_StatusCode UA_MonitoredItemCreateResult_copy(const UA_MonitoredItemCreateResult *src, UA_MonitoredItemCreateResult *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_MONITOREDITEMCREATERESULT]); }
static UA_INLINE void UA_MonitoredItemCreateResult_deleteMembers(UA_MonitoredItemCreateResult *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_MONITOREDITEMCREATERESULT]); }
static UA_INLINE void UA_MonitoredItemCreateResult_delete(UA_MonitoredItemCreateResult *p) { UA_delete(p, &UA_TYPES[UA_TYPES_MONITOREDITEMCREATERESULT]); }

/**
 * MessageSecurityMode
 * -------------------
 * The type of security to use on a message. */
typedef enum { 
    UA_MESSAGESECURITYMODE_INVALID = 0,
    UA_MESSAGESECURITYMODE_NONE = 1,
    UA_MESSAGESECURITYMODE_SIGN = 2,
    UA_MESSAGESECURITYMODE_SIGNANDENCRYPT = 3
} UA_MessageSecurityMode;

#define UA_TYPES_MESSAGESECURITYMODE 53
static UA_INLINE void UA_MessageSecurityMode_init(UA_MessageSecurityMode *p) { memset(p, 0, sizeof(UA_MessageSecurityMode)); }
static UA_INLINE UA_MessageSecurityMode * UA_MessageSecurityMode_new(void) { return (UA_MessageSecurityMode*) UA_new(&UA_TYPES[UA_TYPES_MESSAGESECURITYMODE]); }
static UA_INLINE UA_StatusCode UA_MessageSecurityMode_copy(const UA_MessageSecurityMode *src, UA_MessageSecurityMode *dst) { *dst = *src; return UA_STATUSCODE_GOOD; }
static UA_INLINE void UA_MessageSecurityMode_deleteMembers(UA_MessageSecurityMode *p) { }
static UA_INLINE void UA_MessageSecurityMode_delete(UA_MessageSecurityMode *p) { UA_delete(p, &UA_TYPES[UA_TYPES_MESSAGESECURITYMODE]); }

/**
 * MonitoringParameters
 * --------------------
 */
typedef struct {
    UA_UInt32 clientHandle;
    UA_Double samplingInterval;
    UA_ExtensionObject filter;
    UA_UInt32 queueSize;
    UA_Boolean discardOldest;
} UA_MonitoringParameters;

#define UA_TYPES_MONITORINGPARAMETERS 54
static UA_INLINE void UA_MonitoringParameters_init(UA_MonitoringParameters *p) { memset(p, 0, sizeof(UA_MonitoringParameters)); }
static UA_INLINE UA_MonitoringParameters * UA_MonitoringParameters_new(void) { return (UA_MonitoringParameters*) UA_new(&UA_TYPES[UA_TYPES_MONITORINGPARAMETERS]); }
static UA_INLINE UA_StatusCode UA_MonitoringParameters_copy(const UA_MonitoringParameters *src, UA_MonitoringParameters *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_MONITORINGPARAMETERS]); }
static UA_INLINE void UA_MonitoringParameters_deleteMembers(UA_MonitoringParameters *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_MONITORINGPARAMETERS]); }
static UA_INLINE void UA_MonitoringParameters_delete(UA_MonitoringParameters *p) { UA_delete(p, &UA_TYPES[UA_TYPES_MONITORINGPARAMETERS]); }

/**
 * SignatureData
 * -------------
 * A digital signature. */
typedef struct {
    UA_String algorithm;
    UA_ByteString signature;
} UA_SignatureData;

#define UA_TYPES_SIGNATUREDATA 55
static UA_INLINE void UA_SignatureData_init(UA_SignatureData *p) { memset(p, 0, sizeof(UA_SignatureData)); }
static UA_INLINE UA_SignatureData * UA_SignatureData_new(void) { return (UA_SignatureData*) UA_new(&UA_TYPES[UA_TYPES_SIGNATUREDATA]); }
static UA_INLINE UA_StatusCode UA_SignatureData_copy(const UA_SignatureData *src, UA_SignatureData *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_SIGNATUREDATA]); }
static UA_INLINE void UA_SignatureData_deleteMembers(UA_SignatureData *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_SIGNATUREDATA]); }
static UA_INLINE void UA_SignatureData_delete(UA_SignatureData *p) { UA_delete(p, &UA_TYPES[UA_TYPES_SIGNATUREDATA]); }

/**
 * ReferenceNode
 * -------------
 * Specifies a reference which belongs to a node. */
typedef struct {
    UA_NodeId referenceTypeId;
    UA_Boolean isInverse;
    UA_ExpandedNodeId targetId;
} UA_ReferenceNode;

#define UA_TYPES_REFERENCENODE 56
static UA_INLINE void UA_ReferenceNode_init(UA_ReferenceNode *p) { memset(p, 0, sizeof(UA_ReferenceNode)); }
static UA_INLINE UA_ReferenceNode * UA_ReferenceNode_new(void) { return (UA_ReferenceNode*) UA_new(&UA_TYPES[UA_TYPES_REFERENCENODE]); }
static UA_INLINE UA_StatusCode UA_ReferenceNode_copy(const UA_ReferenceNode *src, UA_ReferenceNode *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_REFERENCENODE]); }
static UA_INLINE void UA_ReferenceNode_deleteMembers(UA_ReferenceNode *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_REFERENCENODE]); }
static UA_INLINE void UA_ReferenceNode_delete(UA_ReferenceNode *p) { UA_delete(p, &UA_TYPES[UA_TYPES_REFERENCENODE]); }

/**
 * Argument
 * --------
 * An argument for a method. */
typedef struct {
    UA_String name;
    UA_NodeId dataType;
    UA_Int32 valueRank;
    size_t arrayDimensionsSize;
    UA_UInt32 *arrayDimensions;
    UA_LocalizedText description;
} UA_Argument;

#define UA_TYPES_ARGUMENT 57
static UA_INLINE void UA_Argument_init(UA_Argument *p) { memset(p, 0, sizeof(UA_Argument)); }
static UA_INLINE UA_Argument * UA_Argument_new(void) { return (UA_Argument*) UA_new(&UA_TYPES[UA_TYPES_ARGUMENT]); }
static UA_INLINE UA_StatusCode UA_Argument_copy(const UA_Argument *src, UA_Argument *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_ARGUMENT]); }
static UA_INLINE void UA_Argument_deleteMembers(UA_Argument *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_ARGUMENT]); }
static UA_INLINE void UA_Argument_delete(UA_Argument *p) { UA_delete(p, &UA_TYPES[UA_TYPES_ARGUMENT]); }

/**
 * UserIdentityToken
 * -----------------
 * A base type for a user identity token. */
typedef struct {
    UA_String policyId;
} UA_UserIdentityToken;

#define UA_TYPES_USERIDENTITYTOKEN 58
static UA_INLINE void UA_UserIdentityToken_init(UA_UserIdentityToken *p) { memset(p, 0, sizeof(UA_UserIdentityToken)); }
static UA_INLINE UA_UserIdentityToken * UA_UserIdentityToken_new(void) { return (UA_UserIdentityToken*) UA_new(&UA_TYPES[UA_TYPES_USERIDENTITYTOKEN]); }
static UA_INLINE UA_StatusCode UA_UserIdentityToken_copy(const UA_UserIdentityToken *src, UA_UserIdentityToken *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_USERIDENTITYTOKEN]); }
static UA_INLINE void UA_UserIdentityToken_deleteMembers(UA_UserIdentityToken *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_USERIDENTITYTOKEN]); }
static UA_INLINE void UA_UserIdentityToken_delete(UA_UserIdentityToken *p) { UA_delete(p, &UA_TYPES[UA_TYPES_USERIDENTITYTOKEN]); }

/**
 * ObjectTypeAttributes
 * --------------------
 * The attributes for an object type node. */
typedef struct {
    UA_UInt32 specifiedAttributes;
    UA_LocalizedText displayName;
    UA_LocalizedText description;
    UA_UInt32 writeMask;
    UA_UInt32 userWriteMask;
    UA_Boolean isAbstract;
} UA_ObjectTypeAttributes;

#define UA_TYPES_OBJECTTYPEATTRIBUTES 59
static UA_INLINE void UA_ObjectTypeAttributes_init(UA_ObjectTypeAttributes *p) { memset(p, 0, sizeof(UA_ObjectTypeAttributes)); }
static UA_INLINE UA_ObjectTypeAttributes * UA_ObjectTypeAttributes_new(void) { return (UA_ObjectTypeAttributes*) UA_new(&UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES]); }
static UA_INLINE UA_StatusCode UA_ObjectTypeAttributes_copy(const UA_ObjectTypeAttributes *src, UA_ObjectTypeAttributes *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES]); }
static UA_INLINE void UA_ObjectTypeAttributes_deleteMembers(UA_ObjectTypeAttributes *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES]); }
static UA_INLINE void UA_ObjectTypeAttributes_delete(UA_ObjectTypeAttributes *p) { UA_delete(p, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES]); }

/**
 * SecurityTokenRequestType
 * ------------------------
 * Indicates whether a token if being created or renewed. */
typedef enum { 
    UA_SECURITYTOKENREQUESTTYPE_ISSUE = 0,
    UA_SECURITYTOKENREQUESTTYPE_RENEW = 1
} UA_SecurityTokenRequestType;

#define UA_TYPES_SECURITYTOKENREQUESTTYPE 60
static UA_INLINE void UA_SecurityTokenRequestType_init(UA_SecurityTokenRequestType *p) { memset(p, 0, sizeof(UA_SecurityTokenRequestType)); }
static UA_INLINE UA_SecurityTokenRequestType * UA_SecurityTokenRequestType_new(void) { return (UA_SecurityTokenRequestType*) UA_new(&UA_TYPES[UA_TYPES_SECURITYTOKENREQUESTTYPE]); }
static UA_INLINE UA_StatusCode UA_SecurityTokenRequestType_copy(const UA_SecurityTokenRequestType *src, UA_SecurityTokenRequestType *dst) { *dst = *src; return UA_STATUSCODE_GOOD; }
static UA_INLINE void UA_SecurityTokenRequestType_deleteMembers(UA_SecurityTokenRequestType *p) { }
static UA_INLINE void UA_SecurityTokenRequestType_delete(UA_SecurityTokenRequestType *p) { UA_delete(p, &UA_TYPES[UA_TYPES_SECURITYTOKENREQUESTTYPE]); }

/**
 * BuildInfo
 * ---------
 */
typedef struct {
    UA_String productUri;
    UA_String manufacturerName;
    UA_String productName;
    UA_String softwareVersion;
    UA_String buildNumber;
    UA_DateTime buildDate;
} UA_BuildInfo;

#define UA_TYPES_BUILDINFO 61
static UA_INLINE void UA_BuildInfo_init(UA_BuildInfo *p) { memset(p, 0, sizeof(UA_BuildInfo)); }
static UA_INLINE UA_BuildInfo * UA_BuildInfo_new(void) { return (UA_BuildInfo*) UA_new(&UA_TYPES[UA_TYPES_BUILDINFO]); }
static UA_INLINE UA_StatusCode UA_BuildInfo_copy(const UA_BuildInfo *src, UA_BuildInfo *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_BUILDINFO]); }
static UA_INLINE void UA_BuildInfo_deleteMembers(UA_BuildInfo *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_BUILDINFO]); }
static UA_INLINE void UA_BuildInfo_delete(UA_BuildInfo *p) { UA_delete(p, &UA_TYPES[UA_TYPES_BUILDINFO]); }

/**
 * NodeClass
 * ---------
 * A mask specifying the class of the node. */
typedef enum { 
    UA_NODECLASS_UNSPECIFIED = 0,
    UA_NODECLASS_OBJECT = 1,
    UA_NODECLASS_VARIABLE = 2,
    UA_NODECLASS_METHOD = 4,
    UA_NODECLASS_OBJECTTYPE = 8,
    UA_NODECLASS_VARIABLETYPE = 16,
    UA_NODECLASS_REFERENCETYPE = 32,
    UA_NODECLASS_DATATYPE = 64,
    UA_NODECLASS_VIEW = 128
} UA_NodeClass;

#define UA_TYPES_NODECLASS 62
static UA_INLINE void UA_NodeClass_init(UA_NodeClass *p) { memset(p, 0, sizeof(UA_NodeClass)); }
static UA_INLINE UA_NodeClass * UA_NodeClass_new(void) { return (UA_NodeClass*) UA_new(&UA_TYPES[UA_TYPES_NODECLASS]); }
static UA_INLINE UA_StatusCode UA_NodeClass_copy(const UA_NodeClass *src, UA_NodeClass *dst) { *dst = *src; return UA_STATUSCODE_GOOD; }
static UA_INLINE void UA_NodeClass_deleteMembers(UA_NodeClass *p) { }
static UA_INLINE void UA_NodeClass_delete(UA_NodeClass *p) { UA_delete(p, &UA_TYPES[UA_TYPES_NODECLASS]); }

/**
 * ChannelSecurityToken
 * --------------------
 * The token that identifies a set of keys for an active secure channel. */
typedef struct {
    UA_UInt32 channelId;
    UA_UInt32 tokenId;
    UA_DateTime createdAt;
    UA_UInt32 revisedLifetime;
} UA_ChannelSecurityToken;

#define UA_TYPES_CHANNELSECURITYTOKEN 63
static UA_INLINE void UA_ChannelSecurityToken_init(UA_ChannelSecurityToken *p) { memset(p, 0, sizeof(UA_ChannelSecurityToken)); }
static UA_INLINE UA_ChannelSecurityToken * UA_ChannelSecurityToken_new(void) { return (UA_ChannelSecurityToken*) UA_new(&UA_TYPES[UA_TYPES_CHANNELSECURITYTOKEN]); }
static UA_INLINE UA_StatusCode UA_ChannelSecurityToken_copy(const UA_ChannelSecurityToken *src, UA_ChannelSecurityToken *dst) { *dst = *src; return UA_STATUSCODE_GOOD; }
static UA_INLINE void UA_ChannelSecurityToken_deleteMembers(UA_ChannelSecurityToken *p) { }
static UA_INLINE void UA_ChannelSecurityToken_delete(UA_ChannelSecurityToken *p) { UA_delete(p, &UA_TYPES[UA_TYPES_CHANNELSECURITYTOKEN]); }

/**
 * MonitoredItemNotification
 * -------------------------
 */
typedef struct {
    UA_UInt32 clientHandle;
    UA_DataValue value;
} UA_MonitoredItemNotification;

#define UA_TYPES_MONITOREDITEMNOTIFICATION 64
static UA_INLINE void UA_MonitoredItemNotification_init(UA_MonitoredItemNotification *p) { memset(p, 0, sizeof(UA_MonitoredItemNotification)); }
static UA_INLINE UA_MonitoredItemNotification * UA_MonitoredItemNotification_new(void) { return (UA_MonitoredItemNotification*) UA_new(&UA_TYPES[UA_TYPES_MONITOREDITEMNOTIFICATION]); }
static UA_INLINE UA_StatusCode UA_MonitoredItemNotification_copy(const UA_MonitoredItemNotification *src, UA_MonitoredItemNotification *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_MONITOREDITEMNOTIFICATION]); }
static UA_INLINE void UA_MonitoredItemNotification_deleteMembers(UA_MonitoredItemNotification *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_MONITOREDITEMNOTIFICATION]); }
static UA_INLINE void UA_MonitoredItemNotification_delete(UA_MonitoredItemNotification *p) { UA_delete(p, &UA_TYPES[UA_TYPES_MONITOREDITEMNOTIFICATION]); }

/**
 * DeleteNodesItem
 * ---------------
 * A request to delete a node to the server address space. */
typedef struct {
    UA_NodeId nodeId;
    UA_Boolean deleteTargetReferences;
} UA_DeleteNodesItem;

#define UA_TYPES_DELETENODESITEM 65
static UA_INLINE void UA_DeleteNodesItem_init(UA_DeleteNodesItem *p) { memset(p, 0, sizeof(UA_DeleteNodesItem)); }
static UA_INLINE UA_DeleteNodesItem * UA_DeleteNodesItem_new(void) { return (UA_DeleteNodesItem*) UA_new(&UA_TYPES[UA_TYPES_DELETENODESITEM]); }
static UA_INLINE UA_StatusCode UA_DeleteNodesItem_copy(const UA_DeleteNodesItem *src, UA_DeleteNodesItem *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_DELETENODESITEM]); }
static UA_INLINE void UA_DeleteNodesItem_deleteMembers(UA_DeleteNodesItem *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_DELETENODESITEM]); }
static UA_INLINE void UA_DeleteNodesItem_delete(UA_DeleteNodesItem *p) { UA_delete(p, &UA_TYPES[UA_TYPES_DELETENODESITEM]); }

/**
 * SubscriptionAcknowledgement
 * ---------------------------
 */
typedef struct {
    UA_UInt32 subscriptionId;
    UA_UInt32 sequenceNumber;
} UA_SubscriptionAcknowledgement;

#define UA_TYPES_SUBSCRIPTIONACKNOWLEDGEMENT 66
static UA_INLINE void UA_SubscriptionAcknowledgement_init(UA_SubscriptionAcknowledgement *p) { memset(p, 0, sizeof(UA_SubscriptionAcknowledgement)); }
static UA_INLINE UA_SubscriptionAcknowledgement * UA_SubscriptionAcknowledgement_new(void) { return (UA_SubscriptionAcknowledgement*) UA_new(&UA_TYPES[UA_TYPES_SUBSCRIPTIONACKNOWLEDGEMENT]); }
static UA_INLINE UA_StatusCode UA_SubscriptionAcknowledgement_copy(const UA_SubscriptionAcknowledgement *src, UA_SubscriptionAcknowledgement *dst) { *dst = *src; return UA_STATUSCODE_GOOD; }
static UA_INLINE void UA_SubscriptionAcknowledgement_deleteMembers(UA_SubscriptionAcknowledgement *p) { }
static UA_INLINE void UA_SubscriptionAcknowledgement_delete(UA_SubscriptionAcknowledgement *p) { UA_delete(p, &UA_TYPES[UA_TYPES_SUBSCRIPTIONACKNOWLEDGEMENT]); }

/**
 * ReadValueId
 * -----------
 */
typedef struct {
    UA_NodeId nodeId;
    UA_UInt32 attributeId;
    UA_String indexRange;
    UA_QualifiedName dataEncoding;
} UA_ReadValueId;

#define UA_TYPES_READVALUEID 67
static UA_INLINE void UA_ReadValueId_init(UA_ReadValueId *p) { memset(p, 0, sizeof(UA_ReadValueId)); }
static UA_INLINE UA_ReadValueId * UA_ReadValueId_new(void) { return (UA_ReadValueId*) UA_new(&UA_TYPES[UA_TYPES_READVALUEID]); }
static UA_INLINE UA_StatusCode UA_ReadValueId_copy(const UA_ReadValueId *src, UA_ReadValueId *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_READVALUEID]); }
static UA_INLINE void UA_ReadValueId_deleteMembers(UA_ReadValueId *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_READVALUEID]); }
static UA_INLINE void UA_ReadValueId_delete(UA_ReadValueId *p) { UA_delete(p, &UA_TYPES[UA_TYPES_READVALUEID]); }

/**
 * AnonymousIdentityToken
 * ----------------------
 * A token representing an anonymous user. */
typedef struct {
    UA_String policyId;
} UA_AnonymousIdentityToken;

#define UA_TYPES_ANONYMOUSIDENTITYTOKEN 68
static UA_INLINE void UA_AnonymousIdentityToken_init(UA_AnonymousIdentityToken *p) { memset(p, 0, sizeof(UA_AnonymousIdentityToken)); }
static UA_INLINE UA_AnonymousIdentityToken * UA_AnonymousIdentityToken_new(void) { return (UA_AnonymousIdentityToken*) UA_new(&UA_TYPES[UA_TYPES_ANONYMOUSIDENTITYTOKEN]); }
static UA_INLINE UA_StatusCode UA_AnonymousIdentityToken_copy(const UA_AnonymousIdentityToken *src, UA_AnonymousIdentityToken *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_ANONYMOUSIDENTITYTOKEN]); }
static UA_INLINE void UA_AnonymousIdentityToken_deleteMembers(UA_AnonymousIdentityToken *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_ANONYMOUSIDENTITYTOKEN]); }
static UA_INLINE void UA_AnonymousIdentityToken_delete(UA_AnonymousIdentityToken *p) { UA_delete(p, &UA_TYPES[UA_TYPES_ANONYMOUSIDENTITYTOKEN]); }

/**
 * DataTypeAttributes
 * ------------------
 * The attributes for a data type node. */
typedef struct {
    UA_UInt32 specifiedAttributes;
    UA_LocalizedText displayName;
    UA_LocalizedText description;
    UA_UInt32 writeMask;
    UA_UInt32 userWriteMask;
    UA_Boolean isAbstract;
} UA_DataTypeAttributes;

#define UA_TYPES_DATATYPEATTRIBUTES 69
static UA_INLINE void UA_DataTypeAttributes_init(UA_DataTypeAttributes *p) { memset(p, 0, sizeof(UA_DataTypeAttributes)); }
static UA_INLINE UA_DataTypeAttributes * UA_DataTypeAttributes_new(void) { return (UA_DataTypeAttributes*) UA_new(&UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES]); }
static UA_INLINE UA_StatusCode UA_DataTypeAttributes_copy(const UA_DataTypeAttributes *src, UA_DataTypeAttributes *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES]); }
static UA_INLINE void UA_DataTypeAttributes_deleteMembers(UA_DataTypeAttributes *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES]); }
static UA_INLINE void UA_DataTypeAttributes_delete(UA_DataTypeAttributes *p) { UA_delete(p, &UA_TYPES[UA_TYPES_DATATYPEATTRIBUTES]); }

/**
 * ResponseHeader
 * --------------
 * The header passed with every server response. */
typedef struct {
    UA_DateTime timestamp;
    UA_UInt32 requestHandle;
    UA_StatusCode serviceResult;
    UA_DiagnosticInfo serviceDiagnostics;
    size_t stringTableSize;
    UA_String *stringTable;
    UA_ExtensionObject additionalHeader;
} UA_ResponseHeader;

#define UA_TYPES_RESPONSEHEADER 70
static UA_INLINE void UA_ResponseHeader_init(UA_ResponseHeader *p) { memset(p, 0, sizeof(UA_ResponseHeader)); }
static UA_INLINE UA_ResponseHeader * UA_ResponseHeader_new(void) { return (UA_ResponseHeader*) UA_new(&UA_TYPES[UA_TYPES_RESPONSEHEADER]); }
static UA_INLINE UA_StatusCode UA_ResponseHeader_copy(const UA_ResponseHeader *src, UA_ResponseHeader *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_RESPONSEHEADER]); }
static UA_INLINE void UA_ResponseHeader_deleteMembers(UA_ResponseHeader *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_RESPONSEHEADER]); }
static UA_INLINE void UA_ResponseHeader_delete(UA_ResponseHeader *p) { UA_delete(p, &UA_TYPES[UA_TYPES_RESPONSEHEADER]); }

/**
 * DeleteSubscriptionsRequest
 * --------------------------
 */
typedef struct {
    UA_RequestHeader requestHeader;
    size_t subscriptionIdsSize;
    UA_UInt32 *subscriptionIds;
} UA_DeleteSubscriptionsRequest;

#define UA_TYPES_DELETESUBSCRIPTIONSREQUEST 71
static UA_INLINE void UA_DeleteSubscriptionsRequest_init(UA_DeleteSubscriptionsRequest *p) { memset(p, 0, sizeof(UA_DeleteSubscriptionsRequest)); }
static UA_INLINE UA_DeleteSubscriptionsRequest * UA_DeleteSubscriptionsRequest_new(void) { return (UA_DeleteSubscriptionsRequest*) UA_new(&UA_TYPES[UA_TYPES_DELETESUBSCRIPTIONSREQUEST]); }
static UA_INLINE UA_StatusCode UA_DeleteSubscriptionsRequest_copy(const UA_DeleteSubscriptionsRequest *src, UA_DeleteSubscriptionsRequest *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_DELETESUBSCRIPTIONSREQUEST]); }
static UA_INLINE void UA_DeleteSubscriptionsRequest_deleteMembers(UA_DeleteSubscriptionsRequest *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_DELETESUBSCRIPTIONSREQUEST]); }
static UA_INLINE void UA_DeleteSubscriptionsRequest_delete(UA_DeleteSubscriptionsRequest *p) { UA_delete(p, &UA_TYPES[UA_TYPES_DELETESUBSCRIPTIONSREQUEST]); }

/**
 * DataChangeNotification
 * ----------------------
 */
typedef struct {
    size_t monitoredItemsSize;
    UA_MonitoredItemNotification *monitoredItems;
    size_t diagnosticInfosSize;
    UA_DiagnosticInfo *diagnosticInfos;
} UA_DataChangeNotification;

#define UA_TYPES_DATACHANGENOTIFICATION 72
static UA_INLINE void UA_DataChangeNotification_init(UA_DataChangeNotification *p) { memset(p, 0, sizeof(UA_DataChangeNotification)); }
static UA_INLINE UA_DataChangeNotification * UA_DataChangeNotification_new(void) { return (UA_DataChangeNotification*) UA_new(&UA_TYPES[UA_TYPES_DATACHANGENOTIFICATION]); }
static UA_INLINE UA_StatusCode UA_DataChangeNotification_copy(const UA_DataChangeNotification *src, UA_DataChangeNotification *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_DATACHANGENOTIFICATION]); }
static UA_INLINE void UA_DataChangeNotification_deleteMembers(UA_DataChangeNotification *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_DATACHANGENOTIFICATION]); }
static UA_INLINE void UA_DataChangeNotification_delete(UA_DataChangeNotification *p) { UA_delete(p, &UA_TYPES[UA_TYPES_DATACHANGENOTIFICATION]); }

/**
 * DeleteMonitoredItemsResponse
 * ----------------------------
 */
typedef struct {
    UA_ResponseHeader responseHeader;
    size_t resultsSize;
    UA_StatusCode *results;
    size_t diagnosticInfosSize;
    UA_DiagnosticInfo *diagnosticInfos;
} UA_DeleteMonitoredItemsResponse;

#define UA_TYPES_DELETEMONITOREDITEMSRESPONSE 73
static UA_INLINE void UA_DeleteMonitoredItemsResponse_init(UA_DeleteMonitoredItemsResponse *p) { memset(p, 0, sizeof(UA_DeleteMonitoredItemsResponse)); }
static UA_INLINE UA_DeleteMonitoredItemsResponse * UA_DeleteMonitoredItemsResponse_new(void) { return (UA_DeleteMonitoredItemsResponse*) UA_new(&UA_TYPES[UA_TYPES_DELETEMONITOREDITEMSRESPONSE]); }
static UA_INLINE UA_StatusCode UA_DeleteMonitoredItemsResponse_copy(const UA_DeleteMonitoredItemsResponse *src, UA_DeleteMonitoredItemsResponse *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_DELETEMONITOREDITEMSRESPONSE]); }
static UA_INLINE void UA_DeleteMonitoredItemsResponse_deleteMembers(UA_DeleteMonitoredItemsResponse *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_DELETEMONITOREDITEMSRESPONSE]); }
static UA_INLINE void UA_DeleteMonitoredItemsResponse_delete(UA_DeleteMonitoredItemsResponse *p) { UA_delete(p, &UA_TYPES[UA_TYPES_DELETEMONITOREDITEMSRESPONSE]); }

/**
 * RelativePath
 * ------------
 * A relative path constructed from reference types and browse names. */
typedef struct {
    size_t elementsSize;
    UA_RelativePathElement *elements;
} UA_RelativePath;

#define UA_TYPES_RELATIVEPATH 74
static UA_INLINE void UA_RelativePath_init(UA_RelativePath *p) { memset(p, 0, sizeof(UA_RelativePath)); }
static UA_INLINE UA_RelativePath * UA_RelativePath_new(void) { return (UA_RelativePath*) UA_new(&UA_TYPES[UA_TYPES_RELATIVEPATH]); }
static UA_INLINE UA_StatusCode UA_RelativePath_copy(const UA_RelativePath *src, UA_RelativePath *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_RELATIVEPATH]); }
static UA_INLINE void UA_RelativePath_deleteMembers(UA_RelativePath *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_RELATIVEPATH]); }
static UA_INLINE void UA_RelativePath_delete(UA_RelativePath *p) { UA_delete(p, &UA_TYPES[UA_TYPES_RELATIVEPATH]); }

/**
 * RegisterNodesRequest
 * --------------------
 * Registers one or more nodes for repeated use within a session. */
typedef struct {
    UA_RequestHeader requestHeader;
    size_t nodesToRegisterSize;
    UA_NodeId *nodesToRegister;
} UA_RegisterNodesRequest;

#define UA_TYPES_REGISTERNODESREQUEST 75
static UA_INLINE void UA_RegisterNodesRequest_init(UA_RegisterNodesRequest *p) { memset(p, 0, sizeof(UA_RegisterNodesRequest)); }
static UA_INLINE UA_RegisterNodesRequest * UA_RegisterNodesRequest_new(void) { return (UA_RegisterNodesRequest*) UA_new(&UA_TYPES[UA_TYPES_REGISTERNODESREQUEST]); }
static UA_INLINE UA_StatusCode UA_RegisterNodesRequest_copy(const UA_RegisterNodesRequest *src, UA_RegisterNodesRequest *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_REGISTERNODESREQUEST]); }
static UA_INLINE void UA_RegisterNodesRequest_deleteMembers(UA_RegisterNodesRequest *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_REGISTERNODESREQUEST]); }
static UA_INLINE void UA_RegisterNodesRequest_delete(UA_RegisterNodesRequest *p) { UA_delete(p, &UA_TYPES[UA_TYPES_REGISTERNODESREQUEST]); }

/**
 * DeleteNodesRequest
 * ------------------
 * Delete one or more nodes from the server address space. */
typedef struct {
    UA_RequestHeader requestHeader;
    size_t nodesToDeleteSize;
    UA_DeleteNodesItem *nodesToDelete;
} UA_DeleteNodesRequest;

#define UA_TYPES_DELETENODESREQUEST 76
static UA_INLINE void UA_DeleteNodesRequest_init(UA_DeleteNodesRequest *p) { memset(p, 0, sizeof(UA_DeleteNodesRequest)); }
static UA_INLINE UA_DeleteNodesRequest * UA_DeleteNodesRequest_new(void) { return (UA_DeleteNodesRequest*) UA_new(&UA_TYPES[UA_TYPES_DELETENODESREQUEST]); }
static UA_INLINE UA_StatusCode UA_DeleteNodesRequest_copy(const UA_DeleteNodesRequest *src, UA_DeleteNodesRequest *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_DELETENODESREQUEST]); }
static UA_INLINE void UA_DeleteNodesRequest_deleteMembers(UA_DeleteNodesRequest *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_DELETENODESREQUEST]); }
static UA_INLINE void UA_DeleteNodesRequest_delete(UA_DeleteNodesRequest *p) { UA_delete(p, &UA_TYPES[UA_TYPES_DELETENODESREQUEST]); }

/**
 * PublishResponse
 * ---------------
 */
typedef struct {
    UA_ResponseHeader responseHeader;
    UA_UInt32 subscriptionId;
    size_t availableSequenceNumbersSize;
    UA_UInt32 *availableSequenceNumbers;
    UA_Boolean moreNotifications;
    UA_NotificationMessage notificationMessage;
    size_t resultsSize;
    UA_StatusCode *results;
    size_t diagnosticInfosSize;
    UA_DiagnosticInfo *diagnosticInfos;
} UA_PublishResponse;

#define UA_TYPES_PUBLISHRESPONSE 77
static UA_INLINE void UA_PublishResponse_init(UA_PublishResponse *p) { memset(p, 0, sizeof(UA_PublishResponse)); }
static UA_INLINE UA_PublishResponse * UA_PublishResponse_new(void) { return (UA_PublishResponse*) UA_new(&UA_TYPES[UA_TYPES_PUBLISHRESPONSE]); }
static UA_INLINE UA_StatusCode UA_PublishResponse_copy(const UA_PublishResponse *src, UA_PublishResponse *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_PUBLISHRESPONSE]); }
static UA_INLINE void UA_PublishResponse_deleteMembers(UA_PublishResponse *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_PUBLISHRESPONSE]); }
static UA_INLINE void UA_PublishResponse_delete(UA_PublishResponse *p) { UA_delete(p, &UA_TYPES[UA_TYPES_PUBLISHRESPONSE]); }

/**
 * UserNameIdentityToken
 * ---------------------
 * A token representing a user identified by a user name and password. */
typedef struct {
    UA_String policyId;
    UA_String userName;
    UA_ByteString password;
    UA_String encryptionAlgorithm;
} UA_UserNameIdentityToken;

#define UA_TYPES_USERNAMEIDENTITYTOKEN 78
static UA_INLINE void UA_UserNameIdentityToken_init(UA_UserNameIdentityToken *p) { memset(p, 0, sizeof(UA_UserNameIdentityToken)); }
static UA_INLINE UA_UserNameIdentityToken * UA_UserNameIdentityToken_new(void) { return (UA_UserNameIdentityToken*) UA_new(&UA_TYPES[UA_TYPES_USERNAMEIDENTITYTOKEN]); }
static UA_INLINE UA_StatusCode UA_UserNameIdentityToken_copy(const UA_UserNameIdentityToken *src, UA_UserNameIdentityToken *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_USERNAMEIDENTITYTOKEN]); }
static UA_INLINE void UA_UserNameIdentityToken_deleteMembers(UA_UserNameIdentityToken *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_USERNAMEIDENTITYTOKEN]); }
static UA_INLINE void UA_UserNameIdentityToken_delete(UA_UserNameIdentityToken *p) { UA_delete(p, &UA_TYPES[UA_TYPES_USERNAMEIDENTITYTOKEN]); }

/**
 * IdType
 * ------
 * The type of identifier used in a node id. */
typedef enum { 
    UA_IDTYPE_NUMERIC = 0,
    UA_IDTYPE_STRING = 1,
    UA_IDTYPE_GUID = 2,
    UA_IDTYPE_OPAQUE = 3
} UA_IdType;

#define UA_TYPES_IDTYPE 79
static UA_INLINE void UA_IdType_init(UA_IdType *p) { memset(p, 0, sizeof(UA_IdType)); }
static UA_INLINE UA_IdType * UA_IdType_new(void) { return (UA_IdType*) UA_new(&UA_TYPES[UA_TYPES_IDTYPE]); }
static UA_INLINE UA_StatusCode UA_IdType_copy(const UA_IdType *src, UA_IdType *dst) { *dst = *src; return UA_STATUSCODE_GOOD; }
static UA_INLINE void UA_IdType_deleteMembers(UA_IdType *p) { }
static UA_INLINE void UA_IdType_delete(UA_IdType *p) { UA_delete(p, &UA_TYPES[UA_TYPES_IDTYPE]); }

/**
 * UserTokenType
 * -------------
 * The possible user token types. */
typedef enum { 
    UA_USERTOKENTYPE_ANONYMOUS = 0,
    UA_USERTOKENTYPE_USERNAME = 1,
    UA_USERTOKENTYPE_CERTIFICATE = 2,
    UA_USERTOKENTYPE_ISSUEDTOKEN = 3
} UA_UserTokenType;

#define UA_TYPES_USERTOKENTYPE 80
static UA_INLINE void UA_UserTokenType_init(UA_UserTokenType *p) { memset(p, 0, sizeof(UA_UserTokenType)); }
static UA_INLINE UA_UserTokenType * UA_UserTokenType_new(void) { return (UA_UserTokenType*) UA_new(&UA_TYPES[UA_TYPES_USERTOKENTYPE]); }
static UA_INLINE UA_StatusCode UA_UserTokenType_copy(const UA_UserTokenType *src, UA_UserTokenType *dst) { *dst = *src; return UA_STATUSCODE_GOOD; }
static UA_INLINE void UA_UserTokenType_deleteMembers(UA_UserTokenType *p) { }
static UA_INLINE void UA_UserTokenType_delete(UA_UserTokenType *p) { UA_delete(p, &UA_TYPES[UA_TYPES_USERTOKENTYPE]); }

/**
 * NodeAttributes
 * --------------
 * The base attributes for all nodes. */
typedef struct {
    UA_UInt32 specifiedAttributes;
    UA_LocalizedText displayName;
    UA_LocalizedText description;
    UA_UInt32 writeMask;
    UA_UInt32 userWriteMask;
} UA_NodeAttributes;

#define UA_TYPES_NODEATTRIBUTES 81
static UA_INLINE void UA_NodeAttributes_init(UA_NodeAttributes *p) { memset(p, 0, sizeof(UA_NodeAttributes)); }
static UA_INLINE UA_NodeAttributes * UA_NodeAttributes_new(void) { return (UA_NodeAttributes*) UA_new(&UA_TYPES[UA_TYPES_NODEATTRIBUTES]); }
static UA_INLINE UA_StatusCode UA_NodeAttributes_copy(const UA_NodeAttributes *src, UA_NodeAttributes *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_NODEATTRIBUTES]); }
static UA_INLINE void UA_NodeAttributes_deleteMembers(UA_NodeAttributes *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_NODEATTRIBUTES]); }
static UA_INLINE void UA_NodeAttributes_delete(UA_NodeAttributes *p) { UA_delete(p, &UA_TYPES[UA_TYPES_NODEATTRIBUTES]); }

/**
 * ActivateSessionRequest
 * ----------------------
 * Activates a session with the server. */
typedef struct {
    UA_RequestHeader requestHeader;
    UA_SignatureData clientSignature;
    size_t clientSoftwareCertificatesSize;
    UA_SignedSoftwareCertificate *clientSoftwareCertificates;
    size_t localeIdsSize;
    UA_String *localeIds;
    UA_ExtensionObject userIdentityToken;
    UA_SignatureData userTokenSignature;
} UA_ActivateSessionRequest;

#define UA_TYPES_ACTIVATESESSIONREQUEST 82
static UA_INLINE void UA_ActivateSessionRequest_init(UA_ActivateSessionRequest *p) { memset(p, 0, sizeof(UA_ActivateSessionRequest)); }
static UA_INLINE UA_ActivateSessionRequest * UA_ActivateSessionRequest_new(void) { return (UA_ActivateSessionRequest*) UA_new(&UA_TYPES[UA_TYPES_ACTIVATESESSIONREQUEST]); }
static UA_INLINE UA_StatusCode UA_ActivateSessionRequest_copy(const UA_ActivateSessionRequest *src, UA_ActivateSessionRequest *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_ACTIVATESESSIONREQUEST]); }
static UA_INLINE void UA_ActivateSessionRequest_deleteMembers(UA_ActivateSessionRequest *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_ACTIVATESESSIONREQUEST]); }
static UA_INLINE void UA_ActivateSessionRequest_delete(UA_ActivateSessionRequest *p) { UA_delete(p, &UA_TYPES[UA_TYPES_ACTIVATESESSIONREQUEST]); }

/**
 * OpenSecureChannelResponse
 * -------------------------
 * Creates a secure channel with a server. */
typedef struct {
    UA_ResponseHeader responseHeader;
    UA_UInt32 serverProtocolVersion;
    UA_ChannelSecurityToken securityToken;
    UA_ByteString serverNonce;
} UA_OpenSecureChannelResponse;

#define UA_TYPES_OPENSECURECHANNELRESPONSE 83
static UA_INLINE void UA_OpenSecureChannelResponse_init(UA_OpenSecureChannelResponse *p) { memset(p, 0, sizeof(UA_OpenSecureChannelResponse)); }
static UA_INLINE UA_OpenSecureChannelResponse * UA_OpenSecureChannelResponse_new(void) { return (UA_OpenSecureChannelResponse*) UA_new(&UA_TYPES[UA_TYPES_OPENSECURECHANNELRESPONSE]); }
static UA_INLINE UA_StatusCode UA_OpenSecureChannelResponse_copy(const UA_OpenSecureChannelResponse *src, UA_OpenSecureChannelResponse *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_OPENSECURECHANNELRESPONSE]); }
static UA_INLINE void UA_OpenSecureChannelResponse_deleteMembers(UA_OpenSecureChannelResponse *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_OPENSECURECHANNELRESPONSE]); }
static UA_INLINE void UA_OpenSecureChannelResponse_delete(UA_OpenSecureChannelResponse *p) { UA_delete(p, &UA_TYPES[UA_TYPES_OPENSECURECHANNELRESPONSE]); }

/**
 * ApplicationType
 * ---------------
 * The types of applications. */
typedef enum { 
    UA_APPLICATIONTYPE_SERVER = 0,
    UA_APPLICATIONTYPE_CLIENT = 1,
    UA_APPLICATIONTYPE_CLIENTANDSERVER = 2,
    UA_APPLICATIONTYPE_DISCOVERYSERVER = 3
} UA_ApplicationType;

#define UA_TYPES_APPLICATIONTYPE 84
static UA_INLINE void UA_ApplicationType_init(UA_ApplicationType *p) { memset(p, 0, sizeof(UA_ApplicationType)); }
static UA_INLINE UA_ApplicationType * UA_ApplicationType_new(void) { return (UA_ApplicationType*) UA_new(&UA_TYPES[UA_TYPES_APPLICATIONTYPE]); }
static UA_INLINE UA_StatusCode UA_ApplicationType_copy(const UA_ApplicationType *src, UA_ApplicationType *dst) { *dst = *src; return UA_STATUSCODE_GOOD; }
static UA_INLINE void UA_ApplicationType_deleteMembers(UA_ApplicationType *p) { }
static UA_INLINE void UA_ApplicationType_delete(UA_ApplicationType *p) { UA_delete(p, &UA_TYPES[UA_TYPES_APPLICATIONTYPE]); }

/**
 * QueryNextResponse
 * -----------------
 */
typedef struct {
    UA_ResponseHeader responseHeader;
    size_t queryDataSetsSize;
    UA_QueryDataSet *queryDataSets;
    UA_ByteString revisedContinuationPoint;
} UA_QueryNextResponse;

#define UA_TYPES_QUERYNEXTRESPONSE 85
static UA_INLINE void UA_QueryNextResponse_init(UA_QueryNextResponse *p) { memset(p, 0, sizeof(UA_QueryNextResponse)); }
static UA_INLINE UA_QueryNextResponse * UA_QueryNextResponse_new(void) { return (UA_QueryNextResponse*) UA_new(&UA_TYPES[UA_TYPES_QUERYNEXTRESPONSE]); }
static UA_INLINE UA_StatusCode UA_QueryNextResponse_copy(const UA_QueryNextResponse *src, UA_QueryNextResponse *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_QUERYNEXTRESPONSE]); }
static UA_INLINE void UA_QueryNextResponse_deleteMembers(UA_QueryNextResponse *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_QUERYNEXTRESPONSE]); }
static UA_INLINE void UA_QueryNextResponse_delete(UA_QueryNextResponse *p) { UA_delete(p, &UA_TYPES[UA_TYPES_QUERYNEXTRESPONSE]); }

/**
 * ActivateSessionResponse
 * -----------------------
 * Activates a session with the server. */
typedef struct {
    UA_ResponseHeader responseHeader;
    UA_ByteString serverNonce;
    size_t resultsSize;
    UA_StatusCode *results;
    size_t diagnosticInfosSize;
    UA_DiagnosticInfo *diagnosticInfos;
} UA_ActivateSessionResponse;

#define UA_TYPES_ACTIVATESESSIONRESPONSE 86
static UA_INLINE void UA_ActivateSessionResponse_init(UA_ActivateSessionResponse *p) { memset(p, 0, sizeof(UA_ActivateSessionResponse)); }
static UA_INLINE UA_ActivateSessionResponse * UA_ActivateSessionResponse_new(void) { return (UA_ActivateSessionResponse*) UA_new(&UA_TYPES[UA_TYPES_ACTIVATESESSIONRESPONSE]); }
static UA_INLINE UA_StatusCode UA_ActivateSessionResponse_copy(const UA_ActivateSessionResponse *src, UA_ActivateSessionResponse *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_ACTIVATESESSIONRESPONSE]); }
static UA_INLINE void UA_ActivateSessionResponse_deleteMembers(UA_ActivateSessionResponse *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_ACTIVATESESSIONRESPONSE]); }
static UA_INLINE void UA_ActivateSessionResponse_delete(UA_ActivateSessionResponse *p) { UA_delete(p, &UA_TYPES[UA_TYPES_ACTIVATESESSIONRESPONSE]); }

/**
 * FilterOperator
 * --------------
 */
typedef enum { 
    UA_FILTEROPERATOR_EQUALS = 0,
    UA_FILTEROPERATOR_ISNULL = 1,
    UA_FILTEROPERATOR_GREATERTHAN = 2,
    UA_FILTEROPERATOR_LESSTHAN = 3,
    UA_FILTEROPERATOR_GREATERTHANOREQUAL = 4,
    UA_FILTEROPERATOR_LESSTHANOREQUAL = 5,
    UA_FILTEROPERATOR_LIKE = 6,
    UA_FILTEROPERATOR_NOT = 7,
    UA_FILTEROPERATOR_BETWEEN = 8,
    UA_FILTEROPERATOR_INLIST = 9,
    UA_FILTEROPERATOR_AND = 10,
    UA_FILTEROPERATOR_OR = 11,
    UA_FILTEROPERATOR_CAST = 12,
    UA_FILTEROPERATOR_INVIEW = 13,
    UA_FILTEROPERATOR_OFTYPE = 14,
    UA_FILTEROPERATOR_RELATEDTO = 15,
    UA_FILTEROPERATOR_BITWISEAND = 16,
    UA_FILTEROPERATOR_BITWISEOR = 17
} UA_FilterOperator;

#define UA_TYPES_FILTEROPERATOR 87
static UA_INLINE void UA_FilterOperator_init(UA_FilterOperator *p) { memset(p, 0, sizeof(UA_FilterOperator)); }
static UA_INLINE UA_FilterOperator * UA_FilterOperator_new(void) { return (UA_FilterOperator*) UA_new(&UA_TYPES[UA_TYPES_FILTEROPERATOR]); }
static UA_INLINE UA_StatusCode UA_FilterOperator_copy(const UA_FilterOperator *src, UA_FilterOperator *dst) { *dst = *src; return UA_STATUSCODE_GOOD; }
static UA_INLINE void UA_FilterOperator_deleteMembers(UA_FilterOperator *p) { }
static UA_INLINE void UA_FilterOperator_delete(UA_FilterOperator *p) { UA_delete(p, &UA_TYPES[UA_TYPES_FILTEROPERATOR]); }

/**
 * QueryNextRequest
 * ----------------
 */
typedef struct {
    UA_RequestHeader requestHeader;
    UA_Boolean releaseContinuationPoint;
    UA_ByteString continuationPoint;
} UA_QueryNextRequest;

#define UA_TYPES_QUERYNEXTREQUEST 88
static UA_INLINE void UA_QueryNextRequest_init(UA_QueryNextRequest *p) { memset(p, 0, sizeof(UA_QueryNextRequest)); }
static UA_INLINE UA_QueryNextRequest * UA_QueryNextRequest_new(void) { return (UA_QueryNextRequest*) UA_new(&UA_TYPES[UA_TYPES_QUERYNEXTREQUEST]); }
static UA_INLINE UA_StatusCode UA_QueryNextRequest_copy(const UA_QueryNextRequest *src, UA_QueryNextRequest *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_QUERYNEXTREQUEST]); }
static UA_INLINE void UA_QueryNextRequest_deleteMembers(UA_QueryNextRequest *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_QUERYNEXTREQUEST]); }
static UA_INLINE void UA_QueryNextRequest_delete(UA_QueryNextRequest *p) { UA_delete(p, &UA_TYPES[UA_TYPES_QUERYNEXTREQUEST]); }

/**
 * BrowseNextRequest
 * -----------------
 * Continues one or more browse operations. */
typedef struct {
    UA_RequestHeader requestHeader;
    UA_Boolean releaseContinuationPoints;
    size_t continuationPointsSize;
    UA_ByteString *continuationPoints;
} UA_BrowseNextRequest;

#define UA_TYPES_BROWSENEXTREQUEST 89
static UA_INLINE void UA_BrowseNextRequest_init(UA_BrowseNextRequest *p) { memset(p, 0, sizeof(UA_BrowseNextRequest)); }
static UA_INLINE UA_BrowseNextRequest * UA_BrowseNextRequest_new(void) { return (UA_BrowseNextRequest*) UA_new(&UA_TYPES[UA_TYPES_BROWSENEXTREQUEST]); }
static UA_INLINE UA_StatusCode UA_BrowseNextRequest_copy(const UA_BrowseNextRequest *src, UA_BrowseNextRequest *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_BROWSENEXTREQUEST]); }
static UA_INLINE void UA_BrowseNextRequest_deleteMembers(UA_BrowseNextRequest *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_BROWSENEXTREQUEST]); }
static UA_INLINE void UA_BrowseNextRequest_delete(UA_BrowseNextRequest *p) { UA_delete(p, &UA_TYPES[UA_TYPES_BROWSENEXTREQUEST]); }

/**
 * CreateSubscriptionRequest
 * -------------------------
 */
typedef struct {
    UA_RequestHeader requestHeader;
    UA_Double requestedPublishingInterval;
    UA_UInt32 requestedLifetimeCount;
    UA_UInt32 requestedMaxKeepAliveCount;
    UA_UInt32 maxNotificationsPerPublish;
    UA_Boolean publishingEnabled;
    UA_Byte priority;
} UA_CreateSubscriptionRequest;

#define UA_TYPES_CREATESUBSCRIPTIONREQUEST 90
static UA_INLINE void UA_CreateSubscriptionRequest_init(UA_CreateSubscriptionRequest *p) { memset(p, 0, sizeof(UA_CreateSubscriptionRequest)); }
static UA_INLINE UA_CreateSubscriptionRequest * UA_CreateSubscriptionRequest_new(void) { return (UA_CreateSubscriptionRequest*) UA_new(&UA_TYPES[UA_TYPES_CREATESUBSCRIPTIONREQUEST]); }
static UA_INLINE UA_StatusCode UA_CreateSubscriptionRequest_copy(const UA_CreateSubscriptionRequest *src, UA_CreateSubscriptionRequest *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_CREATESUBSCRIPTIONREQUEST]); }
static UA_INLINE void UA_CreateSubscriptionRequest_deleteMembers(UA_CreateSubscriptionRequest *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_CREATESUBSCRIPTIONREQUEST]); }
static UA_INLINE void UA_CreateSubscriptionRequest_delete(UA_CreateSubscriptionRequest *p) { UA_delete(p, &UA_TYPES[UA_TYPES_CREATESUBSCRIPTIONREQUEST]); }

/**
 * VariableTypeAttributes
 * ----------------------
 * The attributes for a variable type node. */
typedef struct {
    UA_UInt32 specifiedAttributes;
    UA_LocalizedText displayName;
    UA_LocalizedText description;
    UA_UInt32 writeMask;
    UA_UInt32 userWriteMask;
    UA_Variant value;
    UA_NodeId dataType;
    UA_Int32 valueRank;
    size_t arrayDimensionsSize;
    UA_UInt32 *arrayDimensions;
    UA_Boolean isAbstract;
} UA_VariableTypeAttributes;

#define UA_TYPES_VARIABLETYPEATTRIBUTES 91
static UA_INLINE void UA_VariableTypeAttributes_init(UA_VariableTypeAttributes *p) { memset(p, 0, sizeof(UA_VariableTypeAttributes)); }
static UA_INLINE UA_VariableTypeAttributes * UA_VariableTypeAttributes_new(void) { return (UA_VariableTypeAttributes*) UA_new(&UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES]); }
static UA_INLINE UA_StatusCode UA_VariableTypeAttributes_copy(const UA_VariableTypeAttributes *src, UA_VariableTypeAttributes *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES]); }
static UA_INLINE void UA_VariableTypeAttributes_deleteMembers(UA_VariableTypeAttributes *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES]); }
static UA_INLINE void UA_VariableTypeAttributes_delete(UA_VariableTypeAttributes *p) { UA_delete(p, &UA_TYPES[UA_TYPES_VARIABLETYPEATTRIBUTES]); }

/**
 * BrowsePathResult
 * ----------------
 * The result of a translate opearation. */
typedef struct {
    UA_StatusCode statusCode;
    size_t targetsSize;
    UA_BrowsePathTarget *targets;
} UA_BrowsePathResult;

#define UA_TYPES_BROWSEPATHRESULT 92
static UA_INLINE void UA_BrowsePathResult_init(UA_BrowsePathResult *p) { memset(p, 0, sizeof(UA_BrowsePathResult)); }
static UA_INLINE UA_BrowsePathResult * UA_BrowsePathResult_new(void) { return (UA_BrowsePathResult*) UA_new(&UA_TYPES[UA_TYPES_BROWSEPATHRESULT]); }
static UA_INLINE UA_StatusCode UA_BrowsePathResult_copy(const UA_BrowsePathResult *src, UA_BrowsePathResult *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_BROWSEPATHRESULT]); }
static UA_INLINE void UA_BrowsePathResult_deleteMembers(UA_BrowsePathResult *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_BROWSEPATHRESULT]); }
static UA_INLINE void UA_BrowsePathResult_delete(UA_BrowsePathResult *p) { UA_delete(p, &UA_TYPES[UA_TYPES_BROWSEPATHRESULT]); }

/**
 * ModifySubscriptionResponse
 * --------------------------
 */
typedef struct {
    UA_ResponseHeader responseHeader;
    UA_Double revisedPublishingInterval;
    UA_UInt32 revisedLifetimeCount;
    UA_UInt32 revisedMaxKeepAliveCount;
} UA_ModifySubscriptionResponse;

#define UA_TYPES_MODIFYSUBSCRIPTIONRESPONSE 93
static UA_INLINE void UA_ModifySubscriptionResponse_init(UA_ModifySubscriptionResponse *p) { memset(p, 0, sizeof(UA_ModifySubscriptionResponse)); }
static UA_INLINE UA_ModifySubscriptionResponse * UA_ModifySubscriptionResponse_new(void) { return (UA_ModifySubscriptionResponse*) UA_new(&UA_TYPES[UA_TYPES_MODIFYSUBSCRIPTIONRESPONSE]); }
static UA_INLINE UA_StatusCode UA_ModifySubscriptionResponse_copy(const UA_ModifySubscriptionResponse *src, UA_ModifySubscriptionResponse *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_MODIFYSUBSCRIPTIONRESPONSE]); }
static UA_INLINE void UA_ModifySubscriptionResponse_deleteMembers(UA_ModifySubscriptionResponse *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_MODIFYSUBSCRIPTIONRESPONSE]); }
static UA_INLINE void UA_ModifySubscriptionResponse_delete(UA_ModifySubscriptionResponse *p) { UA_delete(p, &UA_TYPES[UA_TYPES_MODIFYSUBSCRIPTIONRESPONSE]); }

/**
 * RegisterNodesResponse
 * ---------------------
 * Registers one or more nodes for repeated use within a session. */
typedef struct {
    UA_ResponseHeader responseHeader;
    size_t registeredNodeIdsSize;
    UA_NodeId *registeredNodeIds;
} UA_RegisterNodesResponse;

#define UA_TYPES_REGISTERNODESRESPONSE 94
static UA_INLINE void UA_RegisterNodesResponse_init(UA_RegisterNodesResponse *p) { memset(p, 0, sizeof(UA_RegisterNodesResponse)); }
static UA_INLINE UA_RegisterNodesResponse * UA_RegisterNodesResponse_new(void) { return (UA_RegisterNodesResponse*) UA_new(&UA_TYPES[UA_TYPES_REGISTERNODESRESPONSE]); }
static UA_INLINE UA_StatusCode UA_RegisterNodesResponse_copy(const UA_RegisterNodesResponse *src, UA_RegisterNodesResponse *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_REGISTERNODESRESPONSE]); }
static UA_INLINE void UA_RegisterNodesResponse_deleteMembers(UA_RegisterNodesResponse *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_REGISTERNODESRESPONSE]); }
static UA_INLINE void UA_RegisterNodesResponse_delete(UA_RegisterNodesResponse *p) { UA_delete(p, &UA_TYPES[UA_TYPES_REGISTERNODESRESPONSE]); }

/**
 * CloseSessionRequest
 * -------------------
 * Closes a session with the server. */
typedef struct {
    UA_RequestHeader requestHeader;
    UA_Boolean deleteSubscriptions;
} UA_CloseSessionRequest;

#define UA_TYPES_CLOSESESSIONREQUEST 95
static UA_INLINE void UA_CloseSessionRequest_init(UA_CloseSessionRequest *p) { memset(p, 0, sizeof(UA_CloseSessionRequest)); }
static UA_INLINE UA_CloseSessionRequest * UA_CloseSessionRequest_new(void) { return (UA_CloseSessionRequest*) UA_new(&UA_TYPES[UA_TYPES_CLOSESESSIONREQUEST]); }
static UA_INLINE UA_StatusCode UA_CloseSessionRequest_copy(const UA_CloseSessionRequest *src, UA_CloseSessionRequest *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_CLOSESESSIONREQUEST]); }
static UA_INLINE void UA_CloseSessionRequest_deleteMembers(UA_CloseSessionRequest *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_CLOSESESSIONREQUEST]); }
static UA_INLINE void UA_CloseSessionRequest_delete(UA_CloseSessionRequest *p) { UA_delete(p, &UA_TYPES[UA_TYPES_CLOSESESSIONREQUEST]); }

/**
 * ModifySubscriptionRequest
 * -------------------------
 */
typedef struct {
    UA_RequestHeader requestHeader;
    UA_UInt32 subscriptionId;
    UA_Double requestedPublishingInterval;
    UA_UInt32 requestedLifetimeCount;
    UA_UInt32 requestedMaxKeepAliveCount;
    UA_UInt32 maxNotificationsPerPublish;
    UA_Byte priority;
} UA_ModifySubscriptionRequest;

#define UA_TYPES_MODIFYSUBSCRIPTIONREQUEST 96
static UA_INLINE void UA_ModifySubscriptionRequest_init(UA_ModifySubscriptionRequest *p) { memset(p, 0, sizeof(UA_ModifySubscriptionRequest)); }
static UA_INLINE UA_ModifySubscriptionRequest * UA_ModifySubscriptionRequest_new(void) { return (UA_ModifySubscriptionRequest*) UA_new(&UA_TYPES[UA_TYPES_MODIFYSUBSCRIPTIONREQUEST]); }
static UA_INLINE UA_StatusCode UA_ModifySubscriptionRequest_copy(const UA_ModifySubscriptionRequest *src, UA_ModifySubscriptionRequest *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_MODIFYSUBSCRIPTIONREQUEST]); }
static UA_INLINE void UA_ModifySubscriptionRequest_deleteMembers(UA_ModifySubscriptionRequest *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_MODIFYSUBSCRIPTIONREQUEST]); }
static UA_INLINE void UA_ModifySubscriptionRequest_delete(UA_ModifySubscriptionRequest *p) { UA_delete(p, &UA_TYPES[UA_TYPES_MODIFYSUBSCRIPTIONREQUEST]); }

/**
 * UserTokenPolicy
 * ---------------
 * Describes a user token that can be used with a server. */
typedef struct {
    UA_String policyId;
    UA_UserTokenType tokenType;
    UA_String issuedTokenType;
    UA_String issuerEndpointUrl;
    UA_String securityPolicyUri;
} UA_UserTokenPolicy;

#define UA_TYPES_USERTOKENPOLICY 97
static UA_INLINE void UA_UserTokenPolicy_init(UA_UserTokenPolicy *p) { memset(p, 0, sizeof(UA_UserTokenPolicy)); }
static UA_INLINE UA_UserTokenPolicy * UA_UserTokenPolicy_new(void) { return (UA_UserTokenPolicy*) UA_new(&UA_TYPES[UA_TYPES_USERTOKENPOLICY]); }
static UA_INLINE UA_StatusCode UA_UserTokenPolicy_copy(const UA_UserTokenPolicy *src, UA_UserTokenPolicy *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_USERTOKENPOLICY]); }
static UA_INLINE void UA_UserTokenPolicy_deleteMembers(UA_UserTokenPolicy *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_USERTOKENPOLICY]); }
static UA_INLINE void UA_UserTokenPolicy_delete(UA_UserTokenPolicy *p) { UA_delete(p, &UA_TYPES[UA_TYPES_USERTOKENPOLICY]); }

/**
 * DeleteMonitoredItemsRequest
 * ---------------------------
 */
typedef struct {
    UA_RequestHeader requestHeader;
    UA_UInt32 subscriptionId;
    size_t monitoredItemIdsSize;
    UA_UInt32 *monitoredItemIds;
} UA_DeleteMonitoredItemsRequest;

#define UA_TYPES_DELETEMONITOREDITEMSREQUEST 98
static UA_INLINE void UA_DeleteMonitoredItemsRequest_init(UA_DeleteMonitoredItemsRequest *p) { memset(p, 0, sizeof(UA_DeleteMonitoredItemsRequest)); }
static UA_INLINE UA_DeleteMonitoredItemsRequest * UA_DeleteMonitoredItemsRequest_new(void) { return (UA_DeleteMonitoredItemsRequest*) UA_new(&UA_TYPES[UA_TYPES_DELETEMONITOREDITEMSREQUEST]); }
static UA_INLINE UA_StatusCode UA_DeleteMonitoredItemsRequest_copy(const UA_DeleteMonitoredItemsRequest *src, UA_DeleteMonitoredItemsRequest *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_DELETEMONITOREDITEMSREQUEST]); }
static UA_INLINE void UA_DeleteMonitoredItemsRequest_deleteMembers(UA_DeleteMonitoredItemsRequest *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_DELETEMONITOREDITEMSREQUEST]); }
static UA_INLINE void UA_DeleteMonitoredItemsRequest_delete(UA_DeleteMonitoredItemsRequest *p) { UA_delete(p, &UA_TYPES[UA_TYPES_DELETEMONITOREDITEMSREQUEST]); }

/**
 * ReferenceTypeAttributes
 * -----------------------
 * The attributes for a reference type node. */
typedef struct {
    UA_UInt32 specifiedAttributes;
    UA_LocalizedText displayName;
    UA_LocalizedText description;
    UA_UInt32 writeMask;
    UA_UInt32 userWriteMask;
    UA_Boolean isAbstract;
    UA_Boolean symmetric;
    UA_LocalizedText inverseName;
} UA_ReferenceTypeAttributes;

#define UA_TYPES_REFERENCETYPEATTRIBUTES 99
static UA_INLINE void UA_ReferenceTypeAttributes_init(UA_ReferenceTypeAttributes *p) { memset(p, 0, sizeof(UA_ReferenceTypeAttributes)); }
static UA_INLINE UA_ReferenceTypeAttributes * UA_ReferenceTypeAttributes_new(void) { return (UA_ReferenceTypeAttributes*) UA_new(&UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES]); }
static UA_INLINE UA_StatusCode UA_ReferenceTypeAttributes_copy(const UA_ReferenceTypeAttributes *src, UA_ReferenceTypeAttributes *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES]); }
static UA_INLINE void UA_ReferenceTypeAttributes_deleteMembers(UA_ReferenceTypeAttributes *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES]); }
static UA_INLINE void UA_ReferenceTypeAttributes_delete(UA_ReferenceTypeAttributes *p) { UA_delete(p, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES]); }

/**
 * BrowsePath
 * ----------
 * A request to translate a path into a node id. */
typedef struct {
    UA_NodeId startingNode;
    UA_RelativePath relativePath;
} UA_BrowsePath;

#define UA_TYPES_BROWSEPATH 100
static UA_INLINE void UA_BrowsePath_init(UA_BrowsePath *p) { memset(p, 0, sizeof(UA_BrowsePath)); }
static UA_INLINE UA_BrowsePath * UA_BrowsePath_new(void) { return (UA_BrowsePath*) UA_new(&UA_TYPES[UA_TYPES_BROWSEPATH]); }
static UA_INLINE UA_StatusCode UA_BrowsePath_copy(const UA_BrowsePath *src, UA_BrowsePath *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_BROWSEPATH]); }
static UA_INLINE void UA_BrowsePath_deleteMembers(UA_BrowsePath *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_BROWSEPATH]); }
static UA_INLINE void UA_BrowsePath_delete(UA_BrowsePath *p) { UA_delete(p, &UA_TYPES[UA_TYPES_BROWSEPATH]); }

/**
 * UnregisterNodesResponse
 * -----------------------
 * Unregisters one or more previously registered nodes. */
typedef struct {
    UA_ResponseHeader responseHeader;
} UA_UnregisterNodesResponse;

#define UA_TYPES_UNREGISTERNODESRESPONSE 101
static UA_INLINE void UA_UnregisterNodesResponse_init(UA_UnregisterNodesResponse *p) { memset(p, 0, sizeof(UA_UnregisterNodesResponse)); }
static UA_INLINE UA_UnregisterNodesResponse * UA_UnregisterNodesResponse_new(void) { return (UA_UnregisterNodesResponse*) UA_new(&UA_TYPES[UA_TYPES_UNREGISTERNODESRESPONSE]); }
static UA_INLINE UA_StatusCode UA_UnregisterNodesResponse_copy(const UA_UnregisterNodesResponse *src, UA_UnregisterNodesResponse *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_UNREGISTERNODESRESPONSE]); }
static UA_INLINE void UA_UnregisterNodesResponse_deleteMembers(UA_UnregisterNodesResponse *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_UNREGISTERNODESRESPONSE]); }
static UA_INLINE void UA_UnregisterNodesResponse_delete(UA_UnregisterNodesResponse *p) { UA_delete(p, &UA_TYPES[UA_TYPES_UNREGISTERNODESRESPONSE]); }

/**
 * WriteRequest
 * ------------
 */
typedef struct {
    UA_RequestHeader requestHeader;
    size_t nodesToWriteSize;
    UA_WriteValue *nodesToWrite;
} UA_WriteRequest;

#define UA_TYPES_WRITEREQUEST 102
static UA_INLINE void UA_WriteRequest_init(UA_WriteRequest *p) { memset(p, 0, sizeof(UA_WriteRequest)); }
static UA_INLINE UA_WriteRequest * UA_WriteRequest_new(void) { return (UA_WriteRequest*) UA_new(&UA_TYPES[UA_TYPES_WRITEREQUEST]); }
static UA_INLINE UA_StatusCode UA_WriteRequest_copy(const UA_WriteRequest *src, UA_WriteRequest *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_WRITEREQUEST]); }
static UA_INLINE void UA_WriteRequest_deleteMembers(UA_WriteRequest *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_WRITEREQUEST]); }
static UA_INLINE void UA_WriteRequest_delete(UA_WriteRequest *p) { UA_delete(p, &UA_TYPES[UA_TYPES_WRITEREQUEST]); }

/**
 * ObjectAttributes
 * ----------------
 * The attributes for an object node. */
typedef struct {
    UA_UInt32 specifiedAttributes;
    UA_LocalizedText displayName;
    UA_LocalizedText description;
    UA_UInt32 writeMask;
    UA_UInt32 userWriteMask;
    UA_Byte eventNotifier;
} UA_ObjectAttributes;

#define UA_TYPES_OBJECTATTRIBUTES 103
static UA_INLINE void UA_ObjectAttributes_init(UA_ObjectAttributes *p) { memset(p, 0, sizeof(UA_ObjectAttributes)); }
static UA_INLINE UA_ObjectAttributes * UA_ObjectAttributes_new(void) { return (UA_ObjectAttributes*) UA_new(&UA_TYPES[UA_TYPES_OBJECTATTRIBUTES]); }
static UA_INLINE UA_StatusCode UA_ObjectAttributes_copy(const UA_ObjectAttributes *src, UA_ObjectAttributes *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES]); }
static UA_INLINE void UA_ObjectAttributes_deleteMembers(UA_ObjectAttributes *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES]); }
static UA_INLINE void UA_ObjectAttributes_delete(UA_ObjectAttributes *p) { UA_delete(p, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES]); }

/**
 * BrowseDescription
 * -----------------
 * A request to browse the the references from a node. */
typedef struct {
    UA_NodeId nodeId;
    UA_BrowseDirection browseDirection;
    UA_NodeId referenceTypeId;
    UA_Boolean includeSubtypes;
    UA_UInt32 nodeClassMask;
    UA_UInt32 resultMask;
} UA_BrowseDescription;

#define UA_TYPES_BROWSEDESCRIPTION 104
static UA_INLINE void UA_BrowseDescription_init(UA_BrowseDescription *p) { memset(p, 0, sizeof(UA_BrowseDescription)); }
static UA_INLINE UA_BrowseDescription * UA_BrowseDescription_new(void) { return (UA_BrowseDescription*) UA_new(&UA_TYPES[UA_TYPES_BROWSEDESCRIPTION]); }
static UA_INLINE UA_StatusCode UA_BrowseDescription_copy(const UA_BrowseDescription *src, UA_BrowseDescription *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_BROWSEDESCRIPTION]); }
static UA_INLINE void UA_BrowseDescription_deleteMembers(UA_BrowseDescription *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_BROWSEDESCRIPTION]); }
static UA_INLINE void UA_BrowseDescription_delete(UA_BrowseDescription *p) { UA_delete(p, &UA_TYPES[UA_TYPES_BROWSEDESCRIPTION]); }

/**
 * RepublishRequest
 * ----------------
 */
typedef struct {
    UA_RequestHeader requestHeader;
    UA_UInt32 subscriptionId;
    UA_UInt32 retransmitSequenceNumber;
} UA_RepublishRequest;

#define UA_TYPES_REPUBLISHREQUEST 105
static UA_INLINE void UA_RepublishRequest_init(UA_RepublishRequest *p) { memset(p, 0, sizeof(UA_RepublishRequest)); }
static UA_INLINE UA_RepublishRequest * UA_RepublishRequest_new(void) { return (UA_RepublishRequest*) UA_new(&UA_TYPES[UA_TYPES_REPUBLISHREQUEST]); }
static UA_INLINE UA_StatusCode UA_RepublishRequest_copy(const UA_RepublishRequest *src, UA_RepublishRequest *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_REPUBLISHREQUEST]); }
static UA_INLINE void UA_RepublishRequest_deleteMembers(UA_RepublishRequest *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_REPUBLISHREQUEST]); }
static UA_INLINE void UA_RepublishRequest_delete(UA_RepublishRequest *p) { UA_delete(p, &UA_TYPES[UA_TYPES_REPUBLISHREQUEST]); }

/**
 * GetEndpointsRequest
 * -------------------
 * Gets the endpoints used by the server. */
typedef struct {
    UA_RequestHeader requestHeader;
    UA_String endpointUrl;
    size_t localeIdsSize;
    UA_String *localeIds;
    size_t profileUrisSize;
    UA_String *profileUris;
} UA_GetEndpointsRequest;

#define UA_TYPES_GETENDPOINTSREQUEST 106
static UA_INLINE void UA_GetEndpointsRequest_init(UA_GetEndpointsRequest *p) { memset(p, 0, sizeof(UA_GetEndpointsRequest)); }
static UA_INLINE UA_GetEndpointsRequest * UA_GetEndpointsRequest_new(void) { return (UA_GetEndpointsRequest*) UA_new(&UA_TYPES[UA_TYPES_GETENDPOINTSREQUEST]); }
static UA_INLINE UA_StatusCode UA_GetEndpointsRequest_copy(const UA_GetEndpointsRequest *src, UA_GetEndpointsRequest *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_GETENDPOINTSREQUEST]); }
static UA_INLINE void UA_GetEndpointsRequest_deleteMembers(UA_GetEndpointsRequest *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_GETENDPOINTSREQUEST]); }
static UA_INLINE void UA_GetEndpointsRequest_delete(UA_GetEndpointsRequest *p) { UA_delete(p, &UA_TYPES[UA_TYPES_GETENDPOINTSREQUEST]); }

/**
 * PublishRequest
 * --------------
 */
typedef struct {
    UA_RequestHeader requestHeader;
    size_t subscriptionAcknowledgementsSize;
    UA_SubscriptionAcknowledgement *subscriptionAcknowledgements;
} UA_PublishRequest;

#define UA_TYPES_PUBLISHREQUEST 107
static UA_INLINE void UA_PublishRequest_init(UA_PublishRequest *p) { memset(p, 0, sizeof(UA_PublishRequest)); }
static UA_INLINE UA_PublishRequest * UA_PublishRequest_new(void) { return (UA_PublishRequest*) UA_new(&UA_TYPES[UA_TYPES_PUBLISHREQUEST]); }
static UA_INLINE UA_StatusCode UA_PublishRequest_copy(const UA_PublishRequest *src, UA_PublishRequest *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_PUBLISHREQUEST]); }
static UA_INLINE void UA_PublishRequest_deleteMembers(UA_PublishRequest *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_PUBLISHREQUEST]); }
static UA_INLINE void UA_PublishRequest_delete(UA_PublishRequest *p) { UA_delete(p, &UA_TYPES[UA_TYPES_PUBLISHREQUEST]); }

/**
 * AddNodesResponse
 * ----------------
 * Adds one or more nodes to the server address space. */
typedef struct {
    UA_ResponseHeader responseHeader;
    size_t resultsSize;
    UA_AddNodesResult *results;
    size_t diagnosticInfosSize;
    UA_DiagnosticInfo *diagnosticInfos;
} UA_AddNodesResponse;

#define UA_TYPES_ADDNODESRESPONSE 108
static UA_INLINE void UA_AddNodesResponse_init(UA_AddNodesResponse *p) { memset(p, 0, sizeof(UA_AddNodesResponse)); }
static UA_INLINE UA_AddNodesResponse * UA_AddNodesResponse_new(void) { return (UA_AddNodesResponse*) UA_new(&UA_TYPES[UA_TYPES_ADDNODESRESPONSE]); }
static UA_INLINE UA_StatusCode UA_AddNodesResponse_copy(const UA_AddNodesResponse *src, UA_AddNodesResponse *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_ADDNODESRESPONSE]); }
static UA_INLINE void UA_AddNodesResponse_deleteMembers(UA_AddNodesResponse *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_ADDNODESRESPONSE]); }
static UA_INLINE void UA_AddNodesResponse_delete(UA_AddNodesResponse *p) { UA_delete(p, &UA_TYPES[UA_TYPES_ADDNODESRESPONSE]); }

/**
 * CloseSecureChannelResponse
 * --------------------------
 * Closes a secure channel. */
typedef struct {
    UA_ResponseHeader responseHeader;
} UA_CloseSecureChannelResponse;

#define UA_TYPES_CLOSESECURECHANNELRESPONSE 109
static UA_INLINE void UA_CloseSecureChannelResponse_init(UA_CloseSecureChannelResponse *p) { memset(p, 0, sizeof(UA_CloseSecureChannelResponse)); }
static UA_INLINE UA_CloseSecureChannelResponse * UA_CloseSecureChannelResponse_new(void) { return (UA_CloseSecureChannelResponse*) UA_new(&UA_TYPES[UA_TYPES_CLOSESECURECHANNELRESPONSE]); }
static UA_INLINE UA_StatusCode UA_CloseSecureChannelResponse_copy(const UA_CloseSecureChannelResponse *src, UA_CloseSecureChannelResponse *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_CLOSESECURECHANNELRESPONSE]); }
static UA_INLINE void UA_CloseSecureChannelResponse_deleteMembers(UA_CloseSecureChannelResponse *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_CLOSESECURECHANNELRESPONSE]); }
static UA_INLINE void UA_CloseSecureChannelResponse_delete(UA_CloseSecureChannelResponse *p) { UA_delete(p, &UA_TYPES[UA_TYPES_CLOSESECURECHANNELRESPONSE]); }

/**
 * FindServersRequest
 * ------------------
 * Finds the servers known to the discovery server. */
typedef struct {
    UA_RequestHeader requestHeader;
    UA_String endpointUrl;
    size_t localeIdsSize;
    UA_String *localeIds;
    size_t serverUrisSize;
    UA_String *serverUris;
} UA_FindServersRequest;

#define UA_TYPES_FINDSERVERSREQUEST 110
static UA_INLINE void UA_FindServersRequest_init(UA_FindServersRequest *p) { memset(p, 0, sizeof(UA_FindServersRequest)); }
static UA_INLINE UA_FindServersRequest * UA_FindServersRequest_new(void) { return (UA_FindServersRequest*) UA_new(&UA_TYPES[UA_TYPES_FINDSERVERSREQUEST]); }
static UA_INLINE UA_StatusCode UA_FindServersRequest_copy(const UA_FindServersRequest *src, UA_FindServersRequest *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_FINDSERVERSREQUEST]); }
static UA_INLINE void UA_FindServersRequest_deleteMembers(UA_FindServersRequest *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_FINDSERVERSREQUEST]); }
static UA_INLINE void UA_FindServersRequest_delete(UA_FindServersRequest *p) { UA_delete(p, &UA_TYPES[UA_TYPES_FINDSERVERSREQUEST]); }

/**
 * ReferenceDescription
 * --------------------
 * The description of a reference. */
typedef struct {
    UA_NodeId referenceTypeId;
    UA_Boolean isForward;
    UA_ExpandedNodeId nodeId;
    UA_QualifiedName browseName;
    UA_LocalizedText displayName;
    UA_NodeClass nodeClass;
    UA_ExpandedNodeId typeDefinition;
} UA_ReferenceDescription;

#define UA_TYPES_REFERENCEDESCRIPTION 111
static UA_INLINE void UA_ReferenceDescription_init(UA_ReferenceDescription *p) { memset(p, 0, sizeof(UA_ReferenceDescription)); }
static UA_INLINE UA_ReferenceDescription * UA_ReferenceDescription_new(void) { return (UA_ReferenceDescription*) UA_new(&UA_TYPES[UA_TYPES_REFERENCEDESCRIPTION]); }
static UA_INLINE UA_StatusCode UA_ReferenceDescription_copy(const UA_ReferenceDescription *src, UA_ReferenceDescription *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_REFERENCEDESCRIPTION]); }
static UA_INLINE void UA_ReferenceDescription_deleteMembers(UA_ReferenceDescription *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_REFERENCEDESCRIPTION]); }
static UA_INLINE void UA_ReferenceDescription_delete(UA_ReferenceDescription *p) { UA_delete(p, &UA_TYPES[UA_TYPES_REFERENCEDESCRIPTION]); }

/**
 * SetPublishingModeResponse
 * -------------------------
 */
typedef struct {
    UA_ResponseHeader responseHeader;
    size_t resultsSize;
    UA_StatusCode *results;
    size_t diagnosticInfosSize;
    UA_DiagnosticInfo *diagnosticInfos;
} UA_SetPublishingModeResponse;

#define UA_TYPES_SETPUBLISHINGMODERESPONSE 112
static UA_INLINE void UA_SetPublishingModeResponse_init(UA_SetPublishingModeResponse *p) { memset(p, 0, sizeof(UA_SetPublishingModeResponse)); }
static UA_INLINE UA_SetPublishingModeResponse * UA_SetPublishingModeResponse_new(void) { return (UA_SetPublishingModeResponse*) UA_new(&UA_TYPES[UA_TYPES_SETPUBLISHINGMODERESPONSE]); }
static UA_INLINE UA_StatusCode UA_SetPublishingModeResponse_copy(const UA_SetPublishingModeResponse *src, UA_SetPublishingModeResponse *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_SETPUBLISHINGMODERESPONSE]); }
static UA_INLINE void UA_SetPublishingModeResponse_deleteMembers(UA_SetPublishingModeResponse *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_SETPUBLISHINGMODERESPONSE]); }
static UA_INLINE void UA_SetPublishingModeResponse_delete(UA_SetPublishingModeResponse *p) { UA_delete(p, &UA_TYPES[UA_TYPES_SETPUBLISHINGMODERESPONSE]); }

/**
 * ContentFilterResult
 * -------------------
 */
typedef struct {
    size_t elementResultsSize;
    UA_ContentFilterElementResult *elementResults;
    size_t elementDiagnosticInfosSize;
    UA_DiagnosticInfo *elementDiagnosticInfos;
} UA_ContentFilterResult;

#define UA_TYPES_CONTENTFILTERRESULT 113
static UA_INLINE void UA_ContentFilterResult_init(UA_ContentFilterResult *p) { memset(p, 0, sizeof(UA_ContentFilterResult)); }
static UA_INLINE UA_ContentFilterResult * UA_ContentFilterResult_new(void) { return (UA_ContentFilterResult*) UA_new(&UA_TYPES[UA_TYPES_CONTENTFILTERRESULT]); }
static UA_INLINE UA_StatusCode UA_ContentFilterResult_copy(const UA_ContentFilterResult *src, UA_ContentFilterResult *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_CONTENTFILTERRESULT]); }
static UA_INLINE void UA_ContentFilterResult_deleteMembers(UA_ContentFilterResult *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_CONTENTFILTERRESULT]); }
static UA_INLINE void UA_ContentFilterResult_delete(UA_ContentFilterResult *p) { UA_delete(p, &UA_TYPES[UA_TYPES_CONTENTFILTERRESULT]); }

/**
 * AddReferencesItem
 * -----------------
 * A request to add a reference to the server address space. */
typedef struct {
    UA_NodeId sourceNodeId;
    UA_NodeId referenceTypeId;
    UA_Boolean isForward;
    UA_String targetServerUri;
    UA_ExpandedNodeId targetNodeId;
    UA_NodeClass targetNodeClass;
} UA_AddReferencesItem;

#define UA_TYPES_ADDREFERENCESITEM 114
static UA_INLINE void UA_AddReferencesItem_init(UA_AddReferencesItem *p) { memset(p, 0, sizeof(UA_AddReferencesItem)); }
static UA_INLINE UA_AddReferencesItem * UA_AddReferencesItem_new(void) { return (UA_AddReferencesItem*) UA_new(&UA_TYPES[UA_TYPES_ADDREFERENCESITEM]); }
static UA_INLINE UA_StatusCode UA_AddReferencesItem_copy(const UA_AddReferencesItem *src, UA_AddReferencesItem *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_ADDREFERENCESITEM]); }
static UA_INLINE void UA_AddReferencesItem_deleteMembers(UA_AddReferencesItem *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_ADDREFERENCESITEM]); }
static UA_INLINE void UA_AddReferencesItem_delete(UA_AddReferencesItem *p) { UA_delete(p, &UA_TYPES[UA_TYPES_ADDREFERENCESITEM]); }

/**
 * QueryDataDescription
 * --------------------
 */
typedef struct {
    UA_RelativePath relativePath;
    UA_UInt32 attributeId;
    UA_String indexRange;
} UA_QueryDataDescription;

#define UA_TYPES_QUERYDATADESCRIPTION 115
static UA_INLINE void UA_QueryDataDescription_init(UA_QueryDataDescription *p) { memset(p, 0, sizeof(UA_QueryDataDescription)); }
static UA_INLINE UA_QueryDataDescription * UA_QueryDataDescription_new(void) { return (UA_QueryDataDescription*) UA_new(&UA_TYPES[UA_TYPES_QUERYDATADESCRIPTION]); }
static UA_INLINE UA_StatusCode UA_QueryDataDescription_copy(const UA_QueryDataDescription *src, UA_QueryDataDescription *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_QUERYDATADESCRIPTION]); }
static UA_INLINE void UA_QueryDataDescription_deleteMembers(UA_QueryDataDescription *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_QUERYDATADESCRIPTION]); }
static UA_INLINE void UA_QueryDataDescription_delete(UA_QueryDataDescription *p) { UA_delete(p, &UA_TYPES[UA_TYPES_QUERYDATADESCRIPTION]); }

/**
 * CreateSubscriptionResponse
 * --------------------------
 */
typedef struct {
    UA_ResponseHeader responseHeader;
    UA_UInt32 subscriptionId;
    UA_Double revisedPublishingInterval;
    UA_UInt32 revisedLifetimeCount;
    UA_UInt32 revisedMaxKeepAliveCount;
} UA_CreateSubscriptionResponse;

#define UA_TYPES_CREATESUBSCRIPTIONRESPONSE 116
static UA_INLINE void UA_CreateSubscriptionResponse_init(UA_CreateSubscriptionResponse *p) { memset(p, 0, sizeof(UA_CreateSubscriptionResponse)); }
static UA_INLINE UA_CreateSubscriptionResponse * UA_CreateSubscriptionResponse_new(void) { return (UA_CreateSubscriptionResponse*) UA_new(&UA_TYPES[UA_TYPES_CREATESUBSCRIPTIONRESPONSE]); }
static UA_INLINE UA_StatusCode UA_CreateSubscriptionResponse_copy(const UA_CreateSubscriptionResponse *src, UA_CreateSubscriptionResponse *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_CREATESUBSCRIPTIONRESPONSE]); }
static UA_INLINE void UA_CreateSubscriptionResponse_deleteMembers(UA_CreateSubscriptionResponse *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_CREATESUBSCRIPTIONRESPONSE]); }
static UA_INLINE void UA_CreateSubscriptionResponse_delete(UA_CreateSubscriptionResponse *p) { UA_delete(p, &UA_TYPES[UA_TYPES_CREATESUBSCRIPTIONRESPONSE]); }

/**
 * DeleteSubscriptionsResponse
 * ---------------------------
 */
typedef struct {
    UA_ResponseHeader responseHeader;
    size_t resultsSize;
    UA_StatusCode *results;
    size_t diagnosticInfosSize;
    UA_DiagnosticInfo *diagnosticInfos;
} UA_DeleteSubscriptionsResponse;

#define UA_TYPES_DELETESUBSCRIPTIONSRESPONSE 117
static UA_INLINE void UA_DeleteSubscriptionsResponse_init(UA_DeleteSubscriptionsResponse *p) { memset(p, 0, sizeof(UA_DeleteSubscriptionsResponse)); }
static UA_INLINE UA_DeleteSubscriptionsResponse * UA_DeleteSubscriptionsResponse_new(void) { return (UA_DeleteSubscriptionsResponse*) UA_new(&UA_TYPES[UA_TYPES_DELETESUBSCRIPTIONSRESPONSE]); }
static UA_INLINE UA_StatusCode UA_DeleteSubscriptionsResponse_copy(const UA_DeleteSubscriptionsResponse *src, UA_DeleteSubscriptionsResponse *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_DELETESUBSCRIPTIONSRESPONSE]); }
static UA_INLINE void UA_DeleteSubscriptionsResponse_deleteMembers(UA_DeleteSubscriptionsResponse *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_DELETESUBSCRIPTIONSRESPONSE]); }
static UA_INLINE void UA_DeleteSubscriptionsResponse_delete(UA_DeleteSubscriptionsResponse *p) { UA_delete(p, &UA_TYPES[UA_TYPES_DELETESUBSCRIPTIONSRESPONSE]); }

/**
 * WriteResponse
 * -------------
 */
typedef struct {
    UA_ResponseHeader responseHeader;
    size_t resultsSize;
    UA_StatusCode *results;
    size_t diagnosticInfosSize;
    UA_DiagnosticInfo *diagnosticInfos;
} UA_WriteResponse;

#define UA_TYPES_WRITERESPONSE 118
static UA_INLINE void UA_WriteResponse_init(UA_WriteResponse *p) { memset(p, 0, sizeof(UA_WriteResponse)); }
static UA_INLINE UA_WriteResponse * UA_WriteResponse_new(void) { return (UA_WriteResponse*) UA_new(&UA_TYPES[UA_TYPES_WRITERESPONSE]); }
static UA_INLINE UA_StatusCode UA_WriteResponse_copy(const UA_WriteResponse *src, UA_WriteResponse *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_WRITERESPONSE]); }
static UA_INLINE void UA_WriteResponse_deleteMembers(UA_WriteResponse *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_WRITERESPONSE]); }
static UA_INLINE void UA_WriteResponse_delete(UA_WriteResponse *p) { UA_delete(p, &UA_TYPES[UA_TYPES_WRITERESPONSE]); }

/**
 * DeleteReferencesResponse
 * ------------------------
 * Delete one or more references from the server address space. */
typedef struct {
    UA_ResponseHeader responseHeader;
    size_t resultsSize;
    UA_StatusCode *results;
    size_t diagnosticInfosSize;
    UA_DiagnosticInfo *diagnosticInfos;
} UA_DeleteReferencesResponse;

#define UA_TYPES_DELETEREFERENCESRESPONSE 119
static UA_INLINE void UA_DeleteReferencesResponse_init(UA_DeleteReferencesResponse *p) { memset(p, 0, sizeof(UA_DeleteReferencesResponse)); }
static UA_INLINE UA_DeleteReferencesResponse * UA_DeleteReferencesResponse_new(void) { return (UA_DeleteReferencesResponse*) UA_new(&UA_TYPES[UA_TYPES_DELETEREFERENCESRESPONSE]); }
static UA_INLINE UA_StatusCode UA_DeleteReferencesResponse_copy(const UA_DeleteReferencesResponse *src, UA_DeleteReferencesResponse *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_DELETEREFERENCESRESPONSE]); }
static UA_INLINE void UA_DeleteReferencesResponse_deleteMembers(UA_DeleteReferencesResponse *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_DELETEREFERENCESRESPONSE]); }
static UA_INLINE void UA_DeleteReferencesResponse_delete(UA_DeleteReferencesResponse *p) { UA_delete(p, &UA_TYPES[UA_TYPES_DELETEREFERENCESRESPONSE]); }

/**
 * CreateMonitoredItemsResponse
 * ----------------------------
 */
typedef struct {
    UA_ResponseHeader responseHeader;
    size_t resultsSize;
    UA_MonitoredItemCreateResult *results;
    size_t diagnosticInfosSize;
    UA_DiagnosticInfo *diagnosticInfos;
} UA_CreateMonitoredItemsResponse;

#define UA_TYPES_CREATEMONITOREDITEMSRESPONSE 120
static UA_INLINE void UA_CreateMonitoredItemsResponse_init(UA_CreateMonitoredItemsResponse *p) { memset(p, 0, sizeof(UA_CreateMonitoredItemsResponse)); }
static UA_INLINE UA_CreateMonitoredItemsResponse * UA_CreateMonitoredItemsResponse_new(void) { return (UA_CreateMonitoredItemsResponse*) UA_new(&UA_TYPES[UA_TYPES_CREATEMONITOREDITEMSRESPONSE]); }
static UA_INLINE UA_StatusCode UA_CreateMonitoredItemsResponse_copy(const UA_CreateMonitoredItemsResponse *src, UA_CreateMonitoredItemsResponse *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_CREATEMONITOREDITEMSRESPONSE]); }
static UA_INLINE void UA_CreateMonitoredItemsResponse_deleteMembers(UA_CreateMonitoredItemsResponse *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_CREATEMONITOREDITEMSRESPONSE]); }
static UA_INLINE void UA_CreateMonitoredItemsResponse_delete(UA_CreateMonitoredItemsResponse *p) { UA_delete(p, &UA_TYPES[UA_TYPES_CREATEMONITOREDITEMSRESPONSE]); }

/**
 * CallResponse
 * ------------
 */
typedef struct {
    UA_ResponseHeader responseHeader;
    size_t resultsSize;
    UA_CallMethodResult *results;
    size_t diagnosticInfosSize;
    UA_DiagnosticInfo *diagnosticInfos;
} UA_CallResponse;

#define UA_TYPES_CALLRESPONSE 121
static UA_INLINE void UA_CallResponse_init(UA_CallResponse *p) { memset(p, 0, sizeof(UA_CallResponse)); }
static UA_INLINE UA_CallResponse * UA_CallResponse_new(void) { return (UA_CallResponse*) UA_new(&UA_TYPES[UA_TYPES_CALLRESPONSE]); }
static UA_INLINE UA_StatusCode UA_CallResponse_copy(const UA_CallResponse *src, UA_CallResponse *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_CALLRESPONSE]); }
static UA_INLINE void UA_CallResponse_deleteMembers(UA_CallResponse *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_CALLRESPONSE]); }
static UA_INLINE void UA_CallResponse_delete(UA_CallResponse *p) { UA_delete(p, &UA_TYPES[UA_TYPES_CALLRESPONSE]); }

/**
 * DeleteNodesResponse
 * -------------------
 * Delete one or more nodes from the server address space. */
typedef struct {
    UA_ResponseHeader responseHeader;
    size_t resultsSize;
    UA_StatusCode *results;
    size_t diagnosticInfosSize;
    UA_DiagnosticInfo *diagnosticInfos;
} UA_DeleteNodesResponse;

#define UA_TYPES_DELETENODESRESPONSE 122
static UA_INLINE void UA_DeleteNodesResponse_init(UA_DeleteNodesResponse *p) { memset(p, 0, sizeof(UA_DeleteNodesResponse)); }
static UA_INLINE UA_DeleteNodesResponse * UA_DeleteNodesResponse_new(void) { return (UA_DeleteNodesResponse*) UA_new(&UA_TYPES[UA_TYPES_DELETENODESRESPONSE]); }
static UA_INLINE UA_StatusCode UA_DeleteNodesResponse_copy(const UA_DeleteNodesResponse *src, UA_DeleteNodesResponse *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_DELETENODESRESPONSE]); }
static UA_INLINE void UA_DeleteNodesResponse_deleteMembers(UA_DeleteNodesResponse *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_DELETENODESRESPONSE]); }
static UA_INLINE void UA_DeleteNodesResponse_delete(UA_DeleteNodesResponse *p) { UA_delete(p, &UA_TYPES[UA_TYPES_DELETENODESRESPONSE]); }

/**
 * RepublishResponse
 * -----------------
 */
typedef struct {
    UA_ResponseHeader responseHeader;
    UA_NotificationMessage notificationMessage;
} UA_RepublishResponse;

#define UA_TYPES_REPUBLISHRESPONSE 123
static UA_INLINE void UA_RepublishResponse_init(UA_RepublishResponse *p) { memset(p, 0, sizeof(UA_RepublishResponse)); }
static UA_INLINE UA_RepublishResponse * UA_RepublishResponse_new(void) { return (UA_RepublishResponse*) UA_new(&UA_TYPES[UA_TYPES_REPUBLISHRESPONSE]); }
static UA_INLINE UA_StatusCode UA_RepublishResponse_copy(const UA_RepublishResponse *src, UA_RepublishResponse *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_REPUBLISHRESPONSE]); }
static UA_INLINE void UA_RepublishResponse_deleteMembers(UA_RepublishResponse *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_REPUBLISHRESPONSE]); }
static UA_INLINE void UA_RepublishResponse_delete(UA_RepublishResponse *p) { UA_delete(p, &UA_TYPES[UA_TYPES_REPUBLISHRESPONSE]); }

/**
 * MonitoredItemCreateRequest
 * --------------------------
 */
typedef struct {
    UA_ReadValueId itemToMonitor;
    UA_MonitoringMode monitoringMode;
    UA_MonitoringParameters requestedParameters;
} UA_MonitoredItemCreateRequest;

#define UA_TYPES_MONITOREDITEMCREATEREQUEST 124
static UA_INLINE void UA_MonitoredItemCreateRequest_init(UA_MonitoredItemCreateRequest *p) { memset(p, 0, sizeof(UA_MonitoredItemCreateRequest)); }
static UA_INLINE UA_MonitoredItemCreateRequest * UA_MonitoredItemCreateRequest_new(void) { return (UA_MonitoredItemCreateRequest*) UA_new(&UA_TYPES[UA_TYPES_MONITOREDITEMCREATEREQUEST]); }
static UA_INLINE UA_StatusCode UA_MonitoredItemCreateRequest_copy(const UA_MonitoredItemCreateRequest *src, UA_MonitoredItemCreateRequest *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_MONITOREDITEMCREATEREQUEST]); }
static UA_INLINE void UA_MonitoredItemCreateRequest_deleteMembers(UA_MonitoredItemCreateRequest *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_MONITOREDITEMCREATEREQUEST]); }
static UA_INLINE void UA_MonitoredItemCreateRequest_delete(UA_MonitoredItemCreateRequest *p) { UA_delete(p, &UA_TYPES[UA_TYPES_MONITOREDITEMCREATEREQUEST]); }

/**
 * DeleteReferencesRequest
 * -----------------------
 * Delete one or more references from the server address space. */
typedef struct {
    UA_RequestHeader requestHeader;
    size_t referencesToDeleteSize;
    UA_DeleteReferencesItem *referencesToDelete;
} UA_DeleteReferencesRequest;

#define UA_TYPES_DELETEREFERENCESREQUEST 125
static UA_INLINE void UA_DeleteReferencesRequest_init(UA_DeleteReferencesRequest *p) { memset(p, 0, sizeof(UA_DeleteReferencesRequest)); }
static UA_INLINE UA_DeleteReferencesRequest * UA_DeleteReferencesRequest_new(void) { return (UA_DeleteReferencesRequest*) UA_new(&UA_TYPES[UA_TYPES_DELETEREFERENCESREQUEST]); }
static UA_INLINE UA_StatusCode UA_DeleteReferencesRequest_copy(const UA_DeleteReferencesRequest *src, UA_DeleteReferencesRequest *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_DELETEREFERENCESREQUEST]); }
static UA_INLINE void UA_DeleteReferencesRequest_deleteMembers(UA_DeleteReferencesRequest *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_DELETEREFERENCESREQUEST]); }
static UA_INLINE void UA_DeleteReferencesRequest_delete(UA_DeleteReferencesRequest *p) { UA_delete(p, &UA_TYPES[UA_TYPES_DELETEREFERENCESREQUEST]); }

/**
 * ReadResponse
 * ------------
 */
typedef struct {
    UA_ResponseHeader responseHeader;
    size_t resultsSize;
    UA_DataValue *results;
    size_t diagnosticInfosSize;
    UA_DiagnosticInfo *diagnosticInfos;
} UA_ReadResponse;

#define UA_TYPES_READRESPONSE 126
static UA_INLINE void UA_ReadResponse_init(UA_ReadResponse *p) { memset(p, 0, sizeof(UA_ReadResponse)); }
static UA_INLINE UA_ReadResponse * UA_ReadResponse_new(void) { return (UA_ReadResponse*) UA_new(&UA_TYPES[UA_TYPES_READRESPONSE]); }
static UA_INLINE UA_StatusCode UA_ReadResponse_copy(const UA_ReadResponse *src, UA_ReadResponse *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_READRESPONSE]); }
static UA_INLINE void UA_ReadResponse_deleteMembers(UA_ReadResponse *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_READRESPONSE]); }
static UA_INLINE void UA_ReadResponse_delete(UA_ReadResponse *p) { UA_delete(p, &UA_TYPES[UA_TYPES_READRESPONSE]); }

/**
 * AddReferencesRequest
 * --------------------
 * Adds one or more references to the server address space. */
typedef struct {
    UA_RequestHeader requestHeader;
    size_t referencesToAddSize;
    UA_AddReferencesItem *referencesToAdd;
} UA_AddReferencesRequest;

#define UA_TYPES_ADDREFERENCESREQUEST 127
static UA_INLINE void UA_AddReferencesRequest_init(UA_AddReferencesRequest *p) { memset(p, 0, sizeof(UA_AddReferencesRequest)); }
static UA_INLINE UA_AddReferencesRequest * UA_AddReferencesRequest_new(void) { return (UA_AddReferencesRequest*) UA_new(&UA_TYPES[UA_TYPES_ADDREFERENCESREQUEST]); }
static UA_INLINE UA_StatusCode UA_AddReferencesRequest_copy(const UA_AddReferencesRequest *src, UA_AddReferencesRequest *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_ADDREFERENCESREQUEST]); }
static UA_INLINE void UA_AddReferencesRequest_deleteMembers(UA_AddReferencesRequest *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_ADDREFERENCESREQUEST]); }
static UA_INLINE void UA_AddReferencesRequest_delete(UA_AddReferencesRequest *p) { UA_delete(p, &UA_TYPES[UA_TYPES_ADDREFERENCESREQUEST]); }

/**
 * ReadRequest
 * -----------
 */
typedef struct {
    UA_RequestHeader requestHeader;
    UA_Double maxAge;
    UA_TimestampsToReturn timestampsToReturn;
    size_t nodesToReadSize;
    UA_ReadValueId *nodesToRead;
} UA_ReadRequest;

#define UA_TYPES_READREQUEST 128
static UA_INLINE void UA_ReadRequest_init(UA_ReadRequest *p) { memset(p, 0, sizeof(UA_ReadRequest)); }
static UA_INLINE UA_ReadRequest * UA_ReadRequest_new(void) { return (UA_ReadRequest*) UA_new(&UA_TYPES[UA_TYPES_READREQUEST]); }
static UA_INLINE UA_StatusCode UA_ReadRequest_copy(const UA_ReadRequest *src, UA_ReadRequest *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_READREQUEST]); }
static UA_INLINE void UA_ReadRequest_deleteMembers(UA_ReadRequest *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_READREQUEST]); }
static UA_INLINE void UA_ReadRequest_delete(UA_ReadRequest *p) { UA_delete(p, &UA_TYPES[UA_TYPES_READREQUEST]); }

/**
 * OpenSecureChannelRequest
 * ------------------------
 * Creates a secure channel with a server. */
typedef struct {
    UA_RequestHeader requestHeader;
    UA_UInt32 clientProtocolVersion;
    UA_SecurityTokenRequestType requestType;
    UA_MessageSecurityMode securityMode;
    UA_ByteString clientNonce;
    UA_UInt32 requestedLifetime;
} UA_OpenSecureChannelRequest;

#define UA_TYPES_OPENSECURECHANNELREQUEST 129
static UA_INLINE void UA_OpenSecureChannelRequest_init(UA_OpenSecureChannelRequest *p) { memset(p, 0, sizeof(UA_OpenSecureChannelRequest)); }
static UA_INLINE UA_OpenSecureChannelRequest * UA_OpenSecureChannelRequest_new(void) { return (UA_OpenSecureChannelRequest*) UA_new(&UA_TYPES[UA_TYPES_OPENSECURECHANNELREQUEST]); }
static UA_INLINE UA_StatusCode UA_OpenSecureChannelRequest_copy(const UA_OpenSecureChannelRequest *src, UA_OpenSecureChannelRequest *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_OPENSECURECHANNELREQUEST]); }
static UA_INLINE void UA_OpenSecureChannelRequest_deleteMembers(UA_OpenSecureChannelRequest *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_OPENSECURECHANNELREQUEST]); }
static UA_INLINE void UA_OpenSecureChannelRequest_delete(UA_OpenSecureChannelRequest *p) { UA_delete(p, &UA_TYPES[UA_TYPES_OPENSECURECHANNELREQUEST]); }

/**
 * AddNodesItem
 * ------------
 * A request to add a node to the server address space. */
typedef struct {
    UA_ExpandedNodeId parentNodeId;
    UA_NodeId referenceTypeId;
    UA_ExpandedNodeId requestedNewNodeId;
    UA_QualifiedName browseName;
    UA_NodeClass nodeClass;
    UA_ExtensionObject nodeAttributes;
    UA_ExpandedNodeId typeDefinition;
} UA_AddNodesItem;

#define UA_TYPES_ADDNODESITEM 130
static UA_INLINE void UA_AddNodesItem_init(UA_AddNodesItem *p) { memset(p, 0, sizeof(UA_AddNodesItem)); }
static UA_INLINE UA_AddNodesItem * UA_AddNodesItem_new(void) { return (UA_AddNodesItem*) UA_new(&UA_TYPES[UA_TYPES_ADDNODESITEM]); }
static UA_INLINE UA_StatusCode UA_AddNodesItem_copy(const UA_AddNodesItem *src, UA_AddNodesItem *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_ADDNODESITEM]); }
static UA_INLINE void UA_AddNodesItem_deleteMembers(UA_AddNodesItem *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_ADDNODESITEM]); }
static UA_INLINE void UA_AddNodesItem_delete(UA_AddNodesItem *p) { UA_delete(p, &UA_TYPES[UA_TYPES_ADDNODESITEM]); }

/**
 * ApplicationDescription
 * ----------------------
 * Describes an application and how to find it. */
typedef struct {
    UA_String applicationUri;
    UA_String productUri;
    UA_LocalizedText applicationName;
    UA_ApplicationType applicationType;
    UA_String gatewayServerUri;
    UA_String discoveryProfileUri;
    size_t discoveryUrlsSize;
    UA_String *discoveryUrls;
} UA_ApplicationDescription;

#define UA_TYPES_APPLICATIONDESCRIPTION 131
static UA_INLINE void UA_ApplicationDescription_init(UA_ApplicationDescription *p) { memset(p, 0, sizeof(UA_ApplicationDescription)); }
static UA_INLINE UA_ApplicationDescription * UA_ApplicationDescription_new(void) { return (UA_ApplicationDescription*) UA_new(&UA_TYPES[UA_TYPES_APPLICATIONDESCRIPTION]); }
static UA_INLINE UA_StatusCode UA_ApplicationDescription_copy(const UA_ApplicationDescription *src, UA_ApplicationDescription *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_APPLICATIONDESCRIPTION]); }
static UA_INLINE void UA_ApplicationDescription_deleteMembers(UA_ApplicationDescription *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_APPLICATIONDESCRIPTION]); }
static UA_INLINE void UA_ApplicationDescription_delete(UA_ApplicationDescription *p) { UA_delete(p, &UA_TYPES[UA_TYPES_APPLICATIONDESCRIPTION]); }

/**
 * NodeTypeDescription
 * -------------------
 */
typedef struct {
    UA_ExpandedNodeId typeDefinitionNode;
    UA_Boolean includeSubTypes;
    size_t dataToReturnSize;
    UA_QueryDataDescription *dataToReturn;
} UA_NodeTypeDescription;

#define UA_TYPES_NODETYPEDESCRIPTION 132
static UA_INLINE void UA_NodeTypeDescription_init(UA_NodeTypeDescription *p) { memset(p, 0, sizeof(UA_NodeTypeDescription)); }
static UA_INLINE UA_NodeTypeDescription * UA_NodeTypeDescription_new(void) { return (UA_NodeTypeDescription*) UA_new(&UA_TYPES[UA_TYPES_NODETYPEDESCRIPTION]); }
static UA_INLINE UA_StatusCode UA_NodeTypeDescription_copy(const UA_NodeTypeDescription *src, UA_NodeTypeDescription *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_NODETYPEDESCRIPTION]); }
static UA_INLINE void UA_NodeTypeDescription_deleteMembers(UA_NodeTypeDescription *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_NODETYPEDESCRIPTION]); }
static UA_INLINE void UA_NodeTypeDescription_delete(UA_NodeTypeDescription *p) { UA_delete(p, &UA_TYPES[UA_TYPES_NODETYPEDESCRIPTION]); }

/**
 * FindServersResponse
 * -------------------
 * Finds the servers known to the discovery server. */
typedef struct {
    UA_ResponseHeader responseHeader;
    size_t serversSize;
    UA_ApplicationDescription *servers;
} UA_FindServersResponse;

#define UA_TYPES_FINDSERVERSRESPONSE 133
static UA_INLINE void UA_FindServersResponse_init(UA_FindServersResponse *p) { memset(p, 0, sizeof(UA_FindServersResponse)); }
static UA_INLINE UA_FindServersResponse * UA_FindServersResponse_new(void) { return (UA_FindServersResponse*) UA_new(&UA_TYPES[UA_TYPES_FINDSERVERSRESPONSE]); }
static UA_INLINE UA_StatusCode UA_FindServersResponse_copy(const UA_FindServersResponse *src, UA_FindServersResponse *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_FINDSERVERSRESPONSE]); }
static UA_INLINE void UA_FindServersResponse_deleteMembers(UA_FindServersResponse *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_FINDSERVERSRESPONSE]); }
static UA_INLINE void UA_FindServersResponse_delete(UA_FindServersResponse *p) { UA_delete(p, &UA_TYPES[UA_TYPES_FINDSERVERSRESPONSE]); }

/**
 * ServerStatusDataType
 * --------------------
 */
typedef struct {
    UA_DateTime startTime;
    UA_DateTime currentTime;
    UA_ServerState state;
    UA_BuildInfo buildInfo;
    UA_UInt32 secondsTillShutdown;
    UA_LocalizedText shutdownReason;
} UA_ServerStatusDataType;

#define UA_TYPES_SERVERSTATUSDATATYPE 134
static UA_INLINE void UA_ServerStatusDataType_init(UA_ServerStatusDataType *p) { memset(p, 0, sizeof(UA_ServerStatusDataType)); }
static UA_INLINE UA_ServerStatusDataType * UA_ServerStatusDataType_new(void) { return (UA_ServerStatusDataType*) UA_new(&UA_TYPES[UA_TYPES_SERVERSTATUSDATATYPE]); }
static UA_INLINE UA_StatusCode UA_ServerStatusDataType_copy(const UA_ServerStatusDataType *src, UA_ServerStatusDataType *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_SERVERSTATUSDATATYPE]); }
static UA_INLINE void UA_ServerStatusDataType_deleteMembers(UA_ServerStatusDataType *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_SERVERSTATUSDATATYPE]); }
static UA_INLINE void UA_ServerStatusDataType_delete(UA_ServerStatusDataType *p) { UA_delete(p, &UA_TYPES[UA_TYPES_SERVERSTATUSDATATYPE]); }

/**
 * AddReferencesResponse
 * ---------------------
 * Adds one or more references to the server address space. */
typedef struct {
    UA_ResponseHeader responseHeader;
    size_t resultsSize;
    UA_StatusCode *results;
    size_t diagnosticInfosSize;
    UA_DiagnosticInfo *diagnosticInfos;
} UA_AddReferencesResponse;

#define UA_TYPES_ADDREFERENCESRESPONSE 135
static UA_INLINE void UA_AddReferencesResponse_init(UA_AddReferencesResponse *p) { memset(p, 0, sizeof(UA_AddReferencesResponse)); }
static UA_INLINE UA_AddReferencesResponse * UA_AddReferencesResponse_new(void) { return (UA_AddReferencesResponse*) UA_new(&UA_TYPES[UA_TYPES_ADDREFERENCESRESPONSE]); }
static UA_INLINE UA_StatusCode UA_AddReferencesResponse_copy(const UA_AddReferencesResponse *src, UA_AddReferencesResponse *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_ADDREFERENCESRESPONSE]); }
static UA_INLINE void UA_AddReferencesResponse_deleteMembers(UA_AddReferencesResponse *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_ADDREFERENCESRESPONSE]); }
static UA_INLINE void UA_AddReferencesResponse_delete(UA_AddReferencesResponse *p) { UA_delete(p, &UA_TYPES[UA_TYPES_ADDREFERENCESRESPONSE]); }

/**
 * TranslateBrowsePathsToNodeIdsResponse
 * -------------------------------------
 * Translates one or more paths in the server address space. */
typedef struct {
    UA_ResponseHeader responseHeader;
    size_t resultsSize;
    UA_BrowsePathResult *results;
    size_t diagnosticInfosSize;
    UA_DiagnosticInfo *diagnosticInfos;
} UA_TranslateBrowsePathsToNodeIdsResponse;

#define UA_TYPES_TRANSLATEBROWSEPATHSTONODEIDSRESPONSE 136
static UA_INLINE void UA_TranslateBrowsePathsToNodeIdsResponse_init(UA_TranslateBrowsePathsToNodeIdsResponse *p) { memset(p, 0, sizeof(UA_TranslateBrowsePathsToNodeIdsResponse)); }
static UA_INLINE UA_TranslateBrowsePathsToNodeIdsResponse * UA_TranslateBrowsePathsToNodeIdsResponse_new(void) { return (UA_TranslateBrowsePathsToNodeIdsResponse*) UA_new(&UA_TYPES[UA_TYPES_TRANSLATEBROWSEPATHSTONODEIDSRESPONSE]); }
static UA_INLINE UA_StatusCode UA_TranslateBrowsePathsToNodeIdsResponse_copy(const UA_TranslateBrowsePathsToNodeIdsResponse *src, UA_TranslateBrowsePathsToNodeIdsResponse *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_TRANSLATEBROWSEPATHSTONODEIDSRESPONSE]); }
static UA_INLINE void UA_TranslateBrowsePathsToNodeIdsResponse_deleteMembers(UA_TranslateBrowsePathsToNodeIdsResponse *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_TRANSLATEBROWSEPATHSTONODEIDSRESPONSE]); }
static UA_INLINE void UA_TranslateBrowsePathsToNodeIdsResponse_delete(UA_TranslateBrowsePathsToNodeIdsResponse *p) { UA_delete(p, &UA_TYPES[UA_TYPES_TRANSLATEBROWSEPATHSTONODEIDSRESPONSE]); }

/**
 * ContentFilterElement
 * --------------------
 */
typedef struct {
    UA_FilterOperator filterOperator;
    size_t filterOperandsSize;
    UA_ExtensionObject *filterOperands;
} UA_ContentFilterElement;

#define UA_TYPES_CONTENTFILTERELEMENT 137
static UA_INLINE void UA_ContentFilterElement_init(UA_ContentFilterElement *p) { memset(p, 0, sizeof(UA_ContentFilterElement)); }
static UA_INLINE UA_ContentFilterElement * UA_ContentFilterElement_new(void) { return (UA_ContentFilterElement*) UA_new(&UA_TYPES[UA_TYPES_CONTENTFILTERELEMENT]); }
static UA_INLINE UA_StatusCode UA_ContentFilterElement_copy(const UA_ContentFilterElement *src, UA_ContentFilterElement *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_CONTENTFILTERELEMENT]); }
static UA_INLINE void UA_ContentFilterElement_deleteMembers(UA_ContentFilterElement *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_CONTENTFILTERELEMENT]); }
static UA_INLINE void UA_ContentFilterElement_delete(UA_ContentFilterElement *p) { UA_delete(p, &UA_TYPES[UA_TYPES_CONTENTFILTERELEMENT]); }

/**
 * TranslateBrowsePathsToNodeIdsRequest
 * ------------------------------------
 * Translates one or more paths in the server address space. */
typedef struct {
    UA_RequestHeader requestHeader;
    size_t browsePathsSize;
    UA_BrowsePath *browsePaths;
} UA_TranslateBrowsePathsToNodeIdsRequest;

#define UA_TYPES_TRANSLATEBROWSEPATHSTONODEIDSREQUEST 138
static UA_INLINE void UA_TranslateBrowsePathsToNodeIdsRequest_init(UA_TranslateBrowsePathsToNodeIdsRequest *p) { memset(p, 0, sizeof(UA_TranslateBrowsePathsToNodeIdsRequest)); }
static UA_INLINE UA_TranslateBrowsePathsToNodeIdsRequest * UA_TranslateBrowsePathsToNodeIdsRequest_new(void) { return (UA_TranslateBrowsePathsToNodeIdsRequest*) UA_new(&UA_TYPES[UA_TYPES_TRANSLATEBROWSEPATHSTONODEIDSREQUEST]); }
static UA_INLINE UA_StatusCode UA_TranslateBrowsePathsToNodeIdsRequest_copy(const UA_TranslateBrowsePathsToNodeIdsRequest *src, UA_TranslateBrowsePathsToNodeIdsRequest *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_TRANSLATEBROWSEPATHSTONODEIDSREQUEST]); }
static UA_INLINE void UA_TranslateBrowsePathsToNodeIdsRequest_deleteMembers(UA_TranslateBrowsePathsToNodeIdsRequest *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_TRANSLATEBROWSEPATHSTONODEIDSREQUEST]); }
static UA_INLINE void UA_TranslateBrowsePathsToNodeIdsRequest_delete(UA_TranslateBrowsePathsToNodeIdsRequest *p) { UA_delete(p, &UA_TYPES[UA_TYPES_TRANSLATEBROWSEPATHSTONODEIDSREQUEST]); }

/**
 * CloseSessionResponse
 * --------------------
 * Closes a session with the server. */
typedef struct {
    UA_ResponseHeader responseHeader;
} UA_CloseSessionResponse;

#define UA_TYPES_CLOSESESSIONRESPONSE 139
static UA_INLINE void UA_CloseSessionResponse_init(UA_CloseSessionResponse *p) { memset(p, 0, sizeof(UA_CloseSessionResponse)); }
static UA_INLINE UA_CloseSessionResponse * UA_CloseSessionResponse_new(void) { return (UA_CloseSessionResponse*) UA_new(&UA_TYPES[UA_TYPES_CLOSESESSIONRESPONSE]); }
static UA_INLINE UA_StatusCode UA_CloseSessionResponse_copy(const UA_CloseSessionResponse *src, UA_CloseSessionResponse *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_CLOSESESSIONRESPONSE]); }
static UA_INLINE void UA_CloseSessionResponse_deleteMembers(UA_CloseSessionResponse *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_CLOSESESSIONRESPONSE]); }
static UA_INLINE void UA_CloseSessionResponse_delete(UA_CloseSessionResponse *p) { UA_delete(p, &UA_TYPES[UA_TYPES_CLOSESESSIONRESPONSE]); }

/**
 * ServiceFault
 * ------------
 * The response returned by all services when there is a service level error. */
typedef struct {
    UA_ResponseHeader responseHeader;
} UA_ServiceFault;

#define UA_TYPES_SERVICEFAULT 140
static UA_INLINE void UA_ServiceFault_init(UA_ServiceFault *p) { memset(p, 0, sizeof(UA_ServiceFault)); }
static UA_INLINE UA_ServiceFault * UA_ServiceFault_new(void) { return (UA_ServiceFault*) UA_new(&UA_TYPES[UA_TYPES_SERVICEFAULT]); }
static UA_INLINE UA_StatusCode UA_ServiceFault_copy(const UA_ServiceFault *src, UA_ServiceFault *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_SERVICEFAULT]); }
static UA_INLINE void UA_ServiceFault_deleteMembers(UA_ServiceFault *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_SERVICEFAULT]); }
static UA_INLINE void UA_ServiceFault_delete(UA_ServiceFault *p) { UA_delete(p, &UA_TYPES[UA_TYPES_SERVICEFAULT]); }

/**
 * CreateMonitoredItemsRequest
 * ---------------------------
 */
typedef struct {
    UA_RequestHeader requestHeader;
    UA_UInt32 subscriptionId;
    UA_TimestampsToReturn timestampsToReturn;
    size_t itemsToCreateSize;
    UA_MonitoredItemCreateRequest *itemsToCreate;
} UA_CreateMonitoredItemsRequest;

#define UA_TYPES_CREATEMONITOREDITEMSREQUEST 141
static UA_INLINE void UA_CreateMonitoredItemsRequest_init(UA_CreateMonitoredItemsRequest *p) { memset(p, 0, sizeof(UA_CreateMonitoredItemsRequest)); }
static UA_INLINE UA_CreateMonitoredItemsRequest * UA_CreateMonitoredItemsRequest_new(void) { return (UA_CreateMonitoredItemsRequest*) UA_new(&UA_TYPES[UA_TYPES_CREATEMONITOREDITEMSREQUEST]); }
static UA_INLINE UA_StatusCode UA_CreateMonitoredItemsRequest_copy(const UA_CreateMonitoredItemsRequest *src, UA_CreateMonitoredItemsRequest *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_CREATEMONITOREDITEMSREQUEST]); }
static UA_INLINE void UA_CreateMonitoredItemsRequest_deleteMembers(UA_CreateMonitoredItemsRequest *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_CREATEMONITOREDITEMSREQUEST]); }
static UA_INLINE void UA_CreateMonitoredItemsRequest_delete(UA_CreateMonitoredItemsRequest *p) { UA_delete(p, &UA_TYPES[UA_TYPES_CREATEMONITOREDITEMSREQUEST]); }

/**
 * ContentFilter
 * -------------
 */
typedef struct {
    size_t elementsSize;
    UA_ContentFilterElement *elements;
} UA_ContentFilter;

#define UA_TYPES_CONTENTFILTER 142
static UA_INLINE void UA_ContentFilter_init(UA_ContentFilter *p) { memset(p, 0, sizeof(UA_ContentFilter)); }
static UA_INLINE UA_ContentFilter * UA_ContentFilter_new(void) { return (UA_ContentFilter*) UA_new(&UA_TYPES[UA_TYPES_CONTENTFILTER]); }
static UA_INLINE UA_StatusCode UA_ContentFilter_copy(const UA_ContentFilter *src, UA_ContentFilter *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_CONTENTFILTER]); }
static UA_INLINE void UA_ContentFilter_deleteMembers(UA_ContentFilter *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_CONTENTFILTER]); }
static UA_INLINE void UA_ContentFilter_delete(UA_ContentFilter *p) { UA_delete(p, &UA_TYPES[UA_TYPES_CONTENTFILTER]); }

/**
 * QueryFirstResponse
 * ------------------
 */
typedef struct {
    UA_ResponseHeader responseHeader;
    size_t queryDataSetsSize;
    UA_QueryDataSet *queryDataSets;
    UA_ByteString continuationPoint;
    size_t parsingResultsSize;
    UA_ParsingResult *parsingResults;
    size_t diagnosticInfosSize;
    UA_DiagnosticInfo *diagnosticInfos;
    UA_ContentFilterResult filterResult;
} UA_QueryFirstResponse;

#define UA_TYPES_QUERYFIRSTRESPONSE 143
static UA_INLINE void UA_QueryFirstResponse_init(UA_QueryFirstResponse *p) { memset(p, 0, sizeof(UA_QueryFirstResponse)); }
static UA_INLINE UA_QueryFirstResponse * UA_QueryFirstResponse_new(void) { return (UA_QueryFirstResponse*) UA_new(&UA_TYPES[UA_TYPES_QUERYFIRSTRESPONSE]); }
static UA_INLINE UA_StatusCode UA_QueryFirstResponse_copy(const UA_QueryFirstResponse *src, UA_QueryFirstResponse *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_QUERYFIRSTRESPONSE]); }
static UA_INLINE void UA_QueryFirstResponse_deleteMembers(UA_QueryFirstResponse *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_QUERYFIRSTRESPONSE]); }
static UA_INLINE void UA_QueryFirstResponse_delete(UA_QueryFirstResponse *p) { UA_delete(p, &UA_TYPES[UA_TYPES_QUERYFIRSTRESPONSE]); }

/**
 * AddNodesRequest
 * ---------------
 * Adds one or more nodes to the server address space. */
typedef struct {
    UA_RequestHeader requestHeader;
    size_t nodesToAddSize;
    UA_AddNodesItem *nodesToAdd;
} UA_AddNodesRequest;

#define UA_TYPES_ADDNODESREQUEST 144
static UA_INLINE void UA_AddNodesRequest_init(UA_AddNodesRequest *p) { memset(p, 0, sizeof(UA_AddNodesRequest)); }
static UA_INLINE UA_AddNodesRequest * UA_AddNodesRequest_new(void) { return (UA_AddNodesRequest*) UA_new(&UA_TYPES[UA_TYPES_ADDNODESREQUEST]); }
static UA_INLINE UA_StatusCode UA_AddNodesRequest_copy(const UA_AddNodesRequest *src, UA_AddNodesRequest *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_ADDNODESREQUEST]); }
static UA_INLINE void UA_AddNodesRequest_deleteMembers(UA_AddNodesRequest *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_ADDNODESREQUEST]); }
static UA_INLINE void UA_AddNodesRequest_delete(UA_AddNodesRequest *p) { UA_delete(p, &UA_TYPES[UA_TYPES_ADDNODESREQUEST]); }

/**
 * BrowseRequest
 * -------------
 * Browse the references for one or more nodes from the server address space. */
typedef struct {
    UA_RequestHeader requestHeader;
    UA_ViewDescription view;
    UA_UInt32 requestedMaxReferencesPerNode;
    size_t nodesToBrowseSize;
    UA_BrowseDescription *nodesToBrowse;
} UA_BrowseRequest;

#define UA_TYPES_BROWSEREQUEST 145
static UA_INLINE void UA_BrowseRequest_init(UA_BrowseRequest *p) { memset(p, 0, sizeof(UA_BrowseRequest)); }
static UA_INLINE UA_BrowseRequest * UA_BrowseRequest_new(void) { return (UA_BrowseRequest*) UA_new(&UA_TYPES[UA_TYPES_BROWSEREQUEST]); }
static UA_INLINE UA_StatusCode UA_BrowseRequest_copy(const UA_BrowseRequest *src, UA_BrowseRequest *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_BROWSEREQUEST]); }
static UA_INLINE void UA_BrowseRequest_deleteMembers(UA_BrowseRequest *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_BROWSEREQUEST]); }
static UA_INLINE void UA_BrowseRequest_delete(UA_BrowseRequest *p) { UA_delete(p, &UA_TYPES[UA_TYPES_BROWSEREQUEST]); }

/**
 * BrowseResult
 * ------------
 * The result of a browse operation. */
typedef struct {
    UA_StatusCode statusCode;
    UA_ByteString continuationPoint;
    size_t referencesSize;
    UA_ReferenceDescription *references;
} UA_BrowseResult;

#define UA_TYPES_BROWSERESULT 146
static UA_INLINE void UA_BrowseResult_init(UA_BrowseResult *p) { memset(p, 0, sizeof(UA_BrowseResult)); }
static UA_INLINE UA_BrowseResult * UA_BrowseResult_new(void) { return (UA_BrowseResult*) UA_new(&UA_TYPES[UA_TYPES_BROWSERESULT]); }
static UA_INLINE UA_StatusCode UA_BrowseResult_copy(const UA_BrowseResult *src, UA_BrowseResult *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_BROWSERESULT]); }
static UA_INLINE void UA_BrowseResult_deleteMembers(UA_BrowseResult *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_BROWSERESULT]); }
static UA_INLINE void UA_BrowseResult_delete(UA_BrowseResult *p) { UA_delete(p, &UA_TYPES[UA_TYPES_BROWSERESULT]); }

/**
 * CreateSessionRequest
 * --------------------
 * Creates a new session with the server. */
typedef struct {
    UA_RequestHeader requestHeader;
    UA_ApplicationDescription clientDescription;
    UA_String serverUri;
    UA_String endpointUrl;
    UA_String sessionName;
    UA_ByteString clientNonce;
    UA_ByteString clientCertificate;
    UA_Double requestedSessionTimeout;
    UA_UInt32 maxResponseMessageSize;
} UA_CreateSessionRequest;

#define UA_TYPES_CREATESESSIONREQUEST 147
static UA_INLINE void UA_CreateSessionRequest_init(UA_CreateSessionRequest *p) { memset(p, 0, sizeof(UA_CreateSessionRequest)); }
static UA_INLINE UA_CreateSessionRequest * UA_CreateSessionRequest_new(void) { return (UA_CreateSessionRequest*) UA_new(&UA_TYPES[UA_TYPES_CREATESESSIONREQUEST]); }
static UA_INLINE UA_StatusCode UA_CreateSessionRequest_copy(const UA_CreateSessionRequest *src, UA_CreateSessionRequest *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_CREATESESSIONREQUEST]); }
static UA_INLINE void UA_CreateSessionRequest_deleteMembers(UA_CreateSessionRequest *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_CREATESESSIONREQUEST]); }
static UA_INLINE void UA_CreateSessionRequest_delete(UA_CreateSessionRequest *p) { UA_delete(p, &UA_TYPES[UA_TYPES_CREATESESSIONREQUEST]); }

/**
 * EndpointDescription
 * -------------------
 * The description of a endpoint that can be used to access a server. */
typedef struct {
    UA_String endpointUrl;
    UA_ApplicationDescription server;
    UA_ByteString serverCertificate;
    UA_MessageSecurityMode securityMode;
    UA_String securityPolicyUri;
    size_t userIdentityTokensSize;
    UA_UserTokenPolicy *userIdentityTokens;
    UA_String transportProfileUri;
    UA_Byte securityLevel;
} UA_EndpointDescription;

#define UA_TYPES_ENDPOINTDESCRIPTION 148
static UA_INLINE void UA_EndpointDescription_init(UA_EndpointDescription *p) { memset(p, 0, sizeof(UA_EndpointDescription)); }
static UA_INLINE UA_EndpointDescription * UA_EndpointDescription_new(void) { return (UA_EndpointDescription*) UA_new(&UA_TYPES[UA_TYPES_ENDPOINTDESCRIPTION]); }
static UA_INLINE UA_StatusCode UA_EndpointDescription_copy(const UA_EndpointDescription *src, UA_EndpointDescription *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_ENDPOINTDESCRIPTION]); }
static UA_INLINE void UA_EndpointDescription_deleteMembers(UA_EndpointDescription *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_ENDPOINTDESCRIPTION]); }
static UA_INLINE void UA_EndpointDescription_delete(UA_EndpointDescription *p) { UA_delete(p, &UA_TYPES[UA_TYPES_ENDPOINTDESCRIPTION]); }

/**
 * GetEndpointsResponse
 * --------------------
 * Gets the endpoints used by the server. */
typedef struct {
    UA_ResponseHeader responseHeader;
    size_t endpointsSize;
    UA_EndpointDescription *endpoints;
} UA_GetEndpointsResponse;

#define UA_TYPES_GETENDPOINTSRESPONSE 149
static UA_INLINE void UA_GetEndpointsResponse_init(UA_GetEndpointsResponse *p) { memset(p, 0, sizeof(UA_GetEndpointsResponse)); }
static UA_INLINE UA_GetEndpointsResponse * UA_GetEndpointsResponse_new(void) { return (UA_GetEndpointsResponse*) UA_new(&UA_TYPES[UA_TYPES_GETENDPOINTSRESPONSE]); }
static UA_INLINE UA_StatusCode UA_GetEndpointsResponse_copy(const UA_GetEndpointsResponse *src, UA_GetEndpointsResponse *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_GETENDPOINTSRESPONSE]); }
static UA_INLINE void UA_GetEndpointsResponse_deleteMembers(UA_GetEndpointsResponse *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_GETENDPOINTSRESPONSE]); }
static UA_INLINE void UA_GetEndpointsResponse_delete(UA_GetEndpointsResponse *p) { UA_delete(p, &UA_TYPES[UA_TYPES_GETENDPOINTSRESPONSE]); }

/**
 * BrowseNextResponse
 * ------------------
 * Continues one or more browse operations. */
typedef struct {
    UA_ResponseHeader responseHeader;
    size_t resultsSize;
    UA_BrowseResult *results;
    size_t diagnosticInfosSize;
    UA_DiagnosticInfo *diagnosticInfos;
} UA_BrowseNextResponse;

#define UA_TYPES_BROWSENEXTRESPONSE 150
static UA_INLINE void UA_BrowseNextResponse_init(UA_BrowseNextResponse *p) { memset(p, 0, sizeof(UA_BrowseNextResponse)); }
static UA_INLINE UA_BrowseNextResponse * UA_BrowseNextResponse_new(void) { return (UA_BrowseNextResponse*) UA_new(&UA_TYPES[UA_TYPES_BROWSENEXTRESPONSE]); }
static UA_INLINE UA_StatusCode UA_BrowseNextResponse_copy(const UA_BrowseNextResponse *src, UA_BrowseNextResponse *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_BROWSENEXTRESPONSE]); }
static UA_INLINE void UA_BrowseNextResponse_deleteMembers(UA_BrowseNextResponse *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_BROWSENEXTRESPONSE]); }
static UA_INLINE void UA_BrowseNextResponse_delete(UA_BrowseNextResponse *p) { UA_delete(p, &UA_TYPES[UA_TYPES_BROWSENEXTRESPONSE]); }

/**
 * BrowseResponse
 * --------------
 * Browse the references for one or more nodes from the server address space. */
typedef struct {
    UA_ResponseHeader responseHeader;
    size_t resultsSize;
    UA_BrowseResult *results;
    size_t diagnosticInfosSize;
    UA_DiagnosticInfo *diagnosticInfos;
} UA_BrowseResponse;

#define UA_TYPES_BROWSERESPONSE 151
static UA_INLINE void UA_BrowseResponse_init(UA_BrowseResponse *p) { memset(p, 0, sizeof(UA_BrowseResponse)); }
static UA_INLINE UA_BrowseResponse * UA_BrowseResponse_new(void) { return (UA_BrowseResponse*) UA_new(&UA_TYPES[UA_TYPES_BROWSERESPONSE]); }
static UA_INLINE UA_StatusCode UA_BrowseResponse_copy(const UA_BrowseResponse *src, UA_BrowseResponse *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_BROWSERESPONSE]); }
static UA_INLINE void UA_BrowseResponse_deleteMembers(UA_BrowseResponse *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_BROWSERESPONSE]); }
static UA_INLINE void UA_BrowseResponse_delete(UA_BrowseResponse *p) { UA_delete(p, &UA_TYPES[UA_TYPES_BROWSERESPONSE]); }

/**
 * CreateSessionResponse
 * ---------------------
 * Creates a new session with the server. */
typedef struct {
    UA_ResponseHeader responseHeader;
    UA_NodeId sessionId;
    UA_NodeId authenticationToken;
    UA_Double revisedSessionTimeout;
    UA_ByteString serverNonce;
    UA_ByteString serverCertificate;
    size_t serverEndpointsSize;
    UA_EndpointDescription *serverEndpoints;
    size_t serverSoftwareCertificatesSize;
    UA_SignedSoftwareCertificate *serverSoftwareCertificates;
    UA_SignatureData serverSignature;
    UA_UInt32 maxRequestMessageSize;
} UA_CreateSessionResponse;

#define UA_TYPES_CREATESESSIONRESPONSE 152
static UA_INLINE void UA_CreateSessionResponse_init(UA_CreateSessionResponse *p) { memset(p, 0, sizeof(UA_CreateSessionResponse)); }
static UA_INLINE UA_CreateSessionResponse * UA_CreateSessionResponse_new(void) { return (UA_CreateSessionResponse*) UA_new(&UA_TYPES[UA_TYPES_CREATESESSIONRESPONSE]); }
static UA_INLINE UA_StatusCode UA_CreateSessionResponse_copy(const UA_CreateSessionResponse *src, UA_CreateSessionResponse *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_CREATESESSIONRESPONSE]); }
static UA_INLINE void UA_CreateSessionResponse_deleteMembers(UA_CreateSessionResponse *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_CREATESESSIONRESPONSE]); }
static UA_INLINE void UA_CreateSessionResponse_delete(UA_CreateSessionResponse *p) { UA_delete(p, &UA_TYPES[UA_TYPES_CREATESESSIONRESPONSE]); }

/**
 * QueryFirstRequest
 * -----------------
 */
typedef struct {
    UA_RequestHeader requestHeader;
    UA_ViewDescription view;
    size_t nodeTypesSize;
    UA_NodeTypeDescription *nodeTypes;
    UA_ContentFilter filter;
    UA_UInt32 maxDataSetsToReturn;
    UA_UInt32 maxReferencesToReturn;
} UA_QueryFirstRequest;

#define UA_TYPES_QUERYFIRSTREQUEST 153
static UA_INLINE void UA_QueryFirstRequest_init(UA_QueryFirstRequest *p) { memset(p, 0, sizeof(UA_QueryFirstRequest)); }
static UA_INLINE UA_QueryFirstRequest * UA_QueryFirstRequest_new(void) { return (UA_QueryFirstRequest*) UA_new(&UA_TYPES[UA_TYPES_QUERYFIRSTREQUEST]); }
static UA_INLINE UA_StatusCode UA_QueryFirstRequest_copy(const UA_QueryFirstRequest *src, UA_QueryFirstRequest *dst) { return UA_copy(src, dst, &UA_TYPES[UA_TYPES_QUERYFIRSTREQUEST]); }
static UA_INLINE void UA_QueryFirstRequest_deleteMembers(UA_QueryFirstRequest *p) { UA_deleteMembers(p, &UA_TYPES[UA_TYPES_QUERYFIRSTREQUEST]); }
static UA_INLINE void UA_QueryFirstRequest_delete(UA_QueryFirstRequest *p) { UA_delete(p, &UA_TYPES[UA_TYPES_QUERYFIRSTREQUEST]); }

#ifdef __cplusplus
} // extern "C"
#endif

#endif /* UA_TYPES_GENERATED_H_ */
