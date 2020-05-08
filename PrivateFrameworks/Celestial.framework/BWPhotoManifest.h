/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWPhotoManifest : NSObject {
    NSMutableDictionary * _bufferPtrValueToPhotoDescriptor;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _bufferPtrValueToPhotoDescriptorLock;
    NSString * _captureRequestIdentifier;
    NSArray * _photoDescriptors;
}

@property (nonatomic, readonly) NSString *captureRequestIdentifier;
@property (nonatomic, readonly) NSArray *photoDescriptors;

- (id)captureRequestIdentifier;
- (void)dealloc;
- (id)description;
- (id)descriptorForIdentifier:(id)arg1;
- (id)descriptorForSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (id)initWithDescriptors:(id)arg1 captureRequestIdentifier:(id)arg2;
- (id)photoDescriptors;

@end
