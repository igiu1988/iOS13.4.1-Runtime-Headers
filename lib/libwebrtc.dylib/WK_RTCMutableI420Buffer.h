/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
 */

@interface WK_RTCMutableI420Buffer : WK_RTCI420Buffer <RTCMutableI420Buffer>

@property (nonatomic, readonly) int chromaHeight;
@property (nonatomic, readonly) int chromaWidth;
@property (nonatomic, readonly) const char *dataU;
@property (nonatomic, readonly) const char *dataV;
@property (nonatomic, readonly) const char *dataY;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int height;
@property (nonatomic, readonly) char *mutableDataU;
@property (nonatomic, readonly) char *mutableDataV;
@property (nonatomic, readonly) char *mutableDataY;
@property (nonatomic, readonly) int strideU;
@property (nonatomic, readonly) int strideV;
@property (nonatomic, readonly) int strideY;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int width;

- (char *)mutableDataU;
- (char *)mutableDataV;
- (char *)mutableDataY;

@end
