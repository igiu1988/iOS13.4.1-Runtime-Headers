/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
 */

@interface CARScreenInfo : NSObject {
    CARScreenViewArea * _adjacentViewArea;
    CARScreenViewArea * _currentViewArea;
    unsigned long long  _currentViewAreaTransitionControlType;
    NSString * _identifier;
    NSURL * _initialURL;
    bool  _limitedUI;
    unsigned long long  _limitedUIElements;
    unsigned long long  _maxFramesPerSecond;
    bool  _nightMode;
    struct CGSize { 
        double width; 
        double height; 
    }  _physicalSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _pixelSize;
    unsigned long long  _screenType;
    bool  _supportsHighFidelityTouch;
    unsigned long long  _systemAvailableInteractionModels;
    unsigned long long  _systemPrimaryInteractionModel;
    NSArray * _viewAreas;
}

@property (nonatomic, retain) CARScreenViewArea *adjacentViewArea;
@property (nonatomic, readonly) unsigned long long availableInteractionModels;
@property (nonatomic, retain) CARScreenViewArea *currentViewArea;
@property (nonatomic) unsigned long long currentViewAreaTransitionControlType;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSURL *initialURL;
@property (getter=isLimitedUI, nonatomic, readonly) bool limitedUI;
@property (nonatomic, readonly) unsigned long long limitedUIElements;
@property (nonatomic, readonly) unsigned long long maxFramesPerSecond;
@property (getter=isNightMode, nonatomic, readonly) bool nightMode;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } physicalSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } pixelSize;
@property (nonatomic, readonly) unsigned long long primaryInteractionModel;
@property (nonatomic, readonly) unsigned long long screenType;
@property (nonatomic, readonly) bool supportsHighFidelityTouch;
@property (nonatomic) unsigned long long systemAvailableInteractionModels;
@property (nonatomic) unsigned long long systemPrimaryInteractionModel;
@property (nonatomic, readonly, copy) NSArray *viewAreas;

- (void).cxx_destruct;
- (bool)_currentProcessHasEntitlement;
- (id)_descriptionForInteractionModel:(unsigned long long)arg1;
- (id)adjacentViewArea;
- (unsigned long long)availableInteractionModels;
- (id)currentViewArea;
- (unsigned long long)currentViewAreaTransitionControlType;
- (id)description;
- (id)descriptionForAvailableInteractionModels;
- (id)descriptionForPrimaryInteractionModel;
- (id)identifier;
- (id)initWithPropertySupplier:(id /* block */)arg1 screenType:(unsigned long long)arg2;
- (id)initWithPropertySupplier:(id /* block */)arg1 screenType:(unsigned long long)arg2 additionalInsets:(struct NSEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (id)initialURL;
- (bool)isLimitedUI;
- (bool)isNightMode;
- (void)limitedUIChanged:(bool)arg1;
- (unsigned long long)limitedUIElements;
- (unsigned long long)maxFramesPerSecond;
- (void)nightModeChanged:(bool)arg1;
- (struct CGSize { double x1; double x2; })physicalSize;
- (struct CGSize { double x1; double x2; })pixelSize;
- (unsigned long long)primaryInteractionModel;
- (unsigned long long)screenType;
- (void)setAdjacentViewArea:(id)arg1;
- (void)setCurrentViewArea:(id)arg1;
- (void)setCurrentViewAreaTransitionControlType:(unsigned long long)arg1;
- (void)setSystemAvailableInteractionModels:(unsigned long long)arg1;
- (void)setSystemPrimaryInteractionModel:(unsigned long long)arg1;
- (bool)supportsHighFidelityTouch;
- (unsigned long long)systemAvailableInteractionModels;
- (unsigned long long)systemPrimaryInteractionModel;
- (id)viewAreas;

@end
