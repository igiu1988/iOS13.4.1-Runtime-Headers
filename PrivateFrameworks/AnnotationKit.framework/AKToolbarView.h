/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKToolbarView : UIView <AKAttributePickerViewControllerDelegate, AKSignatureCreationControllerDelegate, AKSignaturesViewControllerDelegate, AKToolsListViewControllerDelegate, PKPaletteViewAnnotationDelegate, PKPaletteViewPrivateDelegate, UIPopoverPresentationControllerDelegate> {
    bool  _alwaysShowUndoButton;
    AKController * _annotationController;
    AKAttributePickerViewController * _attributePickerViewController;
    UIBarButtonItem * _attributesAddShapeFixedSpace;
    UIBarButtonItem * _attributesPickerBarButton;
    AKAttributesPickerButton * _attributesPickerButton;
    NSLayoutConstraint * _attributesPickerButtonHeigthConstraint;
    NSLayoutConstraint * _attributesPickerButtonWidthConstraint;
    AKToolbarBackgroundView * _backgroundView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _cachedSafeAreaInsets;
    bool  _contentsHidden;
    NSLayoutConstraint * _heightConstraint;
    <AKToolbarViewOpacityEditingDelegate> * _opacityEditingDelegate;
    PKPaletteHostView * _paletteHostView;
    PKPaletteView * _paletteView;
    UIBarButtonItem * _redoButton;
    UIBarButtonItem * _shapesPickerButton;
    UIBarButtonItem * _shareButton;
    bool  _shareButtonHidden;
    bool  _shouldUseCachedSafeAreaInsets;
    bool  _showAttributePicker;
    UIAlertController * _signaturesAlertController;
    AKSignatureCreationViewController_iOS * _signaturesCreationController;
    AKSignaturesViewController_iOS * _signaturesSheetViewController;
    bool  _supportsOpacityEditing;
    AKTextAttributesViewController * _textAttributesViewController;
    PKToolPicker * _toolPicker;
    UIToolbar * _toolbar;
    NSLayoutConstraint * _toolbarBottomConstraint;
    AKToolsListViewController * _toolsListViewController;
    bool  _translucent;
    UIAlertController * _undoAlertController;
    UIBarButtonItem * _undoButton;
    bool  _undoRedoButtonsHidden;
    UIBarButtonItem * _undoRedoFixedSpace;
    bool  _wantsClearBackgroundColorInCompactSize;
}

@property (nonatomic) bool alwaysShowUndoButton;
@property (nonatomic) AKController *annotationController;
@property (nonatomic) bool contentsHidden;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <AKToolbarViewOpacityEditingDelegate> *opacityEditingDelegate;
@property (nonatomic) SEL shareButtonAction;
@property (getter=isShareButtonHidden, nonatomic) bool shareButtonHidden;
@property (nonatomic) id shareButtonTarget;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsOpacityEditing;
@property (getter=isTranslucent, nonatomic) bool translucent;
@property (nonatomic) bool undoRedoButtonsHidden;
@property (nonatomic, readonly) bool useNewFullscreenPalette;
@property (nonatomic) bool wantsClearBackgroundColorInCompactSize;

