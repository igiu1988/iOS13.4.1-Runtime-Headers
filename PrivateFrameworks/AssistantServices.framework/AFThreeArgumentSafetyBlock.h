/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFThreeArgumentSafetyBlock : NSObject {
    id /* block */  _block;
    struct atomic_flag { 
        _Atomic bool _Value; 
    }  _hasInvoked;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithBlock:(id /* block */)arg1;
- (bool)invokeWithValue:(id)arg1 andValue:(id)arg2 andValue:(id)arg3;

@end
