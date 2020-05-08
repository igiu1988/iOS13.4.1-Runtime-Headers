/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
 */

@interface TMLBinding : NSObject <TMLValue> {
    int  _bindCount;
    NSMutableArray * _binders;
    bool  _didAttachToTargetViaTMLObservable;
    int  _flags;
    NSString * _keyPath;
    id  _target;
    id  _value;
    unsigned long long  _valueType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) id target;

+ (id)bindingForTarget:(id)arg1 withKeyPath:(id)arg2;
+ (id)bindingForTarget:(id)arg1 withKeyPath:(id)arg2 valueType:(unsigned long long)arg3;

- (void).cxx_destruct;
- (void)bind:(id)arg1;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 keyPath:(id)arg2 valueType:(unsigned long long)arg3;
- (void)observeTarget;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)target;
- (void)tmlObserveValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)unbind:(id)arg1;
- (void)unobserveTarget;
- (id)value;
- (unsigned long long)valueType;

@end
