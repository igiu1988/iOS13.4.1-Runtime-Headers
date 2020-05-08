/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

@interface RBJetsamBandProvider : NSObject <RBJetsamBandProviding> {
    <RBEntitlementManaging> * _entitlementManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)_backgroundJetsamPriorityForProcess:(id)arg1 state:(id)arg2;
- (int)_foregroundJetsamPriorityForProcess:(id)arg1 state:(id)arg2;
- (int)_inactiveJetsamPriorityForProcess:(id)arg1 state:(id)arg2;
- (int)defaultPriorityForProcess:(id)arg1 inBand:(unsigned char)arg2;
- (id)init;
- (id)initWithEntitlementManager:(id)arg1;
- (int)jetsamPriorityForProcess:(id)arg1 withState:(id)arg2;

@end