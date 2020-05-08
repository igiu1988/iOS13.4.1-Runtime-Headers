/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NURenderTagGroup : NSObject {
    NSMutableDictionary * _children;
    NURenderTagGroup * _parent;
    NSMutableDictionary * _tags;
}

@property NURenderTagGroup *parent;

+ (bool)validatePath:(id)arg1 error:(out id*)arg2;

- (void).cxx_destruct;
- (void)_composePathComponents:(id)arg1;
- (id)_descriptionWithLevel:(long long)arg1;
- (id)_nodeWithPathComponents:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_root;
- (void)addChild:(id)arg1 withName:(id)arg2;
- (id)addTag:(id)arg1 forNode:(id)arg2;
- (id)childWithName:(id)arg1;
- (id)children;
- (id)description;
- (id)finalizeMap:(id)arg1;
- (id)init;
- (id)leafName;
- (id)nodeWithPath:(id)arg1;
- (id)parent;
- (id)path;
- (void)removeChildWithName:(id)arg1;
- (void)setParent:(id)arg1;
- (void)visitEveryTagWithBlock:(id /* block */)arg1;

@end
