/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCModelGenericAVItemUserIdentityPropertySet : NSObject {
    ICUserIdentityProperties * _delegatedIdentityProperties;
    ICUserIdentityProperties * _identityProperties;
}

@property (nonatomic, copy) ICUserIdentityProperties *delegatedIdentityProperties;
@property (nonatomic, copy) ICUserIdentityProperties *identityProperties;

+ (void)identityPropertySetFromRequestContext:(id)arg1 completion:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)delegatedIdentityProperties;
- (id)identityProperties;
- (id)initWithIdentityProperties:(id)arg1 delegatedIdentityProperties:(id)arg2;
- (void)setDelegatedIdentityProperties:(id)arg1;
- (void)setIdentityProperties:(id)arg1;

@end
