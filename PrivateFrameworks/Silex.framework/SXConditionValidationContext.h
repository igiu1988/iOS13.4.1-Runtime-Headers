/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXConditionValidationContext : NSObject <SXConditionValidationContext> {
    SXLayoutOptions * _layoutOptions;
}

@property (getter=isBundleSubscriber, nonatomic, readonly) bool bundleSubscriber;
@property (getter=isBundleTrialEligible, nonatomic, readonly) bool bundleTrialEligible;
@property (getter=isChannelSubscriber, nonatomic, readonly) bool channelSubscriber;
@property (nonatomic, readonly) double contentScaleFactor;
@property (nonatomic, readonly) NSString *contentSizeCategory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long horizontalSizeClass;
@property (nonatomic, readonly) SXLayoutOptions *layoutOptions;
@property (nonatomic, readonly) unsigned long long numberOfColumns;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool testing;
@property (nonatomic, readonly) long long userInterfaceStyle;
@property (nonatomic, readonly) long long verticalSizeClass;
@property (nonatomic, readonly) unsigned long long viewingLocation;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } viewportSize;

- (void).cxx_destruct;
- (double)contentScaleFactor;
- (id)contentSizeCategory;
- (long long)horizontalSizeClass;
- (id)initWithLayoutOptions:(id)arg1;
- (bool)isBundleSubscriber;
- (bool)isBundleTrialEligible;
- (bool)isChannelSubscriber;
- (id)layoutOptions;
- (unsigned long long)numberOfColumns;
- (bool)testing;
- (long long)userInterfaceStyle;
- (long long)verticalSizeClass;
- (unsigned long long)viewingLocation;
- (struct CGSize { double x1; double x2; })viewportSize;

@end
