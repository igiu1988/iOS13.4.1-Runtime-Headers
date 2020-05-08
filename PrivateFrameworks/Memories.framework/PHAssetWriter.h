/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface PHAssetWriter : NSObject {
    PHAssetRepresentation * _assetRepresentation;
    id /* block */  _completionHandler;
    NSURL * _destinationURL;
    bool  _networkAccessAllowed;
    id /* block */  _progressHandler;
    NSURL * _sourceUrl;
    bool  _stop;
}

@property (nonatomic, retain) PHAssetRepresentation *assetRepresentation;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) NSURL *destinationURL;
@property (nonatomic) bool networkAccessAllowed;
@property (nonatomic, copy) id /* block */ progressHandler;
@property (nonatomic, retain) NSURL *sourceUrl;
@property bool stop;

+ (id)assetWriterForAssetRepresentation:(id)arg1;
+ (id)assetWriterForIdentifierURL:(id)arg1;

- (void).cxx_destruct;
- (id)assetRepresentation;
- (id /* block */)completionHandler;
- (id)destinationURL;
- (unsigned long long)estimatedOutputSizeWithError:(id*)arg1;
- (id)initWithAssetRepresentation:(id)arg1;
- (id)initWithSourceURL:(id)arg1;
- (bool)networkAccessAllowed;
- (id /* block */)progressHandler;
- (id)request;
- (void)setAssetRepresentation:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDestinationURL:(id)arg1;
- (void)setNetworkAccessAllowed:(bool)arg1;
- (void)setProgressHandler:(id /* block */)arg1;
- (void)setSourceUrl:(id)arg1;
- (void)setStop:(bool)arg1;
- (id)sourceUrl;
- (void)startWritingWithProgressHandler:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (bool)stop;
- (void)stopWriting;
- (id)transfer;
- (id)write;

@end
