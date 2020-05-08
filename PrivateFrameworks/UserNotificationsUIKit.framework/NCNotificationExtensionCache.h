/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationExtensionCache : NSObject {
    NSMutableDictionary * _extensions;
}

@property (nonatomic, retain) NSMutableDictionary *extensions;

- (void).cxx_destruct;
- (void)_addExtension:(id)arg1;
- (id)_categoriesForExtension:(id)arg1;
- (id)_customSectionIdentifiersForExtension:(id)arg1;
- (id)_extensionMatchingSection:(id)arg1 category:(id)arg2;
- (void)_removeAllExtensions;
- (id)_sectionDictForSection:(id)arg1;
- (id)extensionForNotificationRequest:(id)arg1;
- (id)extensions;
- (id)init;
- (void)registerExtensions:(id)arg1;
- (void)setExtensions:(id)arg1;

@end
