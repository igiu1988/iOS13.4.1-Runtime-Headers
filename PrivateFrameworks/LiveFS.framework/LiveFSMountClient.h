/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/LiveFS.framework/LiveFS
 */

@interface LiveFSMountClient : NSObject {
    NSXPCConnection * conn;
    NSObject<LiveFSMounterClient><LiveFSMounterClientHelper> * helper;
    NSString * provider;
}

+ (id)newClient;
+ (id)newClientForProvider:(id)arg1;

- (void).cxx_destruct;
- (id)fixupConnectionFor:(id)arg1;
- (id)initWithProvider:(id)arg1;
- (id)mounts:(id*)arg1;
- (id)setVerboseLevel:(int)arg1;
- (id)unmountVolume:(id)arg1 how:(int)arg2;
- (id)unmountVolumeByID:(unsigned int)arg1 how:(int)arg2;
- (void)unmountVolumeNamed:(id)arg1 providerName:(id)arg2 domainError:(id)arg3 how:(int)arg4 reply:(id /* block */)arg5;
- (int)verboseLevelOrError:(id*)arg1;

@end
