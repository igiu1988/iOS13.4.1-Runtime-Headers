/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
 */

@interface TSKeyCommandManager : NSObject {
    void hasBeenTraversed;
    void keyCommandManager;
    void keyCommandProvider;
}

@property (nonatomic) bool hasBeenTraversed;

- (void).cxx_destruct;
- (void)handleKeyPressWithCommand:(id)arg1;
- (void)handleKeyPressWithKey:(id)arg1 flags:(long long)arg2;
- (bool)hasBeenTraversed;
- (id)init;
- (void)invalidate;
- (id)keyCommands;
- (void)registerController:(id)arg1 withSelector:(SEL)arg2;
- (void)registerKeys:(id)arg1;
- (void)registerProviderWithScrollView:(id)arg1;
- (void)setHasBeenTraversed:(bool)arg1;

@end
