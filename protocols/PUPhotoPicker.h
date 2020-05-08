/* Generated by EzioChiu.
 */

@protocol PUPhotoPicker <NSObject>

@required

- (bool)allowsMultipleSelection;
- (void)cancelPhotoPicker;
- (bool)convertAutoloopsToGIF;
- (void)didDisplayPhotoPickerPreview;
- (void)didDisplayPhotoPickerSourceType:(long long)arg1;
- (void)didSelectMediaWithInfoDictionary:(void *)arg1 allowedHandler:(void *)arg2; // needs 2 arg types, found 7: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)didSelectMultipleMediaItemsWithInfoDictionaries:(NSArray *)arg1;
- (NSArray *)mediaTypes;
- (unsigned long long)multipleSelectionLimit;
- (void)performPhotosSelection;
- (void)performTraitCollectionUpdateUsingData:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, void*
- (void)presentViewController:(UIViewController *)arg1;
- (NSDictionary *)properties;
- (bool)requiresPickingConfirmation;
- (unsigned long long)savingOptions;
- (bool)showsFileSizePicker;
- (bool)showsPrompt;

@end
