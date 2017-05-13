#import "enunciate-common.h"

@class REDBACK_REST_APINS0LdapGroupMapping;
@class REDBACK_REST_APINS0LoginRequest;
@class REDBACK_REST_APINS0Permission;
@class REDBACK_REST_APINS0ResetPasswordRequest;
@class REDBACK_REST_APINS0Role;
@class REDBACK_REST_APINS0StringList;
@class REDBACK_REST_APINS0UserRegistrationRequest;
@class REDBACK_REST_APINS0User;
@class REDBACK_REST_APINS0RoleTemplate;
@class REDBACK_REST_APINS0Resource;
@class REDBACK_REST_APINS0RegistrationKey;
@class REDBACK_REST_APINS0Operation;
@class REDBACK_REST_APINS0LdapGroupMappingUpdateRequest;
@class REDBACK_REST_APINS0ApplicationRoles;
@class REDBACK_REST_APINS0Application;

#ifndef DEF_REDBACK_REST_APINS0LdapGroupMapping_H
#define DEF_REDBACK_REST_APINS0LdapGroupMapping_H

/**
 *  @author Olivier Lamy
 @since 2.1

 */
@interface REDBACK_REST_APINS0LdapGroupMapping : NSObject <EnunciateXML>
{
  @private
    NSString *_group;
    NSArray *_roleNames;
}

/**
 * (no documentation provided)
 */
- (NSString *) group;

/**
 * (no documentation provided)
 */
- (void) setGroup: (NSString *) newGroup;

/**
 * (no documentation provided)
 */
- (NSArray *) roleNames;

/**
 * (no documentation provided)
 */
- (void) setRoleNames: (NSArray *) newRoleNames;
@end /* interface REDBACK_REST_APINS0LdapGroupMapping */

#endif /* DEF_REDBACK_REST_APINS0LdapGroupMapping_H */
#ifndef DEF_REDBACK_REST_APINS0LoginRequest_H
#define DEF_REDBACK_REST_APINS0LoginRequest_H

/**
 *  @author Olivier Lamy
 @since 2.0

 */
@interface REDBACK_REST_APINS0LoginRequest : NSObject <EnunciateXML>
{
  @private
    NSString *_username;
    NSString *_password;
}

/**
 * (no documentation provided)
 */
- (NSString *) username;

/**
 * (no documentation provided)
 */
- (void) setUsername: (NSString *) newUsername;

/**
 * (no documentation provided)
 */
- (NSString *) password;

/**
 * (no documentation provided)
 */
- (void) setPassword: (NSString *) newPassword;
@end /* interface REDBACK_REST_APINS0LoginRequest */

#endif /* DEF_REDBACK_REST_APINS0LoginRequest_H */
#ifndef DEF_REDBACK_REST_APINS0Permission_H
#define DEF_REDBACK_REST_APINS0Permission_H

/**
 *  @author Olivier Lamy
 @since 1.4

 */
@interface REDBACK_REST_APINS0Permission : NSObject <EnunciateXML>
{
  @private
    NSString *_name;
    REDBACK_REST_APINS0Operation *_operation;
    REDBACK_REST_APINS0Resource *_resource;
}

/**
 * (no documentation provided)
 */
- (NSString *) name;

/**
 * (no documentation provided)
 */
- (void) setName: (NSString *) newName;

/**
 * (no documentation provided)
 */
- (REDBACK_REST_APINS0Operation *) operation;

/**
 * (no documentation provided)
 */
- (void) setOperation: (REDBACK_REST_APINS0Operation *) newOperation;

/**
 * (no documentation provided)
 */
- (REDBACK_REST_APINS0Resource *) resource;

/**
 * (no documentation provided)
 */
- (void) setResource: (REDBACK_REST_APINS0Resource *) newResource;
@end /* interface REDBACK_REST_APINS0Permission */

#endif /* DEF_REDBACK_REST_APINS0Permission_H */
#ifndef DEF_REDBACK_REST_APINS0ResetPasswordRequest_H
#define DEF_REDBACK_REST_APINS0ResetPasswordRequest_H

/**
 *  @author Olivier Lamy

 */
@interface REDBACK_REST_APINS0ResetPasswordRequest : NSObject
{
  @private
    NSString *_username;
    NSString *_applicationUrl;
}

/**
 * (no documentation provided)
 */
