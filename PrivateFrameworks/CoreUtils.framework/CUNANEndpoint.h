/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUNANEndpoint : NSObject {
    WiFiAwareDiscoveryResult * _discoveryResult;
    NSString * _identifier;
    NSString * _name;
    int  _port;
    NSString * _serviceType;
    NSDictionary * _textInfo;
}

@property (nonatomic, retain) WiFiAwareDiscoveryResult *discoveryResult;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) int port;
@property (nonatomic, copy) NSString *serviceType;
@property (nonatomic, readonly, copy) NSDictionary *textInfo;

- (void).cxx_destruct;
- (id)description;
- (id)descriptionWithLevel:(int)arg1;
- (id)discoveryResult;
- (id)identifier;
- (id)name;
- (int)port;
- (id)serviceType;
- (void)setDiscoveryResult:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPort:(int)arg1;
- (void)setServiceType:(id)arg1;
- (id)textInfo;
- (unsigned int)updateWithDiscoveryResult:(id)arg1;

@end
