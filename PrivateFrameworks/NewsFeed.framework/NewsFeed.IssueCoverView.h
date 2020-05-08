/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsFeed.framework/NewsFeed
 */

@interface NewsFeed.IssueCoverView : UIView <TUMotionManagerObserver> {
    void backgroundLayer;
    void dynamicContentView;
    void dynamicView;
    void identifier;
    void observingMotion;
    void shadowMotionLayer;
    void shadowView;
    void staticContentView;
}

- (void).cxx_destruct;
- (void)didMoveToSuperview;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)motionManager:(id)arg1 didUpdateMotionData:(id)arg2;
- (void)motionManager:(id)arg1 motionEnabled:(bool)arg2;
- (void)removeFromSuperview;

@end