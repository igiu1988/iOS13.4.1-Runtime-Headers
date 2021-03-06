/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/BookUtility.framework/BookUtility
 */

@interface BUCountingAssertionProvider : NSObject {
    unsigned long long  _count;
    <BUCountingAssertionProviderDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (bool)_beginAssertion;
- (bool)_endAssertion;
- (id)initWithDelegate:(id)arg1;
- (id)newAssertion;

@end
