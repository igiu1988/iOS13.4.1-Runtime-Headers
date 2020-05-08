/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
 */

@interface DOCAppearance : NSObject <NSCopying, NSSecureCoding> {
    bool  _alwaysEnableScrollInSourceView;
    UIColor * _backgroundTintColor;
    unsigned long long  _browserUserInterfaceStyle;
    NSString * _collectionCreateButtonTitle;
    double  _compactHorizontalTableStackSpacing;
    double  _createButtonAspectRatio;
    bool  _forceClearBackground;
    double  _fullHorizontalTableStackSpacing;
    UIColor * _largeTitleColor;
    double  _regularHorizontalTableStackSpacing;
    bool  _shouldShowFileExtensions;
    bool  _showsCreateButton;
}

@property bool alwaysEnableScrollInSourceView;
@property (readonly) UIColor *backgroundColor;
@property (nonatomic, retain) UIColor *backgroundTintColor;
@property (nonatomic) unsigned long long browserUserInterfaceStyle;
@property (nonatomic, retain) NSString *collectionCreateButtonTitle;
@property (nonatomic) double compactHorizontalTableStackSpacing;
@property (nonatomic) double createButtonAspectRatio;
@property (nonatomic) bool forceClearBackground;
@property (nonatomic) double fullHorizontalTableStackSpacing;
@property (nonatomic, retain) UIColor *largeTitleColor;
@property (nonatomic) double regularHorizontalTableStackSpacing;
@property (nonatomic) bool shouldShowFileExtensions;
@property (nonatomic) bool showsCreateButton;

+ (id)documentsPickerAppearance;
+ (id)recentsPopoverAppearance;
+ (id)recentsWidgetAppearance;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)alwaysEnableScrollInSourceView;
- (id)backgroundColor;
- (id)backgroundTintColor;
- (unsigned long long)browserUserInterfaceStyle;
- (id)collectionCreateButtonTitle;
- (double)compactHorizontalTableStackSpacing;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)createButtonAspectRatio;
- (void)encodeWithCoder:(id)arg1;
- (bool)forceClearBackground;
- (double)fullHorizontalTableStackSpacing;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)largeTitleColor;
- (double)regularHorizontalTableStackSpacing;
- (void)setAlwaysEnableScrollInSourceView:(bool)arg1;
- (void)setBackgroundTintColor:(id)arg1;
- (void)setBrowserUserInterfaceStyle:(unsigned long long)arg1;
- (void)setCollectionCreateButtonTitle:(id)arg1;
- (void)setCompactHorizontalTableStackSpacing:(double)arg1;
- (void)setCreateButtonAspectRatio:(double)arg1;
- (void)setForceClearBackground:(bool)arg1;
- (void)setFullHorizontalTableStackSpacing:(double)arg1;
- (void)setLargeTitleColor:(id)arg1;
- (void)setRegularHorizontalTableStackSpacing:(double)arg1;
- (void)setShouldShowFileExtensions:(bool)arg1;
- (void)setShowsCreateButton:(bool)arg1;
- (bool)shouldShowFileExtensions;
- (bool)showsCreateButton;

@end
