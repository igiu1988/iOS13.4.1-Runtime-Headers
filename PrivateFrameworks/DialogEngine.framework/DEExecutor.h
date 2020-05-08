/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
 */

@interface DEExecutor : NSObject {
    id /* block */  _callback;
    NSString * _catId;
    DEContext * _context;
    bool  _debug;
    DEDistribution * _distribution;
    bool  _enableUpdates;
    NSDictionary * _globalParameters;
    bool  _grounding;
    NSString * _locale;
    bool  _multiuser;
    NSDictionary * _parameters;
    NSString * _pluginName;
    bool  _resetState;
    NSString * _templateDir;
    bool  _test;
    NSString * _voiceGender;
}

@property (nonatomic, copy) id /* block */ callback;
@property (nonatomic, retain) NSString *catId;
@property (nonatomic, retain) DEContext *context;
@property (nonatomic) bool debug;
@property (nonatomic, retain) DEDistribution *distribution;
@property (nonatomic) bool enableUpdates;
@property (nonatomic, retain) NSDictionary *globalParameters;
@property (nonatomic) bool grounding;
@property (nonatomic, retain) NSString *locale;
@property (nonatomic) bool multiuser;
@property (nonatomic, retain) NSDictionary *parameters;
@property (nonatomic, retain) NSString *pluginName;
@property (nonatomic) bool resetState;
@property (nonatomic, retain) NSString *templateDir;
@property (nonatomic) bool test;
@property (nonatomic, retain) NSString *voiceGender;

+ (void)executeWithJson:(id)arg1 callback:(id /* block */)arg2 completionBlock:(id /* block */)arg3;
+ (void)executeWithJson:(id)arg1 completionBlock:(id /* block */)arg2;
+ (void)executeWithJson:(id)arg1 paramsString:(id)arg2 localeString:(id)arg3 callback:(id /* block */)arg4 completionBlock:(id /* block */)arg5;
+ (id /* block */)prepareCallback:(id /* block */)arg1 forContext:(struct Context { int (**x1)(); struct RequestInfo { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_6_1; unsigned long long x_1_6_2; unsigned long long x_1_6_3; } x_1_5_1; struct __short { BOOL x_2_6_1[23]; struct { unsigned char x_2_7_1; } x_2_6_2; } x_1_5_2; struct __raw { unsigned long long x_3_6_1[3]; } x_1_5_3; } x_1_4_1; } x_1_3_1; } x_1_2_1; } x_2_1_1; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_6_1; unsigned long long x_1_6_2; unsigned long long x_1_6_3; } x_1_5_1; struct __short { BOOL x_2_6_1[23]; struct { unsigned char x_2_7_1; } x_2_6_2; } x_1_5_2; struct __raw { unsigned long long x_3_6_1[3]; } x_1_5_3; } x_1_4_1; } x_1_3_1; } x_2_2_1; } x_2_1_2; } x2; }*)arg2;

- (void).cxx_destruct;
- (id /* block */)callback;
- (id)catId;
- (id)context;
- (bool)debug;
- (id)distribution;
- (bool)enableUpdates;
- (void)executeWithCompletionBlock:(id /* block */)arg1;
- (id)executeWithParams:(id)arg1 locale:(id)arg2;
- (void)executeWithParams:(id)arg1 locale:(id)arg2 completionBlock:(id /* block */)arg3;
- (id)globalParameters;
- (bool)grounding;
- (id)init;
- (id)locale;
- (bool)multiuser;
- (id)parameters;
- (id)pluginName;
- (bool)resetState;
- (void)setCallback:(id /* block */)arg1;
- (void)setCatId:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDebug:(bool)arg1;
- (void)setDistribution:(id)arg1;
- (void)setEnableUpdates:(bool)arg1;
- (void)setGlobalParameters:(id)arg1;
- (void)setGrounding:(bool)arg1;
- (void)setLocale:(id)arg1;
- (void)setMultiuser:(bool)arg1;
- (void)setParameters:(id)arg1;
- (void)setPluginName:(id)arg1;
- (void)setResetState:(bool)arg1;
- (void)setTemplateDir:(id)arg1;
- (void)setTest:(bool)arg1;
- (void)setVoiceGender:(id)arg1;
- (id)templateDir;
- (bool)test;
- (id)voiceGender;

@end
