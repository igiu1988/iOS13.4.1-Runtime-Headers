/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
 */

@interface TRIControlManager : NSObject <TRIXPCMessageHandling> {
    TRIXPCService * _service;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)instance;

- (void).cxx_destruct;
- (id)handleMessage:(id)arg1 error:(id*)arg2;
- (id)init;
- (void)start;

@end
