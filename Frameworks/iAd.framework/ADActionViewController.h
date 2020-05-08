/* Generated by EzioChiu
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADActionViewController : UIViewController <ADActionViewControllerInterface> {
    ADAdSpace * _adSpace;
    bool  _readyForPresentation;
}

@property (nonatomic) ADAdSpace *adSpace;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool readyForPresentation;
@property (readonly) Class superclass;

+ (void)cancelRequestForActionViewControllerForAdSpaceController:(id)arg1;
+ (void)requestActionViewControllerForAdSpace:(id)arg1;

- (void).cxx_destruct;
- (void)_remote_viewControllerCreatedForAdSpaceControllerWithIdentifier:(id)arg1;
- (id)adSpace;
- (void)clientApplicationCancelledAction;
- (void)clientApplicationDidEnterBackground;
- (void)didSetAdSpace;
- (void)dismiss;
- (void)loadView;
- (bool)readyForPresentation;
- (void)setAdSpace:(id)arg1;
- (void)setReadyForPresentation:(bool)arg1;

@end
