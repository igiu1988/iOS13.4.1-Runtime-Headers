/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/RTTUI.framework/RTTUI
 */

@interface RTTUITextView : UITextView <UICollectionViewDataSource, UICollectionViewDelegate, UIGestureRecognizerDelegate> {
    double  _currentKeyboardWidth;
    UICollectionViewFlowLayout * _flowLayout;
    UIView * _iPadBufferView;
    UIView * _inputAccessoryPlaceholderView;
    bool  _isHandlingKeyboardFrameChanged;
    UIView * _leftBackgroundColorEdge;
    long long  _leftIndex;
    UIView * _middleBackgroundColorEdge;
    struct CGPoint { 
        double x; 
        double y; 
    }  _panContentOffset;
    UICollectionView * _predictionsCollectionView;
    UIView * _rightBackgroundColorEdge;
    bool  _showTTYPredictions;
    NSArray * _ttyAbbreviations;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isHandlingKeyboardFrameChanged;
@property (nonatomic, retain) UICollectionView *predictionsCollectionView;
@property (nonatomic) bool showTTYPredictions;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *ttyAbbreviations;

- (void).cxx_destruct;
- (bool)_accessibilityIsRealtimeElement;
- (void)_didPanPredictions:(id)arg1;
- (void)_didSwipeLeft:(id)arg1;
- (void)_insertWhitespaceIfNeeded;
- (bool)_isKeyboardPredictionsEnabled;
- (void)_kbFrameChanged:(id)arg1;
- (void)_keyboardDidHide:(id)arg1;
- (void)_loadTTYAbbreviations;
- (float)_predictionsCellBuffer;
- (float)_predictionsCellHeight;
- (int)_predictionsPerPage;
- (void)_resetTTYBarPosition;
- (void)_tapTTYBarCell:(id)arg1;
- (void)_updateBlackBarPositioning;
- (void)_updateTTYBarPosition;
- (id)accessibilityIdentifier;
- (unsigned long long)accessibilityTraits;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)dealloc;
- (bool)disableInputBars;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textContainer:(id)arg2;
- (id)inputAccessoryView;
- (bool)isHandlingKeyboardFrameChanged;
- (id)keyCommands;
- (long long)keyboardAppearance;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)overrideTTYPredictionsHidden:(bool)arg1;
- (id)predictionsCollectionView;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)setIsHandlingKeyboardFrameChanged:(bool)arg1;
- (void)setPredictionsCollectionView:(id)arg1;
- (void)setShowTTYPredictions:(bool)arg1;
- (void)setTtyAbbreviations:(id)arg1;
- (bool)showTTYPredictions;
- (id)ttyAbbreviations;
- (double)ttyBarHeight;
- (void)updateTTYBar;

@end
