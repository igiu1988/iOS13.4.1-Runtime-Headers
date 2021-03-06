/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBTransientOverlayDismissalRequest : NSObject <NSCopying, NSMutableCopying> {
    bool  _animated;
    id /* block */  _completionHandler;
    long long  _requestType;
    SBTransientOverlayViewController * _viewController;
}

@property (getter=isAnimated, nonatomic, readonly) bool animated;
@property (nonatomic, readonly, copy) id /* block */ completionHandler;
@property (nonatomic, readonly) long long requestType;
@property (nonatomic, readonly) SBTransientOverlayViewController *viewController;

+ (id)dismissalRequestForAllViewControllers;
+ (id)dismissalRequestForViewController:(id)arg1;

- (void).cxx_destruct;
- (id)_copyWithClass:(Class)arg1;
- (id)_init;
- (id /* block */)completionHandler;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isAnimated;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (long long)requestType;
- (id)viewController;

@end
