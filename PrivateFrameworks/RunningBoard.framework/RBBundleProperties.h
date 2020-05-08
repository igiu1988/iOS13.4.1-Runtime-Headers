/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

@interface RBBundleProperties : NSObject <BSDescriptionProviding, RBBundleProperties> {
    bool  _backgroundRefreshEnabled;
    RBBundlePropertiesBackgroundRefreshProvider * _bgRefreshProvider;
    bool  _hasFetchedBackgroundRefreshEnabled;
    RBLSBundleProperties * _lsBundleProperties;
    RBBundlePropertiesLSProvider * _lsProvider;
    RBSProcessIdentifier * _processIdentifier;
    RBSProcessIdentity * _processIdentity;
    RBXPCBundleProperties * _xpcBundleProperties;
    RBBundlePropertiesBSXPCProvider * _xpcProvider;
}

@property (getter=isBackgroundRefreshEnabled, nonatomic, readonly) bool backgroundRefreshEnabled;
@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly, copy) NSString *bundlePath;
@property (nonatomic, readonly) NSURL *dataContainerURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *environmentVariables;
@property (nonatomic, readonly, copy) NSString *executablePath;
@property (nonatomic, readonly, copy) NSString *extensionPointIdentifier;
@property (nonatomic, readonly) bool hasPreferredJetsamBand;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isExtension;
@property (nonatomic, readonly) int preferredJetsamBand;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsBackgroundAudio;
@property (nonatomic, readonly) bool supportsBackgroundContentFetching;
@property (nonatomic, readonly) bool supportsBackgroundNetworkAuthentication;
@property (nonatomic, readonly) bool supportsUnboundedTaskCompletion;
@property (nonatomic, readonly) bool usesSocketMonitoring;

- (void).cxx_destruct;
- (id)_bundleProperties;
- (id)_lsBundleProperties;
- (id)_xpcBundleProperties;
- (id)bundleIdentifier;
- (id)bundleInfoValuesForKeys:(id)arg1;
- (id)bundlePath;
- (id)dataContainerURL;
- (id)debugDescription;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)environmentVariables;
- (id)executablePath;
- (id)extensionPointIdentifier;
- (bool)hasPreferredJetsamBand;
- (id)initWithLSProvider:(id)arg1 xpcProvider:(id)arg2 backgroundRefreshProvider:(id)arg3 processIdentity:(id)arg4 processIdentifier:(id)arg5;
- (bool)isBackgroundRefreshEnabled;
- (bool)isExtension;
- (int)preferredJetsamBand;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (bool)supportsBackgroundAudio;
- (bool)supportsBackgroundContentFetching;
- (bool)supportsBackgroundNetworkAuthentication;
- (bool)supportsUnboundedTaskCompletion;
- (bool)usesSocketMonitoring;

@end
