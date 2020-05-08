/* Generated by EzioChiu
   Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

@interface LSAltIconManager : NSObject

+ (id)sharedInstance;

- (id)_getPreferredIconNameForIdentifier:(id)arg1;
- (bool)_setAlternateIconName:(id)arg1 forIdentifier:(id)arg2 withIconsDictionary:(id)arg3 error:(id*)arg4;
- (void)_setPreferredIconName:(id)arg1 forIdentifier:(id)arg2;
- (void)clearAlternateNameForBundleIdentifier:(id)arg1 validationDictionary:(id)arg2;
- (void)getAlternateIconNameForIdentifier:(id)arg1 reply:(id /* block */)arg2;
- (id)init;
- (bool)isValidAlternateIcon:(id)arg1 forIconsDict:(id)arg2;
- (void)setAlternateIconName:(id)arg1 forIdentifier:(id)arg2 iconsDictionary:(id)arg3 reply:(id /* block */)arg4;

@end
