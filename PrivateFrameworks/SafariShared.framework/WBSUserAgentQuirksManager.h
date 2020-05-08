/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSUserAgentQuirksManager : NSObject {
    WBSRemotePlistController * _remotePlistController;
}

- (void).cxx_destruct;
- (void)getQuirksForDomain:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (id)initWithBuiltInQuirkListURL:(id)arg1 downloadsDirectoryURL:(id)arg2 resourceName:(id)arg3 resourceVersion:(id)arg4 updateDateDefaultsKey:(id)arg5 updateInterval:(double)arg6;
- (void)prepareForTermination;

@end