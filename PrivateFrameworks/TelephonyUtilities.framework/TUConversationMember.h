/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUConversationMember : NSObject <NSCopying, NSSecureCoding> {
    TUHandle * _handle;
}

@property (nonatomic, readonly) TUHandle *handle;
@property (nonatomic, readonly, copy) NSSet *handles;
@property (nonatomic, readonly, copy) NSString *idsDestination;
@property (nonatomic, readonly, copy) NSArray *idsDestinations;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)handle;
- (id)handles;
- (unsigned long long)hash;
- (id)idsDestination;
- (id)idsDestinations;
- (id)initWithCoder:(id)arg1;
- (id)initWithContact:(id)arg1;
- (id)initWithContact:(id)arg1 additionalHandles:(id)arg2;
- (id)initWithDestination:(id)arg1;
- (id)initWithDestinations:(id)arg1;
- (id)initWithHandle:(id)arg1;
- (id)initWithHandles:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToMember:(id)arg1;
- (bool)representsSameMemberAs:(id)arg1;

@end
