/* Generated by EzioChiu.
 */

@protocol CKKnowledgeStoreWriteBatch

@required

- (void)setObject:(id)arg1 forKey:(NSString *)arg2;
- (bool)writeAndReturnError:(id*)arg1;
- (void)writeWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
