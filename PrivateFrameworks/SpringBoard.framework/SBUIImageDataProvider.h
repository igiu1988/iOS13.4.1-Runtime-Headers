/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBUIImageDataProvider : NSObject <XBSnapshotDataProvider> {
    bool  _allowIOSurface;
    SBSnapshotDataProviderContext * _context;
    UIImage * _image;
    double  _scaleFactor;
}

@property (nonatomic, readonly, retain) XBSnapshotDataProviderContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)context;
- (id)fetchImage;
- (id)initWithImage:(id)arg1 context:(id)arg2 scaleFactor:(double)arg3 allowIOSurface:(bool)arg4;

@end
