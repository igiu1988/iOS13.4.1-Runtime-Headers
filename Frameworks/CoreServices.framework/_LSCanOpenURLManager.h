/* Generated by EzioChiu
   Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

@interface _LSCanOpenURLManager : NSObject {
    NSMutableDictionary * _canOpenURLsMap;
    NSObject<OS_dispatch_queue> * _canOpenURLsMapQueue;
    int  _saveFlag;
}

+ (struct BindingEvaluator { id x1; id x2; id x3; id x4; id x5; id x6; struct LSVersionNumber { unsigned char x_7_1_1[32]; } x7; bool x8; unsigned long long x9; unsigned int x10; unsigned int x11; struct vector<LSBundleClass, std::__1::allocator<LSBundleClass> > { unsigned int *x_12_1_1; unsigned int *x_12_1_2; struct __compressed_pair<LSBundleClass *, std::__1::allocator<LSBundleClass> > { unsigned int *x_3_2_1; } x_12_1_3; } x12; id /* block */ x13; id x14; id /* block */ x15; id x16; })bindingEvaluatorForScheme:(id)arg1;
+ (id)queryForApplicationsAvailableForOpeningURL:(id)arg1;
+ (id)sharedManager;

- (void).cxx_destruct;
- (bool)canOpenURL:(id)arg1 publicSchemes:(bool)arg2 privateSchemes:(bool)arg3 XPCConnection:(id)arg4 error:(id*)arg5;
- (id)copySchemesMap;
- (bool)findApplicationBundleID:(unsigned int*)arg1 bundleData:(const struct LSBundleData {}**)arg2 context:(struct LSContext { id x1; }*)arg3 forXPCConnection:(id)arg4;
- (void)getIsURL:(id)arg1 alwaysCheckable:(bool*)arg2 hasHandler:(bool*)arg3;
- (id)init;
- (bool)internalCanOpenURL:(id)arg1 publicSchemes:(bool)arg2 privateSchemes:(bool)arg3 XPCConnection:(id)arg4 error:(id*)arg5;
- (bool)isBundleID:(unsigned int)arg1 bundleData:(const struct LSBundleData { unsigned int x1; unsigned long long x2; unsigned int x3; unsigned int x4; unsigned char x5; unsigned short x6; unsigned int x7; unsigned int x8; int x9; int x10; struct LSVersionNumber { unsigned char x_11_1_1[32]; } x11; struct LSVersionNumber { unsigned char x_12_1_1[32]; } x12; struct LSVersionNumber { unsigned char x_13_1_1[32]; } x13; struct LSVersionNumber { unsigned char x_14_1_1[32]; } x14; unsigned int x15; unsigned int x16; unsigned long long x17; unsigned long long x18; unsigned long long x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned int x25; unsigned int x26; unsigned int x27; unsigned int x28; unsigned int x29; unsigned int x30; unsigned long long x31; unsigned int x32; unsigned int x33; unsigned int x34; unsigned int x35; unsigned long long x36; unsigned long long x37; unsigned long long x38; unsigned long long x39; unsigned int x40; unsigned int x41; unsigned long long x42; unsigned long long x43; unsigned int x44; unsigned int x45; unsigned long long x46; }*)arg2 context:(struct LSContext { id x1; }*)arg3 allowedToCheckScheme:(id)arg4 error:(id*)arg5;
- (bool)isXPCConnection:(id)arg1 allowedToCheckScheme:(id)arg2 error:(id*)arg3;
- (bool)legacy_isBundleID:(unsigned int)arg1 bundleData:(const struct LSBundleData { unsigned int x1; unsigned long long x2; unsigned int x3; unsigned int x4; unsigned char x5; unsigned short x6; unsigned int x7; unsigned int x8; int x9; int x10; struct LSVersionNumber { unsigned char x_11_1_1[32]; } x11; struct LSVersionNumber { unsigned char x_12_1_1[32]; } x12; struct LSVersionNumber { unsigned char x_13_1_1[32]; } x13; struct LSVersionNumber { unsigned char x_14_1_1[32]; } x14; unsigned int x15; unsigned int x16; unsigned long long x17; unsigned long long x18; unsigned long long x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned int x25; unsigned int x26; unsigned int x27; unsigned int x28; unsigned int x29; unsigned int x30; unsigned long long x31; unsigned int x32; unsigned int x33; unsigned int x34; unsigned int x35; unsigned long long x36; unsigned long long x37; unsigned long long x38; unsigned long long x39; unsigned int x40; unsigned int x41; unsigned long long x42; unsigned long long x43; unsigned int x44; unsigned int x45; unsigned long long x46; }*)arg2 context:(struct LSContext { id x1; }*)arg3 allowedToCheckScheme:(id)arg4 error:(id*)arg5;
- (void)resetSchemeQueryLimitForApplicationWithIdentifier:(id)arg1;
- (long long)schemeTypeOfScheme:(id)arg1;
- (void)writeSchemesMap;

@end
