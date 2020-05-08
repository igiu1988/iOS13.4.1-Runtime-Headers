/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNTraceRouteSimulatorEvent : NSObject {
    id /* block */  _completion;
    GEOLocation * _location;
    double  _timestamp;
}

@property (nonatomic, readonly) id /* block */ completion;
@property (nonatomic, readonly) GEOLocation *location;
@property (nonatomic, readonly) double timestamp;

- (void).cxx_destruct;
- (id /* block */)completion;
- (id)description;
- (id)initWithLocation:(id)arg1;
- (id)initWithTime:(double)arg1 completion:(id /* block */)arg2;
- (id)location;
- (double)timestamp;

@end