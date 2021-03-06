///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBSHARINGFolderAction;
@class DBSHARINGFolderPermission;
@class DBSHARINGPermissionDeniedReason;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `FolderPermission` struct.
///
/// Whether the user is allowed to take the action on the shared folder.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSHARINGFolderPermission : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The action that the user may wish to take on the folder.
@property (nonatomic, readonly) DBSHARINGFolderAction *action;

/// True if the user is allowed to take the action.
@property (nonatomic, readonly) NSNumber *allow;

/// The reason why the user is denied the permission. Not present if the action
/// is allowed, or if no reason is available.
@property (nonatomic, readonly, nullable) DBSHARINGPermissionDeniedReason *reason;

#pragma mark - Constructors

///
/// Convenience constructor.
///
/// @param action The action that the user may wish to take on the folder.
/// @param allow True if the user is allowed to take the action.
///
/// @return An initialized instance.
///
- (instancetype)initWithAction:(DBSHARINGFolderAction *)action allow:(NSNumber *)allow;

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param action The action that the user may wish to take on the folder.
/// @param allow True if the user is allowed to take the action.
/// @param reason The reason why the user is denied the permission. Not present
/// if the action is allowed, or if no reason is available.
///
/// @return An initialized instance.
///
- (instancetype)initWithAction:(DBSHARINGFolderAction *)action
                         allow:(NSNumber *)allow
                        reason:(nullable DBSHARINGPermissionDeniedReason *)reason;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `FolderPermission` struct.
///
@interface DBSHARINGFolderPermissionSerializer : NSObject

///
/// Serializes `DBSHARINGFolderPermission` instances.
///
/// @param instance An instance of the `DBSHARINGFolderPermission` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSHARINGFolderPermission` API object.
///
+ (NSDictionary *)serialize:(DBSHARINGFolderPermission *)instance;

///
/// Deserializes `DBSHARINGFolderPermission` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGFolderPermission` API object.
///
/// @return An instantiation of the `DBSHARINGFolderPermission` object.
///
+ (DBSHARINGFolderPermission *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
