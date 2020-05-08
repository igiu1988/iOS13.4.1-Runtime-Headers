/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBDeviceApplicationScenePlaceholderContentContext : NSObject <NSMutableCopying, SBScenePlaceholderContentContext> {
    long long  _layoutEnvironment;
    unsigned long long  _preferredContentType;
    bool  _prefersLiveXIB;
    NSString * _requestedLaunchIdentifier;
    <SBActivationSettings> * _settings;
    NSURL * _url;
}

@property (nonatomic, copy) <SBActivationSettings> *activationSettings;
@property (nonatomic, readonly) bool canShowUserContent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long layoutEnvironment;
@property (nonatomic) unsigned long long preferredContentType;
@property (nonatomic) bool prefersLiveXIB;
@property (nonatomic, copy) NSString *requestedLaunchIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSURL *url;

- (void).cxx_destruct;
- (id)activationSettings;
- (bool)canShowUserContent;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithActivationSettings:(id)arg1;
- (long long)layoutEnvironment;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)preferredContentType;
- (bool)prefersLiveXIB;
- (id)requestedLaunchIdentifier;
- (void)setActivationSettings:(id)arg1;
- (void)setLayoutEnvironment:(long long)arg1;
- (void)setPreferredContentType:(unsigned long long)arg1;
- (void)setPrefersLiveXIB:(bool)arg1;
- (void)setRequestedLaunchIdentifier:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end
