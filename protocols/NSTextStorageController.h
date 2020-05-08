/* Generated by EzioChiu.
 */

@protocol NSTextStorageController <NSObject>

@required

- (void)beginEditingTransaction;
- (void)endEditingTransaction;
- (void)processEditingForTextStorage:(NSTextStorage *)arg1 edited:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 changeInLength:(long long)arg4 invalidatedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5;
- (void)setTextStorage:(NSTextStorage *)arg1;
- (NSTextStorage *)textStorage;

@end
