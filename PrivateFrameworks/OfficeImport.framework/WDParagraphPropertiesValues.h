/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDParagraphPropertiesValues : NSObject {
    WDBorder * _barBorder;
    WDStyle * _baseStyle;
    WDBorder * _betweenBorder;
    WDBorder * _bottomBorder;
    struct { 
        unsigned char style; 
        unsigned char lines; 
    }  _dropCap;
    short  _firstLineIndent;
    short  _firstLineIndentChars;
    short  _followingIndent;
    unsigned char  _formattingChanged;
    unsigned short  _height;
    unsigned char  _heightRule;
    unsigned char  _horizontalAnchor;
    long long  _horizontalPosition;
    long long  _horizontalSpace;
    unsigned short  _indexToAuthorIDOfFormattingChange;
    unsigned char  _justification;
    short  _leadingIndent;
    WDBorder * _leftBorder;
    short  _leftIndent;
    short  _leftIndentChars;
    short  _lineSpacing;
    unsigned char  _lineSpacingRule;
    long long  _listIndex;
    unsigned char  _listLevel;
    unsigned short  _outlineLevel;
    unsigned char  _physicalJustification;
    WDBorder * _rightBorder;
    short  _rightIndent;
    short  _rightIndentChars;
    WDShading * _shading;
    unsigned short  _spaceAfter;
    unsigned short  _spaceBefore;
    unsigned long long  _tabStopAddedCount;
    NSMutableData * _tabStopAddedTable;
    unsigned long long  _tabStopDeletedCount;
    NSMutableData * _tabStopDeletedTable;
    WDBorder * _topBorder;
    unsigned char  _verticalAnchor;
    long long  _verticalPosition;
    long long  _verticalSpace;
    long long  _width;
    BOOL  _wrapCode;
    unsigned int  mAnchorLock;
    unsigned int  mAnchorLockOverridden;
    unsigned int  mBarBorderOverridden;
    unsigned int  mBaseStyleOverridden;
    unsigned int  mBetweenBorderOverridden;
    unsigned int  mBiDi;
    unsigned int  mBiDiOverridden;
    unsigned int  mBottomBorderOverridden;
    unsigned int  mCachedRtl;
    unsigned int  mCachedRtlOverridden;
    unsigned int  mContextualSpacing;
    unsigned int  mContextualSpacingOverridden;
    unsigned int  mDropCapOverridden;
    unsigned int  mFirstLineIndentCharsOverridden;
    unsigned int  mFirstLineIndentOverridden;
    unsigned int  mFollowingIndentOverridden;
    unsigned int  mFormattingChangedOverridden;
    unsigned int  mHeightOverridden;
    unsigned int  mHeightRuleOverridden;
    unsigned int  mHorizontalAnchorOverridden;
    unsigned int  mHorizontalPositionOverridden;
    unsigned int  mHorizontalSpaceOverridden;
    unsigned int  mIndexToAuthorIDOfFormattingChangeOverridden;
    unsigned int  mJustificationOverridden;
    unsigned int  mKeepLinesTogether;
    unsigned int  mKeepLinesTogetherOverridden;
    unsigned int  mKeepNextParagraphTogether;
    unsigned int  mKeepNextParagraphTogetherOverridden;
    unsigned int  mKinsokuOff;
    unsigned int  mKinsokuOffOverridden;
    unsigned int  mLeadingIndentOverridden;
    unsigned int  mLeftBorderOverridden;
    unsigned int  mLeftIndentCharsOverridden;
    unsigned int  mLeftIndentOverridden;
    unsigned int  mLineSpacingOverridden;
    unsigned int  mLineSpacingRuleOverridden;
    unsigned int  mListIndexOverridden;
    unsigned int  mListLevelOverridden;
    unsigned int  mOutlineLevelOverridden;
    unsigned int  mPageBreakBefore;
    unsigned int  mPageBreakBeforeOverridden;
    unsigned int  mPhysicalJustificationOverridden;
    unsigned int  mRightBorderOverridden;
    unsigned int  mRightIndentCharsOverridden;
    unsigned int  mRightIndentOverridden;
    unsigned int  mShadingOverridden;
    unsigned int  mSpaceAfterAuto;
    unsigned int  mSpaceAfterAutoOverridden;
    unsigned int  mSpaceAfterOverridden;
    unsigned int  mSpaceBeforeAuto;
    unsigned int  mSpaceBeforeAutoOverridden;
    unsigned int  mSpaceBeforeOverridden;
    unsigned int  mSuppressAutoHyphens;
    unsigned int  mSuppressAutoHyphensOverridden;
    unsigned int  mSuppressLineNumbers;
    unsigned int  mSuppressLineNumbersOverridden;
    unsigned int  mTabStopAddedCountOverridden;
    unsigned int  mTabStopDeletedCountOverridden;
    unsigned int  mTopBorderOverridden;
    unsigned int  mVerticalAnchorOverridden;
    unsigned int  mVerticalPositionOverridden;
    unsigned int  mVerticalSpaceOverridden;
    unsigned int  mWidowControl;
    unsigned int  mWidowControlOverridden;
    unsigned int  mWidthOverridden;
    unsigned int  mWrap;
    unsigned int  mWrapCodeOverridden;
    unsigned int  mWrapOverridden;
}

