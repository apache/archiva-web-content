#include <enunciate-common.c>
#ifndef DEF_redback_rest_api_ns0_application_H
#define DEF_redback_rest_api_ns0_application_H

/**
 *  @author Olivier Lamy
 */
struct redback_rest_api_ns0_application {


  /**
   * (no documentation provided)
   */
  xmlChar *version;

  /**
   * (no documentation provided)
   */
  xmlChar *id;

  /**
   * (no documentation provided)
   */
  xmlChar *description;

  /**
   * (no documentation provided)
   */
  xmlChar *longDescription;
};

/**
 * Reads a Application element from XML. The element to be read is "application", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Application, or NULL in case of error.
 */
struct redback_rest_api_ns0_application *xml_read_redback_rest_api_ns0_application(xmlTextReaderPtr reader);

/**
 * Writes a Application to XML under element name "application".
 *
 * @param writer The XML writer.
 * @param _application The Application to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_redback_rest_api_ns0_application(xmlTextWriterPtr writer, struct redback_rest_api_ns0_application *_application);

/**
 * Frees a Application.
 *
 * @param _application The Application to free.
 */
void free_redback_rest_api_ns0_application(struct redback_rest_api_ns0_application *_application);

/**
 * Reads a Application element from XML. The element to be read is "application", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The Application, or NULL in case of error.
 */
struct redback_rest_api_ns0_application *xmlTextReaderReadNs0ApplicationElement(xmlTextReaderPtr reader);

/**
 * Writes a Application to XML under element name "application".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _application The Application to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ApplicationElement(xmlTextWriterPtr writer, struct redback_rest_api_ns0_application *_application);

/**
 * Writes a Application to XML under element name "application".
 *
 * @param writer The XML writer.
 * @param _application The Application to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ApplicationElementNS(xmlTextWriterPtr writer, struct redback_rest_api_ns0_application *_application, int writeNamespaces);

/**
 * Frees the children of a Application.
 *
 * @param _application The Application whose children are to be free.
 */
static void freeNs0ApplicationElement(struct redback_rest_api_ns0_application *_application);

/**
 * Reads a Application from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The Application, or NULL in case of error.
 */
static struct redback_rest_api_ns0_application *xmlTextReaderReadNs0ApplicationType(xmlTextReaderPtr reader);

/**
 * Writes a Application to XML.
 *
 * @param writer The XML writer.
 * @param _application The Application to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ApplicationType(xmlTextWriterPtr writer, struct redback_rest_api_ns0_application *_application);

/**
 * Frees the elements of a Application.
 *
 * @param _application The Application to free.
 */
static void freeNs0ApplicationType(struct redback_rest_api_ns0_application *_application);

#endif /* DEF_redback_rest_api_ns0_application_H */
#ifndef DEF_redback_rest_api_ns0_applicationRoles_H
#define DEF_redback_rest_api_ns0_applicationRoles_H

/**
 *  @author Olivier Lamy
 *  @since 2.0
 */
struct redback_rest_api_ns0_applicationRoles {


  /**
   * (no documentation provided)
   */
  xmlChar *name;

  /**
   * (no documentation provided)
   */
  xmlChar *description;

  /**
   * (no documentation provided)
   */
  xmlChar *globalRoles;

  /**
   * Size of the globalRoles array.
   */
  int _sizeof_globalRoles;

  /**
   * (no documentation provided)
   */
  struct redback_rest_api_ns0_roleTemplate *roleTemplates;

  /**
   * Size of the roleTemplates array.
   */
  int _sizeof_roleTemplates;

  /**
   * (no documentation provided)
   */
  xmlChar *resources;

  /**
   * Size of the resources array.
   */
  int _sizeof_resources;
};

/**
 * Reads a ApplicationRoles element from XML. The element to be read is "applicationRole", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The ApplicationRoles, or NULL in case of error.
 */
struct redback_rest_api_ns0_applicationRoles *xml_read_redback_rest_api_ns0_applicationRoles(xmlTextReaderPtr reader);

/**
 * Writes a ApplicationRoles to XML under element name "applicationRole".
 *
 * @param writer The XML writer.
 * @param _applicationRoles The ApplicationRoles to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_redback_rest_api_ns0_applicationRoles(xmlTextWriterPtr writer, struct redback_rest_api_ns0_applicationRoles *_applicationRoles);

/**
 * Frees a ApplicationRoles.
 *
 * @param _applicationRoles The ApplicationRoles to free.
 */
void free_redback_rest_api_ns0_applicationRoles(struct redback_rest_api_ns0_applicationRoles *_applicationRoles);

/**
 * Reads a ApplicationRoles element from XML. The element to be read is "applicationRole", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The ApplicationRoles, or NULL in case of error.
 */
struct redback_rest_api_ns0_applicationRoles *xmlTextReaderReadNs0ApplicationRoleElement(xmlTextReaderPtr reader);

/**
 * Writes a ApplicationRoles to XML under element name "applicationRole".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _applicationRoles The ApplicationRoles to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ApplicationRoleElement(xmlTextWriterPtr writer, struct redback_rest_api_ns0_applicationRoles *_applicationRoles);

/**
 * Writes a ApplicationRoles to XML under element name "applicationRole".
 *
 * @param writer The XML writer.
 * @param _applicationRoles The ApplicationRoles to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ApplicationRoleElementNS(xmlTextWriterPtr writer, struct redback_rest_api_ns0_applicationRoles *_applicationRoles, int writeNamespaces);

/**
 * Frees the children of a ApplicationRoles.
 *
 * @param _applicationRoles The ApplicationRoles whose children are to be free.
 */
static void freeNs0ApplicationRoleElement(struct redback_rest_api_ns0_applicationRoles *_applicationRoles);

/**
 * Reads a ApplicationRoles from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The ApplicationRoles, or NULL in case of error.
 */
static struct redback_rest_api_ns0_applicationRoles *xmlTextReaderReadNs0ApplicationRolesType(xmlTextReaderPtr reader);

/**
 * Writes a ApplicationRoles to XML.
 *
 * @param writer The XML writer.
 * @param _applicationRoles The ApplicationRoles to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ApplicationRolesType(xmlTextWriterPtr writer, struct redback_rest_api_ns0_applicationRoles *_applicationRoles);

/**
 * Frees the elements of a ApplicationRoles.
 *
 * @param _applicationRoles The ApplicationRoles to free.
 */
static void freeNs0ApplicationRolesType(struct redback_rest_api_ns0_applicationRoles *_applicationRoles);

#endif /* DEF_redback_rest_api_ns0_applicationRoles_H */
#ifndef DEF_redback_rest_api_ns0_ldapGroupMapping_H
#define DEF_redback_rest_api_ns0_ldapGroupMapping_H

/**
 *  @author Olivier Lamy
 *  @since 2.1
 */
struct redback_rest_api_ns0_ldapGroupMapping {


  /**
   * (no documentation provided)
   */
  xmlChar *group;

  /**
   * (no documentation provided)
   */
  xmlChar *roleNames;

  /**
   * Size of the roleNames array.
   */
  int _sizeof_roleNames;
};

/**
 * Reads a LdapGroupMapping element from XML. The element to be read is "ldapGroupMapping", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The LdapGroupMapping, or NULL in case of error.
 */
struct redback_rest_api_ns0_ldapGroupMapping *xml_read_redback_rest_api_ns0_ldapGroupMapping(xmlTextReaderPtr reader);

/**
 * Writes a LdapGroupMapping to XML under element name "ldapGroupMapping".
 *
 * @param writer The XML writer.
 * @param _ldapGroupMapping The LdapGroupMapping to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_redback_rest_api_ns0_ldapGroupMapping(xmlTextWriterPtr writer, struct redback_rest_api_ns0_ldapGroupMapping *_ldapGroupMapping);

/**
 * Frees a LdapGroupMapping.
 *
 * @param _ldapGroupMapping The LdapGroupMapping to free.
 */
void free_redback_rest_api_ns0_ldapGroupMapping(struct redback_rest_api_ns0_ldapGroupMapping *_ldapGroupMapping);

/**
 * Reads a LdapGroupMapping element from XML. The element to be read is "ldapGroupMapping", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The LdapGroupMapping, or NULL in case of error.
 */
struct redback_rest_api_ns0_ldapGroupMapping *xmlTextReaderReadNs0LdapGroupMappingElement(xmlTextReaderPtr reader);

/**
 * Writes a LdapGroupMapping to XML under element name "ldapGroupMapping".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _ldapGroupMapping The LdapGroupMapping to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0LdapGroupMappingElement(xmlTextWriterPtr writer, struct redback_rest_api_ns0_ldapGroupMapping *_ldapGroupMapping);

/**
 * Writes a LdapGroupMapping to XML under element name "ldapGroupMapping".
 *
 * @param writer The XML writer.
 * @param _ldapGroupMapping The LdapGroupMapping to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0LdapGroupMappingElementNS(xmlTextWriterPtr writer, struct redback_rest_api_ns0_ldapGroupMapping *_ldapGroupMapping, int writeNamespaces);

/**
 * Frees the children of a LdapGroupMapping.
 *
 * @param _ldapGroupMapping The LdapGroupMapping whose children are to be free.
 */
static void freeNs0LdapGroupMappingElement(struct redback_rest_api_ns0_ldapGroupMapping *_ldapGroupMapping);

/**
 * Reads a LdapGroupMapping from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The LdapGroupMapping, or NULL in case of error.
 */
static struct redback_rest_api_ns0_ldapGroupMapping *xmlTextReaderReadNs0LdapGroupMappingType(xmlTextReaderPtr reader);

/**
 * Writes a LdapGroupMapping to XML.
 *
 * @param writer The XML writer.
 * @param _ldapGroupMapping The LdapGroupMapping to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0LdapGroupMappingType(xmlTextWriterPtr writer, struct redback_rest_api_ns0_ldapGroupMapping *_ldapGroupMapping);

/**
 * Frees the elements of a LdapGroupMapping.
 *
 * @param _ldapGroupMapping The LdapGroupMapping to free.
 */
static void freeNs0LdapGroupMappingType(struct redback_rest_api_ns0_ldapGroupMapping *_ldapGroupMapping);

#endif /* DEF_redback_rest_api_ns0_ldapGroupMapping_H */
#ifndef DEF_redback_rest_api_ns0_ldapGroupMappingUpdateRequest_H
#define DEF_redback_rest_api_ns0_ldapGroupMappingUpdateRequest_H

/**
 *  @author Olivier Lamy
 */
struct redback_rest_api_ns0_ldapGroupMappingUpdateRequest {


  /**
   * (no documentation provided)
   */
  struct redback_rest_api_ns0_ldapGroupMapping *ldapGroupMapping;

  /**
   * Size of the ldapGroupMapping array.
   */
  int _sizeof_ldapGroupMapping;
};

/**
 * Reads a LdapGroupMappingUpdateRequest element from XML. The element to be read is "ldapGroupMappingUpdateRequest", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The LdapGroupMappingUpdateRequest, or NULL in case of error.
 */
struct redback_rest_api_ns0_ldapGroupMappingUpdateRequest *xml_read_redback_rest_api_ns0_ldapGroupMappingUpdateRequest(xmlTextReaderPtr reader);

/**
 * Writes a LdapGroupMappingUpdateRequest to XML under element name "ldapGroupMappingUpdateRequest".
 *
 * @param writer The XML writer.
 * @param _ldapGroupMappingUpdateRequest The LdapGroupMappingUpdateRequest to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_redback_rest_api_ns0_ldapGroupMappingUpdateRequest(xmlTextWriterPtr writer, struct redback_rest_api_ns0_ldapGroupMappingUpdateRequest *_ldapGroupMappingUpdateRequest);

/**
 * Frees a LdapGroupMappingUpdateRequest.
 *
 * @param _ldapGroupMappingUpdateRequest The LdapGroupMappingUpdateRequest to free.
 */
void free_redback_rest_api_ns0_ldapGroupMappingUpdateRequest(struct redback_rest_api_ns0_ldapGroupMappingUpdateRequest *_ldapGroupMappingUpdateRequest);

/**
 * Reads a LdapGroupMappingUpdateRequest element from XML. The element to be read is "ldapGroupMappingUpdateRequest", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The LdapGroupMappingUpdateRequest, or NULL in case of error.
 */
struct redback_rest_api_ns0_ldapGroupMappingUpdateRequest *xmlTextReaderReadNs0LdapGroupMappingUpdateRequestElement(xmlTextReaderPtr reader);

/**
 * Writes a LdapGroupMappingUpdateRequest to XML under element name "ldapGroupMappingUpdateRequest".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _ldapGroupMappingUpdateRequest The LdapGroupMappingUpdateRequest to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0LdapGroupMappingUpdateRequestElement(xmlTextWriterPtr writer, struct redback_rest_api_ns0_ldapGroupMappingUpdateRequest *_ldapGroupMappingUpdateRequest);

/**
 * Writes a LdapGroupMappingUpdateRequest to XML under element name "ldapGroupMappingUpdateRequest".
 *
 * @param writer The XML writer.
 * @param _ldapGroupMappingUpdateRequest The LdapGroupMappingUpdateRequest to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0LdapGroupMappingUpdateRequestElementNS(xmlTextWriterPtr writer, struct redback_rest_api_ns0_ldapGroupMappingUpdateRequest *_ldapGroupMappingUpdateRequest, int writeNamespaces);

/**
 * Frees the children of a LdapGroupMappingUpdateRequest.
 *
 * @param _ldapGroupMappingUpdateRequest The LdapGroupMappingUpdateRequest whose children are to be free.
 */
static void freeNs0LdapGroupMappingUpdateRequestElement(struct redback_rest_api_ns0_ldapGroupMappingUpdateRequest *_ldapGroupMappingUpdateRequest);

/**
 * Reads a LdapGroupMappingUpdateRequest from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The LdapGroupMappingUpdateRequest, or NULL in case of error.
 */
static struct redback_rest_api_ns0_ldapGroupMappingUpdateRequest *xmlTextReaderReadNs0LdapGroupMappingUpdateRequestType(xmlTextReaderPtr reader);

/**
 * Writes a LdapGroupMappingUpdateRequest to XML.
 *
 * @param writer The XML writer.
 * @param _ldapGroupMappingUpdateRequest The LdapGroupMappingUpdateRequest to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0LdapGroupMappingUpdateRequestType(xmlTextWriterPtr writer, struct redback_rest_api_ns0_ldapGroupMappingUpdateRequest *_ldapGroupMappingUpdateRequest);

/**
 * Frees the elements of a LdapGroupMappingUpdateRequest.
 *
 * @param _ldapGroupMappingUpdateRequest The LdapGroupMappingUpdateRequest to free.
 */
static void freeNs0LdapGroupMappingUpdateRequestType(struct redback_rest_api_ns0_ldapGroupMappingUpdateRequest *_ldapGroupMappingUpdateRequest);

#endif /* DEF_redback_rest_api_ns0_ldapGroupMappingUpdateRequest_H */
#ifndef DEF_redback_rest_api_ns0_loginRequest_H
#define DEF_redback_rest_api_ns0_loginRequest_H

/**
 *  @author Olivier Lamy
 *  @since 2.0
 */
struct redback_rest_api_ns0_loginRequest {


  /**
   * (no documentation provided)
   */
  xmlChar *username;

  /**
   * (no documentation provided)
   */
  xmlChar *password;
};

/**
 * Reads a LoginRequest element from XML. The element to be read is "loginRequest", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The LoginRequest, or NULL in case of error.
 */
struct redback_rest_api_ns0_loginRequest *xml_read_redback_rest_api_ns0_loginRequest(xmlTextReaderPtr reader);

/**
 * Writes a LoginRequest to XML under element name "loginRequest".
 *
 * @param writer The XML writer.
 * @param _loginRequest The LoginRequest to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_redback_rest_api_ns0_loginRequest(xmlTextWriterPtr writer, struct redback_rest_api_ns0_loginRequest *_loginRequest);

/**
 * Frees a LoginRequest.
 *
 * @param _loginRequest The LoginRequest to free.
 */
void free_redback_rest_api_ns0_loginRequest(struct redback_rest_api_ns0_loginRequest *_loginRequest);

/**
 * Reads a LoginRequest element from XML. The element to be read is "loginRequest", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The LoginRequest, or NULL in case of error.
 */
struct redback_rest_api_ns0_loginRequest *xmlTextReaderReadNs0LoginRequestElement(xmlTextReaderPtr reader);

/**
 * Writes a LoginRequest to XML under element name "loginRequest".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _loginRequest The LoginRequest to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0LoginRequestElement(xmlTextWriterPtr writer, struct redback_rest_api_ns0_loginRequest *_loginRequest);

/**
 * Writes a LoginRequest to XML under element name "loginRequest".
 *
 * @param writer The XML writer.
 * @param _loginRequest The LoginRequest to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0LoginRequestElementNS(xmlTextWriterPtr writer, struct redback_rest_api_ns0_loginRequest *_loginRequest, int writeNamespaces);

/**
 * Frees the children of a LoginRequest.
 *
 * @param _loginRequest The LoginRequest whose children are to be free.
 */
static void freeNs0LoginRequestElement(struct redback_rest_api_ns0_loginRequest *_loginRequest);

/**
 * Reads a LoginRequest from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The LoginRequest, or NULL in case of error.
 */
static struct redback_rest_api_ns0_loginRequest *xmlTextReaderReadNs0LoginRequestType(xmlTextReaderPtr reader);

/**
 * Writes a LoginRequest to XML.
 *
 * @param writer The XML writer.
 * @param _loginRequest The LoginRequest to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0LoginRequestType(xmlTextWriterPtr writer, struct redback_rest_api_ns0_loginRequest *_loginRequest);

/**
 * Frees the elements of a LoginRequest.
 *
 * @param _loginRequest The LoginRequest to free.
 */
static void freeNs0LoginRequestType(struct redback_rest_api_ns0_loginRequest *_loginRequest);

#endif /* DEF_redback_rest_api_ns0_loginRequest_H */
#ifndef DEF_redback_rest_api_ns0_operation_H
#define DEF_redback_rest_api_ns0_operation_H

/**
 *  @author Olivier Lamy
 *  @since 1.4
 */
struct redback_rest_api_ns0_operation {


  /**
   * (no documentation provided)
   */
  xmlChar *name;

  /**
   * (no documentation provided)
   */
  xmlChar *description;

  /**
   * (no documentation provided)
   */
  int permanent;
};

/**
 * Reads a Operation element from XML. The element to be read is "operation", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Operation, or NULL in case of error.
 */
