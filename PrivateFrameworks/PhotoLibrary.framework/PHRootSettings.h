/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PHRootSettings : PHSettings {
    PHImageManagerSettings * _imageManagerSettings;
    PHResourceDownloadSettings * _resourceDownloadSettings;
}

@property (nonatomic, readonly) PHImageManagerSettings *imageManagerSettings;
@property (nonatomic, readonly) PHResourceDownloadSettings *resourceDownloadSettings;

+ (id)settingsControllerModule;
+ (id)sharedSettings;

- (void).cxx_destruct;
- (id)imageManagerSettings;
- (id)parentSettings;
- (id)resourceDownloadSettings;

@end
