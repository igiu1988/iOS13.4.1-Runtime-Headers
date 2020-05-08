/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
 */

@interface TSBlockingPluginManager : NSObject {
    void dataLock;
    void pluginManager;
    void pluginModels;
    void plugins;
    void viewControllers;
    void viewControllersLock;
}

@property (nonatomic, readonly) TSPluginManager *pluginManager;

- (void).cxx_destruct;
- (bool)containsPluginForIdentifier:(id)arg1;
- (id)init;
- (id)pluginManager;
- (void)registerAndInitializePlugin:(id)arg1;
- (void)relayoutAll;
- (void)removeAll;
- (id)viewControllerForIdentifier:(id)arg1;
- (struct CGSize { double x1; double x2; })waitForSizeForIdentifier:(id)arg1;

@end
