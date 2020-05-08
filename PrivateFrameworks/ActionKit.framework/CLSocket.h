/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

@interface CLSocket : NSObject {
    NSString * _APIKey;
    long long  _appID;
    NSURL * _authURL;
    NSDictionary * _channels;
}

@property (nonatomic, copy) NSString *APIKey;
@property (nonatomic) long long appID;
@property (nonatomic, retain) NSURL *authURL;
@property (nonatomic, retain) NSDictionary *channels;

- (id)APIKey;
- (long long)appID;
- (id)authURL;
- (id)channels;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setAPIKey:(id)arg1;
- (void)setAppID:(long long)arg1;
- (void)setAuthURL:(id)arg1;
- (void)setChannels:(id)arg1;

@end
