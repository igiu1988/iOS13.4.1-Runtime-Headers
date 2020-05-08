/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
 */

@interface CRCtcBeamSearch : NSObject {
    struct _LXLexicon { } * _dynamicLexicon;
    CRLanguageResources * _languageResources;
    NSLocale * _locale;
}

@property (nonatomic) struct _LXLexicon { }*dynamicLexicon;
@property (nonatomic, readonly) CRLanguageResources *languageResources;
@property (nonatomic, readonly) NSLocale *locale;

- (void).cxx_destruct;
- (void)dealloc;
- (struct _LXLexicon { }*)dynamicLexicon;
- (id)initWithOptions:(id)arg1 languageResources:(id)arg2;
- (id)kBestPathsForInput:(id)arg1 k:(unsigned long long)arg2 beamWidth:(unsigned long long)arg3 outputProbs:(id*)arg4 outputWhitespaceRanges:(id*)arg5;
- (id)languageResources;
- (void)loadDynamicLexicon:(id)arg1 forLocale:(id)arg2;
- (id)locale;
- (struct _LXLexicon { }*)newDynamicLexiconForLocale:(id)arg1 error:(id*)arg2;
- (void)setDynamicLexicon:(struct _LXLexicon { }*)arg1;

@end
