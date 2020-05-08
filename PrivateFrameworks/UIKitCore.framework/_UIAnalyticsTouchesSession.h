/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIAnalyticsTouchesSession : NSObject {
    bool  _allowedGestureRecognizerHasBegun;
    bool  _multitouchDetected;
    bool  _touchesDetected;
    unsigned long long  _touchesStartTime;
    bool  _valid;
}

@property (getter=isValid, nonatomic, readonly) bool valid;

- (id)init;
- (bool)isValid;
- (void)processEvent:(id)arg1;

@end
