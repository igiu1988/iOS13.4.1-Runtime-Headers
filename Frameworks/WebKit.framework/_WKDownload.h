/* Generated by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface _WKDownload : NSObject <NSCopying, WKObject> {
    struct ObjectStorage<WebKit::DownloadProxy> { 
        struct type { 
            unsigned char __lx[400]; 
        } data; 
    }  _download;
}

@property (readonly) struct Object { int (**x1)(); id x2; }*_apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WKFrameInfo *originatingFrame;
@property (nonatomic, readonly) WKWebView *originatingWebView;
@property (nonatomic, readonly, copy) NSArray *redirectChain;
@property (nonatomic, readonly) NSURLRequest *request;
@property (nonatomic, readonly) NSData *resumeData;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool wasUserInitiated;

- (struct Object { int (**x1)(); id x2; }*)_apiObject;
- (void)cancel;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)originatingFrame;
- (id)originatingWebView;
- (void)publishProgressAtURL:(id)arg1;
- (id)redirectChain;
- (id)request;
- (id)resumeData;
- (bool)wasUserInitiated;

@end
