///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBStoneSerializers.h"
#import "DBStoneValidators.h"
#import "DBTEAMGroupMemberSelectorError.h"
#import "DBTEAMGroupSelectorError.h"

#pragma mark - API Object

@implementation DBTEAMGroupMemberSelectorError

#pragma mark - Constructors

- (instancetype)initWithGroupNotFound {
  self = [super init];
  if (self) {
    _tag = DBTEAMGroupMemberSelectorErrorGroupNotFound;
  }
  return self;
}

- (instancetype)initWithOther {
  self = [super init];
  if (self) {
    _tag = DBTEAMGroupMemberSelectorErrorOther;
  }
  return self;
}

- (instancetype)initWithMemberNotInGroup {
  self = [super init];
  if (self) {
    _tag = DBTEAMGroupMemberSelectorErrorMemberNotInGroup;
  }
  return self;
}

#pragma mark - Instance field accessors

#pragma mark - Tag state methods

- (BOOL)isGroupNotFound {
  return _tag == DBTEAMGroupMemberSelectorErrorGroupNotFound;
}

- (BOOL)isOther {
  return _tag == DBTEAMGroupMemberSelectorErrorOther;
}

- (BOOL)isMemberNotInGroup {
  return _tag == DBTEAMGroupMemberSelectorErrorMemberNotInGroup;
}

- (NSString *)tagName {
  switch (_tag) {
  case DBTEAMGroupMemberSelectorErrorGroupNotFound:
    return @"DBTEAMGroupMemberSelectorErrorGroupNotFound";
  case DBTEAMGroupMemberSelectorErrorOther:
    return @"DBTEAMGroupMemberSelectorErrorOther";
  case DBTEAMGroupMemberSelectorErrorMemberNotInGroup:
    return @"DBTEAMGroupMemberSelectorErrorMemberNotInGroup";
  }

  @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

#pragma mark - Serialization methods

+ (NSDictionary *)serialize:(id)instance {
  return [DBTEAMGroupMemberSelectorErrorSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
  return [DBTEAMGroupMemberSelectorErrorSerializer deserialize:dict];
}

#pragma mark - Description method

- (NSString *)description {
  return [[DBTEAMGroupMemberSelectorErrorSerializer serialize:self] description];
}

@end

#pragma mark - Serializer Object

@implementation DBTEAMGroupMemberSelectorErrorSerializer

+ (NSDictionary *)serialize:(DBTEAMGroupMemberSelectorError *)valueObj {
  NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

  if ([valueObj isGroupNotFound]) {
    jsonDict[@".tag"] = @"group_not_found";
  } else if ([valueObj isOther]) {
    jsonDict[@".tag"] = @"other";
  } else if ([valueObj isMemberNotInGroup]) {
    jsonDict[@".tag"] = @"member_not_in_group";
  } else {
    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
  }

  return jsonDict;
}

+ (DBTEAMGroupMemberSelectorError *)deserialize:(NSDictionary *)valueDict {
  NSString *tag = valueDict[@".tag"];

  if ([tag isEqualToString:@"group_not_found"]) {
    return [[DBTEAMGroupMemberSelectorError alloc] initWithGroupNotFound];
  } else if ([tag isEqualToString:@"other"]) {
    return [[DBTEAMGroupMemberSelectorError alloc] initWithOther];
  } else if ([tag isEqualToString:@"member_not_in_group"]) {
    return [[DBTEAMGroupMemberSelectorError alloc] initWithMemberNotInGroup];
  }

  @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

@end