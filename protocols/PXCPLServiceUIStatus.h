/* Generated by EzioChiu.
 */

@protocol PXCPLServiceUIStatus <NSObject>

@required

- (id /* block */)action:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (NSString *)actionConfirmationAlertButtonTitle;
- (NSString *)actionConfirmationAlertSubtitle;
- (NSString *)actionConfirmationAlertTitle;
- (NSString *)actionTitle;
- (NSString *)failureDescription;
- (bool)isPaused;
- (float)progress;
- (NSString *)referencedItemsDescription;
- (NSString *)stateDescription;

@end