struct redback_rest_api_ns0_operation *xml_read_redback_rest_api_ns0_operation(xmlTextReaderPtr reader);

/**
 * Writes a Operation to XML under element name "operation".
 *
 * @param writer The XML writer.
 * @param _operation The Operation to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_redback_rest_api_ns0_operation(xmlTextWriterPtr writer, struct redback_rest_api_ns0_operation *_operation);

/**
 * Frees a Operation.
 *
 * @param _operation The Operation to free.
 */
void free_redback_rest_api_ns0_operation(struct redback_rest_api_ns0_operation *_operation);

/**
 * Reads a Operation element from XML. The element to be read is "operation", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The Operation, or NULL in case of error.
 */
struct redback_rest_api_ns0_operation *xmlTextReaderReadNs0OperationElement(xmlTextReaderPtr reader);

/**
 * Writes a Operation to XML under element name "operation".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _operation The Operation to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0OperationElement(xmlTextWriterPtr writer, struct redback_rest_api_ns0_operation *_operation);

/**
 * Writes a Operation to XML under element name "operation".
 *
 * @param writer The XML writer.
 * @param _operation The Operation to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0OperationElementNS(xmlTextWriterPtr writer, struct redback_rest_api_ns0_operation *_operation, int writeNamespaces);

/**
 * Frees the children of a Operation.
 *
 * @param _operation The Operation whose children are to be free.
 */
static void freeNs0OperationElement(struct redback_rest_api_ns0_operation *_operation);

/**
 * Reads a Operation from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The Operation, or NULL in case of error.
 */
static struct redback_rest_api_ns0_operation *xmlTextReaderReadNs0OperationType(xmlTextReaderPtr reader);

/**
 * Writes a Operation to XML.
 *
 * @param writer The XML writer.
 * @param _operation The Operation to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0OperationType(xmlTextWriterPtr writer, struct redback_rest_api_ns0_operation *_operation);

/**
 * Frees the elements of a Operation.
 *
 * @param _operation The Operation to free.
 */
static void freeNs0OperationType(struct redback_rest_api_ns0_operation *_operation);

#endif /* DEF_redback_rest_api_ns0_operation_H */
#ifndef DEF_redback_rest_api_ns0_permission_H
#define DEF_redback_rest_api_ns0_permission_H

/**
 *  @author Olivier Lamy
 *  @since 1.4
 */
struct redback_rest_api_ns0_permission {


  /**
   * (no documentation provided)
   */
  xmlChar *name;

  /**
   * (no documentation provided)
   */
  struct redback_rest_api_ns0_operation *operation;

  /**
   * (no documentation provided)
   */
  struct redback_rest_api_ns0_resource *resource;
};

/**
 * Reads a Permission element from XML. The element to be read is "permission", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Permission, or NULL in case of error.
 */
struct redback_rest_api_ns0_permission *xml_read_redback_rest_api_ns0_permission(xmlTextReaderPtr reader);

/**
 * Writes a Permission to XML under element name "permission".
 *
 * @param writer The XML writer.
 * @param _permission The Permission to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_redback_rest_api_ns0_permission(xmlTextWriterPtr writer, struct redback_rest_api_ns0_permission *_permission);

/**
 * Frees a Permission.
 *
 * @param _permission The Permission to free.
 */
void free_redback_rest_api_ns0_permission(struct redback_rest_api_ns0_permission *_permission);

/**
 * Reads a Permission element from XML. The element to be read is "permission", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The Permission, or NULL in case of error.
 */
struct redback_rest_api_ns0_permission *xmlTextReaderReadNs0PermissionElement(xmlTextReaderPtr reader);

/**
 * Writes a Permission to XML under element name "permission".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _permission The Permission to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0PermissionElement(xmlTextWriterPtr writer, struct redback_rest_api_ns0_permission *_permission);

/**
 * Writes a Permission to XML under element name "permission".
 *
 * @param writer The XML writer.
 * @param _permission The Permission to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0PermissionElementNS(xmlTextWriterPtr writer, struct redback_rest_api_ns0_permission *_permission, int writeNamespaces);

/**
 * Frees the children of a Permission.
 *
 * @param _permission The Permission whose children are to be free.
 */
static void freeNs0PermissionElement(struct redback_rest_api_ns0_permission *_permission);

/**
 * Reads a Permission from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The Permission, or NULL in case of error.
 */
static struct redback_rest_api_ns0_permission *xmlTextReaderReadNs0PermissionType(xmlTextReaderPtr reader);

/**
 * Writes a Permission to XML.
 *
 * @param writer The XML writer.
 * @param _permission The Permission to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0PermissionType(xmlTextWriterPtr writer, struct redback_rest_api_ns0_permission *_permission);

/**
 * Frees the elements of a Permission.
 *
 * @param _permission The Permission to free.
 */
static void freeNs0PermissionType(struct redback_rest_api_ns0_permission *_permission);

#endif /* DEF_redback_rest_api_ns0_permission_H */
#ifndef DEF_redback_rest_api_ns0_registrationKey_H
#define DEF_redback_rest_api_ns0_registrationKey_H

/**
 *  @author Olivier Lamy
 *  @since 1.4
 */
struct redback_rest_api_ns0_registrationKey {


  /**
   * (no documentation provided)
   */
  xmlChar *key;
};

/**
 * Reads a RegistrationKey element from XML. The element to be read is "registrationKey", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The RegistrationKey, or NULL in case of error.
 */
struct redback_rest_api_ns0_registrationKey *xml_read_redback_rest_api_ns0_registrationKey(xmlTextReaderPtr reader);

/**
 * Writes a RegistrationKey to XML under element name "registrationKey".
 *
 * @param writer The XML writer.
 * @param _registrationKey The RegistrationKey to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_redback_rest_api_ns0_registrationKey(xmlTextWriterPtr writer, struct redback_rest_api_ns0_registrationKey *_registrationKey);

/**
 * Frees a RegistrationKey.
 *
 * @param _registrationKey The RegistrationKey to free.
 */
void free_redback_rest_api_ns0_registrationKey(struct redback_rest_api_ns0_registrationKey *_registrationKey);

/**
 * Reads a RegistrationKey element from XML. The element to be read is "registrationKey", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The RegistrationKey, or NULL in case of error.
 */
struct redback_rest_api_ns0_registrationKey *xmlTextReaderReadNs0RegistrationKeyElement(xmlTextReaderPtr reader);

/**
 * Writes a RegistrationKey to XML under element name "registrationKey".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _registrationKey The RegistrationKey to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0RegistrationKeyElement(xmlTextWriterPtr writer, struct redback_rest_api_ns0_registrationKey *_registrationKey);

/**
 * Writes a RegistrationKey to XML under element name "registrationKey".
 *
 * @param writer The XML writer.
 * @param _registrationKey The RegistrationKey to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0RegistrationKeyElementNS(xmlTextWriterPtr writer, struct redback_rest_api_ns0_registrationKey *_registrationKey, int writeNamespaces);

/**
 * Frees the children of a RegistrationKey.
 *
 * @param _registrationKey The RegistrationKey whose children are to be free.
 */
static void freeNs0RegistrationKeyElement(struct redback_rest_api_ns0_registrationKey *_registrationKey);

/**
 * Reads a RegistrationKey from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The RegistrationKey, or NULL in case of error.
 */
static struct redback_rest_api_ns0_registrationKey *xmlTextReaderReadNs0RegistrationKeyType(xmlTextReaderPtr reader);

/**
 * Writes a RegistrationKey to XML.
 *
 * @param writer The XML writer.
 * @param _registrationKey The RegistrationKey to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0RegistrationKeyType(xmlTextWriterPtr writer, struct redback_rest_api_ns0_registrationKey *_registrationKey);

/**
 * Frees the elements of a RegistrationKey.
 *
 * @param _registrationKey The RegistrationKey to free.
 */
static void freeNs0RegistrationKeyType(struct redback_rest_api_ns0_registrationKey *_registrationKey);

#endif /* DEF_redback_rest_api_ns0_registrationKey_H */
#ifndef DEF_redback_rest_api_ns0_resetPasswordRequest_H
#define DEF_redback_rest_api_ns0_resetPasswordRequest_H

/**
 *  @author Olivier Lamy
 */
struct redback_rest_api_ns0_resetPasswordRequest {


  /**
   * (no documentation provided)
   */
  xmlChar *username;

  /**
   * (no documentation provided)
   */
  xmlChar *applicationUrl;
};

/**
 * Reads a ResetPasswordRequest from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The ResetPasswordRequest, or NULL in case of error.
 */
static struct redback_rest_api_ns0_resetPasswordRequest *xmlTextReaderReadNs0ResetPasswordRequestType(xmlTextReaderPtr reader);

/**
 * Writes a ResetPasswordRequest to XML.
 *
 * @param writer The XML writer.
 * @param _resetPasswordRequest The ResetPasswordRequest to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ResetPasswordRequestType(xmlTextWriterPtr writer, struct redback_rest_api_ns0_resetPasswordRequest *_resetPasswordRequest);

/**
 * Frees the elements of a ResetPasswordRequest.
 *
 * @param _resetPasswordRequest The ResetPasswordRequest to free.
 */
static void freeNs0ResetPasswordRequestType(struct redback_rest_api_ns0_resetPasswordRequest *_resetPasswordRequest);

#endif /* DEF_redback_rest_api_ns0_resetPasswordRequest_H */
#ifndef DEF_redback_rest_api_ns0_resource_H
#define DEF_redback_rest_api_ns0_resource_H

/**
 *  @author Olivier Lamy
 *  @since 1.4
 */
struct redback_rest_api_ns0_resource {


  /**
   * (no documentation provided)
   */
  xmlChar *identifier;

  /**
   * (no documentation provided)
   */
  int pattern;

  /**
   * (no documentation provided)
   */
  int permanent;
};

/**
 * Reads a Resource element from XML. The element to be read is "resource", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Resource, or NULL in case of error.
 */
struct redback_rest_api_ns0_resource *xml_read_redback_rest_api_ns0_resource(xmlTextReaderPtr reader);

/**
 * Writes a Resource to XML under element name "resource".
 *
 * @param writer The XML writer.
 * @param _resource The Resource to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_redback_rest_api_ns0_resource(xmlTextWriterPtr writer, struct redback_rest_api_ns0_resource *_resource);

/**
 * Frees a Resource.
 *
 * @param _resource The Resource to free.
 */
void free_redback_rest_api_ns0_resource(struct redback_rest_api_ns0_resource *_resource);

/**
 * Reads a Resource element from XML. The element to be read is "resource", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The Resource, or NULL in case of error.
 */
struct redback_rest_api_ns0_resource *xmlTextReaderReadNs0ResourceElement(xmlTextReaderPtr reader);

/**
 * Writes a Resource to XML under element name "resource".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _resource The Resource to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ResourceElement(xmlTextWriterPtr writer, struct redback_rest_api_ns0_resource *_resource);

/**
 * Writes a Resource to XML under element name "resource".
 *
 * @param writer The XML writer.
 * @param _resource The Resource to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ResourceElementNS(xmlTextWriterPtr writer, struct redback_rest_api_ns0_resource *_resource, int writeNamespaces);

/**
 * Frees the children of a Resource.
 *
 * @param _resource The Resource whose children are to be free.
 */
static void freeNs0ResourceElement(struct redback_rest_api_ns0_resource *_resource);

/**
 * Reads a Resource from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The Resource, or NULL in case of error.
 */
static struct redback_rest_api_ns0_resource *xmlTextReaderReadNs0ResourceType(xmlTextReaderPtr reader);

/**
 * Writes a Resource to XML.
 *
 * @param writer The XML writer.
 * @param _resource The Resource to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ResourceType(xmlTextWriterPtr writer, struct redback_rest_api_ns0_resource *_resource);

/**
 * Frees the elements of a Resource.
 *
 * @param _resource The Resource to free.
 */
static void freeNs0ResourceType(struct redback_rest_api_ns0_resource *_resource);

#endif /* DEF_redback_rest_api_ns0_resource_H */
#ifndef DEF_redback_rest_api_ns0_role_H
#define DEF_redback_rest_api_ns0_role_H

/**
 *  @author Olivier Lamy
 *  @since 1.4
 */
struct redback_rest_api_ns0_role {


  /**
   * (no documentation provided)
   */
  xmlChar *name;

  /**
   * (no documentation provided)
   */
  xmlChar *description;

  /**
   * (no documentation provided)
   */
  int assignable;

  /**
   * (no documentation provided)
   */
  xmlChar *childRoleNames;

  /**
   * Size of the childRoleNames array.
   */
  int _sizeof_childRoleNames;

  /**
   * (no documentation provided)
   */
  struct redback_rest_api_ns0_permission *permissions;

  /**
   * Size of the permissions array.
   */
  int _sizeof_permissions;

  /**
   * (no documentation provided)
   */
  int permanent;

  /**
   * (no documentation provided)
   */
  xmlChar *parentRoleNames;

  /**
   * Size of the parentRoleNames array.
   */
  int _sizeof_parentRoleNames;

  /**
   * (no documentation provided)
   */
  struct redback_rest_api_ns0_user *parentsRolesUsers;

  /**
   * Size of the parentsRolesUsers array.
   */
  int _sizeof_parentsRolesUsers;

  /**
   * (no documentation provided)
   */
  struct redback_rest_api_ns0_user *users;

  /**
   * Size of the users array.
   */
  int _sizeof_users;

  /**
   * (no documentation provided)
   */
  struct redback_rest_api_ns0_user *otherUsers;

  /**
   * Size of the otherUsers array.
   */
  int _sizeof_otherUsers;

  /**
   * (no documentation provided)
   */
  struct redback_rest_api_ns0_user *removedUsers;

  /**
   * Size of the removedUsers array.
   */
  int _sizeof_removedUsers;
};

/**
 * Reads a Role element from XML. The element to be read is "role", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Role, or NULL in case of error.
 */
struct redback_rest_api_ns0_role *xml_read_redback_rest_api_ns0_role(xmlTextReaderPtr reader);

/**
 * Writes a Role to XML under element name "role".
 *
 * @param writer The XML writer.
 * @param _role The Role to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_redback_rest_api_ns0_role(xmlTextWriterPtr writer, struct redback_rest_api_ns0_role *_role);

/**
 * Frees a Role.
 *
 * @param _role The Role to free.
 */
void free_redback_rest_api_ns0_role(struct redback_rest_api_ns0_role *_role);

/**
 * Reads a Role element from XML. The element to be read is "role", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The Role, or NULL in case of error.
 */
struct redback_rest_api_ns0_role *xmlTextReaderReadNs0RoleElement(xmlTextReaderPtr reader);

/**
 * Writes a Role to XML under element name "role".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _role The Role to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0RoleElement(xmlTextWriterPtr writer, struct redback_rest_api_ns0_role *_role);

/**
 * Writes a Role to XML under element name "role".
 *
 * @param writer The XML writer.
 * @param _role The Role to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0RoleElementNS(xmlTextWriterPtr writer, struct redback_rest_api_ns0_role *_role, int writeNamespaces);

/**
 * Frees the children of a Role.
 *
 * @param _role The Role whose children are to be free.
 */
static void freeNs0RoleElement(struct redback_rest_api_ns0_role *_role);

/**
 * Reads a Role from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The Role, or NULL in case of error.
 */
static struct redback_rest_api_ns0_role *xmlTextReaderReadNs0RoleType(xmlTextReaderPtr reader);

/**
 * Writes a Role to XML.
 *
 * @param writer The XML writer.
 * @param _role The Role to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0RoleType(xmlTextWriterPtr writer, struct redback_rest_api_ns0_role *_role);

/**
 * Frees the elements of a Role.
 *
 * @param _role The Role to free.
 */
static void freeNs0RoleType(struct redback_rest_api_ns0_role *_role);

#endif /* DEF_redback_rest_api_ns0_role_H */
#ifndef DEF_redback_rest_api_ns0_roleTemplate_H
#define DEF_redback_rest_api_ns0_roleTemplate_H

/**
 *  @author Olivier Lamy
 *  @since 2.0
 */
struct redback_rest_api_ns0_roleTemplate {


  /**
   * (no documentation provided)
   */
  xmlChar *id;

  /**
   * (no documentation provided)
   */
  xmlChar *namePrefix;

  /**
   * (no documentation provided)
   */
  xmlChar *delimiter;

  /**
   * (no documentation provided)
   */
  xmlChar *description;

  /**
   * (no documentation provided)
   */
  xmlChar *resource;

  /**
   * (no documentation provided)
   */
  xmlChar *roles;

  /**
   * Size of the roles array.
   */
  int _sizeof_roles;
};

/**
 * Reads a RoleTemplate element from XML. The element to be read is "roleTemplate", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The RoleTemplate, or NULL in case of error.
 */
struct redback_rest_api_ns0_roleTemplate *xml_read_redback_rest_api_ns0_roleTemplate(xmlTextReaderPtr reader);

/**
 * Writes a RoleTemplate to XML under element name "roleTemplate".
 *
 * @param writer The XML writer.
 * @param _roleTemplate The RoleTemplate to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_redback_rest_api_ns0_roleTemplate(xmlTextWriterPtr writer, struct redback_rest_api_ns0_roleTemplate *_roleTemplate);

/**
 * Frees a RoleTemplate.
 *
 * @param _roleTemplate The RoleTemplate to free.
 */
void free_redback_rest_api_ns0_roleTemplate(struct redback_rest_api_ns0_roleTemplate *_roleTemplate);

/**
 * Reads a RoleTemplate element from XML. The element to be read is "roleTemplate", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The RoleTemplate, or NULL in case of error.
 */
struct redback_rest_api_ns0_roleTemplate *xmlTextReaderReadNs0RoleTemplateElement(xmlTextReaderPtr reader);

/**
 * Writes a RoleTemplate to XML under element name "roleTemplate".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _roleTemplate The RoleTemplate to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0RoleTemplateElement(xmlTextWriterPtr writer, struct redback_rest_api_ns0_roleTemplate *_roleTemplate);

/**
 * Writes a RoleTemplate to XML under element name "roleTemplate".
 *
 * @param writer The XML writer.
 * @param _roleTemplate The RoleTemplate to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0RoleTemplateElementNS(xmlTextWriterPtr writer, struct redback_rest_api_ns0_roleTemplate *_roleTemplate, int writeNamespaces);

/**
 * Frees the children of a RoleTemplate.
 *
 * @param _roleTemplate The RoleTemplate whose children are to be free.
 */
