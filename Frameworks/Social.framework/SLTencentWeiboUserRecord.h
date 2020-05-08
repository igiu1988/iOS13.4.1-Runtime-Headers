/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLTencentWeiboUserRecord : SLMicroBlogUserRecord <NSSecureCoding> {
    NSURL * _objectID;
    NSString * _openid;
}

@property (nonatomic, retain) NSURL *objectID;
@property (nonatomic, copy) NSString *openid;

+ (bool)supportsSecureCoding;
+ (id)userRecordWithDictionaryRepresentation:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)objectID;
- (id)openid;
- (void)setObjectID:(id)arg1;
- (void)setOpenid:(id)arg1;
- (void)setValuesWithUserDictionary:(id)arg1;

@end
