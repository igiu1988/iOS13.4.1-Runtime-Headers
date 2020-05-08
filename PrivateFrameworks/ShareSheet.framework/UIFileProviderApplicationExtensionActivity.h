/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

@interface UIFileProviderApplicationExtensionActivity : UIApplicationExtensionActivity {
    NSArray * _groupContainerURLs;
    LSPlugInKitProxy * _pluginProxy;
}

@property (nonatomic, retain) NSArray *groupContainerURLs;
@property (nonatomic, retain) LSPlugInKitProxy *pluginProxy;

- (void).cxx_destruct;
- (bool)_sharesGroupContainerWithURL:(id)arg1;
- (bool)canPerformWithActivityItems:(id)arg1;
- (id)groupContainerURLs;
- (id)initWithApplicationExtension:(id)arg1;
- (id)pluginProxy;
- (void)setGroupContainerURLs:(id)arg1;
- (void)setPluginProxy:(id)arg1;

@end
