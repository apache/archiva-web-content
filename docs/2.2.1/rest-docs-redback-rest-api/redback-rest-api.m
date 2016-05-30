#import "redback-rest-api.h"
#ifndef DEF_REDBACK_REST_APINS0LdapGroupMapping_M
#define DEF_REDBACK_REST_APINS0LdapGroupMapping_M

/**
 *  @author Olivier Lamy
 @since 2.1

 */
@implementation REDBACK_REST_APINS0LdapGroupMapping

/**
 * (no documentation provided)
 */
- (NSString *) group
{
  return _group;
}

/**
 * (no documentation provided)
 */
- (void) setGroup: (NSString *) newGroup
{
  [newGroup retain];
  [_group release];
  _group = newGroup;
}

/**
 * (no documentation provided)
 */
- (NSArray *) roleNames
{
  return _roleNames;
}

/**
 * (no documentation provided)
 */
- (void) setRoleNames: (NSArray *) newRoleNames
{
  [newRoleNames retain];
  [_roleNames release];
  _roleNames = newRoleNames;
}

- (void) dealloc
{
  [self setGroup: nil];
  [self setRoleNames: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  REDBACK_REST_APINS0LdapGroupMapping *_rEDBACK_REST_APINS0LdapGroupMapping;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _rEDBACK_REST_APINS0LdapGroupMapping = (REDBACK_REST_APINS0LdapGroupMapping *) [REDBACK_REST_APINS0LdapGroupMapping readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _rEDBACK_REST_APINS0LdapGroupMapping;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation REDBACK_REST_APINS0LdapGroupMapping */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface REDBACK_REST_APINS0LdapGroupMapping (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface REDBACK_REST_APINS0LdapGroupMapping (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation REDBACK_REST_APINS0LdapGroupMapping (JAXB)

/**
 * Read an instance of REDBACK_REST_APINS0LdapGroupMapping from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of REDBACK_REST_APINS0LdapGroupMapping defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  REDBACK_REST_APINS0LdapGroupMapping *_rEDBACK_REST_APINS0LdapGroupMapping = [[REDBACK_REST_APINS0LdapGroupMapping alloc] init];
  NS_DURING
  {
    [_rEDBACK_REST_APINS0LdapGroupMapping initWithReader: reader];
  }
  NS_HANDLER
  {
    _rEDBACK_REST_APINS0LdapGroupMapping = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_rEDBACK_REST_APINS0LdapGroupMapping autorelease];
  return _rEDBACK_REST_APINS0LdapGroupMapping;
}

/**
 * Initialize this instance of REDBACK_REST_APINS0LdapGroupMapping according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of REDBACK_REST_APINS0LdapGroupMapping to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a REDBACK_REST_APINS0LdapGroupMapping from an XML reader. The element to be read is
 * "ldapGroupMapping".
 *
 * @param reader The XML reader.
 * @return The REDBACK_REST_APINS0LdapGroupMapping.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  REDBACK_REST_APINS0LdapGroupMapping *_ldapGroupMapping = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element ldapGroupMapping."];
    }
  }

  if (xmlStrcmp(BAD_CAST "ldapGroupMapping", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}ldapGroupMapping.");
#endif
    _ldapGroupMapping = (REDBACK_REST_APINS0LdapGroupMapping *)[REDBACK_REST_APINS0LdapGroupMapping readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}ldapGroupMapping.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read REDBACK_REST_APINS0LdapGroupMapping. Expected element ldapGroupMapping. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read REDBACK_REST_APINS0LdapGroupMapping. Expected element ldapGroupMapping. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _ldapGroupMapping;
}

/**
 * Writes this REDBACK_REST_APINS0LdapGroupMapping to XML under element name "ldapGroupMapping".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _ldapGroupMapping The LdapGroupMapping to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this REDBACK_REST_APINS0LdapGroupMapping to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "ldapGroupMapping", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}ldapGroupMapping. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}ldapGroupMapping for root element {}ldapGroupMapping...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}ldapGroupMapping for root element {}ldapGroupMapping...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}ldapGroupMapping. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "group", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}group of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}group of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setGroup: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "roleNames", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}roleNames of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

     __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}roleNames of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    if ([self roleNames]) {
      [self setRoleNames: [[self roleNames] arrayByAddingObject: __child]];
    }
    else {
      [self setRoleNames: [NSArray arrayWithObject: __child]];
    }
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  id __item_copy;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self group]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "group", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}group."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}group...");
#endif
    [[self group] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}group...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}group."];
    }
  }
  if ([self roleNames]) {
    __enumerator = [[self roleNames] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "roleNames", NULL);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing start child element {}roleNames."];
      }

#if DEBUG_ENUNCIATE > 1
      NSLog(@"writing element {}roleNames...");
#endif
      [__item writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
      NSLog(@"successfully wrote element {}roleNames...");
#endif

      status = xmlTextWriterEndElement(writer);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing end child element {}roleNames."];
      }
    } //end item iterator.
  }
}
@end /* implementation REDBACK_REST_APINS0LdapGroupMapping (JAXB) */

#endif /* DEF_REDBACK_REST_APINS0LdapGroupMapping_M */
#ifndef DEF_REDBACK_REST_APINS0LoginRequest_M
#define DEF_REDBACK_REST_APINS0LoginRequest_M

/**
 *  @author Olivier Lamy
 @since 2.0

 */
@implementation REDBACK_REST_APINS0LoginRequest

/**
 * (no documentation provided)
 */
- (NSString *) username
{
  return _username;
}

/**
 * (no documentation provided)
 */
- (void) setUsername: (NSString *) newUsername
{
  [newUsername retain];
  [_username release];
  _username = newUsername;
}

/**
 * (no documentation provided)
 */
- (NSString *) password
{
  return _password;
}

/**
 * (no documentation provided)
 */
- (void) setPassword: (NSString *) newPassword
{
  [newPassword retain];
  [_password release];
  _password = newPassword;
}

- (void) dealloc
{
  [self setUsername: nil];
  [self setPassword: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  REDBACK_REST_APINS0LoginRequest *_rEDBACK_REST_APINS0LoginRequest;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _rEDBACK_REST_APINS0LoginRequest = (REDBACK_REST_APINS0LoginRequest *) [REDBACK_REST_APINS0LoginRequest readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _rEDBACK_REST_APINS0LoginRequest;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation REDBACK_REST_APINS0LoginRequest */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface REDBACK_REST_APINS0LoginRequest (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface REDBACK_REST_APINS0LoginRequest (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation REDBACK_REST_APINS0LoginRequest (JAXB)

/**
 * Read an instance of REDBACK_REST_APINS0LoginRequest from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of REDBACK_REST_APINS0LoginRequest defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  REDBACK_REST_APINS0LoginRequest *_rEDBACK_REST_APINS0LoginRequest = [[REDBACK_REST_APINS0LoginRequest alloc] init];
  NS_DURING
  {
    [_rEDBACK_REST_APINS0LoginRequest initWithReader: reader];
  }
  NS_HANDLER
  {
    _rEDBACK_REST_APINS0LoginRequest = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_rEDBACK_REST_APINS0LoginRequest autorelease];
  return _rEDBACK_REST_APINS0LoginRequest;
}

/**
 * Initialize this instance of REDBACK_REST_APINS0LoginRequest according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of REDBACK_REST_APINS0LoginRequest to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a REDBACK_REST_APINS0LoginRequest from an XML reader. The element to be read is
 * "loginRequest".
 *
 * @param reader The XML reader.
 * @return The REDBACK_REST_APINS0LoginRequest.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  REDBACK_REST_APINS0LoginRequest *_loginRequest = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element loginRequest."];
    }
  }

  if (xmlStrcmp(BAD_CAST "loginRequest", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}loginRequest.");
#endif
    _loginRequest = (REDBACK_REST_APINS0LoginRequest *)[REDBACK_REST_APINS0LoginRequest readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}loginRequest.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read REDBACK_REST_APINS0LoginRequest. Expected element loginRequest. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read REDBACK_REST_APINS0LoginRequest. Expected element loginRequest. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _loginRequest;
}

/**
 * Writes this REDBACK_REST_APINS0LoginRequest to XML under element name "loginRequest".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _loginRequest The LoginRequest to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this REDBACK_REST_APINS0LoginRequest to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "loginRequest", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}loginRequest. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}loginRequest for root element {}loginRequest...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}loginRequest for root element {}loginRequest...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}loginRequest. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "username", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}username of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}username of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setUsername: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "password", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}password of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}password of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setPassword: __child];
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  id __item_copy;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self username]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "username", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}username."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}username...");
#endif
    [[self username] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}username...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}username."];
    }
  }
  if ([self password]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "password", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}password."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}password...");
#endif
    [[self password] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}password...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}password."];
    }
  }
}
@end /* implementation REDBACK_REST_APINS0LoginRequest (JAXB) */

#endif /* DEF_REDBACK_REST_APINS0LoginRequest_M */
#ifndef DEF_REDBACK_REST_APINS0Permission_M
#define DEF_REDBACK_REST_APINS0Permission_M

/**
 *  @author Olivier Lamy
 @since 1.4

 */
@implementation REDBACK_REST_APINS0Permission

/**
 * (no documentation provided)
 */
- (NSString *) name
{
  return _name;
}

/**
 * (no documentation provided)
 */
- (void) setName: (NSString *) newName
{
  [newName retain];
  [_name release];
  _name = newName;
}

/**
 * (no documentation provided)
 */
- (REDBACK_REST_APINS0Operation *) operation
{
  return _operation;
}

/**
 * (no documentation provided)
 */
- (void) setOperation: (REDBACK_REST_APINS0Operation *) newOperation
{
  [newOperation retain];
  [_operation release];
  _operation = newOperation;
}

/**
 * (no documentation provided)
 */
- (REDBACK_REST_APINS0Resource *) resource
{
  return _resource;
}

/**
 * (no documentation provided)
 */
- (void) setResource: (REDBACK_REST_APINS0Resource *) newResource
{
  [newResource retain];
  [_resource release];
  _resource = newResource;
}

- (void) dealloc
{
  [self setName: nil];
  [self setOperation: nil];
  [self setResource: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  REDBACK_REST_APINS0Permission *_rEDBACK_REST_APINS0Permission;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _rEDBACK_REST_APINS0Permission = (REDBACK_REST_APINS0Permission *) [REDBACK_REST_APINS0Permission readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _rEDBACK_REST_APINS0Permission;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation REDBACK_REST_APINS0Permission */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface REDBACK_REST_APINS0Permission (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface REDBACK_REST_APINS0Permission (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation REDBACK_REST_APINS0Permission (JAXB)

/**
 * Read an instance of REDBACK_REST_APINS0Permission from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of REDBACK_REST_APINS0Permission defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  REDBACK_REST_APINS0Permission *_rEDBACK_REST_APINS0Permission = [[REDBACK_REST_APINS0Permission alloc] init];
  NS_DURING
  {
    [_rEDBACK_REST_APINS0Permission initWithReader: reader];
  }
  NS_HANDLER
  {
    _rEDBACK_REST_APINS0Permission = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_rEDBACK_REST_APINS0Permission autorelease];
  return _rEDBACK_REST_APINS0Permission;
}

/**
 * Initialize this instance of REDBACK_REST_APINS0Permission according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of REDBACK_REST_APINS0Permission to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a REDBACK_REST_APINS0Permission from an XML reader. The element to be read is
 * "permission".
 *
 * @param reader The XML reader.
 * @return The REDBACK_REST_APINS0Permission.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  REDBACK_REST_APINS0Permission *_permission = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element permission."];
    }
  }

  if (xmlStrcmp(BAD_CAST "permission", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}permission.");
#endif
    _permission = (REDBACK_REST_APINS0Permission *)[REDBACK_REST_APINS0Permission readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}permission.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read REDBACK_REST_APINS0Permission. Expected element permission. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read REDBACK_REST_APINS0Permission. Expected element permission. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _permission;
}

/**
 * Writes this REDBACK_REST_APINS0Permission to XML under element name "permission".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _permission The Permission to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this REDBACK_REST_APINS0Permission to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "permission", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}permission. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}permission for root element {}permission...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}permission for root element {}permission...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}permission. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "name", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}name of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}name of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setName: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "operation", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}operation of type {}operation.");
#endif
    __child = [REDBACK_REST_APINS0Operation readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}operation of type {}operation.");
#endif

    [self setOperation: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "resource", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}resource of type {}resource.");
#endif
    __child = [REDBACK_REST_APINS0Resource readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}resource of type {}resource.");
#endif

    [self setResource: __child];
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  id __item_copy;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self name]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "name", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}name."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}name...");
#endif
    [[self name] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}name...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}name."];
    }
  }
  if ([self operation]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "operation", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}operation."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}operation...");
#endif
    [[self operation] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}operation...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}operation."];
    }
  }
  if ([self resource]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "resource", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}resource."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}resource...");
#endif
    [[self resource] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}resource...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}resource."];
    }
  }
}
@end /* implementation REDBACK_REST_APINS0Permission (JAXB) */

#endif /* DEF_REDBACK_REST_APINS0Permission_M */
#ifndef DEF_REDBACK_REST_APINS0ResetPasswordRequest_M
#define DEF_REDBACK_REST_APINS0ResetPasswordRequest_M

/**
 *  @author Olivier Lamy

 */
@implementation REDBACK_REST_APINS0ResetPasswordRequest

/**
 * (no documentation provided)
 */
- (NSString *) username
{
  return _username;
}

/**
 * (no documentation provided)
 */
- (void) setUsername: (NSString *) newUsername
{
  [newUsername retain];
  [_username release];
  _username = newUsername;
}

/**
 * (no documentation provided)
 */
- (NSString *) applicationUrl
{
  return _applicationUrl;
}

/**
 * (no documentation provided)
 */
- (void) setApplicationUrl: (NSString *) newApplicationUrl
{
  [newApplicationUrl retain];
  [_applicationUrl release];
  _applicationUrl = newApplicationUrl;
}

- (void) dealloc
{
  [self setUsername: nil];
  [self setApplicationUrl: nil];
  [super dealloc];
}
@end /* implementation REDBACK_REST_APINS0ResetPasswordRequest */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface REDBACK_REST_APINS0ResetPasswordRequest (JAXB) <JAXBReading, JAXBWriting, JAXBType>

@end /*interface REDBACK_REST_APINS0ResetPasswordRequest (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation REDBACK_REST_APINS0ResetPasswordRequest (JAXB)

/**
 * Read an instance of REDBACK_REST_APINS0ResetPasswordRequest from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of REDBACK_REST_APINS0ResetPasswordRequest defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  REDBACK_REST_APINS0ResetPasswordRequest *_rEDBACK_REST_APINS0ResetPasswordRequest = [[REDBACK_REST_APINS0ResetPasswordRequest alloc] init];
  NS_DURING
  {
    [_rEDBACK_REST_APINS0ResetPasswordRequest initWithReader: reader];
  }
  NS_HANDLER
  {
    _rEDBACK_REST_APINS0ResetPasswordRequest = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_rEDBACK_REST_APINS0ResetPasswordRequest autorelease];
  return _rEDBACK_REST_APINS0ResetPasswordRequest;
}

/**
 * Initialize this instance of REDBACK_REST_APINS0ResetPasswordRequest according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of REDBACK_REST_APINS0ResetPasswordRequest to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "username", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}username of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}username of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setUsername: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "applicationUrl", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}applicationUrl of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}applicationUrl of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setApplicationUrl: __child];
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  id __item_copy;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self username]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "username", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}username."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}username...");
#endif
    [[self username] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}username...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}username."];
    }
  }
  if ([self applicationUrl]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "applicationUrl", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}applicationUrl."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}applicationUrl...");
#endif
    [[self applicationUrl] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}applicationUrl...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}applicationUrl."];
    }
  }
}
@end /* implementation REDBACK_REST_APINS0ResetPasswordRequest (JAXB) */

#endif /* DEF_REDBACK_REST_APINS0ResetPasswordRequest_M */
#ifndef DEF_REDBACK_REST_APINS0Role_M
#define DEF_REDBACK_REST_APINS0Role_M

/**
 *  @author Olivier Lamy
 @since 1.4

 */
@implementation REDBACK_REST_APINS0Role

/**
 * (no documentation provided)
 */
- (NSString *) name
{
  return _name;
}

/**
 * (no documentation provided)
 */
- (void) setName: (NSString *) newName
{
  [newName retain];
  [_name release];
  _name = newName;
}

/**
 * (no documentation provided)
 */
- (NSString *) description
{
  return _description;
}

/**
 * (no documentation provided)
 */
- (void) setDescription: (NSString *) newDescription
{
  [newDescription retain];
  [_description release];
  _description = newDescription;
}

/**
 * (no documentation provided)
 */
- (BOOL) assignable
{
  return _assignable;
}

/**
 * (no documentation provided)
 */
- (void) setAssignable: (BOOL) newAssignable
{
  _assignable = newAssignable;
}

/**
 * (no documentation provided)
 */
- (NSArray *) childRoleNames
{
  return _childRoleNames;
}

/**
 * (no documentation provided)
 */
- (void) setChildRoleNames: (NSArray *) newChildRoleNames
{
  [newChildRoleNames retain];
  [_childRoleNames release];
  _childRoleNames = newChildRoleNames;
}

/**
 * (no documentation provided)
 */
- (NSArray *) permissions
{
  return _permissions;
}

/**
 * (no documentation provided)
 */
- (void) setPermissions: (NSArray *) newPermissions
{
  [newPermissions retain];
  [_permissions release];
  _permissions = newPermissions;
}

/**
 * (no documentation provided)
 */
- (BOOL) permanent
{
  return _permanent;
}

/**
 * (no documentation provided)
 */
- (void) setPermanent: (BOOL) newPermanent
{
  _permanent = newPermanent;
}

/**
 * (no documentation provided)
 */
- (NSArray *) parentRoleNames
{
  return _parentRoleNames;
}

/**
 * (no documentation provided)
 */
- (void) setParentRoleNames: (NSArray *) newParentRoleNames
{
  [newParentRoleNames retain];
  [_parentRoleNames release];
  _parentRoleNames = newParentRoleNames;
}

/**
 * (no documentation provided)
 */
- (NSArray *) parentsRolesUsers
{
  return _parentsRolesUsers;
}

/**
 * (no documentation provided)
 */
- (void) setParentsRolesUsers: (NSArray *) newParentsRolesUsers
{
  [newParentsRolesUsers retain];
  [_parentsRolesUsers release];
  _parentsRolesUsers = newParentsRolesUsers;
}

/**
 * (no documentation provided)
 */
- (NSArray *) users
{
  return _users;
}

/**
 * (no documentation provided)
 */
- (void) setUsers: (NSArray *) newUsers
{
  [newUsers retain];
  [_users release];
  _users = newUsers;
}

/**
 * (no documentation provided)
 */
- (NSArray *) otherUsers
{
  return _otherUsers;
}

/**
 * (no documentation provided)
 */
- (void) setOtherUsers: (NSArray *) newOtherUsers
{
  [newOtherUsers retain];
  [_otherUsers release];
  _otherUsers = newOtherUsers;
}

/**
 * (no documentation provided)
 */
- (NSArray *) removedUsers
{
  return _removedUsers;
}

/**
 * (no documentation provided)
 */
- (void) setRemovedUsers: (NSArray *) newRemovedUsers
{
  [newRemovedUsers retain];
  [_removedUsers release];
  _removedUsers = newRemovedUsers;
}

- (void) dealloc
{
  [self setName: nil];
  [self setDescription: nil];
  [self setChildRoleNames: nil];
  [self setPermissions: nil];
  [self setParentRoleNames: nil];
  [self setParentsRolesUsers: nil];
  [self setUsers: nil];
  [self setOtherUsers: nil];
  [self setRemovedUsers: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  REDBACK_REST_APINS0Role *_rEDBACK_REST_APINS0Role;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _rEDBACK_REST_APINS0Role = (REDBACK_REST_APINS0Role *) [REDBACK_REST_APINS0Role readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _rEDBACK_REST_APINS0Role;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation REDBACK_REST_APINS0Role */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface REDBACK_REST_APINS0Role (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface REDBACK_REST_APINS0Role (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation REDBACK_REST_APINS0Role (JAXB)

/**
 * Read an instance of REDBACK_REST_APINS0Role from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of REDBACK_REST_APINS0Role defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  REDBACK_REST_APINS0Role *_rEDBACK_REST_APINS0Role = [[REDBACK_REST_APINS0Role alloc] init];
  NS_DURING
  {
    [_rEDBACK_REST_APINS0Role initWithReader: reader];
  }
  NS_HANDLER
  {
    _rEDBACK_REST_APINS0Role = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_rEDBACK_REST_APINS0Role autorelease];
  return _rEDBACK_REST_APINS0Role;
}

/**
 * Initialize this instance of REDBACK_REST_APINS0Role according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of REDBACK_REST_APINS0Role to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a REDBACK_REST_APINS0Role from an XML reader. The element to be read is
 * "role".
 *
 * @param reader The XML reader.
 * @return The REDBACK_REST_APINS0Role.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  REDBACK_REST_APINS0Role *_role = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element role."];
    }
  }

  if (xmlStrcmp(BAD_CAST "role", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}role.");
#endif
    _role = (REDBACK_REST_APINS0Role *)[REDBACK_REST_APINS0Role readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}role.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read REDBACK_REST_APINS0Role. Expected element role. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read REDBACK_REST_APINS0Role. Expected element role. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _role;
}

/**
 * Writes this REDBACK_REST_APINS0Role to XML under element name "role".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _role The Role to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this REDBACK_REST_APINS0Role to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "role", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}role. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}role for root element {}role...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}role for root element {}role...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}role. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "name", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}name of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}name of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setName: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "description", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}description of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}description of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setDescription: __child];
    return YES;
  } //end "if choice"


  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "assignable", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadBooleanType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setAssignable: *((BOOL*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "childRoleNames", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}childRoleNames of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

     __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}childRoleNames of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    if ([self childRoleNames]) {
      [self setChildRoleNames: [[self childRoleNames] arrayByAddingObject: __child]];
    }
    else {
      [self setChildRoleNames: [NSArray arrayWithObject: __child]];
    }
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "permissions", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}permissions of type {}permission.");
#endif

     __child = [REDBACK_REST_APINS0Permission readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}permissions of type {}permission.");
#endif

    if ([self permissions]) {
      [self setPermissions: [[self permissions] arrayByAddingObject: __child]];
    }
    else {
      [self setPermissions: [NSArray arrayWithObject: __child]];
    }
    return YES;
  } //end "if choice"


  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "permanent", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadBooleanType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setPermanent: *((BOOL*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "parentRoleNames", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}parentRoleNames of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

     __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}parentRoleNames of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    if ([self parentRoleNames]) {
      [self setParentRoleNames: [[self parentRoleNames] arrayByAddingObject: __child]];
    }
    else {
      [self setParentRoleNames: [NSArray arrayWithObject: __child]];
    }
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "parentsRolesUsers", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}parentsRolesUsers of type {}user.");
#endif

     __child = [REDBACK_REST_APINS0User readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}parentsRolesUsers of type {}user.");
#endif

    if ([self parentsRolesUsers]) {
      [self setParentsRolesUsers: [[self parentsRolesUsers] arrayByAddingObject: __child]];
    }
    else {
      [self setParentsRolesUsers: [NSArray arrayWithObject: __child]];
    }
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "users", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}users of type {}user.");
#endif

     __child = [REDBACK_REST_APINS0User readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}users of type {}user.");
#endif

    if ([self users]) {
      [self setUsers: [[self users] arrayByAddingObject: __child]];
    }
    else {
      [self setUsers: [NSArray arrayWithObject: __child]];
    }
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "otherUsers", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}otherUsers of type {}user.");
#endif

     __child = [REDBACK_REST_APINS0User readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}otherUsers of type {}user.");
#endif

    if ([self otherUsers]) {
      [self setOtherUsers: [[self otherUsers] arrayByAddingObject: __child]];
    }
    else {
      [self setOtherUsers: [NSArray arrayWithObject: __child]];
    }
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "removedUsers", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}removedUsers of type {}user.");
#endif

     __child = [REDBACK_REST_APINS0User readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}removedUsers of type {}user.");
#endif

    if ([self removedUsers]) {
      [self setRemovedUsers: [[self removedUsers] arrayByAddingObject: __child]];
    }
    else {
      [self setRemovedUsers: [NSArray arrayWithObject: __child]];
    }
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  id __item_copy;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self name]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "name", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}name."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}name...");
#endif
    [[self name] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}name...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}name."];
    }
  }
  if ([self description]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "description", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}description."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}description...");
#endif
    [[self description] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}description...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}description."];
    }
  }
  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "assignable", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}assignable."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}assignable...");
#endif
    status = xmlTextWriterWriteBooleanType(writer, &_assignable);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}assignable...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}assignable."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}assignable."];
    }
  }
  if ([self childRoleNames]) {
    __enumerator = [[self childRoleNames] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "childRoleNames", NULL);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing start child element {}childRoleNames."];
      }

#if DEBUG_ENUNCIATE > 1
      NSLog(@"writing element {}childRoleNames...");
#endif
      [__item writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
      NSLog(@"successfully wrote element {}childRoleNames...");
#endif

      status = xmlTextWriterEndElement(writer);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing end child element {}childRoleNames."];
      }
    } //end item iterator.
  }
  if ([self permissions]) {
    __enumerator = [[self permissions] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "permissions", NULL);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing start child element {}permissions."];
      }

#if DEBUG_ENUNCIATE > 1
      NSLog(@"writing element {}permissions...");
#endif
      [__item writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
      NSLog(@"successfully wrote element {}permissions...");
#endif

      status = xmlTextWriterEndElement(writer);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing end child element {}permissions."];
      }
    } //end item iterator.
  }
  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "permanent", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}permanent."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}permanent...");
#endif
    status = xmlTextWriterWriteBooleanType(writer, &_permanent);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}permanent...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}permanent."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}permanent."];
    }
  }
  if ([self parentRoleNames]) {
    __enumerator = [[self parentRoleNames] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "parentRoleNames", NULL);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing start child element {}parentRoleNames."];
      }

#if DEBUG_ENUNCIATE > 1
      NSLog(@"writing element {}parentRoleNames...");
#endif
      [__item writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
      NSLog(@"successfully wrote element {}parentRoleNames...");
#endif

      status = xmlTextWriterEndElement(writer);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing end child element {}parentRoleNames."];
      }
    } //end item iterator.
  }
  if ([self parentsRolesUsers]) {
    __enumerator = [[self parentsRolesUsers] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "parentsRolesUsers", NULL);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing start child element {}parentsRolesUsers."];
      }

#if DEBUG_ENUNCIATE > 1
      NSLog(@"writing element {}parentsRolesUsers...");
#endif
      [__item writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
      NSLog(@"successfully wrote element {}parentsRolesUsers...");
#endif

      status = xmlTextWriterEndElement(writer);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing end child element {}parentsRolesUsers."];
      }
    } //end item iterator.
  }
  if ([self users]) {
    __enumerator = [[self users] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "users", NULL);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing start child element {}users."];
      }

#if DEBUG_ENUNCIATE > 1
      NSLog(@"writing element {}users...");
#endif
      [__item writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
      NSLog(@"successfully wrote element {}users...");
#endif

      status = xmlTextWriterEndElement(writer);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing end child element {}users."];
      }
    } //end item iterator.
  }
  if ([self otherUsers]) {
    __enumerator = [[self otherUsers] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "otherUsers", NULL);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing start child element {}otherUsers."];
      }

#if DEBUG_ENUNCIATE > 1
      NSLog(@"writing element {}otherUsers...");
#endif
      [__item writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
      NSLog(@"successfully wrote element {}otherUsers...");
#endif

      status = xmlTextWriterEndElement(writer);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing end child element {}otherUsers."];
      }
    } //end item iterator.
  }
  if ([self removedUsers]) {
    __enumerator = [[self removedUsers] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "removedUsers", NULL);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing start child element {}removedUsers."];
      }

#if DEBUG_ENUNCIATE > 1
      NSLog(@"writing element {}removedUsers...");
#endif
      [__item writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
      NSLog(@"successfully wrote element {}removedUsers...");
#endif

      status = xmlTextWriterEndElement(writer);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing end child element {}removedUsers."];
      }
    } //end item iterator.
  }
}
@end /* implementation REDBACK_REST_APINS0Role (JAXB) */

#endif /* DEF_REDBACK_REST_APINS0Role_M */
#ifndef DEF_REDBACK_REST_APINS0StringList_M
#define DEF_REDBACK_REST_APINS0StringList_M

/**
 *  jaxrs fail to return List {@link String} so use this contains for rest services returning that

 @author Olivier Lamy
 @since 2.1

 */
@implementation REDBACK_REST_APINS0StringList

/**
 * (no documentation provided)
 */
- (NSArray *) strings
{
  return _strings;
}

/**
 * (no documentation provided)
 */
- (void) setStrings: (NSArray *) newStrings
{
  [newStrings retain];
  [_strings release];
  _strings = newStrings;
}

- (void) dealloc
{
  [self setStrings: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  REDBACK_REST_APINS0StringList *_rEDBACK_REST_APINS0StringList;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _rEDBACK_REST_APINS0StringList = (REDBACK_REST_APINS0StringList *) [REDBACK_REST_APINS0StringList readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _rEDBACK_REST_APINS0StringList;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation REDBACK_REST_APINS0StringList */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface REDBACK_REST_APINS0StringList (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface REDBACK_REST_APINS0StringList (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation REDBACK_REST_APINS0StringList (JAXB)

/**
 * Read an instance of REDBACK_REST_APINS0StringList from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of REDBACK_REST_APINS0StringList defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  REDBACK_REST_APINS0StringList *_rEDBACK_REST_APINS0StringList = [[REDBACK_REST_APINS0StringList alloc] init];
  NS_DURING
  {
    [_rEDBACK_REST_APINS0StringList initWithReader: reader];
  }
  NS_HANDLER
  {
    _rEDBACK_REST_APINS0StringList = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_rEDBACK_REST_APINS0StringList autorelease];
  return _rEDBACK_REST_APINS0StringList;
}

/**
 * Initialize this instance of REDBACK_REST_APINS0StringList according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of REDBACK_REST_APINS0StringList to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a REDBACK_REST_APINS0StringList from an XML reader. The element to be read is
 * "stringList".
 *
 * @param reader The XML reader.
 * @return The REDBACK_REST_APINS0StringList.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  REDBACK_REST_APINS0StringList *_stringList = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element stringList."];
    }
  }

  if (xmlStrcmp(BAD_CAST "stringList", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}stringList.");
#endif
    _stringList = (REDBACK_REST_APINS0StringList *)[REDBACK_REST_APINS0StringList readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}stringList.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read REDBACK_REST_APINS0StringList. Expected element stringList. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read REDBACK_REST_APINS0StringList. Expected element stringList. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _stringList;
}

/**
 * Writes this REDBACK_REST_APINS0StringList to XML under element name "stringList".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _stringList The StringList to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this REDBACK_REST_APINS0StringList to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "stringList", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}stringList. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}stringList for root element {}stringList...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}stringList for root element {}stringList...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}stringList. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "strings", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}strings of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

     __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}strings of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    if ([self strings]) {
      [self setStrings: [[self strings] arrayByAddingObject: __child]];
    }
    else {
      [self setStrings: [NSArray arrayWithObject: __child]];
    }
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  id __item_copy;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self strings]) {
    __enumerator = [[self strings] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "strings", NULL);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing start child element {}strings."];
      }

#if DEBUG_ENUNCIATE > 1
      NSLog(@"writing element {}strings...");
#endif
      [__item writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
      NSLog(@"successfully wrote element {}strings...");
#endif

      status = xmlTextWriterEndElement(writer);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing end child element {}strings."];
      }
    } //end item iterator.
  }
}
@end /* implementation REDBACK_REST_APINS0StringList (JAXB) */

#endif /* DEF_REDBACK_REST_APINS0StringList_M */
#ifndef DEF_REDBACK_REST_APINS0UserRegistrationRequest_M
#define DEF_REDBACK_REST_APINS0UserRegistrationRequest_M

/**
 *  @author Olivier Lamy
 @since 2.0

 */
@implementation REDBACK_REST_APINS0UserRegistrationRequest

/**
 * (no documentation provided)
 */
- (REDBACK_REST_APINS0User *) user
{
  return _user;
}

/**
 * (no documentation provided)
 */
- (void) setUser: (REDBACK_REST_APINS0User *) newUser
{
  [newUser retain];
  [_user release];
  _user = newUser;
}

/**
 * (no documentation provided)
 */
- (NSString *) applicationUrl
{
  return _applicationUrl;
}

/**
 * (no documentation provided)
 */
- (void) setApplicationUrl: (NSString *) newApplicationUrl
{
  [newApplicationUrl retain];
  [_applicationUrl release];
  _applicationUrl = newApplicationUrl;
}

- (void) dealloc
{
  [self setUser: nil];
  [self setApplicationUrl: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  REDBACK_REST_APINS0UserRegistrationRequest *_rEDBACK_REST_APINS0UserRegistrationRequest;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _rEDBACK_REST_APINS0UserRegistrationRequest = (REDBACK_REST_APINS0UserRegistrationRequest *) [REDBACK_REST_APINS0UserRegistrationRequest readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _rEDBACK_REST_APINS0UserRegistrationRequest;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation REDBACK_REST_APINS0UserRegistrationRequest */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface REDBACK_REST_APINS0UserRegistrationRequest (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface REDBACK_REST_APINS0UserRegistrationRequest (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation REDBACK_REST_APINS0UserRegistrationRequest (JAXB)

/**
 * Read an instance of REDBACK_REST_APINS0UserRegistrationRequest from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of REDBACK_REST_APINS0UserRegistrationRequest defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  REDBACK_REST_APINS0UserRegistrationRequest *_rEDBACK_REST_APINS0UserRegistrationRequest = [[REDBACK_REST_APINS0UserRegistrationRequest alloc] init];
  NS_DURING
  {
    [_rEDBACK_REST_APINS0UserRegistrationRequest initWithReader: reader];
  }
  NS_HANDLER
  {
    _rEDBACK_REST_APINS0UserRegistrationRequest = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_rEDBACK_REST_APINS0UserRegistrationRequest autorelease];
  return _rEDBACK_REST_APINS0UserRegistrationRequest;
}

/**
 * Initialize this instance of REDBACK_REST_APINS0UserRegistrationRequest according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of REDBACK_REST_APINS0UserRegistrationRequest to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a REDBACK_REST_APINS0UserRegistrationRequest from an XML reader. The element to be read is
 * "userRegistrationRequest".
 *
 * @param reader The XML reader.
 * @return The REDBACK_REST_APINS0UserRegistrationRequest.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  REDBACK_REST_APINS0UserRegistrationRequest *_userRegistrationRequest = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element userRegistrationRequest."];
    }
  }

  if (xmlStrcmp(BAD_CAST "userRegistrationRequest", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}userRegistrationRequest.");
#endif
    _userRegistrationRequest = (REDBACK_REST_APINS0UserRegistrationRequest *)[REDBACK_REST_APINS0UserRegistrationRequest readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}userRegistrationRequest.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read REDBACK_REST_APINS0UserRegistrationRequest. Expected element userRegistrationRequest. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read REDBACK_REST_APINS0UserRegistrationRequest. Expected element userRegistrationRequest. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _userRegistrationRequest;
}

/**
 * Writes this REDBACK_REST_APINS0UserRegistrationRequest to XML under element name "userRegistrationRequest".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _userRegistrationRequest The UserRegistrationRequest to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this REDBACK_REST_APINS0UserRegistrationRequest to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "userRegistrationRequest", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}userRegistrationRequest. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}userRegistrationRequest for root element {}userRegistrationRequest...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}userRegistrationRequest for root element {}userRegistrationRequest...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}userRegistrationRequest. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "user", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}user of type {}user.");
#endif
    __child = [REDBACK_REST_APINS0User readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}user of type {}user.");
#endif

    [self setUser: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "applicationUrl", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}applicationUrl of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}applicationUrl of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setApplicationUrl: __child];
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  id __item_copy;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self user]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "user", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}user."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}user...");
#endif
    [[self user] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}user...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}user."];
    }
  }
  if ([self applicationUrl]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "applicationUrl", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}applicationUrl."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}applicationUrl...");
#endif
    [[self applicationUrl] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}applicationUrl...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}applicationUrl."];
    }
  }
}
@end /* implementation REDBACK_REST_APINS0UserRegistrationRequest (JAXB) */

#endif /* DEF_REDBACK_REST_APINS0UserRegistrationRequest_M */
#ifndef DEF_REDBACK_REST_APINS0User_M
#define DEF_REDBACK_REST_APINS0User_M

/**
 * (no documentation provided)
 */
@implementation REDBACK_REST_APINS0User

/**
 * (no documentation provided)
 */
- (NSString *) username
{
  return _username;
}

/**
 * (no documentation provided)
 */
- (void) setUsername: (NSString *) newUsername
{
  [newUsername retain];
  [_username release];
  _username = newUsername;
}

/**
 * (no documentation provided)
 */
- (NSString *) fullName
{
  return _fullName;
}

/**
 * (no documentation provided)
 */
- (void) setFullName: (NSString *) newFullName
{
  [newFullName retain];
  [_fullName release];
  _fullName = newFullName;
}

/**
 * (no documentation provided)
 */
- (NSString *) email
{
  return _email;
}

/**
 * (no documentation provided)
 */
- (void) setEmail: (NSString *) newEmail
{
  [newEmail retain];
  [_email release];
  _email = newEmail;
}

/**
 * (no documentation provided)
 */
- (BOOL) validated
{
  return _validated;
}

/**
 * (no documentation provided)
 */
- (void) setValidated: (BOOL) newValidated
{
  _validated = newValidated;
}

/**
 * (no documentation provided)
 */
- (BOOL) locked
{
  return _locked;
}

/**
 * (no documentation provided)
 */
- (void) setLocked: (BOOL) newLocked
{
  _locked = newLocked;
}

/**
 * (no documentation provided)
 */
- (NSString *) password
{
  return _password;
}

/**
 * (no documentation provided)
 */
- (void) setPassword: (NSString *) newPassword
{
  [newPassword retain];
  [_password release];
  _password = newPassword;
}

/**
 * (no documentation provided)
 */
- (BOOL) passwordChangeRequired
{
  return _passwordChangeRequired;
}

/**
 * (no documentation provided)
 */
- (void) setPasswordChangeRequired: (BOOL) newPasswordChangeRequired
{
  _passwordChangeRequired = newPasswordChangeRequired;
}

/**
 * (no documentation provided)
 */
- (BOOL) permanent
{
  return _permanent;
}

/**
 * (no documentation provided)
 */
- (void) setPermanent: (BOOL) newPermanent
{
  _permanent = newPermanent;
}

/**
 * (no documentation provided)
 */
- (NSString *) confirmPassword
{
  return _confirmPassword;
}

/**
 * (no documentation provided)
 */
- (void) setConfirmPassword: (NSString *) newConfirmPassword
{
  [newConfirmPassword retain];
  [_confirmPassword release];
  _confirmPassword = newConfirmPassword;
}

/**
 * (no documentation provided)
 */
- (NSString *) timestampAccountCreation
{
  return _timestampAccountCreation;
}

/**
 * (no documentation provided)
 */
- (void) setTimestampAccountCreation: (NSString *) newTimestampAccountCreation
{
  [newTimestampAccountCreation retain];
  [_timestampAccountCreation release];
  _timestampAccountCreation = newTimestampAccountCreation;
}

/**
 * (no documentation provided)
 */
- (NSString *) timestampLastLogin
{
  return _timestampLastLogin;
}

/**
 * (no documentation provided)
 */
- (void) setTimestampLastLogin: (NSString *) newTimestampLastLogin
{
  [newTimestampLastLogin retain];
  [_timestampLastLogin release];
  _timestampLastLogin = newTimestampLastLogin;
}

/**
 * (no documentation provided)
 */
- (NSString *) timestampLastPasswordChange
{
  return _timestampLastPasswordChange;
}

/**
 * (no documentation provided)
 */
- (void) setTimestampLastPasswordChange: (NSString *) newTimestampLastPasswordChange
{
  [newTimestampLastPasswordChange retain];
  [_timestampLastPasswordChange release];
  _timestampLastPasswordChange = newTimestampLastPasswordChange;
}

/**
 * (no documentation provided)
 */
- (NSString *) previousPassword
{
  return _previousPassword;
}

/**
 * (no documentation provided)
 */
- (void) setPreviousPassword: (NSString *) newPreviousPassword
{
  [newPreviousPassword retain];
  [_previousPassword release];
  _previousPassword = newPreviousPassword;
}

/**
 * (no documentation provided)
 */
- (NSArray *) assignedRoles
{
  return _assignedRoles;
}

/**
 * (no documentation provided)
 */
- (void) setAssignedRoles: (NSArray *) newAssignedRoles
{
  [newAssignedRoles retain];
  [_assignedRoles release];
  _assignedRoles = newAssignedRoles;
}

/**
 * (no documentation provided)
 */
- (BOOL) readOnly
{
  return _readOnly;
}

/**
 * (no documentation provided)
 */
- (void) setReadOnly: (BOOL) newReadOnly
{
  _readOnly = newReadOnly;
}

/**
 * (no documentation provided)
 */
- (NSString *) userManagerId
{
  return _userManagerId;
}

/**
 * (no documentation provided)
 */
- (void) setUserManagerId: (NSString *) newUserManagerId
{
  [newUserManagerId retain];
  [_userManagerId release];
  _userManagerId = newUserManagerId;
}

- (void) dealloc
{
  [self setUsername: nil];
  [self setFullName: nil];
  [self setEmail: nil];
  [self setPassword: nil];
  [self setConfirmPassword: nil];
  [self setTimestampAccountCreation: nil];
  [self setTimestampLastLogin: nil];
  [self setTimestampLastPasswordChange: nil];
  [self setPreviousPassword: nil];
  [self setAssignedRoles: nil];
  [self setUserManagerId: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  REDBACK_REST_APINS0User *_rEDBACK_REST_APINS0User;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _rEDBACK_REST_APINS0User = (REDBACK_REST_APINS0User *) [REDBACK_REST_APINS0User readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _rEDBACK_REST_APINS0User;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation REDBACK_REST_APINS0User */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface REDBACK_REST_APINS0User (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface REDBACK_REST_APINS0User (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation REDBACK_REST_APINS0User (JAXB)

/**
 * Read an instance of REDBACK_REST_APINS0User from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of REDBACK_REST_APINS0User defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  REDBACK_REST_APINS0User *_rEDBACK_REST_APINS0User = [[REDBACK_REST_APINS0User alloc] init];
  NS_DURING
  {
    [_rEDBACK_REST_APINS0User initWithReader: reader];
  }
  NS_HANDLER
  {
    _rEDBACK_REST_APINS0User = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_rEDBACK_REST_APINS0User autorelease];
  return _rEDBACK_REST_APINS0User;
}

/**
 * Initialize this instance of REDBACK_REST_APINS0User according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of REDBACK_REST_APINS0User to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a REDBACK_REST_APINS0User from an XML reader. The element to be read is
 * "user".
 *
 * @param reader The XML reader.
 * @return The REDBACK_REST_APINS0User.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  REDBACK_REST_APINS0User *_user = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element user."];
    }
  }

  if (xmlStrcmp(BAD_CAST "user", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}user.");
#endif
    _user = (REDBACK_REST_APINS0User *)[REDBACK_REST_APINS0User readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}user.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read REDBACK_REST_APINS0User. Expected element user. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read REDBACK_REST_APINS0User. Expected element user. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _user;
}

/**
 * Writes this REDBACK_REST_APINS0User to XML under element name "user".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _user The User to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this REDBACK_REST_APINS0User to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "user", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}user. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}user for root element {}user...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}user for root element {}user...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}user. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "username", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}username of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}username of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setUsername: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "fullName", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}fullName of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}fullName of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setFullName: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "email", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}email of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}email of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setEmail: __child];
    return YES;
  } //end "if choice"


  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "validated", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadBooleanType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setValidated: *((BOOL*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "locked", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadBooleanType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setLocked: *((BOOL*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "password", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}password of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}password of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setPassword: __child];
    return YES;
  } //end "if choice"


  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "passwordChangeRequired", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadBooleanType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setPasswordChangeRequired: *((BOOL*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "permanent", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadBooleanType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setPermanent: *((BOOL*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "confirmPassword", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}confirmPassword of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}confirmPassword of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setConfirmPassword: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "timestampAccountCreation", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}timestampAccountCreation of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}timestampAccountCreation of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setTimestampAccountCreation: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "timestampLastLogin", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}timestampLastLogin of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}timestampLastLogin of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setTimestampLastLogin: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "timestampLastPasswordChange", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}timestampLastPasswordChange of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}timestampLastPasswordChange of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setTimestampLastPasswordChange: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "previousPassword", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}previousPassword of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}previousPassword of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setPreviousPassword: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "assignedRoles", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}assignedRoles of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

     __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}assignedRoles of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    if ([self assignedRoles]) {
      [self setAssignedRoles: [[self assignedRoles] arrayByAddingObject: __child]];
    }
    else {
      [self setAssignedRoles: [NSArray arrayWithObject: __child]];
    }
    return YES;
  } //end "if choice"


  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "readOnly", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadBooleanType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setReadOnly: *((BOOL*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "userManagerId", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}userManagerId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}userManagerId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setUserManagerId: __child];
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  id __item_copy;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self username]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "username", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}username."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}username...");
#endif
    [[self username] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}username...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}username."];
    }
  }
  if ([self fullName]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "fullName", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}fullName."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}fullName...");
#endif
    [[self fullName] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}fullName...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}fullName."];
    }
  }
  if ([self email]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "email", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}email."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}email...");
#endif
    [[self email] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}email...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}email."];
    }
  }
  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "validated", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}validated."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}validated...");
#endif
    status = xmlTextWriterWriteBooleanType(writer, &_validated);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}validated...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}validated."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}validated."];
    }
  }
  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "locked", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}locked."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}locked...");
#endif
    status = xmlTextWriterWriteBooleanType(writer, &_locked);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}locked...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}locked."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}locked."];
    }
  }
  if ([self password]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "password", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}password."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}password...");
#endif
    [[self password] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}password...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}password."];
    }
  }
  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "passwordChangeRequired", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}passwordChangeRequired."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}passwordChangeRequired...");
#endif
    status = xmlTextWriterWriteBooleanType(writer, &_passwordChangeRequired);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}passwordChangeRequired...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}passwordChangeRequired."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}passwordChangeRequired."];
    }
  }
  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "permanent", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}permanent."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}permanent...");
#endif
    status = xmlTextWriterWriteBooleanType(writer, &_permanent);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}permanent...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}permanent."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}permanent."];
    }
  }
  if ([self confirmPassword]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "confirmPassword", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}confirmPassword."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}confirmPassword...");
#endif
    [[self confirmPassword] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}confirmPassword...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}confirmPassword."];
    }
  }
  if ([self timestampAccountCreation]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "timestampAccountCreation", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}timestampAccountCreation."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}timestampAccountCreation...");
#endif
    [[self timestampAccountCreation] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}timestampAccountCreation...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}timestampAccountCreation."];
    }
  }
  if ([self timestampLastLogin]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "timestampLastLogin", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}timestampLastLogin."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}timestampLastLogin...");
#endif
    [[self timestampLastLogin] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}timestampLastLogin...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}timestampLastLogin."];
    }
  }
  if ([self timestampLastPasswordChange]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "timestampLastPasswordChange", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}timestampLastPasswordChange."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}timestampLastPasswordChange...");
#endif
    [[self timestampLastPasswordChange] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}timestampLastPasswordChange...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}timestampLastPasswordChange."];
    }
  }
  if ([self previousPassword]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "previousPassword", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}previousPassword."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}previousPassword...");
#endif
    [[self previousPassword] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}previousPassword...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}previousPassword."];
    }
  }
  if ([self assignedRoles]) {
    __enumerator = [[self assignedRoles] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "assignedRoles", NULL);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing start child element {}assignedRoles."];
      }

#if DEBUG_ENUNCIATE > 1
      NSLog(@"writing element {}assignedRoles...");
#endif
      [__item writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
      NSLog(@"successfully wrote element {}assignedRoles...");
#endif

      status = xmlTextWriterEndElement(writer);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing end child element {}assignedRoles."];
      }
    } //end item iterator.
  }
  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "readOnly", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}readOnly."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}readOnly...");
#endif
    status = xmlTextWriterWriteBooleanType(writer, &_readOnly);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}readOnly...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}readOnly."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}readOnly."];
    }
  }
  if ([self userManagerId]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "userManagerId", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}userManagerId."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}userManagerId...");
#endif
    [[self userManagerId] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}userManagerId...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}userManagerId."];
    }
  }
}
@end /* implementation REDBACK_REST_APINS0User (JAXB) */

#endif /* DEF_REDBACK_REST_APINS0User_M */
#ifndef DEF_REDBACK_REST_APINS0RoleTemplate_M
#define DEF_REDBACK_REST_APINS0RoleTemplate_M

/**
 *  @author Olivier Lamy
 @since 2.0

 */
@implementation REDBACK_REST_APINS0RoleTemplate

/**
 * (no documentation provided)
 */
- (NSString *) identifier
{
  return _identifier;
}

/**
 * (no documentation provided)
 */
- (void) setIdentifier: (NSString *) newIdentifier
{
  [newIdentifier retain];
  [_identifier release];
  _identifier = newIdentifier;
}

/**
 * (no documentation provided)
 */
- (NSString *) namePrefix
{
  return _namePrefix;
}

/**
 * (no documentation provided)
 */
- (void) setNamePrefix: (NSString *) newNamePrefix
{
  [newNamePrefix retain];
  [_namePrefix release];
  _namePrefix = newNamePrefix;
}

/**
 * (no documentation provided)
 */
- (NSString *) delimiter
{
  return _delimiter;
}

/**
 * (no documentation provided)
 */
- (void) setDelimiter: (NSString *) newDelimiter
{
  [newDelimiter retain];
  [_delimiter release];
  _delimiter = newDelimiter;
}

/**
 * (no documentation provided)
 */
- (NSString *) description
{
  return _description;
}

/**
 * (no documentation provided)
 */
- (void) setDescription: (NSString *) newDescription
{
  [newDescription retain];
  [_description release];
  _description = newDescription;
}

/**
 * (no documentation provided)
 */
- (NSString *) resource
{
  return _resource;
}

/**
 * (no documentation provided)
 */
- (void) setResource: (NSString *) newResource
{
  [newResource retain];
  [_resource release];
  _resource = newResource;
}

/**
 * (no documentation provided)
 */
- (NSArray *) roles
{
  return _roles;
}

/**
 * (no documentation provided)
 */
- (void) setRoles: (NSArray *) newRoles
{
  [newRoles retain];
  [_roles release];
  _roles = newRoles;
}

- (void) dealloc
{
  [self setIdentifier: nil];
  [self setNamePrefix: nil];
  [self setDelimiter: nil];
  [self setDescription: nil];
  [self setResource: nil];
  [self setRoles: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  REDBACK_REST_APINS0RoleTemplate *_rEDBACK_REST_APINS0RoleTemplate;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _rEDBACK_REST_APINS0RoleTemplate = (REDBACK_REST_APINS0RoleTemplate *) [REDBACK_REST_APINS0RoleTemplate readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _rEDBACK_REST_APINS0RoleTemplate;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation REDBACK_REST_APINS0RoleTemplate */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface REDBACK_REST_APINS0RoleTemplate (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface REDBACK_REST_APINS0RoleTemplate (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation REDBACK_REST_APINS0RoleTemplate (JAXB)

/**
 * Read an instance of REDBACK_REST_APINS0RoleTemplate from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of REDBACK_REST_APINS0RoleTemplate defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  REDBACK_REST_APINS0RoleTemplate *_rEDBACK_REST_APINS0RoleTemplate = [[REDBACK_REST_APINS0RoleTemplate alloc] init];
  NS_DURING
  {
    [_rEDBACK_REST_APINS0RoleTemplate initWithReader: reader];
  }
  NS_HANDLER
  {
    _rEDBACK_REST_APINS0RoleTemplate = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_rEDBACK_REST_APINS0RoleTemplate autorelease];
  return _rEDBACK_REST_APINS0RoleTemplate;
}

/**
 * Initialize this instance of REDBACK_REST_APINS0RoleTemplate according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of REDBACK_REST_APINS0RoleTemplate to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a REDBACK_REST_APINS0RoleTemplate from an XML reader. The element to be read is
 * "roleTemplate".
 *
 * @param reader The XML reader.
 * @return The REDBACK_REST_APINS0RoleTemplate.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  REDBACK_REST_APINS0RoleTemplate *_roleTemplate = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element roleTemplate."];
    }
  }

  if (xmlStrcmp(BAD_CAST "roleTemplate", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}roleTemplate.");
#endif
    _roleTemplate = (REDBACK_REST_APINS0RoleTemplate *)[REDBACK_REST_APINS0RoleTemplate readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}roleTemplate.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read REDBACK_REST_APINS0RoleTemplate. Expected element roleTemplate. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read REDBACK_REST_APINS0RoleTemplate. Expected element roleTemplate. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _roleTemplate;
}

/**
 * Writes this REDBACK_REST_APINS0RoleTemplate to XML under element name "roleTemplate".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _roleTemplate The RoleTemplate to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this REDBACK_REST_APINS0RoleTemplate to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "roleTemplate", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}roleTemplate. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}roleTemplate for root element {}roleTemplate...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}roleTemplate for root element {}roleTemplate...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}roleTemplate. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "id", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}id of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}id of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setIdentifier: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "namePrefix", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}namePrefix of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}namePrefix of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setNamePrefix: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "delimiter", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}delimiter of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}delimiter of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setDelimiter: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "description", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}description of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}description of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setDescription: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "resource", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}resource of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}resource of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setResource: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "roles", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}roles of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

     __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}roles of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    if ([self roles]) {
      [self setRoles: [[self roles] arrayByAddingObject: __child]];
    }
    else {
      [self setRoles: [NSArray arrayWithObject: __child]];
    }
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  id __item_copy;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self identifier]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "id", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}id."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}id...");
#endif
    [[self identifier] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}id...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}id."];
    }
  }
  if ([self namePrefix]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "namePrefix", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}namePrefix."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}namePrefix...");
#endif
    [[self namePrefix] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}namePrefix...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}namePrefix."];
    }
  }
  if ([self delimiter]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "delimiter", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}delimiter."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}delimiter...");
#endif
    [[self delimiter] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}delimiter...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}delimiter."];
    }
  }
  if ([self description]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "description", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}description."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}description...");
#endif
    [[self description] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}description...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}description."];
    }
  }
  if ([self resource]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "resource", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}resource."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}resource...");
#endif
    [[self resource] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}resource...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}resource."];
    }
  }
  if ([self roles]) {
    __enumerator = [[self roles] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "roles", NULL);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing start child element {}roles."];
      }

#if DEBUG_ENUNCIATE > 1
      NSLog(@"writing element {}roles...");
#endif
      [__item writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
      NSLog(@"successfully wrote element {}roles...");
#endif

      status = xmlTextWriterEndElement(writer);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing end child element {}roles."];
      }
    } //end item iterator.
  }
}
@end /* implementation REDBACK_REST_APINS0RoleTemplate (JAXB) */

#endif /* DEF_REDBACK_REST_APINS0RoleTemplate_M */
#ifndef DEF_REDBACK_REST_APINS0Resource_M
#define DEF_REDBACK_REST_APINS0Resource_M

/**
 *  @author Olivier Lamy
 @since 1.4

 */
@implementation REDBACK_REST_APINS0Resource

/**
 * (no documentation provided)
 */
- (NSString *) identifier
{
  return _identifier;
}

/**
 * (no documentation provided)
 */
- (void) setIdentifier: (NSString *) newIdentifier
{
  [newIdentifier retain];
  [_identifier release];
  _identifier = newIdentifier;
}

/**
 * (no documentation provided)
 */
- (BOOL) pattern
{
  return _pattern;
}

/**
 * (no documentation provided)
 */
- (void) setPattern: (BOOL) newPattern
{
  _pattern = newPattern;
}

/**
 * (no documentation provided)
 */
- (BOOL) permanent
{
  return _permanent;
}

/**
 * (no documentation provided)
 */
- (void) setPermanent: (BOOL) newPermanent
{
  _permanent = newPermanent;
}

- (void) dealloc
{
  [self setIdentifier: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  REDBACK_REST_APINS0Resource *_rEDBACK_REST_APINS0Resource;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _rEDBACK_REST_APINS0Resource = (REDBACK_REST_APINS0Resource *) [REDBACK_REST_APINS0Resource readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _rEDBACK_REST_APINS0Resource;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation REDBACK_REST_APINS0Resource */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface REDBACK_REST_APINS0Resource (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface REDBACK_REST_APINS0Resource (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation REDBACK_REST_APINS0Resource (JAXB)

/**
 * Read an instance of REDBACK_REST_APINS0Resource from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of REDBACK_REST_APINS0Resource defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  REDBACK_REST_APINS0Resource *_rEDBACK_REST_APINS0Resource = [[REDBACK_REST_APINS0Resource alloc] init];
  NS_DURING
  {
    [_rEDBACK_REST_APINS0Resource initWithReader: reader];
  }
  NS_HANDLER
  {
    _rEDBACK_REST_APINS0Resource = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_rEDBACK_REST_APINS0Resource autorelease];
  return _rEDBACK_REST_APINS0Resource;
}

/**
 * Initialize this instance of REDBACK_REST_APINS0Resource according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of REDBACK_REST_APINS0Resource to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a REDBACK_REST_APINS0Resource from an XML reader. The element to be read is
 * "resource".
 *
 * @param reader The XML reader.
 * @return The REDBACK_REST_APINS0Resource.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  REDBACK_REST_APINS0Resource *_resource = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element resource."];
    }
  }

  if (xmlStrcmp(BAD_CAST "resource", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}resource.");
#endif
    _resource = (REDBACK_REST_APINS0Resource *)[REDBACK_REST_APINS0Resource readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}resource.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read REDBACK_REST_APINS0Resource. Expected element resource. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read REDBACK_REST_APINS0Resource. Expected element resource. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _resource;
}

/**
 * Writes this REDBACK_REST_APINS0Resource to XML under element name "resource".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _resource The Resource to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this REDBACK_REST_APINS0Resource to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "resource", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}resource. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}resource for root element {}resource...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}resource for root element {}resource...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}resource. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "identifier", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}identifier of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}identifier of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setIdentifier: __child];
    return YES;
  } //end "if choice"


  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "pattern", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadBooleanType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setPattern: *((BOOL*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "permanent", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadBooleanType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setPermanent: *((BOOL*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }

  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  id __item_copy;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self identifier]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "identifier", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}identifier."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}identifier...");
#endif
    [[self identifier] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}identifier...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}identifier."];
    }
  }
  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "pattern", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}pattern."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}pattern...");
#endif
    status = xmlTextWriterWriteBooleanType(writer, &_pattern);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}pattern...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}pattern."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}pattern."];
    }
  }
  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "permanent", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}permanent."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}permanent...");
#endif
    status = xmlTextWriterWriteBooleanType(writer, &_permanent);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}permanent...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}permanent."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}permanent."];
    }
  }
}
@end /* implementation REDBACK_REST_APINS0Resource (JAXB) */

#endif /* DEF_REDBACK_REST_APINS0Resource_M */
#ifndef DEF_REDBACK_REST_APINS0RegistrationKey_M
#define DEF_REDBACK_REST_APINS0RegistrationKey_M

/**
 *  @author Olivier Lamy
 @since 1.4

 */
@implementation REDBACK_REST_APINS0RegistrationKey

/**
 * (no documentation provided)
 */
- (NSString *) key
{
  return _key;
}

/**
 * (no documentation provided)
 */
- (void) setKey: (NSString *) newKey
{
  [newKey retain];
  [_key release];
  _key = newKey;
}

- (void) dealloc
{
  [self setKey: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  REDBACK_REST_APINS0RegistrationKey *_rEDBACK_REST_APINS0RegistrationKey;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _rEDBACK_REST_APINS0RegistrationKey = (REDBACK_REST_APINS0RegistrationKey *) [REDBACK_REST_APINS0RegistrationKey readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _rEDBACK_REST_APINS0RegistrationKey;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation REDBACK_REST_APINS0RegistrationKey */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface REDBACK_REST_APINS0RegistrationKey (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface REDBACK_REST_APINS0RegistrationKey (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation REDBACK_REST_APINS0RegistrationKey (JAXB)

/**
 * Read an instance of REDBACK_REST_APINS0RegistrationKey from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of REDBACK_REST_APINS0RegistrationKey defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  REDBACK_REST_APINS0RegistrationKey *_rEDBACK_REST_APINS0RegistrationKey = [[REDBACK_REST_APINS0RegistrationKey alloc] init];
  NS_DURING
  {
    [_rEDBACK_REST_APINS0RegistrationKey initWithReader: reader];
  }
  NS_HANDLER
  {
    _rEDBACK_REST_APINS0RegistrationKey = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_rEDBACK_REST_APINS0RegistrationKey autorelease];
  return _rEDBACK_REST_APINS0RegistrationKey;
}

/**
 * Initialize this instance of REDBACK_REST_APINS0RegistrationKey according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of REDBACK_REST_APINS0RegistrationKey to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a REDBACK_REST_APINS0RegistrationKey from an XML reader. The element to be read is
 * "registrationKey".
 *
 * @param reader The XML reader.
 * @return The REDBACK_REST_APINS0RegistrationKey.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  REDBACK_REST_APINS0RegistrationKey *_registrationKey = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element registrationKey."];
    }
  }

  if (xmlStrcmp(BAD_CAST "registrationKey", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}registrationKey.");
#endif
    _registrationKey = (REDBACK_REST_APINS0RegistrationKey *)[REDBACK_REST_APINS0RegistrationKey readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}registrationKey.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read REDBACK_REST_APINS0RegistrationKey. Expected element registrationKey. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read REDBACK_REST_APINS0RegistrationKey. Expected element registrationKey. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _registrationKey;
}

/**
 * Writes this REDBACK_REST_APINS0RegistrationKey to XML under element name "registrationKey".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _registrationKey The RegistrationKey to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this REDBACK_REST_APINS0RegistrationKey to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "registrationKey", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}registrationKey. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}registrationKey for root element {}registrationKey...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}registrationKey for root element {}registrationKey...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}registrationKey. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "key", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}key of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}key of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setKey: __child];
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  id __item_copy;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self key]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "key", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}key."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}key...");
#endif
    [[self key] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}key...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}key."];
    }
  }
}
@end /* implementation REDBACK_REST_APINS0RegistrationKey (JAXB) */

#endif /* DEF_REDBACK_REST_APINS0RegistrationKey_M */
#ifndef DEF_REDBACK_REST_APINS0Operation_M
#define DEF_REDBACK_REST_APINS0Operation_M

/**
 *  @author Olivier Lamy
 @since 1.4

 */
@implementation REDBACK_REST_APINS0Operation

/**
 * (no documentation provided)
 */
- (NSString *) name
{
  return _name;
}

/**
 * (no documentation provided)
 */
- (void) setName: (NSString *) newName
{
  [newName retain];
  [_name release];
  _name = newName;
}

/**
 * (no documentation provided)
 */
- (NSString *) description
{
  return _description;
}

/**
 * (no documentation provided)
 */
- (void) setDescription: (NSString *) newDescription
{
  [newDescription retain];
  [_description release];
  _description = newDescription;
}

/**
 * (no documentation provided)
 */
- (BOOL) permanent
{
  return _permanent;
}

/**
 * (no documentation provided)
 */
- (void) setPermanent: (BOOL) newPermanent
{
  _permanent = newPermanent;
}

- (void) dealloc
{
  [self setName: nil];
  [self setDescription: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  REDBACK_REST_APINS0Operation *_rEDBACK_REST_APINS0Operation;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _rEDBACK_REST_APINS0Operation = (REDBACK_REST_APINS0Operation *) [REDBACK_REST_APINS0Operation readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _rEDBACK_REST_APINS0Operation;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation REDBACK_REST_APINS0Operation */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface REDBACK_REST_APINS0Operation (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface REDBACK_REST_APINS0Operation (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation REDBACK_REST_APINS0Operation (JAXB)

/**
 * Read an instance of REDBACK_REST_APINS0Operation from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of REDBACK_REST_APINS0Operation defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  REDBACK_REST_APINS0Operation *_rEDBACK_REST_APINS0Operation = [[REDBACK_REST_APINS0Operation alloc] init];
  NS_DURING
  {
    [_rEDBACK_REST_APINS0Operation initWithReader: reader];
  }
  NS_HANDLER
  {
    _rEDBACK_REST_APINS0Operation = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_rEDBACK_REST_APINS0Operation autorelease];
  return _rEDBACK_REST_APINS0Operation;
}

/**
 * Initialize this instance of REDBACK_REST_APINS0Operation according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of REDBACK_REST_APINS0Operation to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a REDBACK_REST_APINS0Operation from an XML reader. The element to be read is
 * "operation".
 *
 * @param reader The XML reader.
 * @return The REDBACK_REST_APINS0Operation.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  REDBACK_REST_APINS0Operation *_operation = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element operation."];
    }
  }

  if (xmlStrcmp(BAD_CAST "operation", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}operation.");
#endif
    _operation = (REDBACK_REST_APINS0Operation *)[REDBACK_REST_APINS0Operation readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}operation.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read REDBACK_REST_APINS0Operation. Expected element operation. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read REDBACK_REST_APINS0Operation. Expected element operation. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _operation;
}

/**
 * Writes this REDBACK_REST_APINS0Operation to XML under element name "operation".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _operation The Operation to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this REDBACK_REST_APINS0Operation to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "operation", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}operation. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}operation for root element {}operation...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}operation for root element {}operation...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}operation. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "name", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}name of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}name of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setName: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "description", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}description of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}description of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setDescription: __child];
    return YES;
  } //end "if choice"


  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "permanent", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

    _child_accessor = xmlTextReaderReadBooleanType(reader);
    if (_child_accessor == NULL) {
      //panic: unable to return the value for some reason.
      [NSException raise: @"XMLReadError"
                   format: @"Error reading element value."];
    }
    [self setPermanent: *((BOOL*) _child_accessor)];
    free(_child_accessor);
    return YES;
  }

  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  id __item_copy;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self name]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "name", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}name."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}name...");
#endif
    [[self name] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}name...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}name."];
    }
  }
  if ([self description]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "description", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}description."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}description...");
#endif
    [[self description] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}description...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}description."];
    }
  }
  if (YES) { //always write the primitive element...
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "permanent", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}permanent."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}permanent...");
#endif
    status = xmlTextWriterWriteBooleanType(writer, &_permanent);
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}permanent...");
#endif
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing child element {}permanent."];
    }

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}permanent."];
    }
  }
}
@end /* implementation REDBACK_REST_APINS0Operation (JAXB) */

#endif /* DEF_REDBACK_REST_APINS0Operation_M */
#ifndef DEF_REDBACK_REST_APINS0LdapGroupMappingUpdateRequest_M
#define DEF_REDBACK_REST_APINS0LdapGroupMappingUpdateRequest_M

/**
 *  @author Olivier Lamy

 */
@implementation REDBACK_REST_APINS0LdapGroupMappingUpdateRequest

/**
 * (no documentation provided)
 */
- (NSArray *) ldapGroupMapping
{
  return _ldapGroupMapping;
}

/**
 * (no documentation provided)
 */
- (void) setLdapGroupMapping: (NSArray *) newLdapGroupMapping
{
  [newLdapGroupMapping retain];
  [_ldapGroupMapping release];
  _ldapGroupMapping = newLdapGroupMapping;
}

- (void) dealloc
{
  [self setLdapGroupMapping: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  REDBACK_REST_APINS0LdapGroupMappingUpdateRequest *_rEDBACK_REST_APINS0LdapGroupMappingUpdateRequest;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _rEDBACK_REST_APINS0LdapGroupMappingUpdateRequest = (REDBACK_REST_APINS0LdapGroupMappingUpdateRequest *) [REDBACK_REST_APINS0LdapGroupMappingUpdateRequest readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _rEDBACK_REST_APINS0LdapGroupMappingUpdateRequest;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation REDBACK_REST_APINS0LdapGroupMappingUpdateRequest */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface REDBACK_REST_APINS0LdapGroupMappingUpdateRequest (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface REDBACK_REST_APINS0LdapGroupMappingUpdateRequest (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation REDBACK_REST_APINS0LdapGroupMappingUpdateRequest (JAXB)

/**
 * Read an instance of REDBACK_REST_APINS0LdapGroupMappingUpdateRequest from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of REDBACK_REST_APINS0LdapGroupMappingUpdateRequest defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  REDBACK_REST_APINS0LdapGroupMappingUpdateRequest *_rEDBACK_REST_APINS0LdapGroupMappingUpdateRequest = [[REDBACK_REST_APINS0LdapGroupMappingUpdateRequest alloc] init];
  NS_DURING
  {
    [_rEDBACK_REST_APINS0LdapGroupMappingUpdateRequest initWithReader: reader];
  }
  NS_HANDLER
  {
    _rEDBACK_REST_APINS0LdapGroupMappingUpdateRequest = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_rEDBACK_REST_APINS0LdapGroupMappingUpdateRequest autorelease];
  return _rEDBACK_REST_APINS0LdapGroupMappingUpdateRequest;
}

/**
 * Initialize this instance of REDBACK_REST_APINS0LdapGroupMappingUpdateRequest according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of REDBACK_REST_APINS0LdapGroupMappingUpdateRequest to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a REDBACK_REST_APINS0LdapGroupMappingUpdateRequest from an XML reader. The element to be read is
 * "ldapGroupMappingUpdateRequest".
 *
 * @param reader The XML reader.
 * @return The REDBACK_REST_APINS0LdapGroupMappingUpdateRequest.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  REDBACK_REST_APINS0LdapGroupMappingUpdateRequest *_ldapGroupMappingUpdateRequest = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element ldapGroupMappingUpdateRequest."];
    }
  }

  if (xmlStrcmp(BAD_CAST "ldapGroupMappingUpdateRequest", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}ldapGroupMappingUpdateRequest.");
#endif
    _ldapGroupMappingUpdateRequest = (REDBACK_REST_APINS0LdapGroupMappingUpdateRequest *)[REDBACK_REST_APINS0LdapGroupMappingUpdateRequest readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}ldapGroupMappingUpdateRequest.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read REDBACK_REST_APINS0LdapGroupMappingUpdateRequest. Expected element ldapGroupMappingUpdateRequest. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read REDBACK_REST_APINS0LdapGroupMappingUpdateRequest. Expected element ldapGroupMappingUpdateRequest. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _ldapGroupMappingUpdateRequest;
}

/**
 * Writes this REDBACK_REST_APINS0LdapGroupMappingUpdateRequest to XML under element name "ldapGroupMappingUpdateRequest".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _ldapGroupMappingUpdateRequest The LdapGroupMappingUpdateRequest to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this REDBACK_REST_APINS0LdapGroupMappingUpdateRequest to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "ldapGroupMappingUpdateRequest", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}ldapGroupMappingUpdateRequest. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}ldapGroupMappingUpdateRequest for root element {}ldapGroupMappingUpdateRequest...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}ldapGroupMappingUpdateRequest for root element {}ldapGroupMappingUpdateRequest...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}ldapGroupMappingUpdateRequest. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "ldapGroupMapping", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}ldapGroupMapping of type {}ldapGroupMapping.");
#endif

     __child = [REDBACK_REST_APINS0LdapGroupMapping readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}ldapGroupMapping of type {}ldapGroupMapping.");
#endif

    if ([self ldapGroupMapping]) {
      [self setLdapGroupMapping: [[self ldapGroupMapping] arrayByAddingObject: __child]];
    }
    else {
      [self setLdapGroupMapping: [NSArray arrayWithObject: __child]];
    }
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  id __item_copy;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self ldapGroupMapping]) {
    __enumerator = [[self ldapGroupMapping] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "ldapGroupMapping", NULL);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing start child element {}ldapGroupMapping."];
      }

#if DEBUG_ENUNCIATE > 1
      NSLog(@"writing element {}ldapGroupMapping...");
#endif
      [__item writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
      NSLog(@"successfully wrote element {}ldapGroupMapping...");
#endif

      status = xmlTextWriterEndElement(writer);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing end child element {}ldapGroupMapping."];
      }
    } //end item iterator.
  }
}
@end /* implementation REDBACK_REST_APINS0LdapGroupMappingUpdateRequest (JAXB) */

#endif /* DEF_REDBACK_REST_APINS0LdapGroupMappingUpdateRequest_M */
#ifndef DEF_REDBACK_REST_APINS0ApplicationRoles_M
#define DEF_REDBACK_REST_APINS0ApplicationRoles_M

/**
 *  @author Olivier Lamy
 @since 2.0

 */
@implementation REDBACK_REST_APINS0ApplicationRoles

/**
 * (no documentation provided)
 */
- (NSString *) name
{
  return _name;
}

/**
 * (no documentation provided)
 */
- (void) setName: (NSString *) newName
{
  [newName retain];
  [_name release];
  _name = newName;
}

/**
 * (no documentation provided)
 */
- (NSString *) description
{
  return _description;
}

/**
 * (no documentation provided)
 */
- (void) setDescription: (NSString *) newDescription
{
  [newDescription retain];
  [_description release];
  _description = newDescription;
}

/**
 * (no documentation provided)
 */
- (NSArray *) globalRoles
{
  return _globalRoles;
}

/**
 * (no documentation provided)
 */
- (void) setGlobalRoles: (NSArray *) newGlobalRoles
{
  [newGlobalRoles retain];
  [_globalRoles release];
  _globalRoles = newGlobalRoles;
}

/**
 * (no documentation provided)
 */
- (NSArray *) roleTemplates
{
  return _roleTemplates;
}

/**
 * (no documentation provided)
 */
- (void) setRoleTemplates: (NSArray *) newRoleTemplates
{
  [newRoleTemplates retain];
  [_roleTemplates release];
  _roleTemplates = newRoleTemplates;
}

/**
 * (no documentation provided)
 */
- (NSArray *) resources
{
  return _resources;
}

/**
 * (no documentation provided)
 */
- (void) setResources: (NSArray *) newResources
{
  [newResources retain];
  [_resources release];
  _resources = newResources;
}

- (void) dealloc
{
  [self setName: nil];
  [self setDescription: nil];
  [self setGlobalRoles: nil];
  [self setRoleTemplates: nil];
  [self setResources: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  REDBACK_REST_APINS0ApplicationRoles *_rEDBACK_REST_APINS0ApplicationRoles;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _rEDBACK_REST_APINS0ApplicationRoles = (REDBACK_REST_APINS0ApplicationRoles *) [REDBACK_REST_APINS0ApplicationRoles readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _rEDBACK_REST_APINS0ApplicationRoles;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation REDBACK_REST_APINS0ApplicationRoles */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface REDBACK_REST_APINS0ApplicationRoles (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface REDBACK_REST_APINS0ApplicationRoles (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation REDBACK_REST_APINS0ApplicationRoles (JAXB)

/**
 * Read an instance of REDBACK_REST_APINS0ApplicationRoles from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of REDBACK_REST_APINS0ApplicationRoles defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  REDBACK_REST_APINS0ApplicationRoles *_rEDBACK_REST_APINS0ApplicationRoles = [[REDBACK_REST_APINS0ApplicationRoles alloc] init];
  NS_DURING
  {
    [_rEDBACK_REST_APINS0ApplicationRoles initWithReader: reader];
  }
  NS_HANDLER
  {
    _rEDBACK_REST_APINS0ApplicationRoles = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_rEDBACK_REST_APINS0ApplicationRoles autorelease];
  return _rEDBACK_REST_APINS0ApplicationRoles;
}

/**
 * Initialize this instance of REDBACK_REST_APINS0ApplicationRoles according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of REDBACK_REST_APINS0ApplicationRoles to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a REDBACK_REST_APINS0ApplicationRoles from an XML reader. The element to be read is
 * "applicationRole".
 *
 * @param reader The XML reader.
 * @return The REDBACK_REST_APINS0ApplicationRoles.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  REDBACK_REST_APINS0ApplicationRoles *_applicationRoles = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element applicationRole."];
    }
  }

  if (xmlStrcmp(BAD_CAST "applicationRole", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}applicationRole.");
#endif
    _applicationRoles = (REDBACK_REST_APINS0ApplicationRoles *)[REDBACK_REST_APINS0ApplicationRoles readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}applicationRole.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read REDBACK_REST_APINS0ApplicationRoles. Expected element applicationRole. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read REDBACK_REST_APINS0ApplicationRoles. Expected element applicationRole. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _applicationRoles;
}

/**
 * Writes this REDBACK_REST_APINS0ApplicationRoles to XML under element name "applicationRole".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _applicationRoles The ApplicationRoles to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this REDBACK_REST_APINS0ApplicationRoles to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "applicationRole", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}applicationRole. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}applicationRoles for root element {}applicationRole...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}applicationRoles for root element {}applicationRole...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}applicationRole. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "name", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}name of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}name of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setName: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "description", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}description of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}description of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setDescription: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "globalRoles", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}globalRoles of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

     __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}globalRoles of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    if ([self globalRoles]) {
      [self setGlobalRoles: [[self globalRoles] arrayByAddingObject: __child]];
    }
    else {
      [self setGlobalRoles: [NSArray arrayWithObject: __child]];
    }
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "roleTemplates", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}roleTemplates of type {}roleTemplate.");
#endif

     __child = [REDBACK_REST_APINS0RoleTemplate readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}roleTemplates of type {}roleTemplate.");
#endif

    if ([self roleTemplates]) {
      [self setRoleTemplates: [[self roleTemplates] arrayByAddingObject: __child]];
    }
    else {
      [self setRoleTemplates: [NSArray arrayWithObject: __child]];
    }
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "resources", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}resources of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

     __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}resources of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    if ([self resources]) {
      [self setResources: [[self resources] arrayByAddingObject: __child]];
    }
    else {
      [self setResources: [NSArray arrayWithObject: __child]];
    }
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  id __item_copy;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self name]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "name", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}name."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}name...");
#endif
    [[self name] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}name...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}name."];
    }
  }
  if ([self description]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "description", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}description."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}description...");
#endif
    [[self description] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}description...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}description."];
    }
  }
  if ([self globalRoles]) {
    __enumerator = [[self globalRoles] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "globalRoles", NULL);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing start child element {}globalRoles."];
      }

#if DEBUG_ENUNCIATE > 1
      NSLog(@"writing element {}globalRoles...");
#endif
      [__item writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
      NSLog(@"successfully wrote element {}globalRoles...");
#endif

      status = xmlTextWriterEndElement(writer);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing end child element {}globalRoles."];
      }
    } //end item iterator.
  }
  if ([self roleTemplates]) {
    __enumerator = [[self roleTemplates] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "roleTemplates", NULL);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing start child element {}roleTemplates."];
      }

#if DEBUG_ENUNCIATE > 1
      NSLog(@"writing element {}roleTemplates...");
#endif
      [__item writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
      NSLog(@"successfully wrote element {}roleTemplates...");
#endif

      status = xmlTextWriterEndElement(writer);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing end child element {}roleTemplates."];
      }
    } //end item iterator.
  }
  if ([self resources]) {
    __enumerator = [[self resources] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "resources", NULL);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing start child element {}resources."];
      }

#if DEBUG_ENUNCIATE > 1
      NSLog(@"writing element {}resources...");
#endif
      [__item writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
      NSLog(@"successfully wrote element {}resources...");
#endif

      status = xmlTextWriterEndElement(writer);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing end child element {}resources."];
      }
    } //end item iterator.
  }
}
@end /* implementation REDBACK_REST_APINS0ApplicationRoles (JAXB) */

#endif /* DEF_REDBACK_REST_APINS0ApplicationRoles_M */
#ifndef DEF_REDBACK_REST_APINS0Application_M
#define DEF_REDBACK_REST_APINS0Application_M

/**
 *  @author Olivier Lamy

 */
@implementation REDBACK_REST_APINS0Application

/**
 * (no documentation provided)
 */
- (NSString *) version
{
  return _version;
}

/**
 * (no documentation provided)
 */
- (void) setVersion: (NSString *) newVersion
{
  [newVersion retain];
  [_version release];
  _version = newVersion;
}

/**
 * (no documentation provided)
 */
- (NSString *) identifier
{
  return _identifier;
}

/**
 * (no documentation provided)
 */
- (void) setIdentifier: (NSString *) newIdentifier
{
  [newIdentifier retain];
  [_identifier release];
  _identifier = newIdentifier;
}

/**
 * (no documentation provided)
 */
- (NSString *) description
{
  return _description;
}

/**
 * (no documentation provided)
 */
- (void) setDescription: (NSString *) newDescription
{
  [newDescription retain];
  [_description release];
  _description = newDescription;
}

/**
 * (no documentation provided)
 */
- (NSString *) longDescription
{
  return _longDescription;
}

/**
 * (no documentation provided)
 */
- (void) setLongDescription: (NSString *) newLongDescription
{
  [newLongDescription retain];
  [_longDescription release];
  _longDescription = newLongDescription;
}

- (void) dealloc
{
  [self setVersion: nil];
  [self setIdentifier: nil];
  [self setDescription: nil];
  [self setLongDescription: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  REDBACK_REST_APINS0Application *_rEDBACK_REST_APINS0Application;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _rEDBACK_REST_APINS0Application = (REDBACK_REST_APINS0Application *) [REDBACK_REST_APINS0Application readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _rEDBACK_REST_APINS0Application;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation REDBACK_REST_APINS0Application */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface REDBACK_REST_APINS0Application (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface REDBACK_REST_APINS0Application (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation REDBACK_REST_APINS0Application (JAXB)

/**
 * Read an instance of REDBACK_REST_APINS0Application from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of REDBACK_REST_APINS0Application defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  REDBACK_REST_APINS0Application *_rEDBACK_REST_APINS0Application = [[REDBACK_REST_APINS0Application alloc] init];
  NS_DURING
  {
    [_rEDBACK_REST_APINS0Application initWithReader: reader];
  }
  NS_HANDLER
  {
    _rEDBACK_REST_APINS0Application = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_rEDBACK_REST_APINS0Application autorelease];
  return _rEDBACK_REST_APINS0Application;
}

/**
 * Initialize this instance of REDBACK_REST_APINS0Application according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of REDBACK_REST_APINS0Application to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a REDBACK_REST_APINS0Application from an XML reader. The element to be read is
 * "application".
 *
 * @param reader The XML reader.
 * @return The REDBACK_REST_APINS0Application.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  REDBACK_REST_APINS0Application *_application = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element application."];
    }
  }

  if (xmlStrcmp(BAD_CAST "application", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}application.");
#endif
    _application = (REDBACK_REST_APINS0Application *)[REDBACK_REST_APINS0Application readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}application.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read REDBACK_REST_APINS0Application. Expected element application. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read REDBACK_REST_APINS0Application. Expected element application. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _application;
}

/**
 * Writes this REDBACK_REST_APINS0Application to XML under element name "application".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _application The Application to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this REDBACK_REST_APINS0Application to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "application", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}application. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}application for root element {}application...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}application for root element {}application...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}application. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "version", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}version of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}version of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setVersion: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "id", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}id of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}id of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setIdentifier: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "description", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}description of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}description of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setDescription: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "longDescription", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}longDescription of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}longDescription of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setLongDescription: __child];
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  id __item_copy;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self version]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "version", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}version."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}version...");
#endif
    [[self version] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}version...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}version."];
    }
  }
  if ([self identifier]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "id", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}id."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}id...");
#endif
    [[self identifier] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}id...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}id."];
    }
  }
  if ([self description]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "description", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}description."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}description...");
#endif
    [[self description] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}description...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}description."];
    }
  }
  if ([self longDescription]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "longDescription", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}longDescription."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}longDescription...");
#endif
    [[self longDescription] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}longDescription...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}longDescription."];
    }
  }
}
@end /* implementation REDBACK_REST_APINS0Application (JAXB) */

#endif /* DEF_REDBACK_REST_APINS0Application_M */
