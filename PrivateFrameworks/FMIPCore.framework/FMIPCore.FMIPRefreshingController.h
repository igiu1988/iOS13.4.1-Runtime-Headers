/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/FMIPCore.framework/FMIPCore
 */

@interface FMIPCore.FMIPRefreshingController : _TtCs12_SwiftObject {
    void apsConnectionHandler;
    void callbackInterval;
    void delegate;
    void isRefreshing;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  lastRefreshTime;
    void maxCallbackInterval;
    void minCallbackInterval;
    void refreshQueue;
    void refreshTimer;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  selectedDevice;
    void serverInteractionController;
    void tapContexts;
}

- (void)refreshTimerFired;

@end
