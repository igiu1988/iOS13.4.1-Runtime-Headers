/* Generated by EzioChiu
   Image: /usr/lib/swift/libswiftCore.dylib
 */

@interface __SwiftNativeNSArrayBase : NSObject {
    struct RefCounts<swift::RefCountBitsT<swift::RefCountIsInline> > { 
        struct atomic<swift::RefCountBitsT<swift::RefCountIsInline> > { 
            struct __cxx_atomic_impl<swift::RefCountBitsT<swift::RefCountIsInline>, std::__1::__cxx_atomic_base_impl<swift::RefCountBitsT<swift::RefCountIsInline> > > { 
                _Atomic struct RefCountBitsT<swift::RefCountIsInline> {} __a_value; 
            } __a_; 
        } refCounts; 
    }  refCounts;
}

+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (bool)_isDeallocating;
- (bool)_tryRetain;
- (bool)allowsWeakReference;
- (id)autorelease;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (bool)retainWeakReference;

@end
