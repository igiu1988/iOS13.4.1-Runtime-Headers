/* Generated by EzioChiu
   Image: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

@interface QLThumbnailItem : NSObject <NSSecureCoding> {
    NSString * _computedContentType;
    NSData * _data;
    unsigned long long  _downloadStatus;
    long long  _fileExtensionHandle;
    NSString * _fileExtensionToken;
    bool  _needsAccessToExternalResources;
    NSString * _overriddenContentType;
    NSURL * _url;
    FPSandboxingURLWrapper * _urlWrapperForExtension;
    FPSandboxingURLWrapper * _urlWrapperForParentDirectory;
}

@property (copy) NSString *computedContentType;
@property (nonatomic, readonly) NSString *contentType;
@property (readonly) NSData *data;
@property unsigned long long downloadStatus;
@property (nonatomic, readonly) unsigned long long itemType;
@property bool needsAccessToExternalResources;
@property (nonatomic, copy) NSString *overriddenContentType;
@property (readonly) NSURL *url;
@property (readonly) FPSandboxingURLWrapper *urlWrapperForExtension;
@property (readonly) FPSandboxingURLWrapper *urlWrapperForParentDirectory;

// Image: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)computedContentType;
- (void)consumeFileExtension;
- (id)data;
- (void)dealloc;
- (unsigned long long)downloadStatus;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 contentType:(id)arg2;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 URLWrapperForExtension:(id)arg2;
- (id)initWithURL:(id)arg1 URLWrapperForExtension:(id)arg2 URLWrapperForParentDirectory:(id)arg3;
- (void)issueFileExtension;
- (bool)needsAccessToExternalResources;
- (bool)needsDownload;
- (id)overriddenContentType;
- (void)setComputedContentType:(id)arg1;
- (void)setDownloadStatus:(unsigned long long)arg1;
- (void)setNeedsAccessToExternalResources:(bool)arg1;
- (void)setOverriddenContentType:(id)arg1;
- (id)url;
- (id)urlWrapperForExtension;
- (id)urlWrapperForParentDirectory;

// Image: /System/Library/PrivateFrameworks/QuickLookSupport.framework/QuickLookSupport

- (id)contentType;
- (unsigned long long)itemType;

@end
