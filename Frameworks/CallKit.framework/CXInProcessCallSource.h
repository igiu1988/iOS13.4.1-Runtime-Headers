/* Generated by EzioChiu
   Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

@interface CXInProcessCallSource : CXCallSource {
    NSString * _bundleIdentifier;
    NSURL * _bundleURL;
    CXInProcessProvider * _provider;
}

@property (nonatomic, retain) CXInProcessProvider *provider;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)bundleURL;
- (id)identifier;
- (id)initWithBundleIdentifier:(id)arg1;
- (bool)isPermittedToUsePrivateAPI;
- (bool)isPermittedToUsePublicAPI;
- (int)processIdentifier;
- (id)provider;
- (void)setProvider:(id)arg1;
- (id)vendorProtocolDelegate;

@end
