/* Generated by EzioChiu.
 */

@protocol SFAirDropViewServiceHostProtocol <NSObject>

@required

- (void)airDropViewServiceDidRequestDismissal;
- (void)airDropViewServiceDidSuccessfullyCompleteTransfer;
- (void)airDropViewServiceDidSuccessfullyStartTransfer;
- (void)airDropViewServiceRequestingSharedItemsWithDataRequest:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: UISUIActivityExtensionItemDataRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UISUIActivityExtensionItemData *, void*

@end
