/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXUIPeopleBootstrapFlowController : PXPeopleBootstrapFlowController {
    PXPeopleBootstrapConfirmationViewController * _confirmationViewController;
    PXPeopleBootstrapFinalViewController * _finalViewController;
}

@property (nonatomic, retain) PXPeopleBootstrapConfirmationViewController *confirmationViewController;
@property (nonatomic, retain) PXPeopleBootstrapFinalViewController *finalViewController;
@property (nonatomic, readonly) PHPerson *sourcePerson;

- (void).cxx_destruct;
- (id)_postNamingViewController;
- (void)computeViewControllersForBootstrapFlow;
- (id)confirmationViewController;
- (void)done:(id)arg1;
- (id)finalViewController;
- (void)recomputeViewControllersForChangeInKeyPath:(id)arg1;
- (void)setConfirmationViewController:(id)arg1;
- (void)setFinalViewController:(id)arg1;
- (id)sourcePerson;

@end
