/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

@interface RPDeviceContext : NSObject {
    RPDevice * _device;
    RPLegacyDeviceDiscovery * _discovery;
    bool  _reported;
    RPLegacySession * _session;
    int  _state;
}

@property (nonatomic, retain) RPDevice *device;
@property (nonatomic, retain) RPLegacyDeviceDiscovery *discovery;
@property (nonatomic) bool reported;
@property (nonatomic, retain) RPLegacySession *session;
@property (nonatomic) int state;

- (void).cxx_destruct;
- (id)device;
- (id)discovery;
- (void)invalidate;
- (void)pairVerify;
- (bool)reported;
- (id)session;
- (void)setDevice:(id)arg1;
- (void)setDiscovery:(id)arg1;
- (void)setReported:(bool)arg1;
- (void)setSession:(id)arg1;
- (void)setState:(int)arg1;
- (int)state;
- (void)systemInfoResponse:(id)arg1 error:(id)arg2;

@end
