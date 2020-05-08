/* Generated by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVRoutingSessionDestination : NSObject {
    AVRoutingSessionDestinationInternal * _ivars;
}

@property (nonatomic, readonly) NSArray *outputDeviceDescriptions;
@property (nonatomic, readonly) float probability;
@property (nonatomic, readonly) bool providesExternalVideoPlayback;

- (bool)_canQueryOutputDeviceDescriptionsAndReturnCurrentValue:(id*)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithFigRoutingSessionDestination:(const struct __CFDictionary { }*)arg1;
- (id)outputDeviceDescriptions;
- (float)probability;
- (bool)providesExternalVideoPlayback;

@end
