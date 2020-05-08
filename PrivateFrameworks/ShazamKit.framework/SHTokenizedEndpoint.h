/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
 */

@interface SHTokenizedEndpoint : NSObject <NSCopying> {
    NSString * _tokenURLString;
}

@property (nonatomic, copy) NSString *tokenURLString;

- (void).cxx_destruct;
- (id)URLRepresentation;
- (bool)containsTokens;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithTokenURL:(id)arg1;
- (void)setTokenURLString:(id)arg1;
- (id)tokenForTokenType:(long long)arg1;
- (id)tokenURLString;
- (bool)updateToken:(long long)arg1 withValue:(id)arg2;

@end
