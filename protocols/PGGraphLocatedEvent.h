/* Generated by EzioChiu.
 */

@protocol PGGraphLocatedEvent <PGGraphEvent>

@required

- (NSSet *)addressNodes;
- (bool)happensPartiallyAtMyHome;
- (bool)happensPartiallyAtMyWork;
- (bool)hasLocation;
- (NSSet *)poiNodes;
- (NSSet *)roiNodes;

@end