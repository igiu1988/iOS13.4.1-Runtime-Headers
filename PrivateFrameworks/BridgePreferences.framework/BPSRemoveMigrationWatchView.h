/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
 */

@interface BPSRemoveMigrationWatchView : UIView {
    NSString * _advertisingName;
    PBBridgeAssetsManager * _assetManager;
    BPSWatchView * _watch;
}

@property (nonatomic, copy) NSString *advertisingName;
@property (nonatomic, retain) PBBridgeAssetsManager *assetManager;
@property (nonatomic, retain) BPSWatchView *watch;

- (void).cxx_destruct;
- (id)advertisingName;
- (id)assetManager;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setAdvertisingName:(id)arg1;
- (void)setAssetManager:(id)arg1;
- (void)setWatch:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)watch;

@end
