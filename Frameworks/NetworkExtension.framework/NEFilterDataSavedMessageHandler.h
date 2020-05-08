/* Generated by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEFilterDataSavedMessageHandler : NSObject {
    id /* block */  _getVerdict;
    id /* block */  _handleVerdict;
}

@property (nonatomic, readonly) id /* block */ getVerdict;
@property (nonatomic, readonly) id /* block */ handleVerdict;

- (void).cxx_destruct;
- (void)enqueueWithFlow:(id)arg1 context:(id)arg2;
- (void)executeVerdictHandlerWithFlow:(id)arg1 verdict:(id)arg2 context:(id)arg3;
- (void)executeWithFlow:(id)arg1 context:(id)arg2;
- (id /* block */)getVerdict;
- (id /* block */)handleVerdict;
- (id)initWithGetVerdictBlock:(id /* block */)arg1 handleVerdictBlock:(id /* block */)arg2;

@end
