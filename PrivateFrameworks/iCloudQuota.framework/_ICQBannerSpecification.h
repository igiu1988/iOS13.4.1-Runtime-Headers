/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iCloudQuota.framework/iCloudQuota
 */

@interface _ICQBannerSpecification : NSObject {
    NSString * _messageFormat;
    NSArray * _messageLinks;
    NSURL * _remoteUIURL;
    NSDictionary * _serverDict;
}

@property (nonatomic, retain) NSString *messageFormat;
@property (nonatomic, retain) NSArray *messageLinks;
@property (nonatomic, retain) NSURL *remoteUIURL;
@property (nonatomic, retain) NSDictionary *serverDict;

+ (id)bannerSpecificationSampleForLevel:(long long)arg1;

- (void).cxx_destruct;
- (id)initWithServerDictionary:(id)arg1;
- (id)messageFormat;
- (id)messageLinks;
- (id)remoteUIURL;
- (id)serverDict;
- (void)setMessageFormat:(id)arg1;
- (void)setMessageLinks:(id)arg1;
- (void)setMessageWithServerMessage:(id)arg1;
- (void)setRemoteUIURL:(id)arg1;
- (void)setServerDict:(id)arg1;

@end
