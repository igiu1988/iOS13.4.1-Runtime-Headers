/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKDirectoryBackedConfigurationSource : NSObject <CRKConfigurationSource, CRKFileBackedConfigurationSourceDelegate> {
    NSURL * mDirectoryURL;
    CRKFileBackedConfigurationSource * mFileBackedSource;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)fetchConfiguration:(id /* block */)arg1;
- (void)fileBackedConfigurationSource:(id)arg1 didDeleteConfigurationAtURL:(id)arg2 inDirectory:(id)arg3;
- (id)init;
- (id)initWithDirectoryURL:(id)arg1 fileName:(id)arg2;
- (id)initWithDirectoryURL:(id)arg1 fileName:(id)arg2 callbackQueue:(id)arg3;
- (bool)isDirectoryEmpty:(id)arg1;
- (void)setConfiguration:(id)arg1 completion:(id /* block */)arg2;

@end
