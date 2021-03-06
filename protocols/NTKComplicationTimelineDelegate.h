/* Generated by EzioChiu.
 */

@protocol NTKComplicationTimelineDelegate <NSObject>

@required

- (void)entriesDidChangeInTimeline:(NTKComplicationTimeline *)arg1 withTritiumUpdatePriority:(long long)arg2;
- (void)nowEntryDidChangeFrom:(id <CLKTimelineEntry>)arg1 to:(id <CLKTimelineEntry>)arg2;
- (void)timeTravelEntryDidChangeFrom:(id <CLKTimelineEntry>)arg1 to:(id <CLKTimelineEntry>)arg2;

@end
