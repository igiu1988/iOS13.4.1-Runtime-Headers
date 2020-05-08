/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWPixelBufferPool : NSObject {
    NSDictionary * _additionalPixelBufferAttributes;
    unsigned long long  _capacity;
    bool  _clientProvidesPool;
    BWMemoryPool * _memoryPool;
    NSString * _name;
    struct __CVPixelBufferPool { } * _pixelBufferPool;
    NSDictionary * _pixelBufferPoolAuxAttributes;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _pixelBufferPoolConfigurationLock;
    int  _pixelBufferPoolCreateError;
    BWVideoFormat * _videoFormat;
}

@property (nonatomic, readonly) unsigned long long capacity;
@property (nonatomic, readonly) struct __CVPixelBufferPool { }*cvPixelBufferPool;
@property (nonatomic, readonly) struct __CFDictionary { }*cvPixelBufferPoolAuxAttributes;
@property (readonly) NSString *name;
@property (nonatomic, readonly) unsigned int pixelFormat;

+ (void)initialize;

- (int)_ensurePool;
- (void)_flush;
- (struct __CVBuffer { }*)_newPixelBuffer;
- (unsigned long long)capacity;
- (struct __CVPixelBufferPool { }*)cvPixelBufferPool;
- (struct __CFDictionary { }*)cvPixelBufferPoolAuxAttributes;
- (void)dealloc;
- (void)enumerateSurfacesUsingBlock:(id /* block */)arg1;
- (void)flush;
- (void)flushWithCompletionHandler:(id /* block */)arg1;
- (id)initWithVideoFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3;
- (id)initWithVideoFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3 additionalPixelBufferAttributes:(id)arg4;
- (id)initWithVideoFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3 clientProvidesPool:(bool)arg4 memoryPool:(id)arg5;
- (id)initWithVideoFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3 memoryPool:(id)arg4;
- (id)name;
- (struct __CVBuffer { }*)newPixelBuffer;
- (unsigned int)pixelFormat;
- (int)preallocate;
- (void)preallocateWithCompletionHandler:(id /* block */)arg1;
- (void)prefetchWithCompletionHandler:(id /* block */)arg1;
- (void)setCVPixelBufferPool:(struct __CVPixelBufferPool { }*)arg1 attributes:(struct __CFDictionary { }*)arg2;
- (void)setCapacity:(unsigned long long)arg1;

@end