@property bool anchorLock;
@property bool anchorLockOverridden;
@property (nonatomic, retain) WDBorder *barBorder;
@property bool barBorderOverridden;
@property (nonatomic, retain) WDStyle *baseStyle;
@property bool baseStyleOverridden;
@property (nonatomic, retain) WDBorder *betweenBorder;
@property bool betweenBorderOverridden;
@property bool biDi;
@property bool biDiOverridden;
@property (nonatomic, retain) WDBorder *bottomBorder;
@property bool bottomBorderOverridden;
@property bool cachedRtl;
@property bool cachedRtlOverridden;
@property bool contextualSpacing;
@property bool contextualSpacingOverridden;
@property struct { unsigned char x1; unsigned char x2; } dropCap;
@property bool dropCapOverridden;
@property short firstLineIndent;
@property short firstLineIndentChars;
@property bool firstLineIndentCharsOverridden;
@property bool firstLineIndentOverridden;
@property short followingIndent;
@property bool followingIndentOverridden;
@property unsigned char formattingChanged;
@property bool formattingChangedOverridden;
@property unsigned short height;
@property bool heightOverridden;
@property unsigned char heightRule;
@property bool heightRuleOverridden;
@property unsigned char horizontalAnchor;
@property bool horizontalAnchorOverridden;
@property long long horizontalPosition;
@property bool horizontalPositionOverridden;
@property long long horizontalSpace;
@property bool horizontalSpaceOverridden;
@property unsigned short indexToAuthorIDOfFormattingChange;
@property bool indexToAuthorIDOfFormattingChangeOverridden;
@property unsigned char justification;
@property bool justificationOverridden;
@property bool keepLinesTogether;
@property bool keepLinesTogetherOverridden;
@property bool keepNextParagraphTogether;
@property bool keepNextParagraphTogetherOverridden;
@property bool kinsokuOff;
@property bool kinsokuOffOverridden;
@property short leadingIndent;
@property bool leadingIndentOverridden;
@property (nonatomic, retain) WDBorder *leftBorder;
@property bool leftBorderOverridden;
@property short leftIndent;
@property short leftIndentChars;
@property bool leftIndentCharsOverridden;
@property bool leftIndentOverridden;
@property short lineSpacing;
@property bool lineSpacingOverridden;
@property unsigned char lineSpacingRule;
@property bool lineSpacingRuleOverridden;
@property long long listIndex;
@property bool listIndexOverridden;
@property unsigned char listLevel;
@property bool listLevelOverridden;
@property unsigned short outlineLevel;
@property bool outlineLevelOverridden;
@property bool pageBreakBefore;
@property bool pageBreakBeforeOverridden;
@property unsigned char physicalJustification;
@property bool physicalJustificationOverridden;
@property (nonatomic, retain) WDBorder *rightBorder;
@property bool rightBorderOverridden;
@property short rightIndent;
@property short rightIndentChars;
@property bool rightIndentCharsOverridden;
@property bool rightIndentOverridden;
@property (nonatomic, retain) WDShading *shading;
@property bool shadingOverridden;
@property unsigned short spaceAfter;
@property bool spaceAfterAuto;
@property bool spaceAfterAutoOverridden;
@property bool spaceAfterOverridden;
@property unsigned short spaceBefore;
@property bool spaceBeforeAuto;
@property bool spaceBeforeAutoOverridden;
@property bool spaceBeforeOverridden;
@property bool suppressAutoHyphens;
@property bool suppressAutoHyphensOverridden;
@property bool suppressLineNumbers;
@property bool suppressLineNumbersOverridden;
@property unsigned long long tabStopAddedCount;
@property bool tabStopAddedCountOverridden;
@property (nonatomic, retain) NSMutableData *tabStopAddedTable;
@property unsigned long long tabStopDeletedCount;
@property bool tabStopDeletedCountOverridden;
@property (nonatomic, retain) NSMutableData *tabStopDeletedTable;
@property (nonatomic, retain) WDBorder *topBorder;
@property bool topBorderOverridden;
@property unsigned char verticalAnchor;
@property bool verticalAnchorOverridden;
@property long long verticalPosition;
@property bool verticalPositionOverridden;
@property long long verticalSpace;
@property bool verticalSpaceOverridden;
@property bool widowControl;
@property bool widowControlOverridden;
@property long long width;
@property bool widthOverridden;
@property bool wrap;
@property BOOL wrapCode;
@property bool wrapCodeOverridden;
@property bool wrapOverridden;

