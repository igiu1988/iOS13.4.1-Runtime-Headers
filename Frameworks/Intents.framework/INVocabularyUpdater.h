/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INVocabularyUpdater : _INVocabularyConnection

+ (id)_sharedAppInstance;
+ (void)clearAllCustomVocabulary;

- (void)setCustomPhotoAlbumNames:(id)arg1;
- (void)setValidatedVocabulary:(id)arg1 forIntentSlot:(id)arg2 validationCompletion:(id /* block */)arg3;

@end
