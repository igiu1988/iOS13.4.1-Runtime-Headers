/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

@interface CSDNDBedtimeGreetingViewController : CSModalViewControllerBase <CSModalViewDelegate, CSTouchPassThroughContainerViewDelegate> {
    <CSDNDBedtimeGreetingDelegate> * _delegate;
    UIColor * _legibilityPrimaryColor;
    CLInUseAssertion * _weatherInUseAssertion;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CSDNDBedtimeGreetingDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_greetingString;
- (void)aggregateAppearance:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)handleSecondaryActionForView:(id)arg1;
- (void)handleTouchEventForView:(id)arg1;
- (id)initWithLegibilityPrimaryColor:(id)arg1;
- (void)loadView;
- (void)setDelegate:(id)arg1;

@end