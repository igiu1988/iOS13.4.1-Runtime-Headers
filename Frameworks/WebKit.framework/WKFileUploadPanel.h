/* Generated by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKFileUploadPanel : UIViewController <UIDocumentMenuDelegate, UIDocumentPickerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, UIPopoverControllerDelegate> {
    bool  _allowMultipleFiles;
    <WKFileUploadPanelDelegate> * _delegate;
    struct RetainPtr<UIDocumentMenuViewController> { 
        void *m_ptr; 
    }  _documentMenuController;
    struct RetainPtr<UIDocumentPickerViewController> { 
        void *m_ptr; 
    }  _documentPickerController;
    struct RetainPtr<UIImagePickerController> { 
        void *m_ptr; 
    }  _imagePicker;
    struct CGPoint { 
        double x; 
        double y; 
    }  _interactionPoint;
    struct RefPtr<WebKit::WebOpenPanelResultListenerProxy, WTF::DumbPtrTraits<WebKit::WebOpenPanelResultListenerProxy> > { 
        struct WebOpenPanelResultListenerProxy {} *m_ptr; 
    }  _listener;
    int  _mediaCaptureType;
    struct RetainPtr<NSArray> { 
        void *m_ptr; 
    }  _mimeTypes;
    struct RetainPtr<UIPopoverController> { 
        void *m_ptr; 
    }  _presentationPopover;
    struct RetainPtr<UIViewController> { 
        void *m_ptr; 
    }  _presentationViewController;
    bool  _usingCamera;
    WKContentView * _view;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WKFileUploadPanelDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_adjustMediaCaptureType;
- (id)_cameraButtonLabelAllowingPhoto:(bool)arg1 allowingVideo:(bool)arg2;
- (void)_cancel;
- (void)_chooseFiles:(id)arg1 displayString:(id)arg2 iconImage:(id)arg3;
- (void)_configureImagePicker:(id)arg1;
- (void)_dismissDisplayAnimated:(bool)arg1;
- (void)_dispatchDidDismiss;
- (id)_mediaTypesForPickerSourceType:(long long)arg1;
- (id)_photoLibraryButtonLabel;
- (void)_presentFullscreenViewController:(id)arg1 animated:(bool)arg2;
- (void)_presentMenuOptionForCurrentInterfaceIdiom:(id)arg1;
- (void)_presentPopoverWithContentViewController:(id)arg1 animated:(bool)arg2;
- (void)_processMediaInfoDictionaries:(id)arg1 atIndex:(unsigned long long)arg2 processedResults:(id)arg3 processedImageCount:(unsigned long long)arg4 processedVideoCount:(unsigned long long)arg5 successBlock:(id /* block */)arg6 failureBlock:(id /* block */)arg7;
- (void)_processMediaInfoDictionaries:(id)arg1 successBlock:(id /* block */)arg2 failureBlock:(id /* block */)arg3;
- (bool)_shouldMediaCaptureOpenMediaDevice;
- (void)_showDocumentPickerMenu;
- (void)_showPhotoPickerWithSourceType:(long long)arg1;
- (void)_uploadItemForImageData:(id)arg1 imageName:(id)arg2 successBlock:(id /* block */)arg3 failureBlock:(id /* block */)arg4;
- (void)_uploadItemForJPEGRepresentationOfImage:(id)arg1 successBlock:(id /* block */)arg2 failureBlock:(id /* block */)arg3;
- (void)_uploadItemFromMediaInfo:(id)arg1 successBlock:(id /* block */)arg2 failureBlock:(id /* block */)arg3;
- (bool)_willMultipleSelectionDelegateBeCalled;
- (id)currentAvailableActionTitles;
- (void)dealloc;
- (id)delegate;
- (void)dismiss;
- (void)documentMenu:(id)arg1 didPickDocumentPicker:(id)arg2;
- (void)documentMenuWasCancelled:(id)arg1;
- (void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2;
- (void)documentPickerWasCancelled:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerController:(id)arg1 didFinishPickingMultipleMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (id)initWithView:(id)arg1;
- (bool)platformSupportsPickerViewController;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)presentWithParameters:(struct OpenPanelParameters { int (**x1)(); id x2; struct FileChooserSettings { bool x_3_1_1; bool x_3_1_2; struct Vector<WTF::String, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { struct String {} *x_3_2_1; unsigned int x_3_2_2; unsigned int x_3_2_3; } x_3_1_3; struct Vector<WTF::String, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { struct String {} *x_4_2_1; unsigned int x_4_2_2; unsigned int x_4_2_3; } x_3_1_4; struct Vector<WTF::String, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { struct String {} *x_5_2_1; unsigned int x_5_2_2; unsigned int x_5_2_3; } x_3_1_5; int x_3_1_6; } x3; }*)arg1 resultListener:(struct WebOpenPanelResultListenerProxy { int (**x1)(); id x2; struct RefPtr<WebKit::WebPageProxy, WTF::DumbPtrTraits<WebKit::WebPageProxy> > { struct WebPageProxy {} *x_3_1_1; } x3; }*)arg2;
- (void)setDelegate:(id)arg1;

@end
