/* Generated by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKActionSheet : UIAlertController {
    unsigned long long  _arrowDirections;
    long long  _currentPresentationStyle;
    struct RetainPtr<UIViewController> { 
        void *m_ptr; 
    }  _currentPresentingViewController;
    bool  _isRotating;
    struct RetainPtr<id<UIPopoverPresentationControllerDelegate> > { 
        void *m_ptr; 
    }  _popoverPresentationControllerDelegateWhileRotating;
    struct RetainPtr<UIViewController> { 
        void *m_ptr; 
    }  _presentedViewControllerWhileRotating;
    bool  _readyToPresentAfterRotation;
    <WKActionSheetDelegate> * _sheetDelegate;
}

@property (nonatomic) unsigned long long arrowDirections;
@property (nonatomic) <WKActionSheetDelegate> *sheetDelegate;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_cleanup;
- (void)_didRotateAndLayout;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_presentationRectForStyle:(long long)arg1;
- (unsigned long long)arrowDirections;
- (void)dealloc;
- (void)didRotate;
- (void)doneWithSheet:(bool)arg1;
- (id)init;
- (bool)presentSheet:(long long)arg1;
- (bool)presentSheetFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setArrowDirections:(unsigned long long)arg1;
- (void)setSheetDelegate:(id)arg1;
- (id)sheetDelegate;
- (void)updateSheetPosition;
- (void)willRotate;

@end