static void freeNs0RoleTemplateElement(struct redback_rest_api_ns0_roleTemplate *_roleTemplate);

/**
 * Reads a RoleTemplate from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The RoleTemplate, or NULL in case of error.
 */
static struct redback_rest_api_ns0_roleTemplate *xmlTextReaderReadNs0RoleTemplateType(xmlTextReaderPtr reader);

/**
 * Writes a RoleTemplate to XML.
 *
 * @param writer The XML writer.
 * @param _roleTemplate The RoleTemplate to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0RoleTemplateType(xmlTextWriterPtr writer, struct redback_rest_api_ns0_roleTemplate *_roleTemplate);

/**
 * Frees the elements of a RoleTemplate.
 *
 * @param _roleTemplate The RoleTemplate to free.
 */
static void freeNs0RoleTemplateType(struct redback_rest_api_ns0_roleTemplate *_roleTemplate);

#endif /* DEF_redback_rest_api_ns0_roleTemplate_H */
#ifndef DEF_redback_rest_api_ns0_stringList_H
#define DEF_redback_rest_api_ns0_stringList_H

/**
 *  jaxrs fail to return List {@link String} so use this contains for rest services returning that
 * 
 *  @author Olivier Lamy
 *  @since 2.1
 */
struct redback_rest_api_ns0_stringList {


  /**
   * (no documentation provided)
   */
  xmlChar *strings;

  /**
   * Size of the strings array.
   */
  int _sizeof_strings;
};

/**
 * Reads a StringList element from XML. The element to be read is "stringList", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The StringList, or NULL in case of error.
 */
struct redback_rest_api_ns0_stringList *xml_read_redback_rest_api_ns0_stringList(xmlTextReaderPtr reader);

/**
 * Writes a StringList to XML under element name "stringList".
 *
 * @param writer The XML writer.
 * @param _stringList The StringList to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_redback_rest_api_ns0_stringList(xmlTextWriterPtr writer, struct redback_rest_api_ns0_stringList *_stringList);

/**
 * Frees a StringList.
 *
 * @param _stringList The StringList to free.
 */
void free_redback_rest_api_ns0_stringList(struct redback_rest_api_ns0_stringList *_stringList);

/**
 * Reads a StringList element from XML. The element to be read is "stringList", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The StringList, or NULL in case of error.
 */
struct redback_rest_api_ns0_stringList *xmlTextReaderReadNs0StringListElement(xmlTextReaderPtr reader);

/**
 * Writes a StringList to XML under element name "stringList".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _stringList The StringList to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0StringListElement(xmlTextWriterPtr writer, struct redback_rest_api_ns0_stringList *_stringList);

/**
 * Writes a StringList to XML under element name "stringList".
 *
 * @param writer The XML writer.
 * @param _stringList The StringList to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0StringListElementNS(xmlTextWriterPtr writer, struct redback_rest_api_ns0_stringList *_stringList, int writeNamespaces);

/**
 * Frees the children of a StringList.
 *
 * @param _stringList The StringList whose children are to be free.
 */
static void freeNs0StringListElement(struct redback_rest_api_ns0_stringList *_stringList);

/**
 * Reads a StringList from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The StringList, or NULL in case of error.
 */
static struct redback_rest_api_ns0_stringList *xmlTextReaderReadNs0StringListType(xmlTextReaderPtr reader);

/**
 * Writes a StringList to XML.
 *
 * @param writer The XML writer.
 * @param _stringList The StringList to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0StringListType(xmlTextWriterPtr writer, struct redback_rest_api_ns0_stringList *_stringList);

/**
 * Frees the elements of a StringList.
 *
 * @param _stringList The StringList to free.
 */
static void freeNs0StringListType(struct redback_rest_api_ns0_stringList *_stringList);

#endif /* DEF_redback_rest_api_ns0_stringList_H */
#ifndef DEF_redback_rest_api_ns0_user_H
#define DEF_redback_rest_api_ns0_user_H

/**
 * (no documentation provided)
 */
struct redback_rest_api_ns0_user {


  /**
   * (no documentation provided)
   */
  xmlChar *username;

  /**
   * (no documentation provided)
   */
  xmlChar *fullName;

  /**
   * (no documentation provided)
   */
  xmlChar *email;

  /**
   * (no documentation provided)
   */
  int validated;

  /**
   * (no documentation provided)
   */
  int locked;

  /**
   * (no documentation provided)
   */
  xmlChar *password;

  /**
   * (no documentation provided)
   */
  int passwordChangeRequired;

  /**
   * (no documentation provided)
   */
  int permanent;

  /**
   * (no documentation provided)
   */
  xmlChar *confirmPassword;

  /**
   * (no documentation provided)
   */
  xmlChar *timestampAccountCreation;

  /**
   * (no documentation provided)
   */
  xmlChar *timestampLastLogin;

  /**
   * (no documentation provided)
   */
  xmlChar *timestampLastPasswordChange;

  /**
   * (no documentation provided)
   */
  xmlChar *previousPassword;

  /**
   * (no documentation provided)
   */
  xmlChar *assignedRoles;

  /**
   * Size of the assignedRoles array.
   */
  int _sizeof_assignedRoles;

  /**
   * (no documentation provided)
   */
  int readOnly;

  /**
   * (no documentation provided)
   */
  xmlChar *userManagerId;

  /**
   * (no documentation provided)
   */
  xmlChar *validationToken;
};

/**
 * Reads a User element from XML. The element to be read is "user", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The User, or NULL in case of error.
 */
struct redback_rest_api_ns0_user *xml_read_redback_rest_api_ns0_user(xmlTextReaderPtr reader);

/**
 * Writes a User to XML under element name "user".
 *
 * @param writer The XML writer.
 * @param _user The User to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_redback_rest_api_ns0_user(xmlTextWriterPtr writer, struct redback_rest_api_ns0_user *_user);

/**
 * Frees a User.
 *
 * @param _user The User to free.
 */
void free_redback_rest_api_ns0_user(struct redback_rest_api_ns0_user *_user);

/**
 * Reads a User element from XML. The element to be read is "user", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The User, or NULL in case of error.
 */
struct redback_rest_api_ns0_user *xmlTextReaderReadNs0UserElement(xmlTextReaderPtr reader);

/**
 * Writes a User to XML under element name "user".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _user The User to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0UserElement(xmlTextWriterPtr writer, struct redback_rest_api_ns0_user *_user);

/**
 * Writes a User to XML under element name "user".
 *
 * @param writer The XML writer.
 * @param _user The User to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0UserElementNS(xmlTextWriterPtr writer, struct redback_rest_api_ns0_user *_user, int writeNamespaces);

/**
 * Frees the children of a User.
 *
 * @param _user The User whose children are to be free.
 */
static void freeNs0UserElement(struct redback_rest_api_ns0_user *_user);

/**
 * Reads a User from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The User, or NULL in case of error.
 */
static struct redback_rest_api_ns0_user *xmlTextReaderReadNs0UserType(xmlTextReaderPtr reader);

/**
 * Writes a User to XML.
 *
 * @param writer The XML writer.
 * @param _user The User to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0UserType(xmlTextWriterPtr writer, struct redback_rest_api_ns0_user *_user);

/**
 * Frees the elements of a User.
 *
 * @param _user The User to free.
 */
static void freeNs0UserType(struct redback_rest_api_ns0_user *_user);

#endif /* DEF_redback_rest_api_ns0_user_H */
#ifndef DEF_redback_rest_api_ns0_userRegistrationRequest_H
#define DEF_redback_rest_api_ns0_userRegistrationRequest_H

/**
 *  @author Olivier Lamy
 *  @since 2.0
 */
struct redback_rest_api_ns0_userRegistrationRequest {


  /**
   * (no documentation provided)
   */
  struct redback_rest_api_ns0_user *user;

  /**
   * (no documentation provided)
   */
  xmlChar *applicationUrl;
};

/**
 * Reads a UserRegistrationRequest element from XML. The element to be read is "userRegistrationRequest", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The UserRegistrationRequest, or NULL in case of error.
 */
struct redback_rest_api_ns0_userRegistrationRequest *xml_read_redback_rest_api_ns0_userRegistrationRequest(xmlTextReaderPtr reader);

/**
 * Writes a UserRegistrationRequest to XML under element name "userRegistrationRequest".
 *
 * @param writer The XML writer.
 * @param _userRegistrationRequest The UserRegistrationRequest to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_redback_rest_api_ns0_userRegistrationRequest(xmlTextWriterPtr writer, struct redback_rest_api_ns0_userRegistrationRequest *_userRegistrationRequest);

/**
 * Frees a UserRegistrationRequest.
 *
 * @param _userRegistrationRequest The UserRegistrationRequest to free.
 */
void free_redback_rest_api_ns0_userRegistrationRequest(struct redback_rest_api_ns0_userRegistrationRequest *_userRegistrationRequest);

/**
 * Reads a UserRegistrationRequest element from XML. The element to be read is "userRegistrationRequest", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The UserRegistrationRequest, or NULL in case of error.
 */
struct redback_rest_api_ns0_userRegistrationRequest *xmlTextReaderReadNs0UserRegistrationRequestElement(xmlTextReaderPtr reader);

/**
 * Writes a UserRegistrationRequest to XML under element name "userRegistrationRequest".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _userRegistrationRequest The UserRegistrationRequest to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0UserRegistrationRequestElement(xmlTextWriterPtr writer, struct redback_rest_api_ns0_userRegistrationRequest *_userRegistrationRequest);

/**
 * Writes a UserRegistrationRequest to XML under element name "userRegistrationRequest".
 *
 * @param writer The XML writer.
 * @param _userRegistrationRequest The UserRegistrationRequest to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0UserRegistrationRequestElementNS(xmlTextWriterPtr writer, struct redback_rest_api_ns0_userRegistrationRequest *_userRegistrationRequest, int writeNamespaces);

/**
 * Frees the children of a UserRegistrationRequest.
 *
 * @param _userRegistrationRequest The UserRegistrationRequest whose children are to be free.
 */
static void freeNs0UserRegistrationRequestElement(struct redback_rest_api_ns0_userRegistrationRequest *_userRegistrationRequest);

/**
 * Reads a UserRegistrationRequest from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The UserRegistrationRequest, or NULL in case of error.
 */
static struct redback_rest_api_ns0_userRegistrationRequest *xmlTextReaderReadNs0UserRegistrationRequestType(xmlTextReaderPtr reader);

/**
 * Writes a UserRegistrationRequest to XML.
 *
 * @param writer The XML writer.
 * @param _userRegistrationRequest The UserRegistrationRequest to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0UserRegistrationRequestType(xmlTextWriterPtr writer, struct redback_rest_api_ns0_userRegistrationRequest *_userRegistrationRequest);

/**
 * Frees the elements of a UserRegistrationRequest.
 *
 * @param _userRegistrationRequest The UserRegistrationRequest to free.
 */
static void freeNs0UserRegistrationRequestType(struct redback_rest_api_ns0_userRegistrationRequest *_userRegistrationRequest);

#endif /* DEF_redback_rest_api_ns0_userRegistrationRequest_H */
#ifndef DEF_redback_rest_api_ns0_application_M
#define DEF_redback_rest_api_ns0_application_M

/**
 * Reads a Application element from XML. The element to be read is "application", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Application, or NULL in case of error.
 */
struct redback_rest_api_ns0_application *xml_read_redback_rest_api_ns0_application(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0ApplicationElement(reader);
}

/**
 * Writes a Application to XML under element name "application".
 *
 * @param writer The XML writer.
 * @param _application The Application to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_redback_rest_api_ns0_application(xmlTextWriterPtr writer, struct redback_rest_api_ns0_application *_application) {
  return xmlTextWriterWriteNs0ApplicationElementNS(writer, _application, 1);
}

/**
 * Frees a Application.
 *
 * @param _application The Application to free.
 */
void free_redback_rest_api_ns0_application(struct redback_rest_api_ns0_application *_application) {
  freeNs0ApplicationType(_application);
  free(_application);
}

/**
 * Reads a Application element from XML. The element to be read is "application", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The Application, or NULL in case of error.
 */
struct redback_rest_api_ns0_application *xmlTextReaderReadNs0ApplicationElement(xmlTextReaderPtr reader) {
  struct redback_rest_api_ns0_application *_application = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "application", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}application.\n");
#endif
    _application = xmlTextReaderReadNs0ApplicationType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_application == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}application failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}application failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _application;
}

/**
 * Writes a Application to XML under element name "application".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _application The Application to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0ApplicationElement(xmlTextWriterPtr writer, struct redback_rest_api_ns0_application *_application) {
  return xmlTextWriterWriteNs0ApplicationElementNS(writer, _application, 0);
}

/**
 * Writes a Application to XML under element name "application".
 *
 * @param writer The XML writer.
 * @param _application The Application to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0ApplicationElementNS(xmlTextWriterPtr writer, struct redback_rest_api_ns0_application *_application, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "application", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}application. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}application for root element {}application...\n");
#endif
  status = xmlTextWriterWriteNs0ApplicationType(writer, _application);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}application. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}application. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a Application.
 *
 * @param _application The Application whose children are to be free.
 */
static void freeNs0ApplicationElement(struct redback_rest_api_ns0_application *_application) {
  freeNs0ApplicationType(_application);
}

/**
 * Reads a Application from XML. The reader is assumed to be at the start element.
 *
 * @return the Application, or NULL in case of error.
 */
static struct redback_rest_api_ns0_application *xmlTextReaderReadNs0ApplicationType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct redback_rest_api_ns0_application *_application = calloc(1, sizeof(struct redback_rest_api_ns0_application));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0ApplicationType(_application);
        free(_application);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "version", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}version of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}version of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0ApplicationType(_application);
          free(_application);
          return NULL;
        }

        _application->version = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "id", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}id of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}id of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0ApplicationType(_application);
          free(_application);
          return NULL;
        }

        _application->id = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "description", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}description of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}description of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0ApplicationType(_application);
          free(_application);
          return NULL;
        }

        _application->description = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "longDescription", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}longDescription of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}longDescription of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0ApplicationType(_application);
          free(_application);
          return NULL;
        }

        _application->longDescription = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}application.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}application. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _application;
}

/**
 * Writes a Application to XML.
 *
 * @param writer The XML writer.
 * @param _application The Application to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0ApplicationType(xmlTextWriterPtr writer, struct redback_rest_api_ns0_application *_application) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_application->version != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "version", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}version. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}version...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_application->version));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}version. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}version. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_application->id != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "id", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}id...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_application->id));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_application->description != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "description", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}description. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}description...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_application->description));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}description. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}description. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_application->longDescription != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "longDescription", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}longDescription. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}longDescription...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_application->longDescription));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}longDescription. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}longDescription. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a Application.
 *
 * @param _application The Application to free.
 */
static void freeNs0ApplicationType(struct redback_rest_api_ns0_application *_application) {
  int i;
  if (_application->version != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor version of type redback_rest_api_ns0_application...\n");
#endif
    freeXsStringType(_application->version);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor version of type redback_rest_api_ns0_application...\n");
#endif
    free(_application->version);
  }
  if (_application->id != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor id of type redback_rest_api_ns0_application...\n");
#endif
    freeXsStringType(_application->id);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor id of type redback_rest_api_ns0_application...\n");
#endif
    free(_application->id);
  }
  if (_application->description != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor description of type redback_rest_api_ns0_application...\n");
#endif
    freeXsStringType(_application->description);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor description of type redback_rest_api_ns0_application...\n");
#endif
    free(_application->description);
  }
  if (_application->longDescription != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor longDescription of type redback_rest_api_ns0_application...\n");
#endif
    freeXsStringType(_application->longDescription);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor longDescription of type redback_rest_api_ns0_application...\n");
#endif
    free(_application->longDescription);
  }
}
#endif /* DEF_redback_rest_api_ns0_application_M */
#ifndef DEF_redback_rest_api_ns0_applicationRoles_M
#define DEF_redback_rest_api_ns0_applicationRoles_M

/**
 * Reads a ApplicationRoles element from XML. The element to be read is "applicationRole", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The ApplicationRoles, or NULL in case of error.
 */
struct redback_rest_api_ns0_applicationRoles *xml_read_redback_rest_api_ns0_applicationRoles(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0ApplicationRoleElement(reader);
}

/**
 * Writes a ApplicationRoles to XML under element name "applicationRole".
 *
 * @param writer The XML writer.
 * @param _applicationRoles The ApplicationRoles to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_redback_rest_api_ns0_applicationRoles(xmlTextWriterPtr writer, struct redback_rest_api_ns0_applicationRoles *_applicationRoles) {
  return xmlTextWriterWriteNs0ApplicationRoleElementNS(writer, _applicationRoles, 1);
}

/**
 * Frees a ApplicationRoles.
 *
 * @param _applicationRoles The ApplicationRoles to free.
 */
void free_redback_rest_api_ns0_applicationRoles(struct redback_rest_api_ns0_applicationRoles *_applicationRoles) {
  freeNs0ApplicationRolesType(_applicationRoles);
  free(_applicationRoles);
}

/**
 * Reads a ApplicationRoles element from XML. The element to be read is "applicationRole", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The ApplicationRoles, or NULL in case of error.
 */
struct redback_rest_api_ns0_applicationRoles *xmlTextReaderReadNs0ApplicationRoleElement(xmlTextReaderPtr reader) {
  struct redback_rest_api_ns0_applicationRoles *_applicationRoles = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "applicationRole", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}applicationRole.\n");
#endif
    _applicationRoles = xmlTextReaderReadNs0ApplicationRolesType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_applicationRoles == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}applicationRole failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}applicationRole failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _applicationRoles;
}

/**
 * Writes a ApplicationRoles to XML under element name "applicationRole".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _applicationRoles The ApplicationRoles to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0ApplicationRoleElement(xmlTextWriterPtr writer, struct redback_rest_api_ns0_applicationRoles *_applicationRoles) {
  return xmlTextWriterWriteNs0ApplicationRoleElementNS(writer, _applicationRoles, 0);
}

/**
 * Writes a ApplicationRoles to XML under element name "applicationRole".
 *
 * @param writer The XML writer.
 * @param _applicationRoles The ApplicationRoles to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0ApplicationRoleElementNS(xmlTextWriterPtr writer, struct redback_rest_api_ns0_applicationRoles *_applicationRoles, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "applicationRole", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}applicationRole. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}applicationRoles for root element {}applicationRole...\n");
#endif
  status = xmlTextWriterWriteNs0ApplicationRolesType(writer, _applicationRoles);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}applicationRole. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}applicationRole. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a ApplicationRoles.
 *
 * @param _applicationRoles The ApplicationRoles whose children are to be free.
 */
