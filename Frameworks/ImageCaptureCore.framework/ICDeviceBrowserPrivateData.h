/* Generated by EzioChiu
   Image: /System/Library/Frameworks/ImageCaptureCore.framework/ImageCaptureCore
 */

@interface ICDeviceBrowserPrivateData : NSObject {
    bool  _browsing;
    id  _delegate;
    NSMutableArray * _internalDevices;
}

@property (getter=isBrowsing) bool browsing;
@property id delegate;
@property (retain) NSMutableArray *internalDevices;

- (void)dealloc;
- (id)delegate;
- (id)internalDevices;
- (bool)isBrowsing;
- (void)setBrowsing:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInternalDevices:(id)arg1;

@end
