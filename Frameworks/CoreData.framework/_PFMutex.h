/* Generated by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _PFMutex : NSObject <NSLocking> {
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
}

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (void)lock;
- (bool)tryLock;
- (void)unlock;

@end
