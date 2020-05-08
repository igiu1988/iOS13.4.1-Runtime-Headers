/* Generated by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUExitEditPerformanceEventBuilder : NSObject {
    <PUEditableAsset> * _asset;
    PICompositionController * _compositionController;
    bool  _editingWithRaw;
    double  _exitEditDuration;
    long long  _sessionEndReason;
}

@property (nonatomic, retain) <PUEditableAsset> *asset;
@property (nonatomic, copy) PICompositionController *compositionController;
@property (getter=isEditingWithRaw, nonatomic) bool editingWithRaw;
@property (nonatomic) double exitEditDuration;
@property (nonatomic) long long sessionEndReason;

- (void).cxx_destruct;
- (id)asset;
- (id)buildEvent;
- (id)compositionController;
- (double)exitEditDuration;
- (bool)isEditingWithRaw;
- (long long)sessionEndReason;
- (void)setAsset:(id)arg1;
- (void)setCompositionController:(id)arg1;
- (void)setEditingWithRaw:(bool)arg1;
- (void)setExitEditDuration:(double)arg1;
- (void)setSessionEndReason:(long long)arg1;

@end
