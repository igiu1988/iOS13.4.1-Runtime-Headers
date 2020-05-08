/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDTableProperties : NSObject <NSCopying> {
    WDDocument * mDocument;
    unsigned int  mOriginal;
    WDTablePropertiesValues * mOriginalProperties;
    unsigned int  mResolved;
    unsigned int  mTracked;
    WDTablePropertiesValues * mTrackedProperties;
}

@property (readonly) WDDocument *document;

- (void).cxx_destruct;
- (int)alignment;
- (id)baseStyle;
- (bool)biDirectional;
- (id)bottomBorder;
- (long long)bottomDistanceFromText;
- (short)cellSpacing;
- (int)cellSpacingType;
- (void)clearBottomBorder;
- (void)clearInsideHorizontalBorder;
- (void)clearInsideVerticalBorder;
- (void)clearLeftBorder;
- (void)clearRightBorder;
- (void)clearShading;
- (void)clearTopBorder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)deleted;
- (id)deletionDate;
- (id)description;
- (id)document;
- (id)editDate;
- (int)edited;
- (id)formattingChangeDate;
- (int)formattingChanged;
- (int)horizontalAnchor;
- (long long)horizontalPosition;
- (short)indent;
- (int)indentType;
- (unsigned short)indexToAuthorIDOfDeletion;
- (unsigned short)indexToAuthorIDOfEdit;
- (unsigned short)indexToAuthorIDOfFormattingChange;
- (id)init;
- (id)initWithDocument:(id)arg1;
- (id)insideHorizontalBorder;
- (id)insideVerticalBorder;
- (bool)isAlignmentOverridden;
- (bool)isBaseStyleOverridden;
- (bool)isBiDirectionalOverridden;
- (bool)isBottomBorderOverridden;
- (bool)isBottomDistanceFromTextOverridden;
- (bool)isCellSpacingOverridden;
- (bool)isCellSpacingTypeOverridden;
- (bool)isDeletedOverridden;
- (bool)isDeletionDateOverridden;
- (bool)isEditDateOverridden;
- (bool)isEditedOverridden;
- (bool)isFormattingChangeDateOverridden;
- (bool)isFormattingChangedOverridden;
- (bool)isHorizontalAnchorOverridden;
- (bool)isHorizontalPositionOverridden;
- (bool)isIndentOverridden;
- (bool)isIndentTypeOverridden;
- (bool)isIndexToAuthorIDOfDeletionOverridden;
- (bool)isIndexToAuthorIDOfEditOverridden;
- (bool)isIndexToAuthorIDOfFormattingChangeOverridden;
- (bool)isInsideHorizontalBorderOverridden;
- (bool)isInsideVerticalBorderOverridden;
- (bool)isJustificationOverridden;
- (bool)isLeftBorderOverridden;
- (bool)isLeftDistanceFromTextOverridden;
- (bool)isLookOverridden;
- (bool)isRightBorderOverridden;
- (bool)isRightDistanceFromTextOverridden;
- (bool)isShadingOverridden;
- (bool)isTableFloating;
- (bool)isTopBorderOverridden;
- (bool)isTopDistanceFromTextOverridden;
- (bool)isVerticalAnchorOverridden;
- (bool)isVerticalPositionOverridden;
- (bool)isWidthOverridden;
- (bool)isWidthTypeOverridden;
- (int)justification;
- (id)leftBorder;
- (long long)leftDistanceFromText;
- (unsigned short)look;
- (void)moveOrignalToTracked;
- (id)mutableBottomBorder;
- (id)mutableInsideHorizontalBorder;
- (id)mutableInsideVerticalBorder;
- (id)mutableLeftBorder;
- (id)mutableRightBorder;
- (id)mutableShading;
- (id)mutableTopBorder;
- (int)resolveMode;
- (id)rightBorder;
- (long long)rightDistanceFromText;
- (void)setAlignment:(int)arg1;
- (void)setBaseStyle:(id)arg1;
- (void)setBiDirectional:(bool)arg1;
- (void)setBottomDistanceFromText:(long long)arg1;
- (void)setCellSpacing:(short)arg1;
- (void)setCellSpacingType:(int)arg1;
- (void)setDeleted:(int)arg1;
- (void)setDeletionDate:(id)arg1;
- (void)setEditDate:(id)arg1;
- (void)setEdited:(int)arg1;
- (void)setFormattingChangeDate:(id)arg1;
- (void)setFormattingChanged:(int)arg1;
- (void)setHorizontalAnchor:(int)arg1;
- (void)setHorizontalPosition:(long long)arg1;
- (void)setIndent:(short)arg1;
- (void)setIndentType:(int)arg1;
- (void)setIndexToAuthorIDOfDeletion:(unsigned short)arg1;
- (void)setIndexToAuthorIDOfEdit:(unsigned short)arg1;
- (void)setIndexToAuthorIDOfFormattingChange:(unsigned short)arg1;
- (void)setJustification:(int)arg1;
- (void)setLeftDistanceFromText:(long long)arg1;
- (void)setLook:(unsigned short)arg1;
- (void)setResolveMode:(int)arg1;
- (void)setRightDistanceFromText:(long long)arg1;
- (void)setTopDistanceFromText:(long long)arg1;
- (void)setVerticalAnchor:(int)arg1;
- (void)setVerticalPosition:(long long)arg1;
- (void)setWidth:(long long)arg1;
- (void)setWidthType:(int)arg1;
- (id)shading;
- (id)topBorder;
- (long long)topDistanceFromText;
- (int)verticalAnchor;
- (long long)verticalPosition;
- (long long)width;
- (int)widthType;

@end
