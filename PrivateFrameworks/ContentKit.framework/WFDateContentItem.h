/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

@interface WFDateContentItem : WFContentItem <WFContentItemClass>

@property (nonatomic, readonly) NSDate *date;

+ (id)contentCategories;
+ (id)countDescription;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)pluralTypeDescription;
+ (id)typeDescription;

- (id)date;
- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3;
- (bool)getListAltText:(id /* block */)arg1;
- (id)richListTitle;

@end
