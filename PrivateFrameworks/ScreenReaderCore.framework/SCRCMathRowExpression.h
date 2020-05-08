/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCMathRowExpression : SCRCMathArrayExpression

- (void)_addSpacingAndChild:(id)arg1 toResult:(id)arg2 nextChild:(id)arg3 previousChild:(id)arg4 numberOfOuterRadicals:(unsigned long long)arg5 treePosition:(id)arg6;
- (id)_indexesOfCharactersInWords;
- (bool)beginsWithSpace;
- (bool)canBeUsedWithBase;
- (bool)canBeUsedWithRange;
- (id)childSpeakableSegmentsWithSpeakingStyle:(long long)arg1 upToDepth:(unsigned long long)arg2 parentTreePosition:(id)arg3 childIndex:(unsigned long long*)arg4;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2;
- (bool)endsWithSpace;
- (unsigned long long)fractionLevel;
- (long long)integerValue;
- (bool)isFunctionName;
- (bool)isInteger;
- (bool)isNumber;
- (bool)isWordOrAbbreviation;
- (id)latexDescriptionInMathMode:(bool)arg1;
- (id)mathMLTag;
- (id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(bool)arg2;
- (id)speakableSummary;

@end
