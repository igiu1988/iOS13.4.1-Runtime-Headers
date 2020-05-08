/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

@interface CPSDashboardEstimatesViewController : UIViewController <CPSNavigationDisplaying> {
    CPSDashboardEstimatesView * _estimatesView;
    NSLayoutConstraint * _platterBottomConstraint;
    UIView * _platterView;
    <CPSSafeAreaDelegate> * _safeAreaDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CPSDashboardEstimatesView *estimatesView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSLayoutConstraint *platterBottomConstraint;
@property (nonatomic, retain) UIView *platterView;
@property (nonatomic) <CPSSafeAreaDelegate> *safeAreaDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_safeAreaInsets;
- (id)estimatesView;
- (void)navigator:(id)arg1 didEndTrip:(bool)arg2;
- (id)platterBottomConstraint;
- (id)platterView;
- (id)safeAreaDelegate;
- (void)setEstimatesView:(id)arg1;
- (void)setPlatterBottomConstraint:(id)arg1;
- (void)setPlatterView:(id)arg1;
- (void)setSafeAreaDelegate:(id)arg1;
- (void)updateTripEstimates:(id)arg1;
- (void)viewDidLoad;

@end