- (NSString *) username;

/**
 * (no documentation provided)
 */
- (void) setUsername: (NSString *) newUsername;

/**
 * (no documentation provided)
 */
- (NSString *) applicationUrl;

/**
 * (no documentation provided)
 */
- (void) setApplicationUrl: (NSString *) newApplicationUrl;
@end /* interface REDBACK_REST_APINS0ResetPasswordRequest */

#endif /* DEF_REDBACK_REST_APINS0ResetPasswordRequest_H */
#ifndef DEF_REDBACK_REST_APINS0Role_H
#define DEF_REDBACK_REST_APINS0Role_H

/**
 *  @author Olivier Lamy
 @since 1.4

 */
@interface REDBACK_REST_APINS0Role : NSObject <EnunciateXML>
{
  @private
    NSString *_name;
    NSString *_description;
    BOOL _assignable;
    NSArray *_childRoleNames;
    NSArray *_permissions;
    BOOL _permanent;
    NSArray *_parentRoleNames;
    NSArray *_parentsRolesUsers;
    NSArray *_users;
    NSArray *_otherUsers;
    NSArray *_removedUsers;
}

/**
 * (no documentation provided)
 */
- (NSString *) name;

/**
 * (no documentation provided)
 */
- (void) setName: (NSString *) newName;

/**
 * (no documentation provided)
 */
- (NSString *) description;

/**
 * (no documentation provided)
 */
- (void) setDescription: (NSString *) newDescription;

/**
 * (no documentation provided)
 */
- (BOOL) assignable;

/**
 * (no documentation provided)
 */
- (void) setAssignable: (BOOL) newAssignable;

/**
 * (no documentation provided)
 */
- (NSArray *) childRoleNames;

/**
 * (no documentation provided)
 */
- (void) setChildRoleNames: (NSArray *) newChildRoleNames;

/**
 * (no documentation provided)
 */
- (NSArray *) permissions;

/**
 * (no documentation provided)
 */
- (void) setPermissions: (NSArray *) newPermissions;

/**
 * (no documentation provided)
 */
- (BOOL) permanent;

/**
 * (no documentation provided)
 */
- (void) setPermanent: (BOOL) newPermanent;

/**
 * (no documentation provided)
 */
- (NSArray *) parentRoleNames;

/**
 * (no documentation provided)
 */
- (void) setParentRoleNames: (NSArray *) newParentRoleNames;

/**
 * (no documentation provided)
 */
- (NSArray *) parentsRolesUsers;

/**
 * (no documentation provided)
 */
- (void) setParentsRolesUsers: (NSArray *) newParentsRolesUsers;

/**
 * (no documentation provided)
 */
- (NSArray *) users;

/**
 * (no documentation provided)
 */
- (void) setUsers: (NSArray *) newUsers;

/**
 * (no documentation provided)
 */
- (NSArray *) otherUsers;

/**
 * (no documentation provided)
 */
- (void) setOtherUsers: (NSArray *) newOtherUsers;

/**
 * (no documentation provided)
 */
- (NSArray *) removedUsers;

/**
 * (no documentation provided)
 */
- (void) setRemovedUsers: (NSArray *) newRemovedUsers;
@end /* interface REDBACK_REST_APINS0Role */

#endif /* DEF_REDBACK_REST_APINS0Role_H */
#ifndef DEF_REDBACK_REST_APINS0StringList_H
#define DEF_REDBACK_REST_APINS0StringList_H

/**
 *  jaxrs fail to return List {@link String} so use this contains for rest services returning that

 @author Olivier Lamy
 @since 2.1

 */
@interface REDBACK_REST_APINS0StringList : NSObject <EnunciateXML>
{
  @private
    NSArray *_strings;
}

/**
 * (no documentation provided)
 */
- (NSArray *) strings;

/**
 * (no documentation provided)
 */
- (void) setStrings: (NSArray *) newStrings;
@end /* interface REDBACK_REST_APINS0StringList */

#endif /* DEF_REDBACK_REST_APINS0StringList_H */
#ifndef DEF_REDBACK_REST_APINS0UserRegistrationRequest_H
#define DEF_REDBACK_REST_APINS0UserRegistrationRequest_H

/**
 *  @author Olivier Lamy
 @since 2.0

 */