static void freeNs0ApplicationRoleElement(struct redback_rest_api_ns0_applicationRoles *_applicationRoles) {
  freeNs0ApplicationRolesType(_applicationRoles);
}

/**
 * Reads a ApplicationRoles from XML. The reader is assumed to be at the start element.
 *
 * @return the ApplicationRoles, or NULL in case of error.
 */
static struct redback_rest_api_ns0_applicationRoles *xmlTextReaderReadNs0ApplicationRolesType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct redback_rest_api_ns0_applicationRoles *_applicationRoles = calloc(1, sizeof(struct redback_rest_api_ns0_applicationRoles));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0ApplicationRolesType(_applicationRoles);
        free(_applicationRoles);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "name", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}name of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}name of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0ApplicationRolesType(_applicationRoles);
          free(_applicationRoles);
          return NULL;
        }

        _applicationRoles->name = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "description", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}description of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}description of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0ApplicationRolesType(_applicationRoles);
          free(_applicationRoles);
          return NULL;
        }

        _applicationRoles->description = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "globalRoles", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}globalRoles of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}globalRoles of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0ApplicationRolesType(_applicationRoles);
          free(_applicationRoles);
          return NULL;
        }

        _applicationRoles->globalRoles = realloc(_applicationRoles->globalRoles, (_applicationRoles->_sizeof_globalRoles + 1) * sizeof(xmlChar));
        memcpy(&(_applicationRoles->globalRoles[_applicationRoles->_sizeof_globalRoles++]), _child_accessor, sizeof(xmlChar));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "roleTemplates", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}roleTemplates of type {}roleTemplate.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0RoleTemplateType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}roleTemplates of type {}roleTemplate.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0ApplicationRolesType(_applicationRoles);
          free(_applicationRoles);
          return NULL;
        }

        _applicationRoles->roleTemplates = realloc(_applicationRoles->roleTemplates, (_applicationRoles->_sizeof_roleTemplates + 1) * sizeof(struct redback_rest_api_ns0_roleTemplate));
        memcpy(&(_applicationRoles->roleTemplates[_applicationRoles->_sizeof_roleTemplates++]), _child_accessor, sizeof(struct redback_rest_api_ns0_roleTemplate));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "resources", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}resources of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}resources of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0ApplicationRolesType(_applicationRoles);
          free(_applicationRoles);
          return NULL;
        }

        _applicationRoles->resources = realloc(_applicationRoles->resources, (_applicationRoles->_sizeof_resources + 1) * sizeof(xmlChar));
        memcpy(&(_applicationRoles->resources[_applicationRoles->_sizeof_resources++]), _child_accessor, sizeof(xmlChar));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}applicationRoles.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}applicationRoles. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _applicationRoles;
}

/**
 * Writes a ApplicationRoles to XML.
 *
 * @param writer The XML writer.
 * @param _applicationRoles The ApplicationRoles to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0ApplicationRolesType(xmlTextWriterPtr writer, struct redback_rest_api_ns0_applicationRoles *_applicationRoles) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_applicationRoles->name != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "name", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}name. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}name...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_applicationRoles->name));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}name. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}name. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_applicationRoles->description != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "description", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}description. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}description...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_applicationRoles->description));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}description. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}description. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _applicationRoles->_sizeof_globalRoles; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "globalRoles", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}globalRoles. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}globalRoles...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, &(_applicationRoles->globalRoles[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}globalRoles. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}globalRoles. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _applicationRoles->_sizeof_roleTemplates; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "roleTemplates", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}roleTemplates. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}roleTemplate for element {}roleTemplates...\n");
#endif
    status = xmlTextWriterWriteNs0RoleTemplateType(writer, &(_applicationRoles->roleTemplates[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}roleTemplate for element {}roleTemplates. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}roleTemplates. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _applicationRoles->_sizeof_resources; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "resources", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}resources. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}resources...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, &(_applicationRoles->resources[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}resources. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}resources. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a ApplicationRoles.
 *
 * @param _applicationRoles The ApplicationRoles to free.
 */
static void freeNs0ApplicationRolesType(struct redback_rest_api_ns0_applicationRoles *_applicationRoles) {
  int i;
  if (_applicationRoles->name != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor name of type redback_rest_api_ns0_applicationRoles...\n");
#endif
    freeXsStringType(_applicationRoles->name);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor name of type redback_rest_api_ns0_applicationRoles...\n");
#endif
    free(_applicationRoles->name);
  }
  if (_applicationRoles->description != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor description of type redback_rest_api_ns0_applicationRoles...\n");
#endif
    freeXsStringType(_applicationRoles->description);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor description of type redback_rest_api_ns0_applicationRoles...\n");
#endif
    free(_applicationRoles->description);
  }
  if (_applicationRoles->globalRoles != NULL) {
    for (i = 0; i < _applicationRoles->_sizeof_globalRoles; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor globalRoles[%i] of type redback_rest_api_ns0_applicationRoles...\n", i);
#endif
      freeXsStringType(&(_applicationRoles->globalRoles[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor globalRoles of type redback_rest_api_ns0_applicationRoles...\n");
#endif
    free(_applicationRoles->globalRoles);
  }
  if (_applicationRoles->roleTemplates != NULL) {
    for (i = 0; i < _applicationRoles->_sizeof_roleTemplates; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor roleTemplates[%i] of type redback_rest_api_ns0_applicationRoles...\n", i);
#endif
      freeNs0RoleTemplateType(&(_applicationRoles->roleTemplates[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor roleTemplates of type redback_rest_api_ns0_applicationRoles...\n");
#endif
    free(_applicationRoles->roleTemplates);
  }
  if (_applicationRoles->resources != NULL) {
    for (i = 0; i < _applicationRoles->_sizeof_resources; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor resources[%i] of type redback_rest_api_ns0_applicationRoles...\n", i);
#endif
      freeXsStringType(&(_applicationRoles->resources[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor resources of type redback_rest_api_ns0_applicationRoles...\n");
#endif
    free(_applicationRoles->resources);
  }
}
#endif /* DEF_redback_rest_api_ns0_applicationRoles_M */
#ifndef DEF_redback_rest_api_ns0_ldapGroupMapping_M
#define DEF_redback_rest_api_ns0_ldapGroupMapping_M

/**
 * Reads a LdapGroupMapping element from XML. The element to be read is "ldapGroupMapping", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The LdapGroupMapping, or NULL in case of error.
 */
struct redback_rest_api_ns0_ldapGroupMapping *xml_read_redback_rest_api_ns0_ldapGroupMapping(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0LdapGroupMappingElement(reader);
}

/**
 * Writes a LdapGroupMapping to XML under element name "ldapGroupMapping".
 *
 * @param writer The XML writer.
 * @param _ldapGroupMapping The LdapGroupMapping to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_redback_rest_api_ns0_ldapGroupMapping(xmlTextWriterPtr writer, struct redback_rest_api_ns0_ldapGroupMapping *_ldapGroupMapping) {
  return xmlTextWriterWriteNs0LdapGroupMappingElementNS(writer, _ldapGroupMapping, 1);
}

/**
 * Frees a LdapGroupMapping.
 *
 * @param _ldapGroupMapping The LdapGroupMapping to free.
 */
void free_redback_rest_api_ns0_ldapGroupMapping(struct redback_rest_api_ns0_ldapGroupMapping *_ldapGroupMapping) {
  freeNs0LdapGroupMappingType(_ldapGroupMapping);
  free(_ldapGroupMapping);
}

/**
 * Reads a LdapGroupMapping element from XML. The element to be read is "ldapGroupMapping", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The LdapGroupMapping, or NULL in case of error.
 */
struct redback_rest_api_ns0_ldapGroupMapping *xmlTextReaderReadNs0LdapGroupMappingElement(xmlTextReaderPtr reader) {
  struct redback_rest_api_ns0_ldapGroupMapping *_ldapGroupMapping = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "ldapGroupMapping", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}ldapGroupMapping.\n");
#endif
    _ldapGroupMapping = xmlTextReaderReadNs0LdapGroupMappingType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_ldapGroupMapping == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}ldapGroupMapping failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}ldapGroupMapping failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _ldapGroupMapping;
}

/**
 * Writes a LdapGroupMapping to XML under element name "ldapGroupMapping".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _ldapGroupMapping The LdapGroupMapping to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0LdapGroupMappingElement(xmlTextWriterPtr writer, struct redback_rest_api_ns0_ldapGroupMapping *_ldapGroupMapping) {
  return xmlTextWriterWriteNs0LdapGroupMappingElementNS(writer, _ldapGroupMapping, 0);
}

/**
 * Writes a LdapGroupMapping to XML under element name "ldapGroupMapping".
 *
 * @param writer The XML writer.
 * @param _ldapGroupMapping The LdapGroupMapping to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0LdapGroupMappingElementNS(xmlTextWriterPtr writer, struct redback_rest_api_ns0_ldapGroupMapping *_ldapGroupMapping, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "ldapGroupMapping", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}ldapGroupMapping. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}ldapGroupMapping for root element {}ldapGroupMapping...\n");
#endif
  status = xmlTextWriterWriteNs0LdapGroupMappingType(writer, _ldapGroupMapping);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}ldapGroupMapping. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}ldapGroupMapping. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a LdapGroupMapping.
 *
 * @param _ldapGroupMapping The LdapGroupMapping whose children are to be free.
 */
static void freeNs0LdapGroupMappingElement(struct redback_rest_api_ns0_ldapGroupMapping *_ldapGroupMapping) {
  freeNs0LdapGroupMappingType(_ldapGroupMapping);
}

/**
 * Reads a LdapGroupMapping from XML. The reader is assumed to be at the start element.
 *
 * @return the LdapGroupMapping, or NULL in case of error.
 */
static struct redback_rest_api_ns0_ldapGroupMapping *xmlTextReaderReadNs0LdapGroupMappingType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct redback_rest_api_ns0_ldapGroupMapping *_ldapGroupMapping = calloc(1, sizeof(struct redback_rest_api_ns0_ldapGroupMapping));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0LdapGroupMappingType(_ldapGroupMapping);
        free(_ldapGroupMapping);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "group", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}group of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}group of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0LdapGroupMappingType(_ldapGroupMapping);
          free(_ldapGroupMapping);
          return NULL;
        }

        _ldapGroupMapping->group = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "roleNames", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}roleNames of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}roleNames of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0LdapGroupMappingType(_ldapGroupMapping);
          free(_ldapGroupMapping);
          return NULL;
        }

        _ldapGroupMapping->roleNames = realloc(_ldapGroupMapping->roleNames, (_ldapGroupMapping->_sizeof_roleNames + 1) * sizeof(xmlChar));
        memcpy(&(_ldapGroupMapping->roleNames[_ldapGroupMapping->_sizeof_roleNames++]), _child_accessor, sizeof(xmlChar));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}ldapGroupMapping.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}ldapGroupMapping. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _ldapGroupMapping;
}

/**
 * Writes a LdapGroupMapping to XML.
 *
 * @param writer The XML writer.
 * @param _ldapGroupMapping The LdapGroupMapping to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0LdapGroupMappingType(xmlTextWriterPtr writer, struct redback_rest_api_ns0_ldapGroupMapping *_ldapGroupMapping) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_ldapGroupMapping->group != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "group", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}group. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}group...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_ldapGroupMapping->group));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}group. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}group. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _ldapGroupMapping->_sizeof_roleNames; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "roleNames", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}roleNames. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}roleNames...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, &(_ldapGroupMapping->roleNames[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}roleNames. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}roleNames. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a LdapGroupMapping.
 *
 * @param _ldapGroupMapping The LdapGroupMapping to free.
 */
static void freeNs0LdapGroupMappingType(struct redback_rest_api_ns0_ldapGroupMapping *_ldapGroupMapping) {
  int i;
  if (_ldapGroupMapping->group != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor group of type redback_rest_api_ns0_ldapGroupMapping...\n");
#endif
    freeXsStringType(_ldapGroupMapping->group);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor group of type redback_rest_api_ns0_ldapGroupMapping...\n");
#endif
    free(_ldapGroupMapping->group);
  }
  if (_ldapGroupMapping->roleNames != NULL) {
    for (i = 0; i < _ldapGroupMapping->_sizeof_roleNames; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor roleNames[%i] of type redback_rest_api_ns0_ldapGroupMapping...\n", i);
#endif
      freeXsStringType(&(_ldapGroupMapping->roleNames[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor roleNames of type redback_rest_api_ns0_ldapGroupMapping...\n");
#endif
    free(_ldapGroupMapping->roleNames);
  }
}
#endif /* DEF_redback_rest_api_ns0_ldapGroupMapping_M */
#ifndef DEF_redback_rest_api_ns0_ldapGroupMappingUpdateRequest_M
#define DEF_redback_rest_api_ns0_ldapGroupMappingUpdateRequest_M

/**
 * Reads a LdapGroupMappingUpdateRequest element from XML. The element to be read is "ldapGroupMappingUpdateRequest", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The LdapGroupMappingUpdateRequest, or NULL in case of error.
 */
struct redback_rest_api_ns0_ldapGroupMappingUpdateRequest *xml_read_redback_rest_api_ns0_ldapGroupMappingUpdateRequest(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0LdapGroupMappingUpdateRequestElement(reader);
}

/**
 * Writes a LdapGroupMappingUpdateRequest to XML under element name "ldapGroupMappingUpdateRequest".
 *
 * @param writer The XML writer.
 * @param _ldapGroupMappingUpdateRequest The LdapGroupMappingUpdateRequest to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_redback_rest_api_ns0_ldapGroupMappingUpdateRequest(xmlTextWriterPtr writer, struct redback_rest_api_ns0_ldapGroupMappingUpdateRequest *_ldapGroupMappingUpdateRequest) {
  return xmlTextWriterWriteNs0LdapGroupMappingUpdateRequestElementNS(writer, _ldapGroupMappingUpdateRequest, 1);
}

/**
 * Frees a LdapGroupMappingUpdateRequest.
 *
 * @param _ldapGroupMappingUpdateRequest The LdapGroupMappingUpdateRequest to free.
 */
void free_redback_rest_api_ns0_ldapGroupMappingUpdateRequest(struct redback_rest_api_ns0_ldapGroupMappingUpdateRequest *_ldapGroupMappingUpdateRequest) {
  freeNs0LdapGroupMappingUpdateRequestType(_ldapGroupMappingUpdateRequest);
  free(_ldapGroupMappingUpdateRequest);
}

/**
 * Reads a LdapGroupMappingUpdateRequest element from XML. The element to be read is "ldapGroupMappingUpdateRequest", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The LdapGroupMappingUpdateRequest, or NULL in case of error.
 */
struct redback_rest_api_ns0_ldapGroupMappingUpdateRequest *xmlTextReaderReadNs0LdapGroupMappingUpdateRequestElement(xmlTextReaderPtr reader) {
  struct redback_rest_api_ns0_ldapGroupMappingUpdateRequest *_ldapGroupMappingUpdateRequest = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "ldapGroupMappingUpdateRequest", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}ldapGroupMappingUpdateRequest.\n");
#endif
    _ldapGroupMappingUpdateRequest = xmlTextReaderReadNs0LdapGroupMappingUpdateRequestType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_ldapGroupMappingUpdateRequest == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}ldapGroupMappingUpdateRequest failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}ldapGroupMappingUpdateRequest failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _ldapGroupMappingUpdateRequest;
}

/**
 * Writes a LdapGroupMappingUpdateRequest to XML under element name "ldapGroupMappingUpdateRequest".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _ldapGroupMappingUpdateRequest The LdapGroupMappingUpdateRequest to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0LdapGroupMappingUpdateRequestElement(xmlTextWriterPtr writer, struct redback_rest_api_ns0_ldapGroupMappingUpdateRequest *_ldapGroupMappingUpdateRequest) {
  return xmlTextWriterWriteNs0LdapGroupMappingUpdateRequestElementNS(writer, _ldapGroupMappingUpdateRequest, 0);
}

/**
 * Writes a LdapGroupMappingUpdateRequest to XML under element name "ldapGroupMappingUpdateRequest".
 *
 * @param writer The XML writer.
 * @param _ldapGroupMappingUpdateRequest The LdapGroupMappingUpdateRequest to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0LdapGroupMappingUpdateRequestElementNS(xmlTextWriterPtr writer, struct redback_rest_api_ns0_ldapGroupMappingUpdateRequest *_ldapGroupMappingUpdateRequest, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "ldapGroupMappingUpdateRequest", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}ldapGroupMappingUpdateRequest. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}ldapGroupMappingUpdateRequest for root element {}ldapGroupMappingUpdateRequest...\n");
#endif
  status = xmlTextWriterWriteNs0LdapGroupMappingUpdateRequestType(writer, _ldapGroupMappingUpdateRequest);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}ldapGroupMappingUpdateRequest. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}ldapGroupMappingUpdateRequest. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a LdapGroupMappingUpdateRequest.
 *
 * @param _ldapGroupMappingUpdateRequest The LdapGroupMappingUpdateRequest whose children are to be free.
 */
static void freeNs0LdapGroupMappingUpdateRequestElement(struct redback_rest_api_ns0_ldapGroupMappingUpdateRequest *_ldapGroupMappingUpdateRequest) {
  freeNs0LdapGroupMappingUpdateRequestType(_ldapGroupMappingUpdateRequest);
}

/**
 * Reads a LdapGroupMappingUpdateRequest from XML. The reader is assumed to be at the start element.
 *
 * @return the LdapGroupMappingUpdateRequest, or NULL in case of error.
 */
static struct redback_rest_api_ns0_ldapGroupMappingUpdateRequest *xmlTextReaderReadNs0LdapGroupMappingUpdateRequestType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct redback_rest_api_ns0_ldapGroupMappingUpdateRequest *_ldapGroupMappingUpdateRequest = calloc(1, sizeof(struct redback_rest_api_ns0_ldapGroupMappingUpdateRequest));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0LdapGroupMappingUpdateRequestType(_ldapGroupMappingUpdateRequest);
        free(_ldapGroupMappingUpdateRequest);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "ldapGroupMapping", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}ldapGroupMapping of type {}ldapGroupMapping.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0LdapGroupMappingType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}ldapGroupMapping of type {}ldapGroupMapping.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0LdapGroupMappingUpdateRequestType(_ldapGroupMappingUpdateRequest);
          free(_ldapGroupMappingUpdateRequest);
          return NULL;
        }

        _ldapGroupMappingUpdateRequest->ldapGroupMapping = realloc(_ldapGroupMappingUpdateRequest->ldapGroupMapping, (_ldapGroupMappingUpdateRequest->_sizeof_ldapGroupMapping + 1) * sizeof(struct redback_rest_api_ns0_ldapGroupMapping));
        memcpy(&(_ldapGroupMappingUpdateRequest->ldapGroupMapping[_ldapGroupMappingUpdateRequest->_sizeof_ldapGroupMapping++]), _child_accessor, sizeof(struct redback_rest_api_ns0_ldapGroupMapping));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}ldapGroupMappingUpdateRequest.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}ldapGroupMappingUpdateRequest. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _ldapGroupMappingUpdateRequest;
}

