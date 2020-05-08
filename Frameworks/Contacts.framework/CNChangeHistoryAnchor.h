/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNChangeHistoryAnchor : NSObject <NSCopying, NSSecureCoding> {
    long long  _sequenceNumber;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) long long sequenceNumber;

+ (bool)supportsSecureCoding;

- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (id)initWithSequenceNumber:(long long)arg1;
- (long long)sequenceNumber;

@end
