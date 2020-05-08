/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

@interface _TVRCMediaRemoteEventTranslator : NSObject {
    _TVRCMROriginWrapper * _origin;
    _TVRCMRTelevisionWrapper * _television;
}

@property (nonatomic) _TVRCMROriginWrapper *origin;
@property (nonatomic) _TVRCMRTelevisionWrapper *television;
@property (nonatomic, readonly) _TVRCMRVirtualTouchDeviceWrapper *touchDevice;

- (void).cxx_destruct;
- (unsigned int)_commandForMediaButtonEvent:(id)arg1;
- (id)_commandOptionsForMediaButtonEvent:(id)arg1 command:(unsigned int)arg2;
- (struct _MRHIDButtonEvent { unsigned int x1; unsigned int x2; bool x3; })_createMRHIDButtonEventTemplateWithButtonType:(long long)arg1;
- (struct _MRHIDTouchEvent { union _MRHIDPoint { struct { float x_1_2_1; float x_1_2_2; } x_1_1_1; float x_1_1_2[2]; } x1; unsigned int x2; unsigned long long x3; unsigned int x4; })_createMRHIDTouchEvent:(id)arg1;
- (bool)_isMediaButtonEvent:(id)arg1;
- (id)origin;
- (void)sendButtonEvent:(id)arg1;
- (void)sendTouchEvent:(id)arg1 withDeviceID:(unsigned long long)arg2;
- (void)setOrigin:(id)arg1;
- (void)setTelevision:(id)arg1;
- (id)television;
- (id)touchDevice;

@end
