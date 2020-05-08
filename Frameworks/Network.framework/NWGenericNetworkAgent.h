/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Network.framework/Network
 */

@interface NWGenericNetworkAgent : NSObject <NWPrettyDescription> {
    struct netagent { unsigned char x1[16]; BOOL x2[32]; BOOL x3[32]; BOOL x4[128]; unsigned int x5; unsigned int x6; unsigned char x7[0]; } * _internalNetagent;
}

@property (getter=isActive, nonatomic, readonly) bool active;
@property (nonatomic, readonly) NSString *agentDescription;
@property (nonatomic, readonly) NSString *agentDomain;
@property (nonatomic, readonly) NSString *agentType;
@property (nonatomic, readonly) NSUUID *agentUUID;
@property struct netagent { unsigned char x1[16]; BOOL x2[32]; BOOL x3[32]; BOOL x4[128]; unsigned int x5; unsigned int x6; unsigned char x7[0]; }*internalNetagent;
@property (getter=isKernelActivated, nonatomic, readonly) bool kernelActivated;
@property (getter=isNetworkProvider, nonatomic, readonly) bool networkProvider;
@property (nonatomic, readonly, copy) NSString *privateDescription;
@property (getter=isSpecificUseOnly, nonatomic, readonly) bool specificUseOnly;
@property (getter=isUserActivated, nonatomic, readonly) bool userActivated;
@property (getter=isVoluntary, nonatomic, readonly) bool voluntary;

- (id)agentDescription;
- (id)agentDomain;
- (id)agentType;
- (id)agentUUID;
- (void)dealloc;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(bool)arg2;
- (id)initWithKernelAgent:(const struct netagent { unsigned char x1[16]; BOOL x2[32]; BOOL x3[32]; BOOL x4[128]; unsigned int x5; unsigned int x6; unsigned char x7[0]; }*)arg1;
- (struct netagent { unsigned char x1[16]; BOOL x2[32]; BOOL x3[32]; BOOL x4[128]; unsigned int x5; unsigned int x6; unsigned char x7[0]; }*)internalNetagent;
- (bool)isActive;
- (bool)isKernelActivated;
- (bool)isNetworkProvider;
- (bool)isNexusProvider;
- (bool)isSpecificUseOnly;
- (bool)isUserActivated;
- (bool)isVoluntary;
- (id)privateDescription;
- (bool)requiresAssert;
- (void)setInternalNetagent:(struct netagent { unsigned char x1[16]; BOOL x2[32]; BOOL x3[32]; BOOL x4[128]; unsigned int x5; unsigned int x6; unsigned char x7[0]; }*)arg1;
- (bool)supportsBrowse;
- (bool)supportsResolve;

@end
