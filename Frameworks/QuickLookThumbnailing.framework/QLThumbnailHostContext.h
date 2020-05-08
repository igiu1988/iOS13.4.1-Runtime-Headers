/* Generated by EzioChiu
   Image: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

@interface QLThumbnailHostContext : NSExtensionContext <QLThumbnailHost> {
    <QLThumbnailSurfaceGeneratorProtocol> * _ioSurfaceGenerator;
    NSOperationQueue * _thumbnailGenerationConcurrenQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <QLThumbnailSurfaceGeneratorProtocol> *ioSurfaceGenerator;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSOperationQueue *thumbnailGenerationConcurrenQueue;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (void)generateThumbnailOfSize:(struct CGSize { double x1; double x2; })arg1 minimumSize:(double)arg2 scale:(double)arg3 badgeType:(unsigned long long)arg4 withItem:(id)arg5 ioSurfaceGenerator:(id)arg6 completionHandler:(id /* block */)arg7;
- (id)ioSurfaceGenerator;
- (void)ioSurfaceWithSize:(struct CGSize { double x1; double x2; })arg1 completion:(id /* block */)arg2;
- (id)protocolServiceWithErrorHandler:(id /* block */)arg1;
- (void)setIoSurfaceGenerator:(id)arg1;
- (void)setThumbnailGenerationConcurrenQueue:(id)arg1;
- (id)thumbnailGenerationConcurrenQueue;

@end
