/* Generated by EzioChiu.
 */

@protocol PXNavigationListItem <NSObject, NSCopying>

@required

- (NSString *)accessoryTitle;
- (PHCollection *)collection;
- (NSString *)glyphImageName;
- (NSString *)identifier;
- (long long)indentationLevel;
- (bool)isDraggable;
- (bool)isExpandable;
- (bool)isExpanded;
- (bool)isGroup;
- (bool)isRemovable;
- (bool)isRenamable;
- (id)representedObject;
- (NSString *)title;
- (NSString *)visualDescription;

@optional

- (const struct __CFString { }*)aggregateDictionaryKey;
- (NSObject<PXAnonymousViewController> *)viewControllerForCollectionWithGridPresentation:(id <PXGridPresentation>)arg1;

@end