@interface REDBACK_REST_APINS0UserRegistrationRequest : NSObject <EnunciateXML>
{
  @private
    REDBACK_REST_APINS0User *_user;
    NSString *_applicationUrl;
}

/**
 * (no documentation provided)
 */
- (REDBACK_REST_APINS0User *) user;

/**
 * (no documentation provided)
 */
- (void) setUser: (REDBACK_REST_APINS0User *) newUser;

/**
 * (no documentation provided)
 */
- (NSString *) applicationUrl;

/**
 * (no documentation provided)
 */
- (void) setApplicationUrl: (NSString *) newApplicationUrl;
@end /* interface REDBACK_REST_APINS0UserRegistrationRequest */

#endif /* DEF_REDBACK_REST_APINS0UserRegistrationRequest_H */
#ifndef DEF_REDBACK_REST_APINS0User_H
#define DEF_REDBACK_REST_APINS0User_H

/**
 * (no documentation provided)
 */
@interface REDBACK_REST_APINS0User : NSObject <EnunciateXML>
{
  @private
    NSString *_username;
    NSString *_fullName;
    NSString *_email;
    BOOL _validated;
    BOOL _locked;
    NSString *_password;
    BOOL _passwordChangeRequired;
    BOOL _permanent;
    NSString *_confirmPassword;
    NSString *_timestampAccountCreation;
    NSString *_timestampLastLogin;
    NSString *_timestampLastPasswordChange;
    NSString *_previousPassword;
    NSArray *_assignedRoles;
    BOOL _readOnly;
    NSString *_userManagerId;
    NSString *_validationToken;
}

/**
 * (no documentation provided)
 */
- (NSString *) username;

/**
 * (no documentation provided)
 */
- (void) setUsername: (NSString *) newUsername;

/**
 * (no documentation provided)
 */
- (NSString *) fullName;

/**
 * (no documentation provided)
 */
- (void) setFullName: (NSString *) newFullName;

/**
 * (no documentation provided)
 */
- (NSString *) email;

/**
 * (no documentation provided)
 */
- (void) setEmail: (NSString *) newEmail;

/**
 * (no documentation provided)
 */
- (BOOL) validated;

/**
 * (no documentation provided)
 */
- (void) setValidated: (BOOL) newValidated;

/**
 * (no documentation provided)
 */
- (BOOL) locked;

/**
 * (no documentation provided)
 */
- (void) setLocked: (BOOL) newLocked;

/**
 * (no documentation provided)
 */
- (NSString *) password;

/**
 * (no documentation provided)
 */
- (void) setPassword: (NSString *) newPassword;

/**
 * (no documentation provided)
 */
- (BOOL) passwordChangeRequired;

/**
 * (no documentation provided)
 */
- (void) setPasswordChangeRequired: (BOOL) newPasswordChangeRequired;

/**
 * (no documentation provided)
 */
- (BOOL) permanent;

/**
 * (no documentation provided)
 */
- (void) setPermanent: (BOOL) newPermanent;

/**
 * (no documentation provided)
 */
- (NSString *) confirmPassword;

/**
 * (no documentation provided)
 */
- (void) setConfirmPassword: (NSString *) newConfirmPassword;

/**
 * (no documentation provided)
 */
- (NSString *) timestampAccountCreation;

/**
 * (no documentation provided)
 */
- (void) setTimestampAccountCreation: (NSString *) newTimestampAccountCreation;

/**
 * (no documentation provided)
 */
- (NSString *) timestampLastLogin;

/**
 * (no documentation provided)
 */
- (void) setTimestampLastLogin: (NSString *) newTimestampLastLogin;

/**
 * (no documentation provided)
 */
- (NSString *) timestampLastPasswordChange;

/**
 * (no documentation provided)
 */
- (void) setTimestampLastPasswordChange: (NSString *) newTimestampLastPasswordChange;

/**
 * (no documentation provided)
 */
- (NSString *) previousPassword;

/**
 * (no documentation provided)
 */
- (void) setPreviousPassword: (NSString *) newPreviousPassword;

/**
 * (no documentation provided)
 */
- (NSArray *) assignedRoles;

/**
 * (no documentation provided)
 */
- (void) setAssignedRoles: (NSArray *) newAssignedRoles;

/**
 * (no documentation provided)
 */
- (BOOL) readOnly;

