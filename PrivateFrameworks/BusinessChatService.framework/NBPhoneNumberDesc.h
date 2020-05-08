/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

@interface NBPhoneNumberDesc : NSObject {
    NSString * _exampleNumber;
    NSString * _nationalNumberPattern;
    NSString * _possibleNumberPattern;
}

@property (nonatomic, retain) NSString *exampleNumber;
@property (nonatomic, retain) NSString *nationalNumberPattern;
@property (nonatomic, retain) NSString *possibleNumberPattern;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)exampleNumber;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithNationalNumberPattern:(id)arg1 withPossibleNumberPattern:(id)arg2 withExample:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)nationalNumberPattern;
- (id)possibleNumberPattern;
- (void)setExampleNumber:(id)arg1;
- (void)setNationalNumberPattern:(id)arg1;
- (void)setPossibleNumberPattern:(id)arg1;

@end
