/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXLayoutBlueprint : NSObject <NSCopying> {
    NSMutableDictionary * _blueprint;
    struct CGSize { 
        double width; 
        double height; 
    }  _blueprintSize;
    <SXComponentBlueprintFactory> * _componentBlueprintFactory;
    SXComponentDependencyResolver * _dependencySolver;
    NSMutableDictionary * _flattenedBlueprint;
    NSMutableSet * _invalidatedComponents;
    bool  _isComplete;
    SXLayoutOptions * _layoutOptions;
    NSMutableArray * _orderedComponentIdentifiers;
    SXLayoutBlueprint * _parentLayoutBlueprint;
    NSOrderedSet * _snapLines;
    <SXUnitConverterFactory> * _unitConverterFactory;
    bool  _updating;
}

@property (nonatomic, retain) NSMutableDictionary *blueprint;
@property (nonatomic) struct CGSize { double x1; double x2; } blueprintSize;
@property (nonatomic, readonly) <SXComponentBlueprintFactory> *componentBlueprintFactory;
@property (nonatomic, retain) SXComponentDependencyResolver *dependencySolver;
@property (nonatomic, retain) NSMutableDictionary *flattenedBlueprint;
@property (nonatomic, retain) NSMutableSet *invalidatedComponents;
@property (nonatomic, readonly) bool isComplete;
@property (nonatomic, readonly) SXLayoutOptions *layoutOptions;
@property (nonatomic, retain) NSMutableArray *orderedComponentIdentifiers;
@property (nonatomic) SXLayoutBlueprint *parentLayoutBlueprint;
@property (nonatomic, readonly) SXLayoutBlueprint *rootLayoutBlueprint;
@property (nonatomic, retain) NSOrderedSet *snapLines;
@property (nonatomic, readonly) <SXUnitConverterFactory> *unitConverterFactory;
@property (getter=isUpdating, nonatomic) bool updating;

- (void).cxx_destruct;
- (id)blueprint;
- (struct CGSize { double x1; double x2; })blueprintSize;
- (id)componentBlueprintFactory;
- (id)componentBlueprintForComponentIdentifier:(id)arg1;
- (id)componentBlueprintForComponentIdentifier:(id)arg1 includeChildren:(bool)arg2;
- (id)componentIdentifiers;
- (id)componentsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)containerComponentIdentifierContainingComponentWithIdentifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)dependencySolver;
- (id)description;
- (void)endUpdates;
- (id)flattenedBlueprint;
- (id)initWithLayoutOptions:(id)arg1 componentBlueprintFactory:(id)arg2 unitConverterFactory:(id)arg3;
- (void)invalidateBlueprint;
- (void)invalidateBlueprintPosition;
- (void)invalidateDependentsOfComponentNode:(id)arg1 forDependencyResolver:(id)arg2;
- (void)invalidateDependentsOfInvalidatedComponents;
- (void)invalidatePositionForComponentWithIdentifier:(id)arg1;
- (void)invalidateSizeForComponentWithIdentifier:(id)arg1;
- (void)invalidateSizeForComponentWithIdentifier:(id)arg1 suggestedSize:(struct CGSize { double x1; double x2; })arg2;
- (id)invalidatedComponents;
- (bool)isComplete;
- (bool)isUpdating;
- (id)layoutDescriptionForBlueprint:(id)arg1 depth:(unsigned long long)arg2;
- (id)layoutOptions;
- (id)orderedComponentIdentifiers;
- (id)parentLayoutBlueprint;
- (void)registerLayout:(id)arg1 sizer:(id)arg2 forComponent:(id)arg3;
- (void)registerLayout:(id)arg1 sizer:(id)arg2 forComponent:(id)arg3 atIndex:(unsigned long long)arg4;
- (id)rootLayoutBlueprint;
- (void)setBlueprint:(id)arg1;
- (void)setBlueprintSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setDependencySolver:(id)arg1;
- (void)setFlattenedBlueprint:(id)arg1;
- (void)setInvalidatedComponents:(id)arg1;
- (void)setOrderedComponentIdentifiers:(id)arg1;
- (void)setParentLayoutBlueprint:(id)arg1;
- (void)setSnapLines:(id)arg1;
- (void)setUpdating:(bool)arg1;
- (id)snapLines;
- (id)snapLinesIncludingChildren:(bool)arg1;
- (void)startUpdatesForWidth:(double)arg1;
- (void)storeComponentsFromBlueprint:(id)arg1 inDictionary:(id)arg2;
- (id)unitConverterFactory;
- (void)unregisterLayout:(id)arg1;
- (void)updatePosition:(struct CGPoint { double x1; double x2; })arg1 forComponentWithIdentifier:(id)arg2;
- (void)updateSize:(struct CGSize { double x1; double x2; })arg1 forComponentWithIdentifier:(id)arg2;

@end
