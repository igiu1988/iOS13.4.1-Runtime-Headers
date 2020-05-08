/* Generated by EzioChiu.
 */

@protocol PGGraphEvent <NSObject>

@required

- (NSString *)UUID;
- (bool)babyIsPresent;
- (<PGGraphBusinessedEvent> *)businessedEvent;
- (double)contentScore;
- (NSDictionary *)debugDictionary;
- (bool)endsBeforeLocalDate:(NSDate *)arg1;
- (<PGEventEnrichment> *)enrichableEvent;
- (void)eventEnumerateMomentNodesUsingBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PGGraphMomentNode *, bool*, void*
- (PGGraphHighlightGroupNode *)highlightGroupNode;
- (bool)isLongTrip;
- (bool)isShortTrip;
- (bool)isTrip;
- (NSDate *)localEndDate;
- (NSDate *)localStartDate;
- (<PGGraphLocatedEvent> *)locatedEvent;
- (<PGGraphMeaningfulEvent> *)meaningfulEvent;
- (NSSet *)momentNodes;
- (NSSet *)naturalLanguageFeatures;
- (unsigned long long)numberOfAssets;
- (unsigned long long)numberOfMoments;
- (<PGGraphPeopledEvent> *)peopledEvent;
- (bool)petIsPresent;
- (PGGraphNode<PGGraphRelatableEvent> *)relatableEvent;
- (<PGGraphScenedEvent> *)scenedEvent;
- (NSArray *)sortedMomentNodes;
- (bool)startsAfterLocalDate:(NSDate *)arg1;
- (<PGGraphTimedEvent> *)timedEvent;
- (NSDate *)universalEndDate;
- (NSDate *)universalStartDate;

@end
