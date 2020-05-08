/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
 */

@interface ARUICountdownView : ARUIRingsView {
    ARUICountdownController * _backingTrackController;
    ARUICountdownController * _countdownController;
}

@property (nonatomic, readonly) ARUICountdownController *countdownController;

+ (id)countdownViewConfiguredForCompanion;
+ (id)countdownViewConfiguredForWatch;

- (void).cxx_destruct;
- (id)backingTrackController;
- (id)countdownController;
- (id)initWithCountdownController:(id)arg1;
- (id)initWithCountdownController:(id)arg1 backingTrackController:(id)arg2;

@end
