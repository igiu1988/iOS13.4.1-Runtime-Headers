/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
 */

@interface TVRUICoreDeviceQuery : NSObject <TVRCDeviceQueryDelegate, TVRUIDeviceQuery> {
    <TVRUIDeviceSearchDelegate> * _delegate;
    NSMutableDictionary * _deviceList;
    bool  _nearbyDeviceAdded;
    TVRCDeviceQuery * _query;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <TVRUIDeviceSearchDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableDictionary *deviceList;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool nearbyDeviceAdded;
@property (nonatomic, retain) TVRCDeviceQuery *query;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (id)deviceList;
- (void)deviceQueryDidUpdateDevices:(id)arg1;
- (bool)hasStarted;
- (bool)nearbyDeviceAdded;
- (id)query;
- (void)setDelegate:(id)arg1;
- (void)setDeviceList:(id)arg1;
- (void)setNearbyDeviceAdded:(bool)arg1;
- (void)setQuery:(id)arg1;
- (void)startQuery:(id)arg1;
- (void)stop;

@end