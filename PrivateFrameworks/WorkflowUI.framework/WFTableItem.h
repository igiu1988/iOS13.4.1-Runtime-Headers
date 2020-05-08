/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFTableItem : NSObject {
    long long  _accessoryType;
    Class  _cellClass;
    bool  _expanded;
    NSMutableArray * _mutableChildren;
    WFTableItemTreeNode * _node;
    bool  _selectable;
    long long  _style;
}

@property (nonatomic) long long accessoryType;
@property (nonatomic, readonly) Class cellClass;
@property (nonatomic, copy) NSArray *children;
@property (getter=isExpanded, nonatomic) bool expanded;
@property (nonatomic, readonly) NSMutableArray *mutableChildren;
@property (nonatomic, readonly) WFTableItemTreeNode *node;
@property (nonatomic, readonly) WFTableSection *section;
@property (getter=isSelectable, nonatomic) bool selectable;
@property (nonatomic, readonly) long long style;

+ (id)itemWithCellClass:(Class)arg1 representedObject:(id)arg2 configurationBlock:(id /* block */)arg3;
+ (id)itemWithPrimaryText:(id)arg1;
+ (id)itemWithPrimaryText:(id)arg1 image:(id)arg2;
+ (id)itemWithStyle:(long long)arg1 primaryText:(id)arg2;
+ (id)itemWithStyle:(long long)arg1 primaryText:(id)arg2 image:(id)arg3;
+ (id)itemWithStyle:(long long)arg1 primaryText:(id)arg2 secondaryText:(id)arg3;
+ (id)itemWithStyle:(long long)arg1 primaryText:(id)arg2 secondaryText:(id)arg3 image:(id)arg4;
+ (id)itemWithStyle:(long long)arg1 representedObject:(id)arg2 configurationBlock:(id /* block */)arg3;

- (void).cxx_destruct;
- (long long)accessoryType;
- (void)addItem:(id)arg1;
- (Class)cellClass;
- (id)children;
- (void)configureCell:(id)arg1;
- (id)initWithCellClass:(Class)arg1 style:(long long)arg2;
- (void)insertItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (bool)isExpanded;
- (bool)isSelectable;
- (id)mutableChildren;
- (id)nextItemInSection;
- (id)node;
- (void)performBatchUpdates:(id /* block */)arg1;
- (void)removeFromParent;
- (void)removeItem:(id)arg1;
- (void)removeItemAtIndex:(unsigned long long)arg1;
- (id)section;
- (void)setAccessoryType:(long long)arg1;
- (void)setChildren:(id)arg1;
- (void)setExpanded:(bool)arg1;
- (void)setSelectable:(bool)arg1;
- (long long)style;
- (void)updateChildren;

@end
