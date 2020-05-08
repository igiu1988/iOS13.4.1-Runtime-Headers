/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsFeed.framework/NewsFeed
 */

@interface NEPremiumBadgeRequest : NSObject {
    void mask;
    void shineImageRequest;
    void style;
}

@property (nonatomic, readonly) NEPremiumBadgeMask *mask;
@property (nonatomic, readonly) TUShineImageRequest *shineImageRequest;
@property (nonatomic, readonly) long long style;

- (void).cxx_destruct;
- (id)init;
- (id)initWithStyle:(long long)arg1 color:(id)arg2 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 mask:(id)arg4 offset:(struct CGPoint { double x1; double x2; })arg5 traitCollection:(id)arg6;
- (id)initWithStyle:(long long)arg1 color:(id)arg2 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 mask:(id)arg4 traitCollection:(id)arg5;
- (id)mask;
- (id)shineImageRequest;
- (long long)style;

@end
