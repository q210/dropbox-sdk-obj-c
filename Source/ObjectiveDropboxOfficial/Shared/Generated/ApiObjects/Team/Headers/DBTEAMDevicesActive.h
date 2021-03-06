///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMDevicesActive;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `DevicesActive` struct.
///
/// Each of the items is an array of values, one value per day. The value is the
/// number of devices active within a time window, ending with that day. If
/// there is no data for a day, then the value will be None.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMDevicesActive : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Array of number of linked windows (desktop) clients with activity.
@property (nonatomic, readonly) NSArray<NSNumber *> *windows;

/// Array of number of linked mac (desktop) clients with activity.
@property (nonatomic, readonly) NSArray<NSNumber *> *macos;

/// Array of number of linked linus (desktop) clients with activity.
@property (nonatomic, readonly) NSArray<NSNumber *> *linux;

/// Array of number of linked ios devices with activity.
@property (nonatomic, readonly) NSArray<NSNumber *> *ios;

/// Array of number of linked android devices with activity.
@property (nonatomic, readonly) NSArray<NSNumber *> *android;

/// Array of number of other linked devices (blackberry, windows phone, etc)
/// with activity.
@property (nonatomic, readonly) NSArray<NSNumber *> *other;

/// Array of total number of linked clients with activity.
@property (nonatomic, readonly) NSArray<NSNumber *> *total;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param windows Array of number of linked windows (desktop) clients with
/// activity.
/// @param macos Array of number of linked mac (desktop) clients with activity.
/// @param linux Array of number of linked linus (desktop) clients with
/// activity.
/// @param ios Array of number of linked ios devices with activity.
/// @param android Array of number of linked android devices with activity.
/// @param other Array of number of other linked devices (blackberry, windows
/// phone, etc)  with activity.
/// @param total Array of total number of linked clients with activity.
///
/// @return An initialized instance.
///
- (instancetype)initWithWindows:(NSArray<NSNumber *> *)windows
                          macos:(NSArray<NSNumber *> *)macos
                          linux:(NSArray<NSNumber *> *)linux
                            ios:(NSArray<NSNumber *> *)ios
                        android:(NSArray<NSNumber *> *)android
                          other:(NSArray<NSNumber *> *)other
                          total:(NSArray<NSNumber *> *)total;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DevicesActive` struct.
///
@interface DBTEAMDevicesActiveSerializer : NSObject

///
/// Serializes `DBTEAMDevicesActive` instances.
///
/// @param instance An instance of the `DBTEAMDevicesActive` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMDevicesActive` API object.
///
+ (NSDictionary *)serialize:(DBTEAMDevicesActive *)instance;

///
/// Deserializes `DBTEAMDevicesActive` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMDevicesActive` API object.
///
/// @return An instantiation of the `DBTEAMDevicesActive` object.
///
+ (DBTEAMDevicesActive *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
