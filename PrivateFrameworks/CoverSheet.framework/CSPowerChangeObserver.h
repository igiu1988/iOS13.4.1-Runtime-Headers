/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

@interface CSPowerChangeObserver : NSObject {
    id /* block */  _block;
    bool  _connectedToPower;
    <NSObject> * _notificationToken;
    <CSPowerStatusProviding> * _statusProvider;
}

@property (nonatomic, copy) id /* block */ block;
@property (getter=isConnectedToPower, nonatomic) bool connectedToPower;

- (void).cxx_destruct;
- (id /* block */)block;
- (void)dealloc;
- (id)initWithStatusProvider:(id)arg1 notificationName:(id)arg2 updateBlock:(id /* block */)arg3;
- (bool)isConnectedToPower;
- (void)setBlock:(id /* block */)arg1;
- (void)setConnectedToPower:(bool)arg1;
- (void)setIsConnectedToPower:(bool)arg1;
- (void)update;

@end