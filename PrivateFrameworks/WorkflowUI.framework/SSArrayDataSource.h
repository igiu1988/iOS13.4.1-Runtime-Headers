/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface SSArrayDataSource : SSBaseDataSource {
    NSMutableArray * _items;
    NSString * _keyPath;
    id  _target;
}

@property (nonatomic, retain) NSMutableArray *items;
@property (nonatomic, copy) NSString *keyPath;
@property (nonatomic, retain) id target;

- (void).cxx_destruct;
- (id)allItems;
- (void)appendItem:(id)arg1;
- (void)appendItems:(id)arg1;
- (void)clearItems;
- (void)dealloc;
- (id)indexPathForItemWithId:(id)arg1;
- (id)initWithItems:(id)arg1;
- (id)initWithTarget:(id)arg1 keyPath:(id)arg2;
- (void)insertItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertItems:(id)arg1 atIndexes:(id)arg2;
- (id)itemAtIndexPath:(id)arg1;
- (id)items;
- (id)keyPath;
- (void)moveItemAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfItemsInSection:(long long)arg1;
- (unsigned long long)numberOfSections;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)registerKVO;
- (void)removeAllItems;
- (void)removeItemAtIndex:(unsigned long long)arg1;
- (void)removeItems:(id)arg1;
- (void)removeItemsAtIndexes:(id)arg1;
- (void)removeItemsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)replaceItemAtIndex:(unsigned long long)arg1 withItem:(id)arg2;
- (void)replaceItemsAtIndexes:(id)arg1 withItemsFromArray:(id)arg2;
- (void)replaceItemsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withItemsFromArray:(id)arg2;
- (void)setItems:(id)arg1;
- (void)setKeyPath:(id)arg1;
- (void)setTarget:(id)arg1;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (id)target;
- (void)unregisterKVO;
- (void)updateItems:(id)arg1;

@end
