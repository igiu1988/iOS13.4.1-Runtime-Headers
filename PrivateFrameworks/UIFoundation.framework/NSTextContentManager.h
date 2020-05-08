/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSTextContentManager : NSObject <NSSecureCoding, NSTextElementProvider> {
    <NSTextContentManagerDelegate> * _delegate;
    NSMutableArray * _editHistory;
    unsigned long long  _maximumNumberOfUncachedElements;
    NSTextLayoutManager * _primaryTextLayoutManager;
    bool  _synchronizesTextLayoutManagersAutomatically;
    bool  _synchronizesToBackingStoreAutomatically;
    NSMutableArray * _textLayoutManagers;
    _Atomic unsigned long long  _transactionStack;
}

@property (readonly, copy) NSString *debugDescription;
@property <NSTextContentManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSTextRange *documentRange;
@property (readonly) bool hasEditingTransaction;
@property (readonly) unsigned long long hash;
@property unsigned long long maximumNumberOfUncachedElements;
@property NSTextLayoutManager *primaryTextLayoutManager;
@property (readonly) Class superclass;
@property bool synchronizesTextLayoutManagersAutomatically;
@property bool synchronizesToBackingStoreAutomatically;
@property (readonly, copy) NSArray *textLayoutManagers;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_decrementTransactionStack;
- (void)_incrementTransactionStack;
- (void)addEditActionInRange:(id)arg1 newTextRange:(id)arg2;
- (void)addTextLayoutManager:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)documentRange;
- (void)encodeWithCoder:(id)arg1;
- (id)enumerateTextElementsFromLocation:(id)arg1 options:(long long)arg2 usingBlock:(id /* block */)arg3;
- (bool)hasEditingTransaction;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)maximumNumberOfUncachedElements;
- (void)performEditingTransactionWithBlock:(id /* block */)arg1;
- (id)primaryTextLayoutManager;
- (void)removeTextLayoutManager:(id)arg1;
- (void)replaceCharactersInRange:(id)arg1 withTextElements:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setMaximumNumberOfUncachedElements:(unsigned long long)arg1;
- (void)setPrimaryTextLayoutManager:(id)arg1;
- (void)setSynchronizesTextLayoutManagersAutomatically:(bool)arg1;
- (void)setSynchronizesToBackingStoreAutomatically:(bool)arg1;
- (bool)synchronizeTextLayoutManagers:(id /* block */)arg1;
- (bool)synchronizeToBackingStore:(id /* block */)arg1;
- (bool)synchronizesTextLayoutManagersAutomatically;
- (bool)synchronizesToBackingStoreAutomatically;
- (id)textElementsForRange:(id)arg1;
- (id)textLayoutManagers;

@end
