///
/// Auto-generated by Stone, do not modify.
///

#import "DBXSHARINGAclUpdatePolicy.h"
#import "DBXSHARINGFolderPolicy.h"
#import "DBXSHARINGMemberPolicy.h"
#import "DBXSHARINGSharedLinkPolicy.h"
#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"

@implementation DBXSHARINGFolderPolicy 

- (instancetype)initWithAclUpdatePolicy:(DBXSHARINGAclUpdatePolicy *)aclUpdatePolicy sharedLinkPolicy:(DBXSHARINGSharedLinkPolicy *)sharedLinkPolicy memberPolicy:(DBXSHARINGMemberPolicy *)memberPolicy resolvedMemberPolicy:(DBXSHARINGMemberPolicy *)resolvedMemberPolicy {

    self = [super init];
    if (self != nil) {
        _memberPolicy = memberPolicy;
        _resolvedMemberPolicy = resolvedMemberPolicy;
        _aclUpdatePolicy = aclUpdatePolicy;
        _sharedLinkPolicy = sharedLinkPolicy;
    }
    return self;
}

- (instancetype)initWithAclUpdatePolicy:(DBXSHARINGAclUpdatePolicy *)aclUpdatePolicy sharedLinkPolicy:(DBXSHARINGSharedLinkPolicy *)sharedLinkPolicy {
    return [self initWithAclUpdatePolicy:aclUpdatePolicy sharedLinkPolicy:sharedLinkPolicy memberPolicy:nil resolvedMemberPolicy:nil];
}

+ (NSDictionary *)serialize:(id)obj {
    return [DBXSHARINGFolderPolicySerializer serialize:obj];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXSHARINGFolderPolicySerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXSHARINGFolderPolicySerializer serialize:self] description];
}

@end


@implementation DBXSHARINGFolderPolicySerializer 

+ (NSDictionary *)serialize:(DBXSHARINGFolderPolicy *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    jsonDict[@"acl_update_policy"] = [DBXSHARINGAclUpdatePolicySerializer serialize:valueObj.aclUpdatePolicy];
    jsonDict[@"shared_link_policy"] = [DBXSHARINGSharedLinkPolicySerializer serialize:valueObj.sharedLinkPolicy];
    if (valueObj.memberPolicy) {
        jsonDict[@"member_policy"] = [DBXSHARINGMemberPolicySerializer serialize:valueObj.memberPolicy];
    }
    if (valueObj.resolvedMemberPolicy) {
        jsonDict[@"resolved_member_policy"] = [DBXSHARINGMemberPolicySerializer serialize:valueObj.resolvedMemberPolicy];
    }

    return jsonDict;
}

+ (DBXSHARINGFolderPolicy *)deserialize:(NSDictionary *)valueDict {
    DBXSHARINGAclUpdatePolicy *aclUpdatePolicy = [DBXSHARINGAclUpdatePolicySerializer deserialize:valueDict[@"acl_update_policy"]];
    DBXSHARINGSharedLinkPolicy *sharedLinkPolicy = [DBXSHARINGSharedLinkPolicySerializer deserialize:valueDict[@"shared_link_policy"]];
    DBXSHARINGMemberPolicy *memberPolicy = valueDict[@"member_policy"] ? [DBXSHARINGMemberPolicySerializer deserialize:valueDict[@"member_policy"]] : nil;
    DBXSHARINGMemberPolicy *resolvedMemberPolicy = valueDict[@"resolved_member_policy"] ? [DBXSHARINGMemberPolicySerializer deserialize:valueDict[@"resolved_member_policy"]] : nil;

    return [[DBXSHARINGFolderPolicy alloc] initWithAclUpdatePolicy:aclUpdatePolicy sharedLinkPolicy:sharedLinkPolicy memberPolicy:memberPolicy resolvedMemberPolicy:resolvedMemberPolicy];
}

@end