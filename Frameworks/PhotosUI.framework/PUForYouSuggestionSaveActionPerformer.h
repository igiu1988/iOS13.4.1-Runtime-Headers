/* Generated by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUForYouSuggestionSaveActionPerformer : PUForYouSuggestionActionPerformer {
    bool  _isReverting;
}

@property (nonatomic, readonly) bool isReverting;

- (void)_dismissPresentedViewController:(id)arg1;
- (void)_displayFailureAlert;
- (void)_displayToast;
- (void)_handleSuccess:(bool)arg1;
- (void)_performImageSaveWithCompletionHandler:(id /* block */)arg1;
- (void)_performLivePhotoSaveWithCompletionHandler:(id /* block */)arg1;
- (void)_performLoopingVideoSaveWithCompletionHandler:(id /* block */)arg1;
- (void)_updateSuggestionState;
- (id)initWithAsset:(id)arg1;
- (id)initWithAsset:(id)arg1 isReverting:(bool)arg2;
- (bool)isReverting;
- (void)performWithCompletionHandler:(id /* block */)arg1;

@end
