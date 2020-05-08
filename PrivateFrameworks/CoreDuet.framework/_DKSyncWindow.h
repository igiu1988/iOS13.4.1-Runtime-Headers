/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKSyncWindow : NSObject <NSCopying> {
    NSDate * _endDate;
    _DKEvent * _event;
    NSDate * _startDate;
}

@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic, retain) _DKEvent *event;
@property (nonatomic, retain) NSDate *startDate;

+ (id)choppedWindowsFromSortedNormalizedWindows:(id)arg1 betweenWindowMinimumDate:(id)arg2 andWindowMaximumDate:(id)arg3;
+ (id)completedWindowsFromWindows:(id)arg1 firstEvent:(id)arg2 lastEvent:(id)arg3 fetchOrder:(long long)arg4 fillOrder:(unsigned long long)arg5 hitLimit:(bool)arg6;
+ (id)completedWindowsWithSortedEvents:(id)arg1 windows:(id)arg2 fetchOrder:(long long)arg3 fillOrder:(unsigned long long)arg4 hitLimit:(bool)arg5;
+ (id)dictionaryArrayFromWindows:(id)arg1;
+ (id)lastWindowMissingFromSortedNormalizedWindows:(id)arg1 windowMinimumDate:(id)arg2 windowMaximumDate:(id)arg3;
+ (id)lastWindowMissingFromSortedWindows:(id)arg1 windowMinimumDate:(id)arg2 windowMaximumDate:(id)arg3;
+ (id)linearDescriptionOfSortedWindows:(id)arg1;
+ (id)redundantWindowsFromSortedWindows:(id)arg1 olderThanDate:(id)arg2;
+ (id)sortedUnionOfSortedWindows:(id)arg1 andSortedWindows:(id)arg2;
+ (id)syncWindowWithStartDate:(id)arg1 endDate:(id)arg2;
+ (id)unionOfSortedSyncWindows:(id)arg1;
+ (id)windowsFromDictionaryArray:(id)arg1;
+ (id)windowsMissingFromSortedWindows:(id)arg1 windowMinimumDate:(id)arg2 windowMaximumDate:(id)arg3;
+ (id)windowsThatOverlapWithWindowMinimumDate:(id)arg1 windowMaximumDate:(id)arg2 sortedSyncWindows:(id)arg3;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)endDate;
- (id)event;
- (unsigned long long)hash;
- (id)initWithEvent:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToWindow:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setEvent:(id)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;
- (id)unionWithSyncWindow:(id)arg1;

@end
