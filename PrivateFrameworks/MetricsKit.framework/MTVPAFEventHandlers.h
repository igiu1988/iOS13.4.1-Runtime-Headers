/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
 */

@interface MTVPAFEventHandlers : MTEventHandlers {
    MTBaseEventDataProvider * _base;
    MTMediaActivityEventHandler * _playStart;
    MTMediaActivityEventHandler * _playStop;
    MTMediaActivityEventHandler * _seekStart;
    MTMediaActivityEventHandler * _seekStop;
}

@property (nonatomic, readonly) MTMediaActivityEventHandler *playStart;
@property (nonatomic, readonly) MTMediaActivityEventHandler *playStop;
@property (nonatomic, readonly) MTMediaActivityEventHandler *seekStart;
@property (nonatomic, readonly) MTMediaActivityEventHandler *seekStop;

- (void).cxx_destruct;
- (id)base;
- (id)playStart;
- (id)playStop;
- (id)seekStart;
- (id)seekStop;
- (void)setBase:(id)arg1;

@end
