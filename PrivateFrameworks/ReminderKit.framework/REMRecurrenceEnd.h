/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

@interface REMRecurrenceEnd : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _endDate;
    unsigned long long  _occurrenceCount;
}

@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) unsigned long long occurrenceCount;

+ (id)recurrenceEndWithEndDate:(id)arg1;
+ (id)recurrenceEndWithOccurrenceCount:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithEndDate:(id)arg1;
- (id)initWithOccurrenceCount:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)occurrenceCount;
- (bool)usesEndDate;

@end
