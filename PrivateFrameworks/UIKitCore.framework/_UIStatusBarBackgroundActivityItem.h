/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIStatusBarBackgroundActivityItem : _UIStatusBarIndicatorItem {
    _UIStatusBarPillView * _backgroundView;
}

@property (nonatomic, retain) _UIStatusBarPillView *backgroundView;

+ (id)backgroundDisplayIdentifier;

- (void).cxx_destruct;
- (id)_backgroundActivityViewForIdentifier:(id)arg1;
- (id)_backgroundColorForActivityType:(long long)arg1;
- (void)_create_backgroundView;
- (id)_imageNameForActivityType:(long long)arg1;
- (bool)_shouldPulseForActivityType:(long long)arg1 traitCollection:(id)arg2;
- (id)_systemImageNameForActivityType:(long long)arg1;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)backgroundView;
- (id)createDisplayItemForIdentifier:(id)arg1;
- (id)imageNameForUpdate:(id)arg1;
- (id)indicatorEntryKey;
- (void)setBackgroundView:(id)arg1;
- (id)systemImageNameForUpdate:(id)arg1;
- (id)viewForIdentifier:(id)arg1;

@end
