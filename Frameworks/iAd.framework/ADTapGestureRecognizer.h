/* Generated by EzioChiu
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADTapGestureRecognizer : UIGestureRecognizer {
    long long  _finalTrackingID;
    id /* block */  _touchDownHandler;
    id /* block */  _touchMovedHandler;
    id /* block */  _touchUpHandler;
}

@property (nonatomic) long long finalTrackingID;
@property (nonatomic, copy) id /* block */ touchDownHandler;
@property (nonatomic, copy) id /* block */ touchMovedHandler;
@property (nonatomic, copy) id /* block */ touchUpHandler;

- (void).cxx_destruct;
- (long long)finalTrackingID;
- (void)reset;
- (void)setFinalTrackingID:(long long)arg1;
- (void)setTouchDownHandler:(id /* block */)arg1;
- (void)setTouchMovedHandler:(id /* block */)arg1;
- (void)setTouchUpHandler:(id /* block */)arg1;
- (id /* block */)touchDownHandler;
- (id /* block */)touchMovedHandler;
- (id /* block */)touchUpHandler;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
