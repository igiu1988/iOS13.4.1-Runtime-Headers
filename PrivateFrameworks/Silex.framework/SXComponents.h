/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXComponents : NSObject <NSCopying, NSMutableCopying> {
    NSMutableDictionary * _childComponentsByParentIdentifier;
    NSMutableArray * _components;
    NSMutableDictionary * _componentsByIdentifier;
}

@property (nonatomic, readonly) NSArray *allComponents;
@property (nonatomic, readonly) NSMutableDictionary *childComponentsByParentIdentifier;
@property (nonatomic, readonly) NSMutableArray *components;
@property (nonatomic, readonly) NSMutableDictionary *componentsByIdentifier;
@property (nonatomic, readonly) unsigned long long count;

- (void).cxx_destruct;
- (void)addComponent:(id)arg1;
- (void)addComponentsFromArray:(id)arg1;
- (id)allComponents;
- (id)childComponentsByParentIdentifier;
- (id)componentAtIndex:(unsigned long long)arg1;
- (id)componentForIdentifier:(id)arg1;
- (id)components;
- (id)componentsByIdentifier;
- (id)componentsForContainerComponentWithIdentifier:(id)arg1;
- (id)componentsForContainerComponentWithPath:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)indexOfComponent:(id)arg1;
- (id)init;
- (id)initWithArray:(id)arg1;
- (void)insertComponent:(id)arg1 atIndex:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;

@end