/**
 * (no documentation provided)
 */
- (void) setReadOnly: (BOOL) newReadOnly;

/**
 * (no documentation provided)
 */
- (NSString *) userManagerId;

/**
 * (no documentation provided)
 */
- (void) setUserManagerId: (NSString *) newUserManagerId;

/**
 * (no documentation provided)
 */
- (NSString *) validationToken;

/**
 * (no documentation provided)
 */
- (void) setValidationToken: (NSString *) newValidationToken;
@end /* interface REDBACK_REST_APINS0User */

#endif /* DEF_REDBACK_REST_APINS0User_H */
#ifndef DEF_REDBACK_REST_APINS0RoleTemplate_H
#define DEF_REDBACK_REST_APINS0RoleTemplate_H

/**
 *  @author Olivier Lamy
 @since 2.0

 */
@interface REDBACK_REST_APINS0RoleTemplate : NSObject <EnunciateXML>
{
  @private
    NSString *_identifier;
    NSString *_namePrefix;
    NSString *_delimiter;
    NSString *_description;
    NSString *_resource;
    NSArray *_roles;
}

/**
 * (no documentation provided)
 */
- (NSString *) identifier;

/**
 * (no documentation provided)
 */
- (void) setIdentifier: (NSString *) newIdentifier;

/**
 * (no documentation provided)
 */
- (NSString *) namePrefix;

/**
 * (no documentation provided)
 */
- (void) setNamePrefix: (NSString *) newNamePrefix;

/**
 * (no documentation provided)
 */
- (NSString *) delimiter;

/**
 * (no documentation provided)
 */
- (void) setDelimiter: (NSString *) newDelimiter;

/**
 * (no documentation provided)
 */
- (NSString *) description;

/**
 * (no documentation provided)
 */
- (void) setDescription: (NSString *) newDescription;

/**
 * (no documentation provided)
 */
- (NSString *) resource;

/**
 * (no documentation provided)
 */
- (void) setResource: (NSString *) newResource;

/**
 * (no documentation provided)
 */
- (NSArray *) roles;

/**
 * (no documentation provided)
 */
- (void) setRoles: (NSArray *) newRoles;
@end /* interface REDBACK_REST_APINS0RoleTemplate */

#endif /* DEF_REDBACK_REST_APINS0RoleTemplate_H */
#ifndef DEF_REDBACK_REST_APINS0Resource_H
#define DEF_REDBACK_REST_APINS0Resource_H

/**
 *  @author Olivier Lamy
 @since 1.4

 */
@interface REDBACK_REST_APINS0Resource : NSObject <EnunciateXML>
{
  @private
    NSString *_identifier;
    BOOL _pattern;
    BOOL _permanent;
}

/**
 * (no documentation provided)
 */
- (NSString *) identifier;

/**
 * (no documentation provided)
 */
- (void) setIdentifier: (NSString *) newIdentifier;

/**
 * (no documentation provided)
 */
- (BOOL) pattern;

/**
 * (no documentation provided)
 */
- (void) setPattern: (BOOL) newPattern;

/**
 * (no documentation provided)
 */
- (BOOL) permanent;

/**
 * (no documentation provided)
 */
- (void) setPermanent: (BOOL) newPermanent;
@end /* interface REDBACK_REST_APINS0Resource */

#endif /* DEF_REDBACK_REST_APINS0Resource_H */
#ifndef DEF_REDBACK_REST_APINS0RegistrationKey_H
#define DEF_REDBACK_REST_APINS0RegistrationKey_H

/**
 *  @author Olivier Lamy
 @since 1.4

 */
@interface REDBACK_REST_APINS0RegistrationKey : NSObject <EnunciateXML>
{
  @private
    NSString *_key;
}

/**
 * (no documentation provided)
 */
- (NSString *) key;

/**
 * (no documentation provided)
 */
- (void) setKey: (NSString *) newKey;
@end /* interface REDBACK_REST_APINS0RegistrationKey */

#endif /* DEF_REDBACK_REST_APINS0RegistrationKey_H */
#ifndef DEF_REDBACK_REST_APINS0Operation_H
#define DEF_REDBACK_REST_APINS0Operation_H

/**
 *  @author Olivier Lamy
 @since 1.4

 */
@interface REDBACK_REST_APINS0Operation : NSObject <EnunciateXML>
{
  @private
    NSString *_name;
    NSString *_description;
    BOOL _permanent;
}