/**
 * Writes a LdapGroupMappingUpdateRequest to XML.
 *
 * @param writer The XML writer.
 * @param _ldapGroupMappingUpdateRequest The LdapGroupMappingUpdateRequest to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0LdapGroupMappingUpdateRequestType(xmlTextWriterPtr writer, struct redback_rest_api_ns0_ldapGroupMappingUpdateRequest *_ldapGroupMappingUpdateRequest) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  for (i = 0; i < _ldapGroupMappingUpdateRequest->_sizeof_ldapGroupMapping; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "ldapGroupMapping", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}ldapGroupMapping. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}ldapGroupMapping for element {}ldapGroupMapping...\n");
#endif
    status = xmlTextWriterWriteNs0LdapGroupMappingType(writer, &(_ldapGroupMappingUpdateRequest->ldapGroupMapping[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}ldapGroupMapping for element {}ldapGroupMapping. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}ldapGroupMapping. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a LdapGroupMappingUpdateRequest.
 *
 * @param _ldapGroupMappingUpdateRequest The LdapGroupMappingUpdateRequest to free.
 */
static void freeNs0LdapGroupMappingUpdateRequestType(struct redback_rest_api_ns0_ldapGroupMappingUpdateRequest *_ldapGroupMappingUpdateRequest) {
  int i;
  if (_ldapGroupMappingUpdateRequest->ldapGroupMapping != NULL) {
    for (i = 0; i < _ldapGroupMappingUpdateRequest->_sizeof_ldapGroupMapping; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor ldapGroupMapping[%i] of type redback_rest_api_ns0_ldapGroupMappingUpdateRequest...\n", i);
#endif
      freeNs0LdapGroupMappingType(&(_ldapGroupMappingUpdateRequest->ldapGroupMapping[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor ldapGroupMapping of type redback_rest_api_ns0_ldapGroupMappingUpdateRequest...\n");
#endif
    free(_ldapGroupMappingUpdateRequest->ldapGroupMapping);
  }
}
#endif /* DEF_redback_rest_api_ns0_ldapGroupMappingUpdateRequest_M */
#ifndef DEF_redback_rest_api_ns0_loginRequest_M
#define DEF_redback_rest_api_ns0_loginRequest_M

/**
 * Reads a LoginRequest element from XML. The element to be read is "loginRequest", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The LoginRequest, or NULL in case of error.
 */
struct redback_rest_api_ns0_loginRequest *xml_read_redback_rest_api_ns0_loginRequest(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0LoginRequestElement(reader);
}

/**
 * Writes a LoginRequest to XML under element name "loginRequest".
 *
 * @param writer The XML writer.
 * @param _loginRequest The LoginRequest to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_redback_rest_api_ns0_loginRequest(xmlTextWriterPtr writer, struct redback_rest_api_ns0_loginRequest *_loginRequest) {
  return xmlTextWriterWriteNs0LoginRequestElementNS(writer, _loginRequest, 1);
}

/**
 * Frees a LoginRequest.
 *
 * @param _loginRequest The LoginRequest to free.
 */
void free_redback_rest_api_ns0_loginRequest(struct redback_rest_api_ns0_loginRequest *_loginRequest) {
  freeNs0LoginRequestType(_loginRequest);
  free(_loginRequest);
}

/**
 * Reads a LoginRequest element from XML. The element to be read is "loginRequest", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The LoginRequest, or NULL in case of error.
 */
struct redback_rest_api_ns0_loginRequest *xmlTextReaderReadNs0LoginRequestElement(xmlTextReaderPtr reader) {
  struct redback_rest_api_ns0_loginRequest *_loginRequest = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "loginRequest", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}loginRequest.\n");
#endif
    _loginRequest = xmlTextReaderReadNs0LoginRequestType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_loginRequest == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}loginRequest failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}loginRequest failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _loginRequest;
}

/**
 * Writes a LoginRequest to XML under element name "loginRequest".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _loginRequest The LoginRequest to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0LoginRequestElement(xmlTextWriterPtr writer, struct redback_rest_api_ns0_loginRequest *_loginRequest) {
  return xmlTextWriterWriteNs0LoginRequestElementNS(writer, _loginRequest, 0);
}

/**
 * Writes a LoginRequest to XML under element name "loginRequest".
 *
 * @param writer The XML writer.
 * @param _loginRequest The LoginRequest to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0LoginRequestElementNS(xmlTextWriterPtr writer, struct redback_rest_api_ns0_loginRequest *_loginRequest, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "loginRequest", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}loginRequest. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}loginRequest for root element {}loginRequest...\n");
#endif
  status = xmlTextWriterWriteNs0LoginRequestType(writer, _loginRequest);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}loginRequest. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}loginRequest. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a LoginRequest.
 *
 * @param _loginRequest The LoginRequest whose children are to be free.
 */
static void freeNs0LoginRequestElement(struct redback_rest_api_ns0_loginRequest *_loginRequest) {
  freeNs0LoginRequestType(_loginRequest);
}

/**
 * Reads a LoginRequest from XML. The reader is assumed to be at the start element.
 *
 * @return the LoginRequest, or NULL in case of error.
 */
static struct redback_rest_api_ns0_loginRequest *xmlTextReaderReadNs0LoginRequestType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct redback_rest_api_ns0_loginRequest *_loginRequest = calloc(1, sizeof(struct redback_rest_api_ns0_loginRequest));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0LoginRequestType(_loginRequest);
        free(_loginRequest);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "username", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}username of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}username of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0LoginRequestType(_loginRequest);
          free(_loginRequest);
          return NULL;
        }

        _loginRequest->username = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "password", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}password of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}password of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0LoginRequestType(_loginRequest);
          free(_loginRequest);
          return NULL;
        }

        _loginRequest->password = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}loginRequest.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}loginRequest. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _loginRequest;
}

/**
 * Writes a LoginRequest to XML.
 *
 * @param writer The XML writer.
 * @param _loginRequest The LoginRequest to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0LoginRequestType(xmlTextWriterPtr writer, struct redback_rest_api_ns0_loginRequest *_loginRequest) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_loginRequest->username != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "username", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}username. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}username...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_loginRequest->username));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}username. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}username. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_loginRequest->password != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "password", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}password. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}password...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_loginRequest->password));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}password. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}password. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a LoginRequest.
 *
 * @param _loginRequest The LoginRequest to free.
 */
static void freeNs0LoginRequestType(struct redback_rest_api_ns0_loginRequest *_loginRequest) {
  int i;
  if (_loginRequest->username != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor username of type redback_rest_api_ns0_loginRequest...\n");
#endif
    freeXsStringType(_loginRequest->username);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor username of type redback_rest_api_ns0_loginRequest...\n");
#endif
    free(_loginRequest->username);
  }
  if (_loginRequest->password != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor password of type redback_rest_api_ns0_loginRequest...\n");
#endif
    freeXsStringType(_loginRequest->password);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor password of type redback_rest_api_ns0_loginRequest...\n");
#endif
    free(_loginRequest->password);
  }
}
#endif /* DEF_redback_rest_api_ns0_loginRequest_M */
#ifndef DEF_redback_rest_api_ns0_operation_M
#define DEF_redback_rest_api_ns0_operation_M

/**
 * Reads a Operation element from XML. The element to be read is "operation", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Operation, or NULL in case of error.
 */
struct redback_rest_api_ns0_operation *xml_read_redback_rest_api_ns0_operation(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0OperationElement(reader);
}

/**
 * Writes a Operation to XML under element name "operation".
 *
 * @param writer The XML writer.
 * @param _operation The Operation to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_redback_rest_api_ns0_operation(xmlTextWriterPtr writer, struct redback_rest_api_ns0_operation *_operation) {
  return xmlTextWriterWriteNs0OperationElementNS(writer, _operation, 1);
}

/**
 * Frees a Operation.
 *
 * @param _operation The Operation to free.
 */
void free_redback_rest_api_ns0_operation(struct redback_rest_api_ns0_operation *_operation) {
  freeNs0OperationType(_operation);
  free(_operation);
}

/**
 * Reads a Operation element from XML. The element to be read is "operation", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The Operation, or NULL in case of error.
 */
struct redback_rest_api_ns0_operation *xmlTextReaderReadNs0OperationElement(xmlTextReaderPtr reader) {
  struct redback_rest_api_ns0_operation *_operation = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "operation", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}operation.\n");
#endif
    _operation = xmlTextReaderReadNs0OperationType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_operation == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}operation failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}operation failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _operation;
}

/**
 * Writes a Operation to XML under element name "operation".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _operation The Operation to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0OperationElement(xmlTextWriterPtr writer, struct redback_rest_api_ns0_operation *_operation) {
  return xmlTextWriterWriteNs0OperationElementNS(writer, _operation, 0);
}

/**
 * Writes a Operation to XML under element name "operation".
 *
 * @param writer The XML writer.
 * @param _operation The Operation to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0OperationElementNS(xmlTextWriterPtr writer, struct redback_rest_api_ns0_operation *_operation, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "operation", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}operation. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}operation for root element {}operation...\n");
#endif
  status = xmlTextWriterWriteNs0OperationType(writer, _operation);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}operation. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}operation. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a Operation.
 *
 * @param _operation The Operation whose children are to be free.
 */
static void freeNs0OperationElement(struct redback_rest_api_ns0_operation *_operation) {
  freeNs0OperationType(_operation);
}

/**
 * Reads a Operation from XML. The reader is assumed to be at the start element.
 *
 * @return the Operation, or NULL in case of error.
 */
static struct redback_rest_api_ns0_operation *xmlTextReaderReadNs0OperationType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct redback_rest_api_ns0_operation *_operation = calloc(1, sizeof(struct redback_rest_api_ns0_operation));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0OperationType(_operation);
        free(_operation);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "name", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}name of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}name of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0OperationType(_operation);
          free(_operation);
          return NULL;
        }

        _operation->name = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "description", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}description of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}description of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0OperationType(_operation);
          free(_operation);
          return NULL;
        }

        _operation->description = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "permanent", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}permanent of type {http://www.w3.org/2001/XMLSchema}boolean.\n");
#endif
        _child_accessor = xmlTextReaderReadXsBooleanType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}permanent of type {http://www.w3.org/2001/XMLSchema}boolean.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0OperationType(_operation);
          free(_operation);
          return NULL;
        }

        _operation->permanent = *((int*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}operation.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}operation. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _operation;
}

/**
 * Writes a Operation to XML.
 *
 * @param writer The XML writer.
 * @param _operation The Operation to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0OperationType(xmlTextWriterPtr writer, struct redback_rest_api_ns0_operation *_operation) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_operation->name != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "name", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}name. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}name...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_operation->name));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}name. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}name. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_operation->description != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "description", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}description. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}description...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_operation->description));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}description. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}description. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "permanent", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}permanent. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}boolean for element {}permanent...\n");
#endif
    status = xmlTextWriterWriteXsBooleanType(writer, &(_operation->permanent));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}boolean for element {}permanent. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}permanent. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a Operation.
 *
 * @param _operation The Operation to free.
 */
static void freeNs0OperationType(struct redback_rest_api_ns0_operation *_operation) {
  int i;
  if (_operation->name != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor name of type redback_rest_api_ns0_operation...\n");
#endif
    freeXsStringType(_operation->name);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor name of type redback_rest_api_ns0_operation...\n");
#endif
    free(_operation->name);
  }
  if (_operation->description != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor description of type redback_rest_api_ns0_operation...\n");
#endif
    freeXsStringType(_operation->description);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor description of type redback_rest_api_ns0_operation...\n");
#endif
    free(_operation->description);
  }
}
#endif /* DEF_redback_rest_api_ns0_operation_M */
#ifndef DEF_redback_rest_api_ns0_permission_M
#define DEF_redback_rest_api_ns0_permission_M

/**
 * Reads a Permission element from XML. The element to be read is "permission", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Permission, or NULL in case of error.
 */
struct redback_rest_api_ns0_permission *xml_read_redback_rest_api_ns0_permission(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0PermissionElement(reader);
}

/**
 * Writes a Permission to XML under element name "permission".
 *
 * @param writer The XML writer.
 * @param _permission The Permission to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_redback_rest_api_ns0_permission(xmlTextWriterPtr writer, struct redback_rest_api_ns0_permission *_permission) {
  return xmlTextWriterWriteNs0PermissionElementNS(writer, _permission, 1);
}

/**
 * Frees a Permission.
 *
 * @param _permission The Permission to free.
 */
void free_redback_rest_api_ns0_permission(struct redback_rest_api_ns0_permission *_permission) {
  freeNs0PermissionType(_permission);
  free(_permission);
}

/**
 * Reads a Permission element from XML. The element to be read is "permission", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The Permission, or NULL in case of error.
 */
struct redback_rest_api_ns0_permission *xmlTextReaderReadNs0PermissionElement(xmlTextReaderPtr reader) {
  struct redback_rest_api_ns0_permission *_permission = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "permission", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}permission.\n");
#endif
    _permission = xmlTextReaderReadNs0PermissionType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_permission == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}permission failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}permission failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _permission;
}

/**
 * Writes a Permission to XML under element name "permission".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _permission The Permission to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0PermissionElement(xmlTextWriterPtr writer, struct redback_rest_api_ns0_permission *_permission) {
  return xmlTextWriterWriteNs0PermissionElementNS(writer, _permission, 0);
}

/**
 * Writes a Permission to XML under element name "permission".
 *
 * @param writer The XML writer.
 * @param _permission The Permission to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0PermissionElementNS(xmlTextWriterPtr writer, struct redback_rest_api_ns0_permission *_permission, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "permission", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}permission. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}permission for root element {}permission...\n");
#endif
  status = xmlTextWriterWriteNs0PermissionType(writer, _permission);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}permission. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}permission. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a Permission.
 *
 * @param _permission The Permission whose children are to be free.
 */
static void freeNs0PermissionElement(struct redback_rest_api_ns0_permission *_permission) {
  freeNs0PermissionType(_permission);
}

/**
 * Reads a Permission from XML. The reader is assumed to be at the start element.
 *
 * @return the Permission, or NULL in case of error.
 */
static struct redback_rest_api_ns0_permission *xmlTextReaderReadNs0PermissionType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct redback_rest_api_ns0_permission *_permission = calloc(1, sizeof(struct redback_rest_api_ns0_permission));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0PermissionType(_permission);
        free(_permission);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "name", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}name of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}name of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0PermissionType(_permission);
          free(_permission);
          return NULL;
        }

        _permission->name = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "operation", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}operation of type {}operation.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0OperationType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}operation of type {}operation.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0PermissionType(_permission);
          free(_permission);
          return NULL;
        }

        _permission->operation = ((struct redback_rest_api_ns0_operation*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "resource", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}resource of type {}resource.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0ResourceType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}resource of type {}resource.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0PermissionType(_permission);
          free(_permission);
          return NULL;
        }

        _permission->resource = ((struct redback_rest_api_ns0_resource*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}permission.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}permission. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _permission;
}

/**
 * Writes a Permission to XML.
 *
 * @param writer The XML writer.
 * @param _permission The Permission to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0PermissionType(xmlTextWriterPtr writer, struct redback_rest_api_ns0_permission *_permission) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_permission->name != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "name", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}name. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}name...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_permission->name));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}name. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}name. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_permission->operation != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "operation", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}operation. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}operation for element {}operation...\n");
#endif
    status = xmlTextWriterWriteNs0OperationType(writer, (_permission->operation));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}operation for element {}operation. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}operation. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_permission->resource != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "resource", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}resource. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}resource for element {}resource...\n");
#endif
    status = xmlTextWriterWriteNs0ResourceType(writer, (_permission->resource));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}resource for element {}resource. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}resource. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a Permission.
 *
 * @param _permission The Permission to free.
 */
static void freeNs0PermissionType(struct redback_rest_api_ns0_permission *_permission) {
  int i;
  if (_permission->name != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor name of type redback_rest_api_ns0_permission...\n");
#endif
    freeXsStringType(_permission->name);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor name of type redback_rest_api_ns0_permission...\n");
#endif
    free(_permission->name);
  }
  if (_permission->operation != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor operation of type redback_rest_api_ns0_permission...\n");
#endif
    freeNs0OperationType(_permission->operation);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor operation of type redback_rest_api_ns0_permission...\n");
#endif
    free(_permission->operation);
  }
  if (_permission->resource != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor resource of type redback_rest_api_ns0_permission...\n");
#endif
    freeNs0ResourceType(_permission->resource);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor resource of type redback_rest_api_ns0_permission...\n");
#endif
    free(_permission->resource);
  }
}
#endif /* DEF_redback_rest_api_ns0_permission_M */
#ifndef DEF_redback_rest_api_ns0_registrationKey_M
#define DEF_redback_rest_api_ns0_registrationKey_M

/**
 * Reads a RegistrationKey element from XML. The element to be read is "registrationKey", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The RegistrationKey, or NULL in case of error.
 */
struct redback_rest_api_ns0_registrationKey *xml_read_redback_rest_api_ns0_registrationKey(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0RegistrationKeyElement(reader);
}

/**
 * Writes a RegistrationKey to XML under element name "registrationKey".
 *
 * @param writer The XML writer.
 * @param _registrationKey The RegistrationKey to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_redback_rest_api_ns0_registrationKey(xmlTextWriterPtr writer, struct redback_rest_api_ns0_registrationKey *_registrationKey) {
  return xmlTextWriterWriteNs0RegistrationKeyElementNS(writer, _registrationKey, 1);
}

/**
 * Frees a RegistrationKey.
 *
 * @param _registrationKey The RegistrationKey to free.
 */
void free_redback_rest_api_ns0_registrationKey(struct redback_rest_api_ns0_registrationKey *_registrationKey) {
  freeNs0RegistrationKeyType(_registrationKey);
  free(_registrationKey);
}

