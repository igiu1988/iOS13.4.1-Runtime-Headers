/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBKeyboardSuppressionManager : NSObject {
    NSMutableDictionary * _keyboardSuppressionAssertions;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_setKeyboardSuppressed:(bool)arg1 forReason:(id)arg2 withPredicate:(id /* block */)arg3;
- (id)description;
- (id)init;
- (void)startSuppressingKeyboardWithReason:(id)arg1 predicate:(id /* block */)arg2;
- (void)stopSuppressingKeyboardWithReason:(id)arg1;

@end
