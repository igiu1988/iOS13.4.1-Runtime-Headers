/* Generated by EzioChiu.
 */

@protocol NUAdControllerFactory <NSObject>

@required

- (SXAdController *)createAdControllerForProvider:(id <SXAdProvider>)arg1 document:(SXDocument *)arg2 viewport:(SXViewport *)arg3;

@end