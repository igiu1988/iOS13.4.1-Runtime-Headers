/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBPresentationObservationToken : NSObject <BSInvalidatable> {
    id /* block */  _didDismissHandler;
    id /* block */  _didPresentHandler;
    long long  _state;
    id /* block */  _willDismissHandler;
    id /* block */  _willPresentHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ didDismissHandler;
@property (nonatomic, copy) id /* block */ didPresentHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long state;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ willDismissHandler;
@property (nonatomic, copy) id /* block */ willPresentHandler;

- (void).cxx_destruct;
- (void)didDismiss;
- (id /* block */)didDismissHandler;
- (void)didPresent;
- (id /* block */)didPresentHandler;
- (void)invalidate;
- (void)setDidDismissHandler:(id /* block */)arg1;
- (void)setDidPresentHandler:(id /* block */)arg1;
- (void)setWillDismissHandler:(id /* block */)arg1;
- (void)setWillPresentHandler:(id /* block */)arg1;
- (long long)state;
- (void)willDismiss;
- (id /* block */)willDismissHandler;
- (void)willPresent;
- (id /* block */)willPresentHandler;

@end