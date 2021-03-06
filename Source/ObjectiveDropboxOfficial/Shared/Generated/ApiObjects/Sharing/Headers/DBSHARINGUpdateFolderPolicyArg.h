///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBSHARINGAclUpdatePolicy;
@class DBSHARINGLinkSettings;
@class DBSHARINGMemberPolicy;
@class DBSHARINGSharedLinkPolicy;
@class DBSHARINGUpdateFolderPolicyArg;
@class DBSHARINGViewerInfoPolicy;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `UpdateFolderPolicyArg` struct.
///
/// If any of the policies are unset, then they retain their current setting.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSHARINGUpdateFolderPolicyArg : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The ID for the shared folder.
@property (nonatomic, readonly, copy) NSString *sharedFolderId;

/// Who can be a member of this shared folder. Only applicable if the current
/// user is on a team.
@property (nonatomic, readonly, nullable) DBSHARINGMemberPolicy *memberPolicy;

/// Who can add and remove members of this shared folder.
@property (nonatomic, readonly, nullable) DBSHARINGAclUpdatePolicy *aclUpdatePolicy;

/// Who can enable/disable viewer info for this shared folder.
@property (nonatomic, readonly, nullable) DBSHARINGViewerInfoPolicy *viewerInfoPolicy;

/// The policy to apply to shared links created for content inside this shared
/// folder. The current user must be on a team to set this policy to `members`
/// in `DBSHARINGSharedLinkPolicy`.
@property (nonatomic, readonly, nullable) DBSHARINGSharedLinkPolicy *sharedLinkPolicy;

/// Settings on the link for this folder.
@property (nonatomic, readonly, nullable) DBSHARINGLinkSettings *linkSettings;

#pragma mark - Constructors

///
/// Convenience constructor.
///
/// @param sharedFolderId The ID for the shared folder.
///
/// @return An initialized instance.
///
- (instancetype)initWithSharedFolderId:(NSString *)sharedFolderId;

///
/// Convenience constructor.
///
/// @param sharedFolderId The ID for the shared folder.
/// @param memberPolicy Who can be a member of this shared folder. Only
/// applicable if the current user is on a team.
///
/// @return An initialized instance.
///
- (instancetype)initWithSharedFolderId:(NSString *)sharedFolderId
                          memberPolicy:(nullable DBSHARINGMemberPolicy *)memberPolicy;

///
/// Convenience constructor.
///
/// @param sharedFolderId The ID for the shared folder.
/// @param memberPolicy Who can be a member of this shared folder. Only
/// applicable if the current user is on a team.
/// @param aclUpdatePolicy Who can add and remove members of this shared folder.
///
/// @return An initialized instance.
///
- (instancetype)initWithSharedFolderId:(NSString *)sharedFolderId
                          memberPolicy:(nullable DBSHARINGMemberPolicy *)memberPolicy
                       aclUpdatePolicy:(nullable DBSHARINGAclUpdatePolicy *)aclUpdatePolicy;

///
/// Convenience constructor.
///
/// @param sharedFolderId The ID for the shared folder.
/// @param memberPolicy Who can be a member of this shared folder. Only
/// applicable if the current user is on a team.
/// @param aclUpdatePolicy Who can add and remove members of this shared folder.
/// @param viewerInfoPolicy Who can enable/disable viewer info for this shared
/// folder.
///
/// @return An initialized instance.
///
- (instancetype)initWithSharedFolderId:(NSString *)sharedFolderId
                          memberPolicy:(nullable DBSHARINGMemberPolicy *)memberPolicy
                       aclUpdatePolicy:(nullable DBSHARINGAclUpdatePolicy *)aclUpdatePolicy
                      viewerInfoPolicy:(nullable DBSHARINGViewerInfoPolicy *)viewerInfoPolicy;

///
/// Convenience constructor.
///
/// @param sharedFolderId The ID for the shared folder.
/// @param memberPolicy Who can be a member of this shared folder. Only
/// applicable if the current user is on a team.
/// @param aclUpdatePolicy Who can add and remove members of this shared folder.
/// @param viewerInfoPolicy Who can enable/disable viewer info for this shared
/// folder.
/// @param sharedLinkPolicy The policy to apply to shared links created for
/// content inside this shared folder. The current user must be on a team to set
/// this policy to `members` in `DBSHARINGSharedLinkPolicy`.
///
/// @return An initialized instance.
///
- (instancetype)initWithSharedFolderId:(NSString *)sharedFolderId
                          memberPolicy:(nullable DBSHARINGMemberPolicy *)memberPolicy
                       aclUpdatePolicy:(nullable DBSHARINGAclUpdatePolicy *)aclUpdatePolicy
                      viewerInfoPolicy:(nullable DBSHARINGViewerInfoPolicy *)viewerInfoPolicy
                      sharedLinkPolicy:(nullable DBSHARINGSharedLinkPolicy *)sharedLinkPolicy;

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param sharedFolderId The ID for the shared folder.
/// @param memberPolicy Who can be a member of this shared folder. Only
/// applicable if the current user is on a team.
/// @param aclUpdatePolicy Who can add and remove members of this shared folder.
/// @param viewerInfoPolicy Who can enable/disable viewer info for this shared
/// folder.
/// @param sharedLinkPolicy The policy to apply to shared links created for
/// content inside this shared folder. The current user must be on a team to set
/// this policy to `members` in `DBSHARINGSharedLinkPolicy`.
/// @param linkSettings Settings on the link for this folder.
///
/// @return An initialized instance.
///
- (instancetype)initWithSharedFolderId:(NSString *)sharedFolderId
                          memberPolicy:(nullable DBSHARINGMemberPolicy *)memberPolicy
                       aclUpdatePolicy:(nullable DBSHARINGAclUpdatePolicy *)aclUpdatePolicy
                      viewerInfoPolicy:(nullable DBSHARINGViewerInfoPolicy *)viewerInfoPolicy
                      sharedLinkPolicy:(nullable DBSHARINGSharedLinkPolicy *)sharedLinkPolicy
                          linkSettings:(nullable DBSHARINGLinkSettings *)linkSettings;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `UpdateFolderPolicyArg` struct.
///
@interface DBSHARINGUpdateFolderPolicyArgSerializer : NSObject

///
/// Serializes `DBSHARINGUpdateFolderPolicyArg` instances.
///
/// @param instance An instance of the `DBSHARINGUpdateFolderPolicyArg` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSHARINGUpdateFolderPolicyArg` API object.
///
+ (NSDictionary *)serialize:(DBSHARINGUpdateFolderPolicyArg *)instance;

///
/// Deserializes `DBSHARINGUpdateFolderPolicyArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGUpdateFolderPolicyArg` API object.
///
/// @return An instantiation of the `DBSHARINGUpdateFolderPolicyArg` object.
///
+ (DBSHARINGUpdateFolderPolicyArg *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
