/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCMathMultiscriptsExpression : SCRCMathExpression {
    SCRCMathExpression * _base;
    NSArray * _postScripts;
    NSArray * _preScripts;
}

@property (nonatomic, retain) SCRCMathExpression *base;
@property (nonatomic, retain) NSArray *postScripts;
@property (nonatomic, retain) NSArray *preScripts;

- (void).cxx_destruct;
- (id)_appendString:(id)arg1 toDescription:(id)arg2 arePausesAllowed:(bool)arg3;
- (void)_subSuperScriptsDescriptionFromArray:(id)arg1 withSpeakingStyle:(long long)arg2 arePausesAllowed:(bool)arg3 outSubscripts:(id*)arg4 outSuperscripts:(id*)arg5;
- (id)_subSuperscriptPairFromDictionary:(id)arg1;
- (id)base;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)postScripts;
- (id)preScripts;
- (void)setBase:(id)arg1;
- (void)setPostScripts:(id)arg1;
- (void)setPreScripts:(id)arg1;
- (id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(bool)arg2;

@end
