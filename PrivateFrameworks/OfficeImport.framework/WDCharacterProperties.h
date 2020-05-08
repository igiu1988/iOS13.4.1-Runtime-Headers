/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDCharacterProperties : NSObject {
    WDDocument * mDocument;
    bool  mOriginal;
    WDCharacterPropertiesValues * mOriginalProperties;
    bool  mResolved;
    bool  mTracked;
    WDCharacterPropertiesValues * mTrackedProperties;
}

@property (readonly) WDDocument *document;

+ (SEL)fontOverriddenSelectorForFontType:(int)arg1;
+ (SEL)fontSelectorForFontType:(int)arg1;
+ (SEL)setFontSelectorForFontType:(int)arg1;

- (void).cxx_destruct;
- (void)applyPropertiesFrom:(id)arg1 ifOverriddenIn:(id)arg2;
- (id)baseStyle;
- (int)bold;
- (int)boldForBiText;
- (id)border;
- (int)bracketTwoLinesInOne;
- (int)caps;
- (int)charPositionOfPictureBulletInBookmark;
- (void)clearBaseStyle;
- (id)color;
- (bool)compressHorizontalInVertical;
- (void)copyPropertiesInto:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)deleted;
- (id)deletionDate;
- (bool)deletionDifferentFrom:(id)arg1;
- (bool)deletionDifferentFrom:(id)arg1 mode:(int)arg2;
- (id)description;
- (id)document;
- (int)doubleStrikeThrough;
- (id)editDate;
- (bool)editDifferentFrom:(id)arg1;
- (bool)editDifferentFrom:(id)arg1 mode:(int)arg2;
- (int)edited;
- (bool)embeddedObject;
- (int)embossed;
- (int)emphasisMark;
- (id)extendedFont;
- (id)farEastFont;
- (id)font;
- (id)fontForFontType:(int)arg1;
- (int)fontHint;
- (unsigned short)fontSize;
- (unsigned short)fontSizeForBiText;
- (int)formattingChanged;
- (bool)formattingChangedDifferentFrom:(id)arg1;
- (bool)formattingChangedDifferentFrom:(id)arg1 mode:(int)arg2;
- (int)hidden;
- (int)highlightColor;
- (bool)horizontalInVertical;
- (int)imprint;
- (unsigned short)indexToAuthorIDOfDeletion;
- (unsigned short)indexToAuthorIDOfEdit;
- (unsigned short)indexToAuthorIDOfFormattingChange;
- (id)initWithDocument:(id)arg1;
- (bool)isAnythingOverridden;
- (bool)isAnythingOverriddenIn:(id)arg1;
- (bool)isBaseStyleOverridden;
- (bool)isBoldForBiTextOverridden;
- (bool)isBoldOverridden;
- (bool)isBooleanProbablyDifferent:(unsigned char)arg1 than:(unsigned char)arg2;
- (bool)isBorderOverridden;
- (bool)isBracketTwoLinesInOneOverridden;
- (bool)isCapsOverridden;
- (bool)isCharPositionOfPictureBulletInBookmarkOverridden;
- (bool)isColorAuto;
- (bool)isColorAutoOverridden;
- (bool)isColorOverridden;
- (bool)isCompressHorizontalInVerticalOverridden;
- (bool)isDeletedOverridden;
- (bool)isDeletionDateOverridden;
- (bool)isDoubleStrikeThroughOverridden;
- (bool)isEditDateOverridden;
- (bool)isEditedOverridden;
- (bool)isEmbeddedObjectOverridden;
- (bool)isEmbossedOverridden;
- (bool)isEmphasisMarkOverridden;
- (bool)isExtendedFontOverridden;
- (bool)isFarEastFontOverridden;
- (bool)isFontHintOverridden;
- (bool)isFontOverridden;
- (bool)isFontOverriddenForFontType:(int)arg1;
- (bool)isFontSizeForBiTextOverridden;
- (bool)isFontSizeOverridden;
- (bool)isFormattingChangedOverridden;
- (bool)isHiddenOverridden;
- (bool)isHighlight;
- (bool)isHighlightColorOverridden;
- (bool)isHighlightOverridden;
- (bool)isHorizontalInVerticalOverridden;
- (bool)isImprintOverridden;
- (bool)isIndexToAuthorIDOfDeletionOverridden;
- (bool)isIndexToAuthorIDOfEditOverridden;
- (bool)isIndexToAuthorIDOfFormattingChangeOverridden;
- (bool)isItalicForBiTextOverridden;
- (bool)isItalicOverridden;
- (bool)isKerningOverridden;
- (bool)isLanguageForBiTextOverridden;
- (bool)isLanguageForDefaultTextOverridden;
- (bool)isLanguageForFarEastOverridden;
- (bool)isLigatureOverridden;
- (bool)isListCharacterPictureBullet;
- (bool)isListCharacterPictureBulletOverridden;
- (bool)isLowerCase;
- (bool)isLowerCaseOverridden;
- (bool)isObjectIDForOle2Overridden;
- (bool)isOffsetToPictureDataOverridden;
- (bool)isOle2Overridden;
- (bool)isOutline2010WidthOverridden;
- (bool)isOutlineColorOverridden;
- (bool)isOutlineOverridden;
- (bool)isPositionOverridden;
- (bool)isReflectionOverridden;
- (bool)isRightToLeftOverridden;
- (bool)isShadingOverridden;
- (bool)isShadow2010OpacityOverridden;
- (bool)isShadow2010Overridden;
- (bool)isShadowOverridden;
- (bool)isSmallCapsOverridden;
- (bool)isSpacingOverridden;
- (bool)isSpecialCharacter;
- (bool)isSpecialCharacterOverridden;
- (bool)isStrikeThroughOverridden;
- (bool)isSymbolCharacterOverridden;
- (bool)isSymbolFontOverridden;
- (bool)isTextScaleOverridden;
- (bool)isTwoLinesInOneOverridden;
- (bool)isUnderlineColorOverridden;
- (bool)isUnderlineOverridden;
- (bool)isUseCsFontOverridden;
- (bool)isVerticalAlignOverridden;
- (int)italic;
- (int)italicForBiText;
- (unsigned short)kerning;
- (int)languageForBiText;
- (int)languageForDefaultText;
- (int)languageForFarEast;
- (int)ligature;
- (id)mutableBorder;
- (id)mutableShading;
- (void)negateFormattingChangesWithDefaults:(id)arg1;
- (int)objectIDForOle2;
- (int)offsetToPictureData;
- (bool)ole2;
- (int)outline;
- (float)outline2010Width;
- (id)outlineColor;
- (short)position;
- (id)reflection;
- (void)removeEmptyFormattingChanges:(id)arg1;
- (int)resolveMode;
- (int)reverseBooleanProperty:(int)arg1;
- (int)rightToLeft;
- (void)setBaseStyle:(id)arg1;
- (void)setBold:(int)arg1;
- (void)setBoldForBiText:(int)arg1;
- (void)setBracketTwoLinesInOne:(int)arg1;
- (void)setCaps:(int)arg1;
- (void)setCharPositionOfPictureBulletInBookmark:(int)arg1;
- (void)setColor:(id)arg1;
- (void)setColorAuto:(bool)arg1;
- (void)setCompressHorizontalInVertical:(bool)arg1;
- (void)setDeleted:(int)arg1;
- (void)setDeletionDate:(id)arg1;
- (void)setDoubleStrikeThrough:(int)arg1;
- (void)setEditDate:(id)arg1;
- (void)setEdited:(int)arg1;
- (void)setEmbeddedObject:(bool)arg1;
- (void)setEmbossed:(int)arg1;
- (void)setEmphasisMark:(int)arg1;
- (void)setExtendedFont:(id)arg1;
- (void)setFarEastFont:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setFont:(id)arg1 forFontType:(int)arg2;
- (void)setFontHint:(int)arg1;
- (void)setFontSize:(unsigned short)arg1;
- (void)setFontSizeForBiText:(unsigned short)arg1;
- (void)setFormattingChanged:(int)arg1;
- (void)setHidden:(int)arg1;
- (void)setHighlight:(bool)arg1;
- (void)setHighlightColor:(int)arg1;
- (void)setHorizontalInVertical:(bool)arg1;
- (void)setImprint:(int)arg1;
- (void)setIndexToAuthorIDOfDeletion:(unsigned short)arg1;
- (void)setIndexToAuthorIDOfEdit:(unsigned short)arg1;
- (void)setIndexToAuthorIDOfFormattingChange:(unsigned short)arg1;
- (void)setItalic:(int)arg1;
- (void)setItalicForBiText:(int)arg1;
- (void)setKerning:(unsigned short)arg1;
- (void)setLanguageForBiText:(int)arg1;
- (void)setLanguageForDefaultText:(int)arg1;
- (void)setLanguageForFarEast:(int)arg1;
- (void)setLigature:(int)arg1;
- (void)setListCharacterPictureBullet:(bool)arg1;
- (void)setLowerCase:(bool)arg1;
- (void)setObjectIDForOle2:(int)arg1;
- (void)setOffsetToPictureData:(int)arg1;
- (void)setOle2:(bool)arg1;
- (void)setOutline2010Width:(float)arg1;
- (void)setOutline:(int)arg1;
- (void)setOutlineColor:(id)arg1;
- (void)setPosition:(short)arg1;
- (void)setReflection:(id)arg1;
- (void)setResolveMode:(int)arg1;
- (void)setRightToLeft:(int)arg1;
- (void)setShadow2010:(id)arg1;
- (void)setShadow2010Opacity:(float)arg1;
- (void)setShadow:(int)arg1;
- (void)setSmallCaps:(int)arg1;
- (void)setSpacing:(short)arg1;
- (void)setSpecialCharacter:(bool)arg1;
- (void)setStrikeThrough:(int)arg1;
- (void)setSymbolCharacter:(unsigned short)arg1;
- (void)setSymbolFont:(id)arg1;
- (void)setTextScale:(unsigned short)arg1;
- (void)setTwoLinesInOne:(bool)arg1;
- (void)setUnderline:(int)arg1;
- (void)setUnderlineColor:(id)arg1;
- (void)setUseCsFont:(int)arg1;
- (void)setVerticalAlign:(int)arg1;
- (id)shading;
- (int)shadow;
- (id)shadow2010;
- (float)shadow2010Opacity;
- (int)smallCaps;
- (short)spacing;
- (int)strikeThrough;
- (unsigned short)symbolCharacter;
- (id)symbolFont;
- (unsigned short)textScale;
- (bool)twoLinesInOne;
- (int)underline;
- (id)underlineColor;
- (int)useCsFont;
- (int)verticalAlign;

@end