- (void).cxx_destruct;
- (bool)anchorLock;
- (bool)anchorLockOverridden;
- (id)barBorder;
- (bool)barBorderOverridden;
- (id)baseStyle;
- (bool)baseStyleOverridden;
- (id)betweenBorder;
- (bool)betweenBorderOverridden;
- (bool)biDi;
- (bool)biDiOverridden;
- (id)bottomBorder;
- (bool)bottomBorderOverridden;
- (bool)cachedRtl;
- (bool)cachedRtlOverridden;
- (bool)contextualSpacing;
- (bool)contextualSpacingOverridden;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct { unsigned char x1; unsigned char x2; })dropCap;
- (bool)dropCapOverridden;
- (short)firstLineIndent;
- (short)firstLineIndentChars;
- (bool)firstLineIndentCharsOverridden;
- (bool)firstLineIndentOverridden;
- (short)followingIndent;
- (bool)followingIndentOverridden;
- (unsigned char)formattingChanged;
- (bool)formattingChangedOverridden;
- (unsigned short)height;
- (bool)heightOverridden;
- (unsigned char)heightRule;
- (bool)heightRuleOverridden;
- (unsigned char)horizontalAnchor;
- (bool)horizontalAnchorOverridden;
- (long long)horizontalPosition;
- (bool)horizontalPositionOverridden;
- (long long)horizontalSpace;
- (bool)horizontalSpaceOverridden;
- (unsigned short)indexToAuthorIDOfFormattingChange;
- (bool)indexToAuthorIDOfFormattingChangeOverridden;
- (unsigned char)justification;
- (bool)justificationOverridden;
- (bool)keepLinesTogether;
- (bool)keepLinesTogetherOverridden;
- (bool)keepNextParagraphTogether;
- (bool)keepNextParagraphTogetherOverridden;
- (bool)kinsokuOff;
- (bool)kinsokuOffOverridden;
- (short)leadingIndent;
- (bool)leadingIndentOverridden;
- (id)leftBorder;
- (bool)leftBorderOverridden;
- (short)leftIndent;
- (short)leftIndentChars;
- (bool)leftIndentCharsOverridden;
- (bool)leftIndentOverridden;
- (short)lineSpacing;
- (bool)lineSpacingOverridden;
- (unsigned char)lineSpacingRule;
- (bool)lineSpacingRuleOverridden;
- (long long)listIndex;
- (bool)listIndexOverridden;
- (unsigned char)listLevel;
- (bool)listLevelOverridden;
- (unsigned short)outlineLevel;
- (bool)outlineLevelOverridden;
- (bool)pageBreakBefore;
- (bool)pageBreakBeforeOverridden;
- (unsigned char)physicalJustification;
- (bool)physicalJustificationOverridden;
- (id)rightBorder;
- (bool)rightBorderOverridden;
- (short)rightIndent;
- (short)rightIndentChars;
- (bool)rightIndentCharsOverridden;
- (bool)rightIndentOverridden;
- (void)setAnchorLock:(bool)arg1;
- (void)setAnchorLockOverridden:(bool)arg1;
- (void)setBarBorder:(id)arg1;
- (void)setBarBorderOverridden:(bool)arg1;
- (void)setBaseStyle:(id)arg1;
- (void)setBaseStyleOverridden:(bool)arg1;
- (void)setBetweenBorder:(id)arg1;
- (void)setBetweenBorderOverridden:(bool)arg1;
- (void)setBiDi:(bool)arg1;
- (void)setBiDiOverridden:(bool)arg1;
- (void)setBottomBorder:(id)arg1;
- (void)setBottomBorderOverridden:(bool)arg1;
- (void)setCachedRtl:(bool)arg1;
- (void)setCachedRtlOverridden:(bool)arg1;
- (void)setContextualSpacing:(bool)arg1;
- (void)setContextualSpacingOverridden:(bool)arg1;
- (void)setDropCap:(struct { unsigned char x1; unsigned char x2; })arg1;
- (void)setDropCapOverridden:(bool)arg1;
- (void)setFirstLineIndent:(short)arg1;
- (void)setFirstLineIndentChars:(short)arg1;
- (void)setFirstLineIndentCharsOverridden:(bool)arg1;
- (void)setFirstLineIndentOverridden:(bool)arg1;
- (void)setFollowingIndent:(short)arg1;
- (void)setFollowingIndentOverridden:(bool)arg1;
- (void)setFormattingChanged:(unsigned char)arg1;
- (void)setFormattingChangedOverridden:(bool)arg1;
- (void)setHeight:(unsigned short)arg1;
- (void)setHeightOverridden:(bool)arg1;
- (void)setHeightRule:(unsigned char)arg1;
- (void)setHeightRuleOverridden:(bool)arg1;
- (void)setHorizontalAnchor:(unsigned char)arg1;
- (void)setHorizontalAnchorOverridden:(bool)arg1;
- (void)setHorizontalPosition:(long long)arg1;
- (void)setHorizontalPositionOverridden:(bool)arg1;
- (void)setHorizontalSpace:(long long)arg1;
- (void)setHorizontalSpaceOverridden:(bool)arg1;
- (void)setIndexToAuthorIDOfFormattingChange:(unsigned short)arg1;
- (void)setIndexToAuthorIDOfFormattingChangeOverridden:(bool)arg1;
- (void)setJustification:(unsigned char)arg1;
- (void)setJustificationOverridden:(bool)arg1;
- (void)setKeepLinesTogether:(bool)arg1;
- (void)setKeepLinesTogetherOverridden:(bool)arg1;
- (void)setKeepNextParagraphTogether:(bool)arg1;
- (void)setKeepNextParagraphTogetherOverridden:(bool)arg1;
- (void)setKinsokuOff:(bool)arg1;
- (void)setKinsokuOffOverridden:(bool)arg1;
- (void)setLeadingIndent:(short)arg1;
- (void)setLeadingIndentOverridden:(bool)arg1;
- (void)setLeftBorder:(id)arg1;
- (void)setLeftBorderOverridden:(bool)arg1;
- (void)setLeftIndent:(short)arg1;
- (void)setLeftIndentChars:(short)arg1;
- (void)setLeftIndentCharsOverridden:(bool)arg1;
- (void)setLeftIndentOverridden:(bool)arg1;
- (void)setLineSpacing:(short)arg1;
- (void)setLineSpacingOverridden:(bool)arg1;
- (void)setLineSpacingRule:(unsigned char)arg1;
- (void)setLineSpacingRuleOverridden:(bool)arg1;
- (void)setListIndex:(long long)arg1;
- (void)setListIndexOverridden:(bool)arg1;
- (void)setListLevel:(unsigned char)arg1;
- (void)setListLevelOverridden:(bool)arg1;
- (void)setOutlineLevel:(unsigned short)arg1;
- (void)setOutlineLevelOverridden:(bool)arg1;
- (void)setPageBreakBefore:(bool)arg1;
- (void)setPageBreakBeforeOverridden:(bool)arg1;
- (void)setPhysicalJustification:(unsigned char)arg1;
- (void)setPhysicalJustificationOverridden:(bool)arg1;
- (void)setRightBorder:(id)arg1;
- (void)setRightBorderOverridden:(bool)arg1;
- (void)setRightIndent:(short)arg1;
- (void)setRightIndentChars:(short)arg1;
- (void)setRightIndentCharsOverridden:(bool)arg1;
- (void)setRightIndentOverridden:(bool)arg1;
- (void)setShading:(id)arg1;
- (void)setShadingOverridden:(bool)arg1;
- (void)setSpaceAfter:(unsigned short)arg1;
- (void)setSpaceAfterAuto:(bool)arg1;
- (void)setSpaceAfterAutoOverridden:(bool)arg1;
- (void)setSpaceAfterOverridden:(bool)arg1;
- (void)setSpaceBefore:(unsigned short)arg1;
- (void)setSpaceBeforeAuto:(bool)arg1;
- (void)setSpaceBeforeAutoOverridden:(bool)arg1;
- (void)setSpaceBeforeOverridden:(bool)arg1;
- (void)setSuppressAutoHyphens:(bool)arg1;
- (void)setSuppressAutoHyphensOverridden:(bool)arg1;
- (void)setSuppressLineNumbers:(bool)arg1;
- (void)setSuppressLineNumbersOverridden:(bool)arg1;
- (void)setTabStopAddedCount:(unsigned long long)arg1;
- (void)setTabStopAddedCountOverridden:(bool)arg1;
- (void)setTabStopAddedTable:(id)arg1;
- (void)setTabStopDeletedCount:(unsigned long long)arg1;
- (void)setTabStopDeletedCountOverridden:(bool)arg1;
- (void)setTabStopDeletedTable:(id)arg1;
- (void)setTopBorder:(id)arg1;
- (void)setTopBorderOverridden:(bool)arg1;
- (void)setVerticalAnchor:(unsigned char)arg1;
- (void)setVerticalAnchorOverridden:(bool)arg1;
- (void)setVerticalPosition:(long long)arg1;
- (void)setVerticalPositionOverridden:(bool)arg1;
- (void)setVerticalSpace:(long long)arg1;
- (void)setVerticalSpaceOverridden:(bool)arg1;
- (void)setWidowControl:(bool)arg1;
- (void)setWidowControlOverridden:(bool)arg1;
- (void)setWidth:(long long)arg1;
- (void)setWidthOverridden:(bool)arg1;
- (void)setWrap:(bool)arg1;
- (void)setWrapCode:(BOOL)arg1;
- (void)setWrapCodeOverridden:(bool)arg1;
- (void)setWrapOverridden:(bool)arg1;
- (id)shading;
- (bool)shadingOverridden;
- (unsigned short)spaceAfter;
- (bool)spaceAfterAuto;
- (bool)spaceAfterAutoOverridden;
- (bool)spaceAfterOverridden;
- (unsigned short)spaceBefore;
- (bool)spaceBeforeAuto;
- (bool)spaceBeforeAutoOverridden;
- (bool)spaceBeforeOverridden;
- (bool)suppressAutoHyphens;
- (bool)suppressAutoHyphensOverridden;
- (bool)suppressLineNumbers;
- (bool)suppressLineNumbersOverridden;
- (unsigned long long)tabStopAddedCount;
- (bool)tabStopAddedCountOverridden;
- (id)tabStopAddedTable;
- (unsigned long long)tabStopDeletedCount;
- (bool)tabStopDeletedCountOverridden;
- (id)tabStopDeletedTable;
- (id)topBorder;
- (bool)topBorderOverridden;
- (unsigned char)verticalAnchor;
- (bool)verticalAnchorOverridden;
- (long long)verticalPosition;
- (bool)verticalPositionOverridden;
- (long long)verticalSpace;
- (bool)verticalSpaceOverridden;
- (bool)widowControl;
- (bool)widowControlOverridden;
- (long long)width;
- (bool)widthOverridden;
- (bool)wrap;
- (BOOL)wrapCode;
- (bool)wrapCodeOverridden;
- (bool)wrapOverridden;

@end
