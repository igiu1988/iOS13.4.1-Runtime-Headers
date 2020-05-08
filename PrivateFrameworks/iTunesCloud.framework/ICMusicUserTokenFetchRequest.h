/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICMusicUserTokenFetchRequest : ICRemoteRequestOperation <NSSecureCoding> {
    ICClientInfo * _clientInfo;
    NSString * _developerToken;
    unsigned long long  _options;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_executeByPerformingStoreRequestWithContext:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)execute;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeveloperToken:(id)arg1 clientInfo:(id)arg2 options:(unsigned long long)arg3;
- (void)performRequestWithResponseHandler:(id /* block */)arg1;

@end
