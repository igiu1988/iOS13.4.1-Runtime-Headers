/* Generated by EzioChiu.
 */

@protocol NTKBundleComplicationProvider <NSObject>

@required

- (bool)bundleComplicationExistsForAppBundleIdentifier:(NSString *)arg1;
- (Class)dataSourceClassForBundleComplication:(NTKComplication *)arg1;
- (void)enumerateBundlesForComplicationFamily:(void *)arg1 device:(void *)arg2 withBlock:(void *)arg3; // needs 3 arg types, found 10: long long, CLKDevice *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSString *, NSNumber *, void*
- (NSString *)localizedAppNameForBundleIdentifier:(NSString *)arg1;

@end