/**
 * (no documentation provided)
 */
- (NSString *) name;

/**
 * (no documentation provided)
 */
- (void) setName: (NSString *) newName;

/**
 * (no documentation provided)
 */
- (NSString *) description;

/**
 * (no documentation provided)
 */
- (void) setDescription: (NSString *) newDescription;

/**
 * (no documentation provided)
 */
- (BOOL) permanent;

/**
 * (no documentation provided)
 */
- (void) setPermanent: (BOOL) newPermanent;
@end /* interface REDBACK_REST_APINS0Operation */

#endif /* DEF_REDBACK_REST_APINS0Operation_H */
#ifndef DEF_REDBACK_REST_APINS0LdapGroupMappingUpdateRequest_H
#define DEF_REDBACK_REST_APINS0LdapGroupMappingUpdateRequest_H

/**
 *  @author Olivier Lamy

 */
@interface REDBACK_REST_APINS0LdapGroupMappingUpdateRequest : NSObject <EnunciateXML>
{
  @private
    NSArray *_ldapGroupMapping;
}

/**
 * (no documentation provided)
 */
- (NSArray *) ldapGroupMapping;

/**
 * (no documentation provided)
 */
- (void) setLdapGroupMapping: (NSArray *) newLdapGroupMapping;
@end /* interface REDBACK_REST_APINS0LdapGroupMappingUpdateRequest */

#endif /* DEF_REDBACK_REST_APINS0LdapGroupMappingUpdateRequest_H */
#ifndef DEF_REDBACK_REST_APINS0ApplicationRoles_H
#define DEF_REDBACK_REST_APINS0ApplicationRoles_H

/**
 *  @author Olivier Lamy
 @since 2.0

 */
@interface REDBACK_REST_APINS0ApplicationRoles : NSObject <EnunciateXML>
{
  @private
    NSString *_name;
    NSString *_description;
    NSArray *_globalRoles;
    NSArray *_roleTemplates;
    NSArray *_resources;
}

/**
 * (no documentation provided)
 */
- (NSString *) name;

/**
 * (no documentation provided)
 */
- (void) setName: (NSString *) newName;

/**
 * (no documentation provided)
 */
- (NSString *) description;

/**
 * (no documentation provided)
 */
- (void) setDescription: (NSString *) newDescription;

/**
 * (no documentation provided)
 */
- (NSArray *) globalRoles;

/**
 * (no documentation provided)
 */
- (void) setGlobalRoles: (NSArray *) newGlobalRoles;

/**
 * (no documentation provided)
 */
- (NSArray *) roleTemplates;

/**
 * (no documentation provided)
 */
- (void) setRoleTemplates: (NSArray *) newRoleTemplates;

/**
 * (no documentation provided)
 */
- (NSArray *) resources;

/**
 * (no documentation provided)
 */
- (void) setResources: (NSArray *) newResources;
@end /* interface REDBACK_REST_APINS0ApplicationRoles */

#endif /* DEF_REDBACK_REST_APINS0ApplicationRoles_H */
#ifndef DEF_REDBACK_REST_APINS0Application_H
#define DEF_REDBACK_REST_APINS0Application_H

/**
 *  @author Olivier Lamy

 */
@interface REDBACK_REST_APINS0Application : NSObject <EnunciateXML>
{
  @private
    NSString *_version;
    NSString *_identifier;
    NSString *_description;
    NSString *_longDescription;
}

/**
 * (no documentation provided)
 */
- (NSString *) version;

/**
 * (no documentation provided)
 */
- (void) setVersion: (NSString *) newVersion;

/**
 * (no documentation provided)
 */
- (NSString *) identifier;

/**
 * (no documentation provided)
 */
- (void) setIdentifier: (NSString *) newIdentifier;

/**
 * (no documentation provided)
 */
- (NSString *) description;

/**
 * (no documentation provided)
 */
- (void) setDescription: (NSString *) newDescription;

/**
 * (no documentation provided)
 */
- (NSString *) longDescription;

/**
 * (no documentation provided)
 */
- (void) setLongDescription: (NSString *) newLongDescription;
@end /* interface REDBACK_REST_APINS0Application */

#endif /* DEF_REDBACK_REST_APINS0Application_H */
