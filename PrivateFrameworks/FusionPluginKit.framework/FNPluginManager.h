/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/FusionPluginKit.framework/FusionPluginKit
 */

@interface FNPluginManager : NSObject {
    NSMutableSet * _pluginBundlePaths;
    NSMutableSet * _pluginBundles;
    NSMutableSet * _pluginInstances;
    NSMutableDictionary * _pluginMessage;
}

@property (nonatomic, retain) NSMutableSet *pluginBundlePaths;
@property (nonatomic, retain) NSMutableSet *pluginBundles;
@property (nonatomic, retain) NSMutableSet *pluginInstances;
@property (nonatomic, retain) NSMutableDictionary *pluginMessage;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)getBundlePaths:(id)arg1;
- (id)getClient:(id)arg1;
- (id)init;
- (unsigned long long)initPlugins;
- (void)loadBundles;
- (id)pluginBundlePaths;
- (id)pluginBundles;
- (id)pluginInstances;
- (id)pluginMessage;
- (unsigned long long)removePlugins;
- (void)setPluginBundlePaths:(id)arg1;
- (void)setPluginBundles:(id)arg1;
- (void)setPluginInstances:(id)arg1;
- (void)setPluginMessage:(id)arg1;
- (unsigned long long)startPlugins;
- (unsigned long long)stopPlugins;

@end
