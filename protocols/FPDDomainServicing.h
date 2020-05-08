/* Generated by EzioChiu.
 */

@protocol FPDDomainServicing

@required

- (void)_t_setFilePresenterObserver:(id <FPFilePresenterObserver>)arg1;
- (void)deleteSearchableItemsWithSpotlightDomainIdentifiers:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)didChangeItemID:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: FPItemID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)fetchAndStartEnumeratingWithSettings:(void *)arg1 observer:(void *)arg2 request:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 11: FPExtensionEnumerationSettings *, <FPXEnumeratorObserver> *, NSFileProviderRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <FPXEnumerator> *, <FPDLifetimeServicing> *, NSError *, void*
- (void)resolveItemID:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: FPItemID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSError *, void*
- (void)setDomainWithIdentifier:(void *)arg1 ejectable:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