/**
 * Reads a RegistrationKey element from XML. The element to be read is "registrationKey", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The RegistrationKey, or NULL in case of error.
 */
struct redback_rest_api_ns0_registrationKey *xmlTextReaderReadNs0RegistrationKeyElement(xmlTextReaderPtr reader) {
  struct redback_rest_api_ns0_registrationKey *_registrationKey = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "registrationKey", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}registrationKey.\n");
#endif
    _registrationKey = xmlTextReaderReadNs0RegistrationKeyType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_registrationKey == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}registrationKey failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}registrationKey failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _registrationKey;
}

/**
 * Writes a RegistrationKey to XML under element name "registrationKey".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _registrationKey The RegistrationKey to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0RegistrationKeyElement(xmlTextWriterPtr writer, struct redback_rest_api_ns0_registrationKey *_registrationKey) {
  return xmlTextWriterWriteNs0RegistrationKeyElementNS(writer, _registrationKey, 0);
}

/**
 * Writes a RegistrationKey to XML under element name "registrationKey".
 *
 * @param writer The XML writer.
 * @param _registrationKey The RegistrationKey to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0RegistrationKeyElementNS(xmlTextWriterPtr writer, struct redback_rest_api_ns0_registrationKey *_registrationKey, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "registrationKey", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}registrationKey. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}registrationKey for root element {}registrationKey...\n");
#endif
  status = xmlTextWriterWriteNs0RegistrationKeyType(writer, _registrationKey);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}registrationKey. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}registrationKey. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a RegistrationKey.
 *
 * @param _registrationKey The RegistrationKey whose children are to be free.
 */
static void freeNs0RegistrationKeyElement(struct redback_rest_api_ns0_registrationKey *_registrationKey) {
  freeNs0RegistrationKeyType(_registrationKey);
}

/**
 * Reads a RegistrationKey from XML. The reader is assumed to be at the start element.
 *
 * @return the RegistrationKey, or NULL in case of error.
 */
static struct redback_rest_api_ns0_registrationKey *xmlTextReaderReadNs0RegistrationKeyType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct redback_rest_api_ns0_registrationKey *_registrationKey = calloc(1, sizeof(struct redback_rest_api_ns0_registrationKey));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0RegistrationKeyType(_registrationKey);
        free(_registrationKey);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "key", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}key of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}key of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0RegistrationKeyType(_registrationKey);
          free(_registrationKey);
          return NULL;
        }

        _registrationKey->key = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}registrationKey.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}registrationKey. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _registrationKey;
}

/**
 * Writes a RegistrationKey to XML.
 *
 * @param writer The XML writer.
 * @param _registrationKey The RegistrationKey to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0RegistrationKeyType(xmlTextWriterPtr writer, struct redback_rest_api_ns0_registrationKey *_registrationKey) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_registrationKey->key != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "key", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}key. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}key...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_registrationKey->key));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}key. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}key. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a RegistrationKey.
 *
 * @param _registrationKey The RegistrationKey to free.
 */
static void freeNs0RegistrationKeyType(struct redback_rest_api_ns0_registrationKey *_registrationKey) {
  int i;
  if (_registrationKey->key != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor key of type redback_rest_api_ns0_registrationKey...\n");
#endif
    freeXsStringType(_registrationKey->key);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor key of type redback_rest_api_ns0_registrationKey...\n");
#endif
    free(_registrationKey->key);
  }
}
#endif /* DEF_redback_rest_api_ns0_registrationKey_M */
#ifndef DEF_redback_rest_api_ns0_resetPasswordRequest_M
#define DEF_redback_rest_api_ns0_resetPasswordRequest_M

/**
 * Reads a ResetPasswordRequest from XML. The reader is assumed to be at the start element.
 *
 * @return the ResetPasswordRequest, or NULL in case of error.
 */
static struct redback_rest_api_ns0_resetPasswordRequest *xmlTextReaderReadNs0ResetPasswordRequestType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct redback_rest_api_ns0_resetPasswordRequest *_resetPasswordRequest = calloc(1, sizeof(struct redback_rest_api_ns0_resetPasswordRequest));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0ResetPasswordRequestType(_resetPasswordRequest);
        free(_resetPasswordRequest);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "username", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}username of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}username of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0ResetPasswordRequestType(_resetPasswordRequest);
          free(_resetPasswordRequest);
          return NULL;
        }

        _resetPasswordRequest->username = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "applicationUrl", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}applicationUrl of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}applicationUrl of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0ResetPasswordRequestType(_resetPasswordRequest);
          free(_resetPasswordRequest);
          return NULL;
        }

        _resetPasswordRequest->applicationUrl = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}resetPasswordRequest.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}resetPasswordRequest. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _resetPasswordRequest;
}

/**
 * Writes a ResetPasswordRequest to XML.
 *
 * @param writer The XML writer.
 * @param _resetPasswordRequest The ResetPasswordRequest to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0ResetPasswordRequestType(xmlTextWriterPtr writer, struct redback_rest_api_ns0_resetPasswordRequest *_resetPasswordRequest) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_resetPasswordRequest->username != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "username", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}username. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}username...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_resetPasswordRequest->username));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}username. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}username. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_resetPasswordRequest->applicationUrl != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "applicationUrl", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}applicationUrl. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}applicationUrl...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_resetPasswordRequest->applicationUrl));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}applicationUrl. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}applicationUrl. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a ResetPasswordRequest.
 *
 * @param _resetPasswordRequest The ResetPasswordRequest to free.
 */
static void freeNs0ResetPasswordRequestType(struct redback_rest_api_ns0_resetPasswordRequest *_resetPasswordRequest) {
  int i;
  if (_resetPasswordRequest->username != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor username of type redback_rest_api_ns0_resetPasswordRequest...\n");
#endif
    freeXsStringType(_resetPasswordRequest->username);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor username of type redback_rest_api_ns0_resetPasswordRequest...\n");
#endif
    free(_resetPasswordRequest->username);
  }
  if (_resetPasswordRequest->applicationUrl != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor applicationUrl of type redback_rest_api_ns0_resetPasswordRequest...\n");
#endif
    freeXsStringType(_resetPasswordRequest->applicationUrl);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor applicationUrl of type redback_rest_api_ns0_resetPasswordRequest...\n");
#endif
    free(_resetPasswordRequest->applicationUrl);
  }
}
#endif /* DEF_redback_rest_api_ns0_resetPasswordRequest_M */
#ifndef DEF_redback_rest_api_ns0_resource_M
#define DEF_redback_rest_api_ns0_resource_M

/**
 * Reads a Resource element from XML. The element to be read is "resource", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Resource, or NULL in case of error.
 */
struct redback_rest_api_ns0_resource *xml_read_redback_rest_api_ns0_resource(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0ResourceElement(reader);
}

/**
 * Writes a Resource to XML under element name "resource".
 *
 * @param writer The XML writer.
 * @param _resource The Resource to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_redback_rest_api_ns0_resource(xmlTextWriterPtr writer, struct redback_rest_api_ns0_resource *_resource) {
  return xmlTextWriterWriteNs0ResourceElementNS(writer, _resource, 1);
}

/**
 * Frees a Resource.
 *
 * @param _resource The Resource to free.
 */
void free_redback_rest_api_ns0_resource(struct redback_rest_api_ns0_resource *_resource) {
  freeNs0ResourceType(_resource);
  free(_resource);
}

/**
 * Reads a Resource element from XML. The element to be read is "resource", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The Resource, or NULL in case of error.
 */
struct redback_rest_api_ns0_resource *xmlTextReaderReadNs0ResourceElement(xmlTextReaderPtr reader) {
  struct redback_rest_api_ns0_resource *_resource = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "resource", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}resource.\n");
#endif
    _resource = xmlTextReaderReadNs0ResourceType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_resource == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}resource failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}resource failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _resource;
}

/**
 * Writes a Resource to XML under element name "resource".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _resource The Resource to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0ResourceElement(xmlTextWriterPtr writer, struct redback_rest_api_ns0_resource *_resource) {
  return xmlTextWriterWriteNs0ResourceElementNS(writer, _resource, 0);
}

/**
 * Writes a Resource to XML under element name "resource".
 *
 * @param writer The XML writer.
 * @param _resource The Resource to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0ResourceElementNS(xmlTextWriterPtr writer, struct redback_rest_api_ns0_resource *_resource, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "resource", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}resource. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}resource for root element {}resource...\n");
#endif
  status = xmlTextWriterWriteNs0ResourceType(writer, _resource);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}resource. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}resource. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a Resource.
 *
 * @param _resource The Resource whose children are to be free.
 */
static void freeNs0ResourceElement(struct redback_rest_api_ns0_resource *_resource) {
  freeNs0ResourceType(_resource);
}

/**
 * Reads a Resource from XML. The reader is assumed to be at the start element.
 *
 * @return the Resource, or NULL in case of error.
 */
static struct redback_rest_api_ns0_resource *xmlTextReaderReadNs0ResourceType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct redback_rest_api_ns0_resource *_resource = calloc(1, sizeof(struct redback_rest_api_ns0_resource));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0ResourceType(_resource);
        free(_resource);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "identifier", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}identifier of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}identifier of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0ResourceType(_resource);
          free(_resource);
          return NULL;
        }

        _resource->identifier = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "pattern", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}pattern of type {http://www.w3.org/2001/XMLSchema}boolean.\n");
#endif
        _child_accessor = xmlTextReaderReadXsBooleanType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}pattern of type {http://www.w3.org/2001/XMLSchema}boolean.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0ResourceType(_resource);
          free(_resource);
          return NULL;
        }

        _resource->pattern = *((int*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "permanent", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}permanent of type {http://www.w3.org/2001/XMLSchema}boolean.\n");
#endif
        _child_accessor = xmlTextReaderReadXsBooleanType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}permanent of type {http://www.w3.org/2001/XMLSchema}boolean.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0ResourceType(_resource);
          free(_resource);
          return NULL;
        }

        _resource->permanent = *((int*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}resource.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}resource. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _resource;
}

/**
 * Writes a Resource to XML.
 *
 * @param writer The XML writer.
 * @param _resource The Resource to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0ResourceType(xmlTextWriterPtr writer, struct redback_rest_api_ns0_resource *_resource) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_resource->identifier != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "identifier", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}identifier. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}identifier...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_resource->identifier));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}identifier. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}identifier. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "pattern", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}pattern. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}boolean for element {}pattern...\n");
#endif
    status = xmlTextWriterWriteXsBooleanType(writer, &(_resource->pattern));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}boolean for element {}pattern. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}pattern. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "permanent", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}permanent. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}boolean for element {}permanent...\n");
#endif
    status = xmlTextWriterWriteXsBooleanType(writer, &(_resource->permanent));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}boolean for element {}permanent. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}permanent. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a Resource.
 *
 * @param _resource The Resource to free.
 */
static void freeNs0ResourceType(struct redback_rest_api_ns0_resource *_resource) {
  int i;
  if (_resource->identifier != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor identifier of type redback_rest_api_ns0_resource...\n");
#endif
    freeXsStringType(_resource->identifier);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor identifier of type redback_rest_api_ns0_resource...\n");
#endif
    free(_resource->identifier);
  }
}
#endif /* DEF_redback_rest_api_ns0_resource_M */
#ifndef DEF_redback_rest_api_ns0_role_M
#define DEF_redback_rest_api_ns0_role_M

/**
 * Reads a Role element from XML. The element to be read is "role", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The Role, or NULL in case of error.
 */
struct redback_rest_api_ns0_role *xml_read_redback_rest_api_ns0_role(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0RoleElement(reader);
}

/**
 * Writes a Role to XML under element name "role".
 *
 * @param writer The XML writer.
 * @param _role The Role to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_redback_rest_api_ns0_role(xmlTextWriterPtr writer, struct redback_rest_api_ns0_role *_role) {
  return xmlTextWriterWriteNs0RoleElementNS(writer, _role, 1);
}

/**
 * Frees a Role.
 *
 * @param _role The Role to free.
 */
void free_redback_rest_api_ns0_role(struct redback_rest_api_ns0_role *_role) {
  freeNs0RoleType(_role);
  free(_role);
}

/**
 * Reads a Role element from XML. The element to be read is "role", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The Role, or NULL in case of error.
 */
struct redback_rest_api_ns0_role *xmlTextReaderReadNs0RoleElement(xmlTextReaderPtr reader) {
  struct redback_rest_api_ns0_role *_role = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "role", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}role.\n");
#endif
    _role = xmlTextReaderReadNs0RoleType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_role == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}role failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}role failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _role;
}

/**
 * Writes a Role to XML under element name "role".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _role The Role to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0RoleElement(xmlTextWriterPtr writer, struct redback_rest_api_ns0_role *_role) {
  return xmlTextWriterWriteNs0RoleElementNS(writer, _role, 0);
}

/**
 * Writes a Role to XML under element name "role".
 *
 * @param writer The XML writer.
 * @param _role The Role to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0RoleElementNS(xmlTextWriterPtr writer, struct redback_rest_api_ns0_role *_role, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "role", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}role. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}role for root element {}role...\n");
#endif
  status = xmlTextWriterWriteNs0RoleType(writer, _role);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}role. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}role. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a Role.
 *
 * @param _role The Role whose children are to be free.
 */
static void freeNs0RoleElement(struct redback_rest_api_ns0_role *_role) {
  freeNs0RoleType(_role);
}

/**
 * Reads a Role from XML. The reader is assumed to be at the start element.
 *
 * @return the Role, or NULL in case of error.
 */
static struct redback_rest_api_ns0_role *xmlTextReaderReadNs0RoleType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct redback_rest_api_ns0_role *_role = calloc(1, sizeof(struct redback_rest_api_ns0_role));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0RoleType(_role);
        free(_role);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "name", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}name of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}name of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0RoleType(_role);
          free(_role);
          return NULL;
        }

        _role->name = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "description", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}description of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}description of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0RoleType(_role);
          free(_role);
          return NULL;
        }

        _role->description = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "assignable", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}assignable of type {http://www.w3.org/2001/XMLSchema}boolean.\n");
#endif
        _child_accessor = xmlTextReaderReadXsBooleanType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}assignable of type {http://www.w3.org/2001/XMLSchema}boolean.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0RoleType(_role);
          free(_role);
          return NULL;
        }

        _role->assignable = *((int*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "childRoleNames", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}childRoleNames of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}childRoleNames of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0RoleType(_role);
          free(_role);
          return NULL;
        }

        _role->childRoleNames = realloc(_role->childRoleNames, (_role->_sizeof_childRoleNames + 1) * sizeof(xmlChar));
        memcpy(&(_role->childRoleNames[_role->_sizeof_childRoleNames++]), _child_accessor, sizeof(xmlChar));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "permissions", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}permissions of type {}permission.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0PermissionType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}permissions of type {}permission.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0RoleType(_role);
          free(_role);
          return NULL;
        }

        _role->permissions = realloc(_role->permissions, (_role->_sizeof_permissions + 1) * sizeof(struct redback_rest_api_ns0_permission));
        memcpy(&(_role->permissions[_role->_sizeof_permissions++]), _child_accessor, sizeof(struct redback_rest_api_ns0_permission));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "permanent", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}permanent of type {http://www.w3.org/2001/XMLSchema}boolean.\n");
#endif
        _child_accessor = xmlTextReaderReadXsBooleanType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}permanent of type {http://www.w3.org/2001/XMLSchema}boolean.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0RoleType(_role);
          free(_role);
          return NULL;
        }

        _role->permanent = *((int*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "parentRoleNames", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}parentRoleNames of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}parentRoleNames of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0RoleType(_role);
          free(_role);
          return NULL;
        }

        _role->parentRoleNames = realloc(_role->parentRoleNames, (_role->_sizeof_parentRoleNames + 1) * sizeof(xmlChar));
        memcpy(&(_role->parentRoleNames[_role->_sizeof_parentRoleNames++]), _child_accessor, sizeof(xmlChar));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "parentsRolesUsers", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}parentsRolesUsers of type {}user.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0UserType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}parentsRolesUsers of type {}user.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0RoleType(_role);
          free(_role);
          return NULL;
        }

        _role->parentsRolesUsers = realloc(_role->parentsRolesUsers, (_role->_sizeof_parentsRolesUsers + 1) * sizeof(struct redback_rest_api_ns0_user));
        memcpy(&(_role->parentsRolesUsers[_role->_sizeof_parentsRolesUsers++]), _child_accessor, sizeof(struct redback_rest_api_ns0_user));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "users", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}users of type {}user.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0UserType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}users of type {}user.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0RoleType(_role);
          free(_role);
          return NULL;
        }

        _role->users = realloc(_role->users, (_role->_sizeof_users + 1) * sizeof(struct redback_rest_api_ns0_user));
        memcpy(&(_role->users[_role->_sizeof_users++]), _child_accessor, sizeof(struct redback_rest_api_ns0_user));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "otherUsers", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}otherUsers of type {}user.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0UserType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}otherUsers of type {}user.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0RoleType(_role);
          free(_role);
          return NULL;
        }

        _role->otherUsers = realloc(_role->otherUsers, (_role->_sizeof_otherUsers + 1) * sizeof(struct redback_rest_api_ns0_user));
        memcpy(&(_role->otherUsers[_role->_sizeof_otherUsers++]), _child_accessor, sizeof(struct redback_rest_api_ns0_user));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "removedUsers", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}removedUsers of type {}user.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0UserType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}removedUsers of type {}user.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0RoleType(_role);
          free(_role);
          return NULL;
        }

        _role->removedUsers = realloc(_role->removedUsers, (_role->_sizeof_removedUsers + 1) * sizeof(struct redback_rest_api_ns0_user));
        memcpy(&(_role->removedUsers[_role->_sizeof_removedUsers++]), _child_accessor, sizeof(struct redback_rest_api_ns0_user));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}role.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}role. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _role;
}

