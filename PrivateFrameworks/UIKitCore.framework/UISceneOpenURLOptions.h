/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UISceneOpenURLOptions : NSObject {
    id  _annotation;
    bool  _openAsDownload;
    bool  _openInPlace;
    NSString * _sourceApp;
    BSProcessHandle * _sourceProcessHandle;
}

@property (nonatomic, readonly) bool _openAsDownload;
@property (nonatomic, readonly) BSProcessHandle *_sourceProcessHandle;
@property (nonatomic, readonly) id annotation;
@property (nonatomic, readonly) bool openInPlace;
@property (nonatomic, readonly) NSString *sourceApplication;

+ (id)_optionsFromDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithSourceApplication:(id)arg1 processHandle:(id)arg2 annotation:(id)arg3 openInPlace:(bool)arg4;
- (id)_initWithSourceApplication:(id)arg1 processHandle:(id)arg2 annotation:(id)arg3 openInPlace:(bool)arg4 openAsDownload:(bool)arg5;
- (bool)_openAsDownload;
- (id)_sourceProcessHandle;
- (id)annotation;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)openInPlace;
- (id)sourceApplication;

@end
