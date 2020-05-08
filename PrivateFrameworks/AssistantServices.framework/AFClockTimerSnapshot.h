/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFClockTimerSnapshot : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _date;
    unsigned long long  _generation;
    NSOrderedSet * _notifiedFiringTimerIDs;
    NSDictionary * _timersByID;
}

@property (nonatomic, readonly, copy) NSDate *date;
@property (nonatomic, readonly) unsigned long long generation;
@property (nonatomic, readonly, copy) NSOrderedSet *notifiedFiringTimerIDs;
@property (nonatomic, readonly, copy) NSDictionary *timersByID;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)generation;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithGeneration:(unsigned long long)arg1 date:(id)arg2 timersByID:(id)arg3 notifiedFiringTimerIDs:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (id)notifiedFiringTimerIDs;
- (id)timersByID;

@end