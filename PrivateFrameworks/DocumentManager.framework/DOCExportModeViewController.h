/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
 */

@interface DOCExportModeViewController : UIDocumentBrowserViewController <DOCTargetSelectionBrowserViewControllerDelegate> {
    NSURL * _directoryURLToReveal;
    DOCTargetSelectionBrowserViewController * _moveVC;
}

@property (nonatomic, copy) NSURL *directoryURLToReveal;
@property (nonatomic, retain) DOCTargetSelectionBrowserViewController *moveVC;

- (void).cxx_destruct;
- (id)directoryURLToReveal;
- (id)moveVC;
- (void)setDirectoryURLToReveal:(id)arg1;
- (void)setMoveVC:(id)arg1;
- (void)targetSelectionController:(id)arg1 didExportToURLs:(id)arg2;
- (void)targetSelectionControllerWasCancelled:(id)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
