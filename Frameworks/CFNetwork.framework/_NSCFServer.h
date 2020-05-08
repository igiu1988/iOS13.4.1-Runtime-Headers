/* Generated by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface _NSCFServer : NSObject {
    NSDictionary * _configuration;
    bool  _enableCoprocessorInterface;
    NSString * _interface;
    NSObject<OS_tcp_listener> * _listener;
    NSNumber * _listenerID;
    long long  _listenerPort;
    long long  _type;
}

@property (retain) NSDictionary *configuration;
@property (getter=isCoprocessorInterfaceEnabled) bool enableCoprocessorInterface;
@property (retain) NSString *interface;
@property (retain) NSObject<OS_tcp_listener> *listener;
@property (retain) NSNumber *listenerID;
@property long long listenerPort;
@property long long type;

+ (id)adressesForInterface:(id)arg1;
+ (id)listeners;
+ (bool)startSocksServerWithPort:(long long)arg1;
+ (bool)stopAll;

- (void).cxx_destruct;
- (id)configuration;
- (void)dealloc;
- (id)init;
- (id)initWithType:(long long)arg1;
- (id)initWithType:(long long)arg1 port:(long long)arg2;
- (id)initWithType:(long long)arg1 port:(long long)arg2 interface:(id)arg3;
- (id)interface;
- (bool)isCoprocessorInterfaceEnabled;
- (id)listener;
- (id)listenerID;
- (long long)listenerPort;
- (void)setConfiguration:(id)arg1;
- (void)setEnableCoprocessorInterface:(bool)arg1;
- (void)setInterface:(id)arg1;
- (void)setListener:(id)arg1;
- (void)setListenerID:(id)arg1;
- (void)setListenerPort:(long long)arg1;
- (void)setType:(long long)arg1;
- (bool)start;
- (bool)startWithAcceptHandler:(id /* block */)arg1;
- (bool)stop;
- (long long)type;

@end
