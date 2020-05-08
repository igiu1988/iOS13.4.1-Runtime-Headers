/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADParagraphProperties : OADCharacterProperties {
    OADTextSpacing * mAfterSpacing;
    unsigned char  mAlign;
    OADTextSpacing * mBeforeSpacing;
    int  mBulletCharSet;
    OADBulletColor * mBulletColor;
    OADBulletFont * mBulletFont;
    OADBulletProperties * mBulletProperties;
    OADBulletSize * mBulletSize;
    float  mDefaultTab;
    unsigned char  mFontAlign;
    unsigned int  mHasAlign;
    unsigned int  mHasBulletCharSet;
    unsigned int  mHasDefaultTab;
    unsigned int  mHasFontAlign;
    unsigned int  mHasIndent;
    unsigned int  mHasIsHangingPunctuation;
    unsigned int  mHasIsLatinLineBreak;
    unsigned int  mHasLeftMargin;
    unsigned int  mHasLevel;
    unsigned int  mHasRightMargin;
    unsigned int  mHasWrap;
    float  mIndent;
    unsigned int  mIsHangingPunctuation;
    unsigned int  mIsLatinLineBreak;
    float  mLeftMargin;
    int  mLevel;
    OADTextSpacing * mLineSpacing;
    float  mRightMargin;
    NSArray * mTabStops;
    unsigned char  mWrap;
}

+ (id)defaultProperties;

- (void).cxx_destruct;
- (id)afterSpacing;
- (unsigned char)align;
- (id)beforeSpacing;
- (int)bulletCharSet;
- (id)bulletColor;
- (id)bulletFont;
- (id)bulletProperties;
- (id)bulletSize;
- (float)defaultTab;
- (id)description;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (unsigned char)fontAlign;
- (bool)hasAfterSpacing;
- (bool)hasAlign;
- (bool)hasBeforeSpacing;
- (bool)hasBulletCharSet;
- (bool)hasBulletColor;
- (bool)hasBulletFont;
- (bool)hasBulletProperties;
- (bool)hasBulletSize;
- (bool)hasDefaultTab;
- (bool)hasFontAlign;
- (bool)hasIndent;
- (bool)hasIsHangingPunctuation;
- (bool)hasIsLatinLineBreak;
- (bool)hasLeftMargin;
- (bool)hasLevel;
- (bool)hasLineSpacing;
- (bool)hasRightMargin;
- (bool)hasTabStops;
- (bool)hasWrap;
- (unsigned long long)hash;
- (float)indent;
- (id)init;
- (id)initWithDefaults;
- (bool)isAnythingOverridden;
- (bool)isEqual:(id)arg1;
- (bool)isHangingPunctuation;
- (bool)isLatinLineBreak;
- (float)leftMargin;
- (int)level;
- (id)lineSpacing;
- (double)nonOveridenLeftMargin;
- (void)overrideWithProperties:(id)arg1;
- (void)removeUnnecessaryOverrides;
- (float)rightMargin;
- (void)setAfterSpacing:(id)arg1;
- (void)setAlign:(unsigned char)arg1;
- (void)setBeforeSpacing:(id)arg1;
- (void)setBulletCharSet:(int)arg1;
- (void)setBulletColor:(id)arg1;
- (void)setBulletFont:(id)arg1;
- (void)setBulletProperties:(id)arg1;
- (void)setBulletSize:(id)arg1;
- (void)setDefaultTab:(float)arg1;
- (void)setFontAlign:(unsigned char)arg1;
- (void)setIndent:(float)arg1;
- (void)setIsHangingPunctuation:(bool)arg1;
- (void)setIsLatinLineBreak:(bool)arg1;
- (void)setLeftMargin:(float)arg1;
- (void)setLevel:(int)arg1;
- (void)setLineSpacing:(id)arg1;
- (void)setRightMargin:(float)arg1;
- (void)setTabStops:(id)arg1;
- (void)setWrap:(unsigned char)arg1;
- (id)tabStops;
- (unsigned char)wrap;

@end
