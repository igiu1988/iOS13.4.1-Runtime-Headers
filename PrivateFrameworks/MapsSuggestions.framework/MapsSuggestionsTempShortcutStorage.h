/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

@interface MapsSuggestionsTempShortcutStorage : NSObject <MapsSuggestionsShortcutStorage> {
    NSString * _path;
    struct Queue { 
        NSObject<OS_dispatch_queue> *_innerQueue; 
        NSString *_name; 
    }  _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

+ (id)path;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)addOrUpdateShortcuts:(id)arg1 handler:(id /* block */)arg2;
- (id)init;
- (bool)loadAllShortcutsWithHandler:(id /* block */)arg1;
- (bool)moveShortcut:(id)arg1 afterShortcut:(id)arg2 handler:(id /* block */)arg3;
- (bool)moveShortcut:(id)arg1 beforeShortcut:(id)arg2 handler:(id /* block */)arg3;
- (bool)moveShortcut:(id)arg1 toIndex:(long long)arg2 handler:(id /* block */)arg3;
- (bool)moveShortcutToBack:(id)arg1 handler:(id /* block */)arg2;
- (bool)moveShortcutToFront:(id)arg1 handler:(id /* block */)arg2;
- (bool)removeShortcuts:(id)arg1 handler:(id /* block */)arg2;
- (void)setChangeHandler:(id /* block */)arg1;
- (id)uniqueName;

@end
