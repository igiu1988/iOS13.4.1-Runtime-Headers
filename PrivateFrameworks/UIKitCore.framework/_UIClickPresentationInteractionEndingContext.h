/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIClickPresentationInteractionEndingContext : NSObject {
    id /* block */  _alongsideActions;
    id /* block */  _completion;
    bool  _didComplete;
    _UIClickPresentation * _presentation;
    unsigned long long  _reason;
}

@property (nonatomic, copy) id /* block */ alongsideActions;
@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic) bool didComplete;
@property (nonatomic) _UIClickPresentation *presentation;
@property (nonatomic) unsigned long long reason;

- (void).cxx_destruct;
- (id /* block */)alongsideActions;
- (id /* block */)completion;
- (bool)didComplete;
- (id)presentation;
- (unsigned long long)reason;
- (void)setAlongsideActions:(id /* block */)arg1;
- (void)setCompletion:(id /* block */)arg1;
- (void)setDidComplete:(bool)arg1;
- (void)setPresentation:(id)arg1;
- (void)setReason:(unsigned long long)arg1;

@end
