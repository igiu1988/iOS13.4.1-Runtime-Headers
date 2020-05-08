/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOProxyClient : NSObject {
    GEOApplicationAuditToken * _auditToken;
    NSString * _bundleIdentifier;
    NSString * _bundleVersion;
    bool  _isApplication;
}

@property (nonatomic, retain) GEOApplicationAuditToken *auditToken;
@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic, retain) NSString *bundleVersion;
@property (nonatomic) bool isApplication;

+ (id)compositeClientForClients:(id)arg1;
+ (id)currentClient;

- (void).cxx_destruct;
- (id)URLConnectionProperties;
- (id)auditToken;
- (id)bundleIdentifier;
- (id)bundleVersion;
- (id)description;
- (unsigned long long)hash;
- (id)initWithAuditToken:(id)arg1;
- (id)initWithXPCConnection:(id)arg1;
- (bool)isApplication;
- (bool)isEqual:(id)arg1;
- (void)setAuditToken:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setBundleVersion:(id)arg1;
- (void)setIsApplication:(bool)arg1;

@end