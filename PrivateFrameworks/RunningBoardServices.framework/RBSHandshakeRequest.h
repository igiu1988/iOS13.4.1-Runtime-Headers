/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
 */

@interface RBSHandshakeRequest : NSObject <BSXPCSecureCoding> {
    NSSet * _assertionDescriptors;
    unsigned int  _euid;
}

@property (nonatomic, retain) NSSet *assertionDescriptors;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int euid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (id)assertionDescriptors;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (unsigned int)euid;
- (unsigned long long)hash;
- (id)initWithBSXPCCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setAssertionDescriptors:(id)arg1;
- (void)setEuid:(unsigned int)arg1;

@end