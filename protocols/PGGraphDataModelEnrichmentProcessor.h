/* Generated by EzioChiu.
 */

@protocol PGGraphDataModelEnrichmentProcessor <NSObject>

@required

+ (NSString *)backgroundJobName;
+ (double)backgroundJobTimeout;
+ (bool)supportsBackgroundJob;

- (void)enrichDataModelWithManager:(void *)arg1 graphUpdateInventory:(void *)arg2 progressBlock:(void *)arg3; // needs 3 arg types, found 9: PGManager *, <PGGraphUpdateInventory> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, double, bool*, void*

@end