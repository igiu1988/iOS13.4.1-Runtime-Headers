/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRClient : NSObject {
    NSString * _bundleIdentifier;
    NSArray * _bundleIdentifierHierarchy;
    NSString * _displayName;
    NSString * _parentApplicationBundleIdentifier;
    int  _processIdentifier;
    int  _processUserIdentifier;
    MRColorComponents * _tintColor;
    long long  _visibility;
}

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSArray *bundleIdentifierHierarchy;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, readonly) bool hasAuxiliaryProperties;
@property (nonatomic, readonly) bool hasPlaceholder;
@property (getter=isLocal, nonatomic, readonly) bool local;
@property (nonatomic, copy) NSString *parentApplicationBundleIdentifier;
@property (nonatomic) int processIdentifier;
@property (nonatomic) int processUserIdentifier;
@property (nonatomic, readonly) _MRNowPlayingClientProtobuf *protobuf;
@property (nonatomic, retain) MRColorComponents *tintColor;
@property (nonatomic) long long visibility;

+ (id)localClient;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)bundleIdentifierHierarchy;
- (id)data;
- (id)displayName;
- (bool)hasAuxiliaryProperties;
- (bool)hasPlaceholder;
- (id)initWithData:(id)arg1;
- (id)initWithProcessIdentifier:(int)arg1 bundleIdentifier:(id)arg2;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isLocal;
- (id)parentApplicationBundleIdentifier;
- (int)processIdentifier;
- (int)processUserIdentifier;
- (id)protobuf;
- (void)setBundleIdentifier:(id)arg1;
- (void)setBundleIdentifierHierarchy:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setParentApplicationBundleIdentifier:(id)arg1;
- (void)setProcessIdentifier:(int)arg1;
- (void)setProcessUserIdentifier:(int)arg1;
- (void)setTintColor:(id)arg1;
- (void)setVisibility:(long long)arg1;
- (id)tintColor;
- (long long)visibility;

@end
