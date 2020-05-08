/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface PMShareOrientationSelectionViewController : UIViewController {
    NSLayoutConstraint * _aspectRatioConstraint;
    double  _exportAspect;
    PMActivityItemProvider * _itemProvider;
    PMPosterViewController * _posterViewController;
}

@property (nonatomic, retain) NSLayoutConstraint *aspectRatioConstraint;
@property (nonatomic) double exportAspect;
@property (nonatomic) PMActivityItemProvider *itemProvider;
@property (nonatomic, retain) PMPosterViewController *posterViewController;

- (void).cxx_destruct;
- (void)_updateSharingHeaderIcons;
- (id)aspectRatioConstraint;
- (void)createConstraints;
- (double)exportAspect;
- (id)init;
- (id)itemProvider;
- (id)posterViewController;
- (void)setAspectRatioConstraint:(id)arg1;
- (void)setExportAspect:(double)arg1;
- (void)setItemProvider:(id)arg1;
- (void)setPosterViewController:(id)arg1;
- (double)upScalingFactor;
- (void)viewDidLoad;

@end
