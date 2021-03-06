/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/EAFirmwareUpdater.framework/EAFirmwareUpdater
 */

@interface HSModel : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    <HSModelDelegate> * delegate;
}

- (void)dealloc;
- (bool)getHSModelForEngineMajorVersion:(unsigned long long)arg1 minorVersion:(unsigned long long)arg2 numHSModels:(unsigned long long)arg3 modelBuffer:(char *)arg4 length:(unsigned long long)arg5;
- (void)setDelegate:(id)arg1;

@end