+ (id)redoButtonImage;
+ (id)redoButtonImageWithStyle:(unsigned long long)arg1;
+ (id)undoButtonImage;
+ (id)undoButtonImageWithStyle:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_annotationSelectionNotification:(id)arg1;
- (void)_cleanupAfterUndoAlert;
- (void)_dismissCurrentlyPresentedPopoverAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)_forceToolPickerVisibleForViewStateChange:(bool)arg1;
- (void)_installAttributesPickerButtonInPaletteContextEditingViewIfNeeded;
- (void)_keyWindowDidBecomeActive:(id)arg1;
- (void)_presentViewController:(id)arg1 animated:(bool)arg2;
- (void)_redo:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_safeAreaInsetsWithCachingIfNeeded;
- (void)_saveCachedSafeAreaInsets;
- (id)_selectedToolInk;
- (void)_setPopoverPresentationSource:(id)arg1 fromSender:(id)arg2;
- (void)_setPopoverPresentationSource:(id)arg1 fromSender:(id)arg2 sourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (bool)_setToolPickerVisible:(bool)arg1 forResponder:(id)arg2;
- (void)_setupPaletteViewIfNecessary;
- (void)_shouldUseCachedSafeAreaInsets:(bool)arg1;
- (void)_showColorPicker:(id)arg1;
- (void)_showMarkupToolsPopover:(id)arg1;
- (void)_showShapeAttributes:(id)arg1;
- (void)_showShapeAttributesPopover:(id)arg1;
- (void)_showShapesPicker:(id)arg1;
- (void)_showSignaturesPopover:(id)arg1 fromSourceView:(id)arg2 sourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)_showTextAttributes:(id)arg1;
- (void)_showTextStylePopover:(id)arg1;
- (void)_showUndoAlertPopover:(id)arg1;
- (void)_textEffectsWindowIsHosted:(id)arg1;
- (void)_undo:(id)arg1;
- (void)_undoAll:(id)arg1;
- (void)_undoLongPress:(id)arg1;
- (void)_undoManagerNotification:(id)arg1;
- (void)_updateAttributeControllerInk:(id)arg1;
- (void)_updateAttributesPickerButtonWithCurrentSelection:(id)arg1;
- (void)_updatePalette;
- (void)_updateTraitCollectionForViewController:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (bool)alwaysShowUndoButton;
- (id)annotationController;
- (void)attributePicker:(id)arg1 didSelectToolWithTag:(long long)arg2 attributeTag:(long long)arg3;
- (bool)canBecomeFirstResponder;
- (bool)contentsHidden;
- (id)createUndoViewController;
- (void)dealloc;
- (id)description;
- (void)didDismissPopover;
- (void)didMoveToWindow;
- (void)dismissPalettePopoverWithCompletion:(id /* block */)arg1;
- (void)dismissPresentedPopovers;
- (void)endOpacityEditing;
- (void)forceHideRuler;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameObscuredInView:(id)arg1;
- (void)hideModernToolbarView;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)inkPicker;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isPresentingPopover;
- (bool)isPresentingPopovers;
- (bool)isShareButtonHidden;
- (bool)isTranslucent;
- (unsigned long long)layoutForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)layoutSubviews;
- (id)opacityEditingDelegate;
- (bool)paletteView:(id)arg1 shouldSetSelectedToolColor:(id)arg2;
- (void)paletteViewDidChangePosition:(id)arg1;
- (void)paletteViewDidSelectOpacityOption:(id)arg1;
- (void)paletteViewDidSelectPlusButton:(id)arg1;
- (void)paletteViewDidToggleRuler:(id)arg1;
- (id)paletteViewSelectedAnnotationColor:(id)arg1;
- (void)paletteViewSelectedToolInkDidChange:(id)arg1;
- (id)paletteViewUndoManager:(id)arg1;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 inView:(inout id*)arg3;
- (bool)popoverPresentationControllerShouldDismissPopover:(id)arg1;
- (id)popoverPresentingController;
- (id)presentedViewController;
- (void)resetToLastDrawingTool;
- (void)revalidateItems;
- (id)selectedAnnotations;
- (void)setAlpha:(double)arg1;
- (void)setAlwaysShowUndoButton:(bool)arg1;
- (void)setAnnotationController:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBackgroundImage:(id)arg1 forToolbarPosition:(long long)arg2 barMetrics:(long long)arg3;
- (void)setContentsHidden:(bool)arg1;
- (void)setContentsHidden:(bool)arg1 animated:(bool)arg2;
- (void)setHidden:(bool)arg1;
- (void)setOpacityEditingDelegate:(id)arg1;
- (void)setOpaque:(bool)arg1;
- (void)setShadowImage:(id)arg1 forToolbarPosition:(long long)arg2;
- (void)setShareButtonAction:(SEL)arg1;
- (void)setShareButtonHidden:(bool)arg1;
- (void)setShareButtonTarget:(id)arg1;
- (void)setSupportsOpacityEditing:(bool)arg1;
- (bool)setToolPickerVisible:(bool)arg1 forFirstResponder:(id)arg2;
- (void)setTranslucent:(bool)arg1;
- (void)setUndoRedoButtonsHidden:(bool)arg1;
- (void)setWantsClearBackgroundColorInCompactSize:(bool)arg1;
- (SEL)shareButtonAction;
- (id)shareButtonTarget;
- (bool)shouldHide;
- (bool)shouldUseCompactHeight;
- (bool)shouldUseCompactWidth;
- (void)signatureCreationControllerDidCreateSignature:(id)arg1;
- (void)signaturesViewControllerContinueToCreateSignature:(id)arg1;
- (void)signaturesViewControllerContinueToManageSignatures:(id)arg1;
- (void)signaturesViewControllerDidCancel:(id)arg1;
- (void)signaturesViewControllerDidSelectSignature:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)supportsOpacityEditing;
- (long long)tagForPKPaletteAnnotationType:(long long)arg1;
- (void)toolsList:(id)arg1 didSelectToolWithTag:(long long)arg2;
- (void)toolsListDidSelectOpacityItem:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (bool)undoRedoButtonsHidden;
- (void)updateConstraints;
- (bool)useNewFullscreenPalette;
- (bool)wantsClearBackgroundColorInCompactSize;
- (void)willMoveToWindow:(id)arg1;

@end