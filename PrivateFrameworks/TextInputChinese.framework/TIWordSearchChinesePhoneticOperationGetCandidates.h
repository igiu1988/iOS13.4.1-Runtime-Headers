/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputChinese.framework/TextInputChinese
 */

@interface TIWordSearchChinesePhoneticOperationGetCandidates : TIWordSearchOperationGetCandidates {
    NSArray * _disambiguationCandidates;
    unsigned long long  _selectedDisambiguationCandidateIndex;
}

@property (nonatomic, readonly) NSArray *disambiguationCandidates;
@property (nonatomic, readonly) unsigned long long selectedDisambiguationCandidateIndex;

- (void).cxx_destruct;
- (id)disambiguationCandidates;
- (id)initWithWordSearch:(id)arg1 inputString:(id)arg2 keyboardInput:(id)arg3 segmentBreakIndex:(unsigned long long)arg4 disambiguationCandidates:(id)arg5 selectedDisambiguationCandidateIndex:(unsigned long long)arg6 predictionEnabled:(bool)arg7 reanalysisMode:(bool)arg8 target:(id)arg9 action:(SEL)arg10 geometryModelData:(id)arg11 hardwareKeyboardMode:(bool)arg12 logger:(id)arg13;
- (unsigned long long)selectedDisambiguationCandidateIndex;

@end
