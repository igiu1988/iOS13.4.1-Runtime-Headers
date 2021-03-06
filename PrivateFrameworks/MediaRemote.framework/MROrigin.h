/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MROrigin : NSObject {
    NSString * _displayName;
    long long  _identifier;
    long long  _type;
}

@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, readonly) long long identifier;
@property (getter=isLocal, nonatomic, readonly) bool local;
@property (nonatomic, readonly) _MROriginProtobuf *protobuf;
@property (nonatomic, readonly) long long type;

+ (id)localOrigin;

- (void).cxx_destruct;
- (id)data;
- (id)displayName;
- (long long)identifier;
- (id)initWithData:(id)arg1;
- (id)initWithIdentifier:(long long)arg1 type:(long long)arg2 displayName:(id)arg3;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isLocal;
- (id)protobuf;
- (long long)type;

@end
