/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset
 */

@interface MADownloadOptions : NSObject <NSSecureCoding> {
    NSMutableDictionary * _additionalServerParams;
    bool  _allowsCellularAccess;
    bool  _allowsExpensiveAccess;
    bool  _canUseLocalCacheServer;
    bool  _discretionary;
    bool  _prefersInfraWiFi;
    bool  _requiresPowerPluggedIn;
    NSString * _sessionId;
    long long  _timeoutIntervalForResource;
}

@property (nonatomic, retain) NSMutableDictionary *additionalServerParams;
@property (nonatomic) bool allowsCellularAccess;
@property (nonatomic) bool allowsExpensiveAccess;
@property (nonatomic) bool canUseLocalCacheServer;
@property (nonatomic) bool discretionary;
@property (nonatomic) bool prefersInfraWiFi;
@property (nonatomic) bool requiresPowerPluggedIn;
@property (nonatomic, retain) NSString *sessionId;
@property (nonatomic) long long timeoutIntervalForResource;

+ (bool)supportsSecureCoding;

- (id)additionalServerParams;
- (bool)allowsCellularAccess;
- (bool)allowsExpensiveAccess;
- (bool)canUseLocalCacheServer;
- (void)dealloc;
- (id)description;
- (bool)discretionary;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)logOptions;
- (bool)prefersInfraWiFi;
- (bool)requiresPowerPluggedIn;
- (id)sessionId;
- (void)setAdditionalServerParams:(id)arg1;
- (void)setAllowsCellularAccess:(bool)arg1;
- (void)setAllowsExpensiveAccess:(bool)arg1;
- (void)setCanUseLocalCacheServer:(bool)arg1;
- (void)setDiscretionary:(bool)arg1;
- (void)setPrefersInfraWiFi:(bool)arg1;
- (void)setRequiresPowerPluggedIn:(bool)arg1;
- (void)setSessionId:(id)arg1;
- (void)setTimeoutIntervalForResource:(long long)arg1;
- (long long)timeoutIntervalForResource;

@end
