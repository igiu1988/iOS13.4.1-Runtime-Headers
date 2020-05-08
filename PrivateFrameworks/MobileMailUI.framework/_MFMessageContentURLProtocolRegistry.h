/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
 */

@interface _MFMessageContentURLProtocolRegistry : NSObject {
    NSLock * _lock;
    NSMapTable * _storage;
}

@property (nonatomic, readonly) NSMapTable *storage;

+ (id)sharedRegistry;

- (void).cxx_destruct;
- (id)URLForLoadingContext:(id)arg1 scheme:(id)arg2;
- (id)init;
- (id)loadingContextForURL:(id)arg1;
- (id)storage;

@end
