/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

@interface TVRCDeviceQuery : NSObject {
    <TVRCDeviceQueryDelegate> * _delegate;
}

@property (nonatomic) <TVRCDeviceQueryDelegate> *delegate;
@property (nonatomic, readonly, copy) NSSet *devices;

+ (id)_allDiscoveredDevices;
+ (void)_allDiscoveredDevicesDidUpdate:(id)arg1;
+ (void)fetchActiveEndpointUIDWithCompletion:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)devices;
- (void)setDelegate:(id)arg1;
- (void)start;
- (void)stop;

@end
