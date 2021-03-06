/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOApplicationAuditToken : NSObject <NSSecureCoding> {
    geo_isolater * _isolater;
    NSString * _proxiedBundleId;
    bool  _proxiedExternalBundleId;
    NSString * _resolvedBundleId;
    NSString * _resolvedNetworkAttributionBundleId;
    NSString * _secondaryIdentifier;
    NSData * _tokenData;
}

@property (nonatomic, readonly) NSString *proxiedBundleId;
@property (getter=isProxiedExternalBundleId, nonatomic, readonly) bool proxiedExternalBundleId;
@property (getter=_secondaryIdentifier, nonatomic, readonly, copy) NSString *secondaryIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_bundleIdForAuditToken;
- (id)_secondaryIdentifier;
- (id)backingTokenData;
- (id)bundleId;
- (id)bundleIdForNetworkAttribution;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAuditTokenData:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProxiedApplicationBundleId:(id)arg1;
- (id)initWithProxiedExternalApplicationBundleId:(id)arg1;
- (id)initWithSecondaryIdentifier:(id)arg1;
- (id)initWithXPCConnection:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isProxiedExternalBundleId;
- (id)proxiedBundleId;
- (id)publicLogDescription;

@end
