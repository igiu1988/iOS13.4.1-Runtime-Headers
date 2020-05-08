/* Generated by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureMetadataOutputInternal : NSObject {
    AVCaptureDataOutputDelegateCallbackHelper * delegateCallbackHelper;
    long long  faceTrackingMaxFaces;
    bool  faceTrackingMetadataObjectTypesAvailable;
    bool  faceTrackingUsesFaceRecognition;
    NSArray * metadataObjectTypes;
    bool  offlineVideoStabilizationMotionMetadataObjectTypesAvailable;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  rectOfInterest;
    AVWeakReference * weakReference;
}

- (void)dealloc;
- (id)init;

@end
