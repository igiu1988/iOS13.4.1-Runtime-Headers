/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXGThumbnailRequestQueue : NSObject {
    long long  _capacity;
    long long  _count;
    struct PXGThumbnailRequest { void *x1; unsigned long long x2; unsigned int x3; unsigned short x4; unsigned short x5; } * _requests;
}

@property (nonatomic) long long count;
@property (nonatomic, readonly) struct PXGThumbnailRequest { void *x1; unsigned long long x2; unsigned int x3; unsigned short x4; unsigned short x5; }*requests;

- (long long)count;
- (void)dealloc;
- (id)description;
- (void)enqueueRequestsWithItemRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 textureRequestIDs:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 displayAssetFetchResult:(id)arg3 targetSize:(struct CGSize { double x1; double x2; })arg4;
- (id)init;
- (void)removeAllRequests;
- (struct PXGThumbnailRequest { void *x1; unsigned long long x2; unsigned int x3; unsigned short x4; unsigned short x5; }*)requests;
- (void)setCount:(long long)arg1;
- (void)sortRequests;

@end
