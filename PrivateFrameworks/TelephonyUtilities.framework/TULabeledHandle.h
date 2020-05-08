/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TULabeledHandle : NSObject <NSCopying, NSSecureCoding> {
    TUHandle * _handle;
    bool  _isSuggested;
    NSString * _label;
}

@property (nonatomic, readonly) TUHandle *handle;
@property (nonatomic, readonly) bool isSuggested;
@property (nonatomic, readonly, copy) NSString *label;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)handle;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithHandle:(id)arg1 label:(id)arg2 isSuggested:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToLabeledHandle:(id)arg1;
- (bool)isSuggested;
- (id)label;

@end
