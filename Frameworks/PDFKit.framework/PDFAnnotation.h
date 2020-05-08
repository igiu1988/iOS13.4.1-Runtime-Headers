/* Generated by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFAnnotation : NSObject <NSCoding, NSCopying> {
    PDFAnnotationPrivateVars * _private;
}

@property (nonatomic, copy) NSURL *URL;
@property (nonatomic, retain) PDFAction *action;
@property (nonatomic) long long alignment;
@property (nonatomic) bool allowsToggleToOff;
@property (nonatomic, readonly, copy) NSDictionary *annotationKeyValues;
@property (nonatomic, copy) UIColor *backgroundColor;
@property (nonatomic, retain) PDFBorder *border;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic) long long buttonWidgetState;
@property (nonatomic, copy) NSString *buttonWidgetStateString;
@property (nonatomic, copy) NSString *caption;
@property (nonatomic, copy) NSArray *choices;
@property (nonatomic, copy) UIColor *color;
@property (getter=hasComb, nonatomic) bool comb;
@property (nonatomic, copy) NSString *contents;
@property (nonatomic, retain) PDFDestination *destination;
@property (nonatomic) long long endLineStyle;
@property (nonatomic) struct CGPoint { double x1; double x2; } endPoint;
@property (nonatomic, copy) NSString *fieldName;
@property (nonatomic, copy) UIFont *font;
@property (nonatomic, copy) UIColor *fontColor;
@property (nonatomic, readonly) bool hasAppearanceStream;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic) long long iconType;
@property (nonatomic, copy) UIColor *interiorColor;
@property (nonatomic, readonly) bool isPasswordField;
@property (getter=isListChoice, nonatomic) bool listChoice;
@property (nonatomic) long long markupType;
@property (nonatomic) long long maximumLength;
@property (nonatomic, copy) NSDate *modificationDate;
@property (getter=isMultiline, nonatomic) bool multiline;
@property (getter=isOpen, nonatomic) bool open;
@property (nonatomic) PDFPage *page;
@property (nonatomic, readonly) NSArray *paths;
@property (nonatomic, retain) PDFAnnotation *popup;
@property (nonatomic, copy) NSArray *quadrilateralPoints;
@property (nonatomic) bool radiosInUnison;
@property (getter=isReadOnly, nonatomic) bool readOnly;
@property (nonatomic) bool shouldDisplay;
@property (nonatomic) bool shouldPrint;
@property (nonatomic, copy) NSString *stampName;
@property (nonatomic) long long startLineStyle;
@property (nonatomic) struct CGPoint { double x1; double x2; } startPoint;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, copy) NSString *userName;
@property (nonatomic, copy) NSArray *values;
@property (nonatomic) long long widgetControlType;
@property (nonatomic, copy) NSString *widgetDefaultStringValue;
@property (nonatomic, copy) NSString *widgetFieldType;
@property (nonatomic, copy) NSString *widgetStringValue;

+ (long long)MarkupTypeForMarkupStyle:(unsigned long long)arg1;
+ (bool)PDFAnnotationIsHandledByPDFKit:(id)arg1;
+ (id)PDFAnnotationKeysWithStringValues;
+ (id)PDFKitAnnotationKeys;
+ (id)PDFKitAnnotationKeysIgnored;
+ (id)PDFKitAppearanceDictionaryArray;
+ (id)PDFKitBorderStyleArray;
+ (id)PDFKitFieldTypeArray;
+ (id)PDFKitHighlightingModeArray;
+ (id)PDFKitSubtypeArray;
+ (id)PDFMarkupColors;
+ (id)PDFMarkupStyleLabels;
+ (id)PDFTextBorderColors;
+ (id)PDFTextColors;
+ (id)SubtypeForPDFMarkupStyle:(unsigned long long)arg1;
+ (bool)annotationPageLayerEffectIsFlipped;
+ (id)getProperNameStringFromString:(id)arg1;
+ (long long)lineStyleFromName:(id)arg1;
+ (id)nameForLineStyle:(long long)arg1;
+ (void)setAnnotationPageLayerEffectIsFlipped:(bool)arg1;

- (void).cxx_destruct;
- (struct CGPDFAnnotation { }*)CGPDFAnnotation;
- (id)URL;
- (id)_PDFMarkupColorForColor:(id)arg1;
- (id)_PDFTextColorForColor:(id)arg1;
- (id)_accessibilityTypeString;
- (void)_addAKAnnotationToDictionary:(struct __CFDictionary { }*)arg1;
- (void)_addUnknownPropertiesToDictionaryRef:(struct __CFDictionary { }*)arg1;
- (bool)_annotationAllowsCommenting:(id)arg1;
- (bool)_boolValueForAnnotationFlag:(unsigned long long)arg1 withDefaultValue:(bool)arg2;
- (bool)_boolValueForWidgetFieldFlag:(unsigned long long)arg1;
- (struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; })_calculatePDFAnnotationLayerOutsetForAction:(int)arg1;
- (id)_createArrayForCGRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_createArrayForColor:(id)arg1;
- (void)_didRemoveValueForAnnotationKey:(id)arg1;
- (void)_didSetValue:(id)arg1 forAnnotationKey:(id)arg2;
- (void)_drawAnnotationWithBox:(long long)arg1 inContext:(struct CGContext { }*)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_drawingRectForLineStyle:(long long)arg1 from:(struct CGPoint { double x1; double x2; })arg2 to:(struct CGPoint { double x1; double x2; })arg3 borderWidth:(double)arg4;
- (void)_generateFormFieldName;
- (id)_getAttributedStringForTextWidget;
- (id)_getFullFieldNameFromDictionary:(struct CGPDFDictionary { }*)arg1;
- (bool)_isValidAnnotationKey:(id)arg1;
- (struct CGPoint { double x1; double x2; })_pointOutsetFrom:(struct CGPoint { double x1; double x2; })arg1 startPoint1:(struct CGPoint { double x1; double x2; })arg2 startPoint2:(struct CGPoint { double x1; double x2; })arg3 lineWidth:(double)arg4;
- (void)_printDictionary:(id)arg1 atDepth:(int)arg2;
- (void)_releaseDictionaryRef;
- (void)_restorePropertiesAfterSetBounds;
- (void*)_sanitizeValue:(id)arg1 forKey:(id)arg2;
- (void)_savePropertiesBeforeSetBounds;
- (id)_selectionForMarkupAnnotation;
- (bool)_setArray:(id)arg1 forAnnotationKey:(id)arg2;
- (void)_setBoolValue:(bool)arg1 forAnnotationFlag:(unsigned long long)arg2;
- (void)_setBoolValue:(bool)arg1 forWidgetFieldFlag:(unsigned long long)arg2;
- (bool)_setDictionary:(id)arg1 forAnnotationKey:(id)arg2;
- (bool)_setInteger:(id)arg1 forAnnotationKey:(id)arg2;
- (bool)_setString:(id)arg1 forAnnotationKey:(id)arg2;
- (bool)_setVarious:(id)arg1 forAnnotationKey:(id)arg2;
- (bool)_shouldReadAppearanceStreams;
- (id)_textForValue:(id)arg1;
- (id)accessibilityNode;
- (id)action;
- (void)addActionToDictionaryRef:(struct __CFDictionary { }*)arg1;
- (void)addAdditionalActionsToDictionaryRef:(struct __CFDictionary { }*)arg1;
- (void)addAlternateFieldNameToDictionaryRef:(struct __CFDictionary { }*)arg1;
- (void)addAppearanceCharacteristicsToDictionaryRef:(struct __CFDictionary { }*)arg1;
- (void)addAppearanceForKey:(struct __CFString { }*)arg1 toDictionaryRef:(struct __CFDictionary { }*)arg2;
- (void)addBezierPath:(id)arg1;
- (void)addBorderStyleToDictionaryRef:(struct __CFDictionary { }*)arg1;
- (void)addBorderToDictionaryRef:(struct __CFDictionary { }*)arg1;
- (void)addColor:(id)arg1 forKey:(struct __CFString { }*)arg2 toDictionaryRef:(struct __CFDictionary { }*)arg3;
- (void)addDefaultAppearanceDictionaryRef:(struct __CFDictionary { }*)arg1;
- (void)addDefaultFieldValueToDictionaryRef:(struct __CFDictionary { }*)arg1;
- (bool)addDestinationToDictionaryRef:(struct __CFDictionary { }*)arg1;
- (void)addFieldFlagsToDictionaryRef:(struct __CFDictionary { }*)arg1;
- (void)addFieldNameToDictionaryRef:(struct __CFDictionary { }*)arg1;
- (void)addFieldTypeToDictionaryRef:(struct __CFDictionary { }*)arg1;
- (void)addFieldValueToDictionaryRef:(struct __CFDictionary { }*)arg1;
- (void)addFlagsToDictionaryRef:(struct __CFDictionary { }*)arg1;
- (void)addHighlightingModeToDictionaryRef:(struct __CFDictionary { }*)arg1;
- (void)addInkListToDictionaryRef:(struct __CFDictionary { }*)arg1;
- (void)addLineEndingStylesToDictionaryRef:(struct __CFDictionary { }*)arg1;
- (void)addLineToDictionaryRef:(struct __CFDictionary { }*)arg1;
- (void)addMaxLenToDictionaryRef:(struct __CFDictionary { }*)arg1;
- (void)addModificationDateToDictionaryRef:(struct __CFDictionary { }*)arg1;
- (void)addNameToDictionaryRef:(struct __CFDictionary { }*)arg1;
- (void)addNormalAndDownAppearanceToDictionaryRef:(struct __CFDictionary { }*)arg1;
- (void)addNormalAndDownAppearanceWithStateToDictionaryRef:(struct __CFDictionary { }*)arg1;
- (void)addNormalAppearanceToDictionaryRef:(struct __CFDictionary { }*)arg1;
- (void)addNormalAppearanceWithStateToDictionaryRef:(struct __CFDictionary { }*)arg1;
- (void)addOpenToDictionaryRef:(struct __CFDictionary { }*)arg1;
- (void)addOptionsToDictionaryRef:(struct __CFDictionary { }*)arg1;
- (void)addPageReferenceToDictionaryRef:(struct __CFDictionary { }*)arg1;
- (void)addPopupToDictionaryRef:(struct __CFDictionary { }*)arg1;
- (void)addQuadPointsToDictionaryRef:(struct __CFDictionary { }*)arg1;
- (void)addQuaddingToDictionaryRef:(struct __CFDictionary { }*)arg1;
- (void)addRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forKey:(struct __CFString { }*)arg2 toDictionaryRef:(struct __CFDictionary { }*)arg3;
- (void)addTextLabelToDictionaryRef:(struct __CFDictionary { }*)arg1;
- (void)addToPageView;
- (id)akAnnotationAdaptor;
- (long long)alignment;
- (bool)allowsToggleToOff;
- (id)annotationKeyValues;
- (struct CGPDFForm { }*)appearance:(int)arg1;
- (id)backgroundColor;
- (id)border;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (long long)buttonWidgetState;
- (id)buttonWidgetStateString;
- (id)caption;
- (struct CGPath {}**)cgPathArray;
- (id)choices;
- (id)color;
- (id)colorFromAppearanceTokens:(id)arg1;
- (struct __CFDictionary { }*)commonCreateDictionaryRef;
- (void)commonInit;
- (bool)containsPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)contents;
- (bool)contentsLocked;
- (id)control;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createDefaultAppearanceStringWithFont:(id)arg1 fontColor:(id)arg2;
- (void)createTextStorageAndLayoutManager;
- (void)dealloc;
- (id)debugQuickLookObject;
- (id)description;
- (id)destination;
- (struct __CFDictionary { }*)dictionaryRef;
- (struct __CFDictionary { }*)dictionaryRefExcludingParentOrPopup;
- (void)discardTextStorageAndLayoutManager;
- (id)displayName;
- (void)drawAppearance:(struct CGPDFForm { }*)arg1 withBox:(long long)arg2 inContext:(struct CGContext { }*)arg3;
- (void)drawAppearance:(struct CGPDFForm { }*)arg1 withBox:(long long)arg2 inContext:(struct CGContext { }*)arg3 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 scaleProportional:(bool)arg5;
- (void)drawAppearance:(struct CGPDFForm { }*)arg1 withBox:(long long)arg2 inContext:(struct CGContext { }*)arg3 scaleProportional:(bool)arg4;
- (void)drawWithBox:(long long)arg1 inContext:(struct CGContext { }*)arg2;
- (void)encodeWithCoder:(id)arg1;
- (long long)endLineStyle;
- (struct CGPoint { double x1; double x2; })endPoint;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })extendedBoundsForAction:(int)arg1;
- (id)fieldName;
- (unsigned long long)flags;
- (id)font;
- (id)fontColor;
- (id)fontNameFromAppearanceTokens:(id)arg1;
- (id)formData;
- (struct __CFDictionary { }*)gcCreateAttributesForFont:(id)arg1 color:(id)arg2;
- (void)getAppearancesFromDictionary:(struct CGPDFDictionary { }*)arg1 ofType:(int)arg2;
- (id)getColorFromAppearanceNSString:(id)arg1;
- (id)getColorFromAppearanceString:(struct CGPDFString { }*)arg1;
- (id)getFontFromAppearanceNSString:(id)arg1;
- (id)getFontFromAppearanceString:(struct CGPDFString { }*)arg1;
- (id)getPDFKeyMappingDictionary;
- (bool)hasAppearanceStream;
- (bool)hasComb;
- (long long)iconType;
- (id)indexSetForQuadPoints;
- (id)init;
- (id)initCommonWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary { }*)arg1 forPage:(id)arg2;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forType:(id)arg2 withProperties:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 forPage:(id)arg2;
- (id)interiorColor;
- (bool)isFullyConstructed;
- (bool)isHidden;
- (bool)isHighlighted;
- (bool)isInvisible;
- (bool)isListChoice;
- (bool)isLocked;
- (bool)isMarkupAnnotation;
- (bool)isMarkupAnnotationSubtype;
- (bool)isMultiline;
- (bool)isNoteAnnotation;
- (bool)isOpen;
- (bool)isPasswordField;
- (bool)isReadOnly;
- (bool)isReadOnlyAnnotation;
- (bool)isSelected;
- (bool)isSignature;
- (bool)isTextMarkupAnnotation;
- (bool)isTextMarkupOrNoteAnnotation;
- (bool)isTextWidget;
- (bool)isWidgetOrMarkupAnnotation;
- (id)layoutManager;
- (unsigned long long)markupStyle;
- (long long)markupType;
- (long long)maximumLength;
- (id)modificationDate;
- (id)mouseDownAction;
- (id)mouseHoverBackgroundColor;
- (id)mouseUpAction;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })noteBounds;
- (bool)noteContainsPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)page;
- (id)parent;
- (id)pathLock;
- (id)paths;
- (id)pdfAnnotationUUID;
- (double)pointSizeFromAppearanceTokens:(id)arg1;
- (id)popup;
- (struct CGPDFDictionary { }*)popupDictionary;
- (bool)popupDrawsCloseWidget;
- (bool)popupDrawsText;
- (void)postAnnotationsChangedNotification;
- (void)printDictionaryKeyValues;
- (long long)priority;
- (id)quadrilateralPoints;
- (bool)radiosInUnison;
- (void)releaseCGPathArray;
- (void)removeAKAnnotationAdaptor;
- (void)removeAllAppearanceStreams;
- (void)removeBezierPath:(id)arg1;
- (void)removeFromPageView;
- (void)removeValueForAnnotationKey:(id)arg1;
- (id)replaceTextWidgetWithString:(id)arg1;
- (bool)savesAppearanceStream;
- (double)scaleFactor;
- (id)scaledFontForTextWidget;
- (void)secondaryInit;
- (void)setAccessibilityNode:(id)arg1;
- (void)setAction:(id)arg1;
- (void)setAlignment:(long long)arg1;
- (void)setAllowsToggleToOff:(bool)arg1;
- (void)setAppearance:(struct CGPDFForm { }*)arg1 forType:(int)arg2;
- (void)setBackgroundColor:(id)arg1;
- (bool)setBoolean:(bool)arg1 forAnnotationKey:(id)arg2;
- (void)setBorder:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setBoundsWithUndo:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setButtonWidgetState:(long long)arg1;
- (void)setButtonWidgetStateString:(id)arg1;
- (void)setCGPDFAnnotation:(struct CGPDFAnnotation { }*)arg1;
- (void)setCGPathArray:(struct CGPath {}**)arg1;
- (void)setCaption:(id)arg1;
- (void)setChoices:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setComb:(bool)arg1;
- (void)setContents:(id)arg1;
- (void)setContents:(id)arg1 withUndo:(bool)arg2;
- (void)setContentsLocked:(bool)arg1;
- (void)setControl:(id)arg1;
- (void)setDestination:(id)arg1;
- (void)setDictionaryRef:(struct __CFDictionary { }*)arg1;
- (void)setEndLineStyle:(long long)arg1;
- (void)setEndPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setFieldName:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setFontColor:(id)arg1;
- (void)setForExport:(bool)arg1;
- (void)setHidden:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setIconType:(long long)arg1;
- (void)setInteriorColor:(id)arg1;
- (void)setInvisible:(bool)arg1;
- (void)setIsFullyConstructed:(bool)arg1;
- (void)setIsSelected:(bool)arg1;
- (void)setIsSignature:(bool)arg1;
- (void)setLayoutManager:(id)arg1;
- (void)setListChoice:(bool)arg1;
- (void)setLocked:(bool)arg1;
- (void)setMarkupType:(long long)arg1;
- (void)setMaximumLength:(long long)arg1;
- (void)setModificationDate:(id)arg1;
- (void)setMouseDownAction:(id)arg1;
- (void)setMouseHoverBackgroundColor:(id)arg1;
- (void)setMouseUpAction:(id)arg1;
- (void)setMultiline:(bool)arg1;
- (void)setOpen:(bool)arg1;
- (void)setPDFAnnotationDictionary:(id)arg1;
- (void)setPage:(id)arg1;
- (void)setParent:(id)arg1;
- (void)setPopup:(id)arg1;
- (void)setPopupDrawsCloseWidget:(bool)arg1;
- (void)setPopupDrawsText:(bool)arg1;
- (void)setPopupInternal:(id)arg1 scanPage:(bool)arg2;
- (void)setQuadPointsForIndexSet:(id)arg1 withUndo:(bool)arg2;
- (void)setQuadrilateralPoints:(id)arg1;
- (void)setRadiosInUnison:(bool)arg1;
- (void)setReadOnly:(bool)arg1;
- (void)setReadOnlyAnnotation:(bool)arg1;
- (bool)setRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forAnnotationKey:(id)arg2;
- (void)setSavesAppearanceStream:(bool)arg1;
- (void)setScaleFactor:(double)arg1;
- (void)setShouldBurnIn:(bool)arg1;
- (void)setShouldDisplay:(bool)arg1;
- (void)setShouldNotRotate:(bool)arg1;
- (void)setShouldNotZoom:(bool)arg1;
- (void)setShouldPrint:(bool)arg1;
- (void)setShouldToggleNoView:(bool)arg1;
- (void)setStampName:(id)arg1;
- (void)setStartLineStyle:(long long)arg1;
- (void)setStartPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTextInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setTextStorage:(id)arg1;
- (void)setType:(id)arg1;
- (void)setURL:(id)arg1;
- (void)setUserName:(id)arg1;
- (bool)setValue:(id)arg1 forAnnotationKey:(id)arg2;
- (void)setValues:(id)arg1;
- (void)setWidgetControlType:(long long)arg1;
- (void)setWidgetDefaultStringValue:(id)arg1;
- (void)setWidgetFieldType:(id)arg1;
- (void)setWidgetOnStateString:(id)arg1;
- (void)setWidgetStringValue:(id)arg1;
- (void)setupAKAnnotationAdaptorIfNecessary;
- (bool)shouldBurnIn;
- (bool)shouldComb;
- (bool)shouldDisplay;
- (bool)shouldExport;
- (bool)shouldNotRotate;
- (bool)shouldNotZoom;
- (bool)shouldPrint;
- (bool)shouldToggleNoView;
- (struct CGPDFDictionary { }*)sourceDictionary;
- (id)stampName;
- (long long)startLineStyle;
- (struct CGPoint { double x1; double x2; })startPoint;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })textInsets;
- (id)textMarkupString;
- (id)textStorage;
- (id)tokenizeAppearanceString:(id)arg1;
- (id)toolTip;
- (id)type;
- (void)updateAnnotationEffect;
- (void)updateFormData;
- (id)userName;
- (id)valueForAnnotationKey:(id)arg1;
- (id)values;
- (long long)widgetControlType;
- (id)widgetDefaultStringValue;
- (id)widgetFieldType;
- (id)widgetOnStateString;
- (id)widgetStringValue;

@end