/**
 * Writes a Role to XML.
 *
 * @param writer The XML writer.
 * @param _role The Role to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0RoleType(xmlTextWriterPtr writer, struct redback_rest_api_ns0_role *_role) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_role->name != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "name", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}name. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}name...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_role->name));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}name. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}name. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_role->description != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "description", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}description. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}description...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_role->description));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}description. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}description. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "assignable", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}assignable. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}boolean for element {}assignable...\n");
#endif
    status = xmlTextWriterWriteXsBooleanType(writer, &(_role->assignable));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}boolean for element {}assignable. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}assignable. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _role->_sizeof_childRoleNames; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "childRoleNames", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}childRoleNames. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}childRoleNames...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, &(_role->childRoleNames[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}childRoleNames. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}childRoleNames. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _role->_sizeof_permissions; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "permissions", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}permissions. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}permission for element {}permissions...\n");
#endif
    status = xmlTextWriterWriteNs0PermissionType(writer, &(_role->permissions[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}permission for element {}permissions. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}permissions. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "permanent", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}permanent. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}boolean for element {}permanent...\n");
#endif
    status = xmlTextWriterWriteXsBooleanType(writer, &(_role->permanent));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}boolean for element {}permanent. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}permanent. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _role->_sizeof_parentRoleNames; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "parentRoleNames", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}parentRoleNames. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}parentRoleNames...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, &(_role->parentRoleNames[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}parentRoleNames. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}parentRoleNames. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _role->_sizeof_parentsRolesUsers; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "parentsRolesUsers", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}parentsRolesUsers. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}user for element {}parentsRolesUsers...\n");
#endif
    status = xmlTextWriterWriteNs0UserType(writer, &(_role->parentsRolesUsers[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}user for element {}parentsRolesUsers. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}parentsRolesUsers. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _role->_sizeof_users; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "users", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}users. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}user for element {}users...\n");
#endif
    status = xmlTextWriterWriteNs0UserType(writer, &(_role->users[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}user for element {}users. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}users. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _role->_sizeof_otherUsers; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "otherUsers", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}otherUsers. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}user for element {}otherUsers...\n");
#endif
    status = xmlTextWriterWriteNs0UserType(writer, &(_role->otherUsers[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}user for element {}otherUsers. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}otherUsers. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _role->_sizeof_removedUsers; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "removedUsers", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}removedUsers. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}user for element {}removedUsers...\n");
#endif
    status = xmlTextWriterWriteNs0UserType(writer, &(_role->removedUsers[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}user for element {}removedUsers. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}removedUsers. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a Role.
 *
 * @param _role The Role to free.
 */
static void freeNs0RoleType(struct redback_rest_api_ns0_role *_role) {
  int i;
  if (_role->name != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor name of type redback_rest_api_ns0_role...\n");
#endif
    freeXsStringType(_role->name);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor name of type redback_rest_api_ns0_role...\n");
#endif
    free(_role->name);
  }
  if (_role->description != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor description of type redback_rest_api_ns0_role...\n");
#endif
    freeXsStringType(_role->description);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor description of type redback_rest_api_ns0_role...\n");
#endif
    free(_role->description);
  }
  if (_role->childRoleNames != NULL) {
    for (i = 0; i < _role->_sizeof_childRoleNames; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor childRoleNames[%i] of type redback_rest_api_ns0_role...\n", i);
#endif
      freeXsStringType(&(_role->childRoleNames[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor childRoleNames of type redback_rest_api_ns0_role...\n");
#endif
    free(_role->childRoleNames);
  }
  if (_role->permissions != NULL) {
    for (i = 0; i < _role->_sizeof_permissions; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor permissions[%i] of type redback_rest_api_ns0_role...\n", i);
#endif
      freeNs0PermissionType(&(_role->permissions[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor permissions of type redback_rest_api_ns0_role...\n");
#endif
    free(_role->permissions);
  }
  if (_role->parentRoleNames != NULL) {
    for (i = 0; i < _role->_sizeof_parentRoleNames; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor parentRoleNames[%i] of type redback_rest_api_ns0_role...\n", i);
#endif
      freeXsStringType(&(_role->parentRoleNames[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor parentRoleNames of type redback_rest_api_ns0_role...\n");
#endif
    free(_role->parentRoleNames);
  }
  if (_role->parentsRolesUsers != NULL) {
    for (i = 0; i < _role->_sizeof_parentsRolesUsers; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor parentsRolesUsers[%i] of type redback_rest_api_ns0_role...\n", i);
#endif
      freeNs0UserType(&(_role->parentsRolesUsers[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor parentsRolesUsers of type redback_rest_api_ns0_role...\n");
#endif
    free(_role->parentsRolesUsers);
  }
  if (_role->users != NULL) {
    for (i = 0; i < _role->_sizeof_users; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor users[%i] of type redback_rest_api_ns0_role...\n", i);
#endif
      freeNs0UserType(&(_role->users[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor users of type redback_rest_api_ns0_role...\n");
#endif
    free(_role->users);
  }
  if (_role->otherUsers != NULL) {
    for (i = 0; i < _role->_sizeof_otherUsers; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor otherUsers[%i] of type redback_rest_api_ns0_role...\n", i);
#endif
      freeNs0UserType(&(_role->otherUsers[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor otherUsers of type redback_rest_api_ns0_role...\n");
#endif
    free(_role->otherUsers);
  }
  if (_role->removedUsers != NULL) {
    for (i = 0; i < _role->_sizeof_removedUsers; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor removedUsers[%i] of type redback_rest_api_ns0_role...\n", i);
#endif
      freeNs0UserType(&(_role->removedUsers[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor removedUsers of type redback_rest_api_ns0_role...\n");
#endif
    free(_role->removedUsers);
  }
}
#endif /* DEF_redback_rest_api_ns0_role_M */
#ifndef DEF_redback_rest_api_ns0_roleTemplate_M
#define DEF_redback_rest_api_ns0_roleTemplate_M

/**
 * Reads a RoleTemplate element from XML. The element to be read is "roleTemplate", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The RoleTemplate, or NULL in case of error.
 */
struct redback_rest_api_ns0_roleTemplate *xml_read_redback_rest_api_ns0_roleTemplate(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0RoleTemplateElement(reader);
}

/**
 * Writes a RoleTemplate to XML under element name "roleTemplate".
 *
 * @param writer The XML writer.
 * @param _roleTemplate The RoleTemplate to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_redback_rest_api_ns0_roleTemplate(xmlTextWriterPtr writer, struct redback_rest_api_ns0_roleTemplate *_roleTemplate) {
  return xmlTextWriterWriteNs0RoleTemplateElementNS(writer, _roleTemplate, 1);
}

/**
 * Frees a RoleTemplate.
 *
 * @param _roleTemplate The RoleTemplate to free.
 */
void free_redback_rest_api_ns0_roleTemplate(struct redback_rest_api_ns0_roleTemplate *_roleTemplate) {
  freeNs0RoleTemplateType(_roleTemplate);
  free(_roleTemplate);
}

/**
 * Reads a RoleTemplate element from XML. The element to be read is "roleTemplate", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The RoleTemplate, or NULL in case of error.
 */
struct redback_rest_api_ns0_roleTemplate *xmlTextReaderReadNs0RoleTemplateElement(xmlTextReaderPtr reader) {
  struct redback_rest_api_ns0_roleTemplate *_roleTemplate = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "roleTemplate", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}roleTemplate.\n");
#endif
    _roleTemplate = xmlTextReaderReadNs0RoleTemplateType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_roleTemplate == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}roleTemplate failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}roleTemplate failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _roleTemplate;
}

/**
 * Writes a RoleTemplate to XML under element name "roleTemplate".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _roleTemplate The RoleTemplate to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0RoleTemplateElement(xmlTextWriterPtr writer, struct redback_rest_api_ns0_roleTemplate *_roleTemplate) {
  return xmlTextWriterWriteNs0RoleTemplateElementNS(writer, _roleTemplate, 0);
}

/**
 * Writes a RoleTemplate to XML under element name "roleTemplate".
 *
 * @param writer The XML writer.
 * @param _roleTemplate The RoleTemplate to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0RoleTemplateElementNS(xmlTextWriterPtr writer, struct redback_rest_api_ns0_roleTemplate *_roleTemplate, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "roleTemplate", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}roleTemplate. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}roleTemplate for root element {}roleTemplate...\n");
#endif
  status = xmlTextWriterWriteNs0RoleTemplateType(writer, _roleTemplate);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}roleTemplate. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}roleTemplate. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a RoleTemplate.
 *
 * @param _roleTemplate The RoleTemplate whose children are to be free.
 */
static void freeNs0RoleTemplateElement(struct redback_rest_api_ns0_roleTemplate *_roleTemplate) {
  freeNs0RoleTemplateType(_roleTemplate);
}

/**
 * Reads a RoleTemplate from XML. The reader is assumed to be at the start element.
 *
 * @return the RoleTemplate, or NULL in case of error.
 */
static struct redback_rest_api_ns0_roleTemplate *xmlTextReaderReadNs0RoleTemplateType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct redback_rest_api_ns0_roleTemplate *_roleTemplate = calloc(1, sizeof(struct redback_rest_api_ns0_roleTemplate));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0RoleTemplateType(_roleTemplate);
        free(_roleTemplate);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "id", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}id of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}id of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0RoleTemplateType(_roleTemplate);
          free(_roleTemplate);
          return NULL;
        }

        _roleTemplate->id = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "namePrefix", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}namePrefix of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}namePrefix of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0RoleTemplateType(_roleTemplate);
          free(_roleTemplate);
          return NULL;
        }

        _roleTemplate->namePrefix = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "delimiter", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}delimiter of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}delimiter of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0RoleTemplateType(_roleTemplate);
          free(_roleTemplate);
          return NULL;
        }

        _roleTemplate->delimiter = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "description", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}description of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}description of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0RoleTemplateType(_roleTemplate);
          free(_roleTemplate);
          return NULL;
        }

        _roleTemplate->description = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "resource", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}resource of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}resource of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0RoleTemplateType(_roleTemplate);
          free(_roleTemplate);
          return NULL;
        }

        _roleTemplate->resource = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "roles", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}roles of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}roles of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0RoleTemplateType(_roleTemplate);
          free(_roleTemplate);
          return NULL;
        }

        _roleTemplate->roles = realloc(_roleTemplate->roles, (_roleTemplate->_sizeof_roles + 1) * sizeof(xmlChar));
        memcpy(&(_roleTemplate->roles[_roleTemplate->_sizeof_roles++]), _child_accessor, sizeof(xmlChar));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}roleTemplate.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}roleTemplate. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _roleTemplate;
}

/**
 * Writes a RoleTemplate to XML.
 *
 * @param writer The XML writer.
 * @param _roleTemplate The RoleTemplate to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0RoleTemplateType(xmlTextWriterPtr writer, struct redback_rest_api_ns0_roleTemplate *_roleTemplate) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_roleTemplate->id != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "id", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}id...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_roleTemplate->id));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_roleTemplate->namePrefix != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "namePrefix", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}namePrefix. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}namePrefix...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_roleTemplate->namePrefix));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}namePrefix. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}namePrefix. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_roleTemplate->delimiter != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "delimiter", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}delimiter. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}delimiter...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_roleTemplate->delimiter));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}delimiter. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}delimiter. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_roleTemplate->description != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "description", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}description. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}description...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_roleTemplate->description));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}description. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}description. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_roleTemplate->resource != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "resource", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}resource. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}resource...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_roleTemplate->resource));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}resource. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}resource. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _roleTemplate->_sizeof_roles; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "roles", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}roles. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}roles...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, &(_roleTemplate->roles[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}roles. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}roles. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a RoleTemplate.
 *
 * @param _roleTemplate The RoleTemplate to free.
 */
static void freeNs0RoleTemplateType(struct redback_rest_api_ns0_roleTemplate *_roleTemplate) {
  int i;
  if (_roleTemplate->id != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor id of type redback_rest_api_ns0_roleTemplate...\n");
#endif
    freeXsStringType(_roleTemplate->id);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor id of type redback_rest_api_ns0_roleTemplate...\n");
#endif
    free(_roleTemplate->id);
  }
  if (_roleTemplate->namePrefix != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor namePrefix of type redback_rest_api_ns0_roleTemplate...\n");
#endif
    freeXsStringType(_roleTemplate->namePrefix);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor namePrefix of type redback_rest_api_ns0_roleTemplate...\n");
#endif
    free(_roleTemplate->namePrefix);
  }
  if (_roleTemplate->delimiter != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor delimiter of type redback_rest_api_ns0_roleTemplate...\n");
#endif
    freeXsStringType(_roleTemplate->delimiter);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor delimiter of type redback_rest_api_ns0_roleTemplate...\n");
#endif
    free(_roleTemplate->delimiter);
  }
  if (_roleTemplate->description != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor description of type redback_rest_api_ns0_roleTemplate...\n");
#endif
    freeXsStringType(_roleTemplate->description);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor description of type redback_rest_api_ns0_roleTemplate...\n");
#endif
    free(_roleTemplate->description);
  }
  if (_roleTemplate->resource != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor resource of type redback_rest_api_ns0_roleTemplate...\n");
#endif
    freeXsStringType(_roleTemplate->resource);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor resource of type redback_rest_api_ns0_roleTemplate...\n");
#endif
    free(_roleTemplate->resource);
  }
  if (_roleTemplate->roles != NULL) {
    for (i = 0; i < _roleTemplate->_sizeof_roles; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor roles[%i] of type redback_rest_api_ns0_roleTemplate...\n", i);
#endif
      freeXsStringType(&(_roleTemplate->roles[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor roles of type redback_rest_api_ns0_roleTemplate...\n");
#endif
    free(_roleTemplate->roles);
  }
}
#endif /* DEF_redback_rest_api_ns0_roleTemplate_M */
#ifndef DEF_redback_rest_api_ns0_stringList_M
#define DEF_redback_rest_api_ns0_stringList_M

/**
 * Reads a StringList element from XML. The element to be read is "stringList", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The StringList, or NULL in case of error.
 */
struct redback_rest_api_ns0_stringList *xml_read_redback_rest_api_ns0_stringList(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0StringListElement(reader);
}

/**
 * Writes a StringList to XML under element name "stringList".
 *
 * @param writer The XML writer.
 * @param _stringList The StringList to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_redback_rest_api_ns0_stringList(xmlTextWriterPtr writer, struct redback_rest_api_ns0_stringList *_stringList) {
  return xmlTextWriterWriteNs0StringListElementNS(writer, _stringList, 1);
}

/**
 * Frees a StringList.
 *
 * @param _stringList The StringList to free.
 */
void free_redback_rest_api_ns0_stringList(struct redback_rest_api_ns0_stringList *_stringList) {
  freeNs0StringListType(_stringList);
  free(_stringList);
}

/**
 * Reads a StringList element from XML. The element to be read is "stringList", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The StringList, or NULL in case of error.
 */
struct redback_rest_api_ns0_stringList *xmlTextReaderReadNs0StringListElement(xmlTextReaderPtr reader) {
  struct redback_rest_api_ns0_stringList *_stringList = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "stringList", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}stringList.\n");
#endif
    _stringList = xmlTextReaderReadNs0StringListType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_stringList == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}stringList failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}stringList failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _stringList;
}

/**
 * Writes a StringList to XML under element name "stringList".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _stringList The StringList to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0StringListElement(xmlTextWriterPtr writer, struct redback_rest_api_ns0_stringList *_stringList) {
  return xmlTextWriterWriteNs0StringListElementNS(writer, _stringList, 0);
}

/**
 * Writes a StringList to XML under element name "stringList".
 *
 * @param writer The XML writer.
 * @param _stringList The StringList to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0StringListElementNS(xmlTextWriterPtr writer, struct redback_rest_api_ns0_stringList *_stringList, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "stringList", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}stringList. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}stringList for root element {}stringList...\n");
#endif
  status = xmlTextWriterWriteNs0StringListType(writer, _stringList);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}stringList. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}stringList. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a StringList.
 *
 * @param _stringList The StringList whose children are to be free.
 */
static void freeNs0StringListElement(struct redback_rest_api_ns0_stringList *_stringList) {
  freeNs0StringListType(_stringList);
}

/**
 * Reads a StringList from XML. The reader is assumed to be at the start element.
 *
 * @return the StringList, or NULL in case of error.
 */
static struct redback_rest_api_ns0_stringList *xmlTextReaderReadNs0StringListType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct redback_rest_api_ns0_stringList *_stringList = calloc(1, sizeof(struct redback_rest_api_ns0_stringList));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0StringListType(_stringList);
        free(_stringList);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "strings", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}strings of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}strings of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0StringListType(_stringList);
          free(_stringList);
          return NULL;
        }

        _stringList->strings = realloc(_stringList->strings, (_stringList->_sizeof_strings + 1) * sizeof(xmlChar));
        memcpy(&(_stringList->strings[_stringList->_sizeof_strings++]), _child_accessor, sizeof(xmlChar));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}stringList.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}stringList. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _stringList;
}

/**
 * Writes a StringList to XML.
 *
 * @param writer The XML writer.
 * @param _stringList The StringList to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0StringListType(xmlTextWriterPtr writer, struct redback_rest_api_ns0_stringList *_stringList) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  for (i = 0; i < _stringList->_sizeof_strings; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "strings", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}strings. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}strings...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, &(_stringList->strings[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}strings. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}strings. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a StringList.
 *
 * @param _stringList The StringList to free.
 */
