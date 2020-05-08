/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
 */

@interface NFMultiDelegate : NSObject {
    NSHashTable * _children;
    Protocol * _delegateProtocol;
}

@property (nonatomic, readonly) NSHashTable *children;
@property (nonatomic, readonly) id delegate;
@property (nonatomic, readonly) Protocol *delegateProtocol;

- (void).cxx_destruct;
- (void)addDelegate:(id)arg1;
- (id)children;
- (bool)conformsToProtocol:(id)arg1;
- (id)delegate;
- (id)delegateProtocol;
- (void)forwardInvocation:(id)arg1;
- (id)initWithDelegate:(id)arg1 delegateProtocol:(id)arg2;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)removeDelegate:(id)arg1;
- (void)replaceDelegate:(id)arg1 withDelegate:(id)arg2;
- (bool)respondsToSelector:(SEL)arg1;

@end