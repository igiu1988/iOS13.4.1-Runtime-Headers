/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HardwareDiagnostics.framework/HardwareDiagnostics
 */

@interface HDLimit : NSObject <NSCopying, NSSecureCoding> {
    HDBound * _lowerBound;
    NSString * _name;
    HDBound * _upperBound;
}

@property (nonatomic, copy) HDBound *lowerBound;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) HDBound *upperBound;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToLimit:(id)arg1;
- (id)lowerBound;
- (bool)measurementWithinBounds:(id)arg1;
- (id)name;
- (void)setLowerBound:(id)arg1;
- (void)setName:(id)arg1;
- (void)setUpperBound:(id)arg1;
- (id)upperBound;

@end