static void freeNs0StringListType(struct redback_rest_api_ns0_stringList *_stringList) {
  int i;
  if (_stringList->strings != NULL) {
    for (i = 0; i < _stringList->_sizeof_strings; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor strings[%i] of type redback_rest_api_ns0_stringList...\n", i);
#endif
      freeXsStringType(&(_stringList->strings[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor strings of type redback_rest_api_ns0_stringList...\n");
#endif
    free(_stringList->strings);
  }
}
#endif /* DEF_redback_rest_api_ns0_stringList_M */
#ifndef DEF_redback_rest_api_ns0_user_M
#define DEF_redback_rest_api_ns0_user_M

/**
 * Reads a User element from XML. The element to be read is "user", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The User, or NULL in case of error.
 */
struct redback_rest_api_ns0_user *xml_read_redback_rest_api_ns0_user(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0UserElement(reader);
}

/**
 * Writes a User to XML under element name "user".
 *
 * @param writer The XML writer.
 * @param _user The User to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_redback_rest_api_ns0_user(xmlTextWriterPtr writer, struct redback_rest_api_ns0_user *_user) {
  return xmlTextWriterWriteNs0UserElementNS(writer, _user, 1);
}

/**
 * Frees a User.
 *
 * @param _user The User to free.
 */
void free_redback_rest_api_ns0_user(struct redback_rest_api_ns0_user *_user) {
  freeNs0UserType(_user);
  free(_user);
}

/**
 * Reads a User element from XML. The element to be read is "user", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The User, or NULL in case of error.
 */
struct redback_rest_api_ns0_user *xmlTextReaderReadNs0UserElement(xmlTextReaderPtr reader) {
  struct redback_rest_api_ns0_user *_user = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "user", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}user.\n");
#endif
    _user = xmlTextReaderReadNs0UserType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_user == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}user failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}user failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _user;
}

/**
 * Writes a User to XML under element name "user".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _user The User to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0UserElement(xmlTextWriterPtr writer, struct redback_rest_api_ns0_user *_user) {
  return xmlTextWriterWriteNs0UserElementNS(writer, _user, 0);
}

/**
 * Writes a User to XML under element name "user".
 *
 * @param writer The XML writer.
 * @param _user The User to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0UserElementNS(xmlTextWriterPtr writer, struct redback_rest_api_ns0_user *_user, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "user", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}user. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}user for root element {}user...\n");
#endif
  status = xmlTextWriterWriteNs0UserType(writer, _user);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}user. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}user. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a User.
 *
 * @param _user The User whose children are to be free.
 */
static void freeNs0UserElement(struct redback_rest_api_ns0_user *_user) {
  freeNs0UserType(_user);
}

/**
 * Reads a User from XML. The reader is assumed to be at the start element.
 *
 * @return the User, or NULL in case of error.
 */
static struct redback_rest_api_ns0_user *xmlTextReaderReadNs0UserType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct redback_rest_api_ns0_user *_user = calloc(1, sizeof(struct redback_rest_api_ns0_user));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0UserType(_user);
        free(_user);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "username", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}username of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}username of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0UserType(_user);
          free(_user);
          return NULL;
        }

        _user->username = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "fullName", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}fullName of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}fullName of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0UserType(_user);
          free(_user);
          return NULL;
        }

        _user->fullName = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "email", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}email of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}email of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0UserType(_user);
          free(_user);
          return NULL;
        }

        _user->email = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "validated", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}validated of type {http://www.w3.org/2001/XMLSchema}boolean.\n");
#endif
        _child_accessor = xmlTextReaderReadXsBooleanType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}validated of type {http://www.w3.org/2001/XMLSchema}boolean.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0UserType(_user);
          free(_user);
          return NULL;
        }

        _user->validated = *((int*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "locked", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}locked of type {http://www.w3.org/2001/XMLSchema}boolean.\n");
#endif
        _child_accessor = xmlTextReaderReadXsBooleanType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}locked of type {http://www.w3.org/2001/XMLSchema}boolean.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0UserType(_user);
          free(_user);
          return NULL;
        }

        _user->locked = *((int*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "password", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}password of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}password of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0UserType(_user);
          free(_user);
          return NULL;
        }

        _user->password = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "passwordChangeRequired", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}passwordChangeRequired of type {http://www.w3.org/2001/XMLSchema}boolean.\n");
#endif
        _child_accessor = xmlTextReaderReadXsBooleanType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}passwordChangeRequired of type {http://www.w3.org/2001/XMLSchema}boolean.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0UserType(_user);
          free(_user);
          return NULL;
        }

        _user->passwordChangeRequired = *((int*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "permanent", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}permanent of type {http://www.w3.org/2001/XMLSchema}boolean.\n");
#endif
        _child_accessor = xmlTextReaderReadXsBooleanType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}permanent of type {http://www.w3.org/2001/XMLSchema}boolean.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0UserType(_user);
          free(_user);
          return NULL;
        }

        _user->permanent = *((int*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "confirmPassword", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}confirmPassword of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}confirmPassword of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0UserType(_user);
          free(_user);
          return NULL;
        }

        _user->confirmPassword = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "timestampAccountCreation", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}timestampAccountCreation of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}timestampAccountCreation of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0UserType(_user);
          free(_user);
          return NULL;
        }

        _user->timestampAccountCreation = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "timestampLastLogin", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}timestampLastLogin of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}timestampLastLogin of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0UserType(_user);
          free(_user);
          return NULL;
        }

        _user->timestampLastLogin = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "timestampLastPasswordChange", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}timestampLastPasswordChange of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}timestampLastPasswordChange of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0UserType(_user);
          free(_user);
          return NULL;
        }

        _user->timestampLastPasswordChange = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "previousPassword", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}previousPassword of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}previousPassword of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0UserType(_user);
          free(_user);
          return NULL;
        }

        _user->previousPassword = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "assignedRoles", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}assignedRoles of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}assignedRoles of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0UserType(_user);
          free(_user);
          return NULL;
        }

        _user->assignedRoles = realloc(_user->assignedRoles, (_user->_sizeof_assignedRoles + 1) * sizeof(xmlChar));
        memcpy(&(_user->assignedRoles[_user->_sizeof_assignedRoles++]), _child_accessor, sizeof(xmlChar));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "readOnly", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}readOnly of type {http://www.w3.org/2001/XMLSchema}boolean.\n");
#endif
        _child_accessor = xmlTextReaderReadXsBooleanType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}readOnly of type {http://www.w3.org/2001/XMLSchema}boolean.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0UserType(_user);
          free(_user);
          return NULL;
        }

        _user->readOnly = *((int*)_child_accessor);
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "userManagerId", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}userManagerId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}userManagerId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0UserType(_user);
          free(_user);
          return NULL;
        }

        _user->userManagerId = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "validationToken", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}validationToken of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}validationToken of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0UserType(_user);
          free(_user);
          return NULL;
        }

        _user->validationToken = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}user.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}user. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _user;
}

/**
 * Writes a User to XML.
 *
 * @param writer The XML writer.
 * @param _user The User to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0UserType(xmlTextWriterPtr writer, struct redback_rest_api_ns0_user *_user) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_user->username != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "username", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}username. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}username...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_user->username));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}username. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}username. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_user->fullName != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "fullName", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}fullName. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}fullName...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_user->fullName));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}fullName. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}fullName. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_user->email != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "email", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}email. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}email...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_user->email));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}email. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}email. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "validated", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}validated. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}boolean for element {}validated...\n");
#endif
    status = xmlTextWriterWriteXsBooleanType(writer, &(_user->validated));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}boolean for element {}validated. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}validated. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "locked", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}locked. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}boolean for element {}locked...\n");
#endif
    status = xmlTextWriterWriteXsBooleanType(writer, &(_user->locked));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}boolean for element {}locked. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}locked. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_user->password != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "password", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}password. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}password...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_user->password));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}password. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}password. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "passwordChangeRequired", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}passwordChangeRequired. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}boolean for element {}passwordChangeRequired...\n");
#endif
    status = xmlTextWriterWriteXsBooleanType(writer, &(_user->passwordChangeRequired));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}boolean for element {}passwordChangeRequired. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}passwordChangeRequired. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "permanent", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}permanent. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}boolean for element {}permanent...\n");
#endif
    status = xmlTextWriterWriteXsBooleanType(writer, &(_user->permanent));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}boolean for element {}permanent. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}permanent. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_user->confirmPassword != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "confirmPassword", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}confirmPassword. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}confirmPassword...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_user->confirmPassword));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}confirmPassword. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}confirmPassword. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_user->timestampAccountCreation != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "timestampAccountCreation", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}timestampAccountCreation. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}timestampAccountCreation...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_user->timestampAccountCreation));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}timestampAccountCreation. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}timestampAccountCreation. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_user->timestampLastLogin != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "timestampLastLogin", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}timestampLastLogin. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}timestampLastLogin...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_user->timestampLastLogin));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}timestampLastLogin. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}timestampLastLogin. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_user->timestampLastPasswordChange != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "timestampLastPasswordChange", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}timestampLastPasswordChange. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}timestampLastPasswordChange...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_user->timestampLastPasswordChange));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}timestampLastPasswordChange. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}timestampLastPasswordChange. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_user->previousPassword != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "previousPassword", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}previousPassword. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}previousPassword...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_user->previousPassword));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}previousPassword. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}previousPassword. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _user->_sizeof_assignedRoles; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "assignedRoles", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}assignedRoles. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}assignedRoles...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, &(_user->assignedRoles[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}assignedRoles. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}assignedRoles. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (1) { //always write the primitive element.
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "readOnly", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}readOnly. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}boolean for element {}readOnly...\n");
#endif
    status = xmlTextWriterWriteXsBooleanType(writer, &(_user->readOnly));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}boolean for element {}readOnly. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}readOnly. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_user->userManagerId != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "userManagerId", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}userManagerId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}userManagerId...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_user->userManagerId));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}userManagerId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}userManagerId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_user->validationToken != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "validationToken", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}validationToken. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}validationToken...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_user->validationToken));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}validationToken. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}validationToken. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a User.
 *
 * @param _user The User to free.
 */
static void freeNs0UserType(struct redback_rest_api_ns0_user *_user) {
  int i;
  if (_user->username != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor username of type redback_rest_api_ns0_user...\n");
#endif
    freeXsStringType(_user->username);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor username of type redback_rest_api_ns0_user...\n");
#endif
    free(_user->username);
  }
  if (_user->fullName != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor fullName of type redback_rest_api_ns0_user...\n");
#endif
    freeXsStringType(_user->fullName);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor fullName of type redback_rest_api_ns0_user...\n");
#endif
    free(_user->fullName);
  }
  if (_user->email != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor email of type redback_rest_api_ns0_user...\n");
#endif
    freeXsStringType(_user->email);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor email of type redback_rest_api_ns0_user...\n");
#endif
    free(_user->email);
  }
  if (_user->password != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor password of type redback_rest_api_ns0_user...\n");
#endif
    freeXsStringType(_user->password);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor password of type redback_rest_api_ns0_user...\n");
#endif
    free(_user->password);
  }
  if (_user->confirmPassword != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor confirmPassword of type redback_rest_api_ns0_user...\n");
#endif
    freeXsStringType(_user->confirmPassword);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor confirmPassword of type redback_rest_api_ns0_user...\n");
#endif
    free(_user->confirmPassword);
  }
  if (_user->timestampAccountCreation != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor timestampAccountCreation of type redback_rest_api_ns0_user...\n");
#endif
    freeXsStringType(_user->timestampAccountCreation);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor timestampAccountCreation of type redback_rest_api_ns0_user...\n");
#endif
    free(_user->timestampAccountCreation);
  }
  if (_user->timestampLastLogin != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor timestampLastLogin of type redback_rest_api_ns0_user...\n");
#endif
    freeXsStringType(_user->timestampLastLogin);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor timestampLastLogin of type redback_rest_api_ns0_user...\n");
#endif
    free(_user->timestampLastLogin);
  }
  if (_user->timestampLastPasswordChange != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor timestampLastPasswordChange of type redback_rest_api_ns0_user...\n");
#endif
    freeXsStringType(_user->timestampLastPasswordChange);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor timestampLastPasswordChange of type redback_rest_api_ns0_user...\n");
#endif
    free(_user->timestampLastPasswordChange);
  }
  if (_user->previousPassword != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor previousPassword of type redback_rest_api_ns0_user...\n");
#endif
    freeXsStringType(_user->previousPassword);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor previousPassword of type redback_rest_api_ns0_user...\n");
#endif
    free(_user->previousPassword);
  }
  if (_user->assignedRoles != NULL) {
    for (i = 0; i < _user->_sizeof_assignedRoles; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor assignedRoles[%i] of type redback_rest_api_ns0_user...\n", i);
#endif
      freeXsStringType(&(_user->assignedRoles[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor assignedRoles of type redback_rest_api_ns0_user...\n");
#endif
    free(_user->assignedRoles);
  }
  if (_user->userManagerId != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor userManagerId of type redback_rest_api_ns0_user...\n");
#endif
    freeXsStringType(_user->userManagerId);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor userManagerId of type redback_rest_api_ns0_user...\n");
#endif
    free(_user->userManagerId);
  }
  if (_user->validationToken != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor validationToken of type redback_rest_api_ns0_user...\n");
#endif
    freeXsStringType(_user->validationToken);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor validationToken of type redback_rest_api_ns0_user...\n");
#endif
    free(_user->validationToken);
  }
}
#endif /* DEF_redback_rest_api_ns0_user_M */
#ifndef DEF_redback_rest_api_ns0_userRegistrationRequest_M
#define DEF_redback_rest_api_ns0_userRegistrationRequest_M

/**
 * Reads a UserRegistrationRequest element from XML. The element to be read is "userRegistrationRequest", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The UserRegistrationRequest, or NULL in case of error.
 */
struct redback_rest_api_ns0_userRegistrationRequest *xml_read_redback_rest_api_ns0_userRegistrationRequest(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0UserRegistrationRequestElement(reader);
}

/**
 * Writes a UserRegistrationRequest to XML under element name "userRegistrationRequest".
 *
 * @param writer The XML writer.
 * @param _userRegistrationRequest The UserRegistrationRequest to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_redback_rest_api_ns0_userRegistrationRequest(xmlTextWriterPtr writer, struct redback_rest_api_ns0_userRegistrationRequest *_userRegistrationRequest) {
  return xmlTextWriterWriteNs0UserRegistrationRequestElementNS(writer, _userRegistrationRequest, 1);
}

/**
 * Frees a UserRegistrationRequest.
 *
 * @param _userRegistrationRequest The UserRegistrationRequest to free.
 */
void free_redback_rest_api_ns0_userRegistrationRequest(struct redback_rest_api_ns0_userRegistrationRequest *_userRegistrationRequest) {
  freeNs0UserRegistrationRequestType(_userRegistrationRequest);
  free(_userRegistrationRequest);
}

/**
 * Reads a UserRegistrationRequest element from XML. The element to be read is "userRegistrationRequest", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The UserRegistrationRequest, or NULL in case of error.
 */
struct redback_rest_api_ns0_userRegistrationRequest *xmlTextReaderReadNs0UserRegistrationRequestElement(xmlTextReaderPtr reader) {
  struct redback_rest_api_ns0_userRegistrationRequest *_userRegistrationRequest = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "userRegistrationRequest", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}userRegistrationRequest.\n");
#endif
    _userRegistrationRequest = xmlTextReaderReadNs0UserRegistrationRequestType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_userRegistrationRequest == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}userRegistrationRequest failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}userRegistrationRequest failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _userRegistrationRequest;
}

/**
 * Writes a UserRegistrationRequest to XML under element name "userRegistrationRequest".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _userRegistrationRequest The UserRegistrationRequest to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0UserRegistrationRequestElement(xmlTextWriterPtr writer, struct redback_rest_api_ns0_userRegistrationRequest *_userRegistrationRequest) {
  return xmlTextWriterWriteNs0UserRegistrationRequestElementNS(writer, _userRegistrationRequest, 0);
}

/**
 * Writes a UserRegistrationRequest to XML under element name "userRegistrationRequest".
 *
 * @param writer The XML writer.
 * @param _userRegistrationRequest The UserRegistrationRequest to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0UserRegistrationRequestElementNS(xmlTextWriterPtr writer, struct redback_rest_api_ns0_userRegistrationRequest *_userRegistrationRequest, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "userRegistrationRequest", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}userRegistrationRequest. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}userRegistrationRequest for root element {}userRegistrationRequest...\n");
#endif
  status = xmlTextWriterWriteNs0UserRegistrationRequestType(writer, _userRegistrationRequest);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}userRegistrationRequest. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}userRegistrationRequest. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a UserRegistrationRequest.
 *
 * @param _userRegistrationRequest The UserRegistrationRequest whose children are to be free.
 */
static void freeNs0UserRegistrationRequestElement(struct redback_rest_api_ns0_userRegistrationRequest *_userRegistrationRequest) {
  freeNs0UserRegistrationRequestType(_userRegistrationRequest);
}

/**
 * Reads a UserRegistrationRequest from XML. The reader is assumed to be at the start element.
 *
 * @return the UserRegistrationRequest, or NULL in case of error.
 */
static struct redback_rest_api_ns0_userRegistrationRequest *xmlTextReaderReadNs0UserRegistrationRequestType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct redback_rest_api_ns0_userRegistrationRequest *_userRegistrationRequest = calloc(1, sizeof(struct redback_rest_api_ns0_userRegistrationRequest));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0UserRegistrationRequestType(_userRegistrationRequest);
        free(_userRegistrationRequest);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "user", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}user of type {}user.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0UserType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}user of type {}user.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0UserRegistrationRequestType(_userRegistrationRequest);
          free(_userRegistrationRequest);
          return NULL;
        }

        _userRegistrationRequest->user = ((struct redback_rest_api_ns0_user*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "applicationUrl", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}applicationUrl of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}applicationUrl of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0UserRegistrationRequestType(_userRegistrationRequest);
          free(_userRegistrationRequest);
          return NULL;
        }

        _userRegistrationRequest->applicationUrl = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}userRegistrationRequest.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}userRegistrationRequest. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _userRegistrationRequest;
}

/**
 * Writes a UserRegistrationRequest to XML.
 *
 * @param writer The XML writer.
 * @param _userRegistrationRequest The UserRegistrationRequest to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0UserRegistrationRequestType(xmlTextWriterPtr writer, struct redback_rest_api_ns0_userRegistrationRequest *_userRegistrationRequest) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_userRegistrationRequest->user != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "user", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}user. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}user for element {}user...\n");
#endif
    status = xmlTextWriterWriteNs0UserType(writer, (_userRegistrationRequest->user));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}user for element {}user. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}user. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_userRegistrationRequest->applicationUrl != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "applicationUrl", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}applicationUrl. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}applicationUrl...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_userRegistrationRequest->applicationUrl));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}applicationUrl. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}applicationUrl. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a UserRegistrationRequest.
 *
 * @param _userRegistrationRequest The UserRegistrationRequest to free.
 */
static void freeNs0UserRegistrationRequestType(struct redback_rest_api_ns0_userRegistrationRequest *_userRegistrationRequest) {
  int i;
  if (_userRegistrationRequest->user != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor user of type redback_rest_api_ns0_userRegistrationRequest...\n");
#endif
    freeNs0UserType(_userRegistrationRequest->user);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor user of type redback_rest_api_ns0_userRegistrationRequest...\n");
#endif
    free(_userRegistrationRequest->user);
  }
  if (_userRegistrationRequest->applicationUrl != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor applicationUrl of type redback_rest_api_ns0_userRegistrationRequest...\n");
#endif
    freeXsStringType(_userRegistrationRequest->applicationUrl);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor applicationUrl of type redback_rest_api_ns0_userRegistrationRequest...\n");
#endif
    free(_userRegistrationRequest->applicationUrl);
  }
}
#endif /* DEF_redback_rest_api_ns0_userRegistrationRequest_M */
