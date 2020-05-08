/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AutoLoop.framework/AutoLoop
 */

@interface VideoAccessIndex : NSObject {
    AVAsset * asset;
    struct vector<CMTime, std::__1::allocator<CMTime> > { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<CMTime *, std::__1::allocator<CMTime> > { 
            struct { /* ? */ } *__value_; 
        } __end_cap_; 
    }  mFrameTimes;
    unsigned int  numFrames;
    VideoReaderRand * readerRand;
    AVAssetTrack * videoTrack;
}

@property (readonly) AVAsset *asset;
@property (retain) VideoReaderRand *readerRand;
@property (readonly) AVAssetTrack *videoTrack;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)asset;
- (int)getFrameAtIndex:(unsigned int)arg1 pixBuf:(struct __CVBuffer {}**)arg2;
- (id)initFromFile:(id)arg1 pixelFormat:(unsigned int)arg2 frameTimes:(const struct vector<CMTime, std::__1::allocator<CMTime> > { struct { /* ? */ } *x1; struct { /* ? */ } *x2; struct __compressed_pair<CMTime *, std::__1::allocator<CMTime> > { struct { /* ? */ } *x_3_1_1; } x3; }*)arg3;
- (id)readerRand;
- (void)setReaderRand:(id)arg1;
- (id)videoTrack;

@end
