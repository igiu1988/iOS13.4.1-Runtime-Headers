/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFNamedProtobufMessage : NSObject <NSCopying, NSSecureCoding, SFNamedProtobufMessage> {
    NSData * _protobufMessageData;
    NSString * _protobufMessageName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSData *protobufMessageData;
@property (nonatomic, copy) NSString *protobufMessageName;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (id)jsonData;
- (id)protobufMessageData;
- (id)protobufMessageName;
- (void)setProtobufMessageData:(id)arg1;
- (void)setProtobufMessageName:(id)arg1;

@end
