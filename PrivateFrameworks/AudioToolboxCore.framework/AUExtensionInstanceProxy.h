/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
 */

@interface AUExtensionInstanceProxy : NSObject {
    struct AUv3InstanceBase { int (**x1)(); int (*x2)(); int (*x3)(); int (*x4)(); void *x5; struct OpaqueAudioComponentInstance {} *x6; struct AudioComponentDescription { unsigned int x_7_1_1; unsigned int x_7_1_2; unsigned int x_7_1_3; unsigned int x_7_1_4; unsigned int x_7_1_5; } x7; id x8; id x9; struct vector<std::__1::unique_ptr<AUv3InstanceBase::ClientPropertyListener, std::__1::default_delete<AUv3InstanceBase::ClientPropertyListener> >, std::__1::allocator<std::__1::unique_ptr<AUv3InstanceBase::ClientPropertyListener, std::__1::default_delete<AUv3InstanceBase::ClientPropertyListener> > > > { struct unique_ptr<AUv3InstanceBase::ClientPropertyListener, std::__1::default_delete<AUv3InstanceBase::ClientPropertyListener> > {} *x_10_1_1; struct unique_ptr<AUv3InstanceBase::ClientPropertyListener, std::__1::default_delete<AUv3InstanceBase::ClientPropertyListener> > {} *x_10_1_2; struct __compressed_pair<std::__1::unique_ptr<AUv3InstanceBase::ClientPropertyListener, std::__1::default_delete<AUv3InstanceBase::ClientPropertyListener> > *, std::__1::allocator<std::__1::unique_ptr<AUv3InstanceBase::ClientPropertyListener, std::__1::default_delete<AUv3InstanceBase::ClientPropertyListener> > > > { struct unique_ptr<AUv3InstanceBase::ClientPropertyListener, std::__1::default_delete<AUv3InstanceBase::ClientPropertyListener> > {} *x_3_2_1; } x_10_1_3; } x10; } * _auInstance;
}

@property (nonatomic) struct AUv3InstanceBase { int (**x1)(); int (*x2)(); int (*x3)(); int (*x4)(); void *x5; struct OpaqueAudioComponentInstance {} *x6; struct AudioComponentDescription { unsigned int x_7_1_1; unsigned int x_7_1_2; unsigned int x_7_1_3; unsigned int x_7_1_4; unsigned int x_7_1_5; } x7; id x8; id x9; /* Warning: unhandled struct encoding: '{vector<std::__1::unique_ptr<AUv3InstanceBase::ClientPropertyListener' */ struct x10; }*auInstance; /* unknown property attribute:  true> >=Q}}}}{HostCallbackInfo=^v^?^?^?^?}} */

- (struct AUv3InstanceBase { int (**x1)(); int (*x2)(); int (*x3)(); int (*x4)(); void *x5; struct OpaqueAudioComponentInstance {} *x6; struct AudioComponentDescription { unsigned int x_7_1_1; unsigned int x_7_1_2; unsigned int x_7_1_3; unsigned int x_7_1_4; unsigned int x_7_1_5; } x7; id x8; id x9; struct vector<std::__1::unique_ptr<AUv3InstanceBase::ClientPropertyListener, std::__1::default_delete<AUv3InstanceBase::ClientPropertyListener> >, std::__1::allocator<std::__1::unique_ptr<AUv3InstanceBase::ClientPropertyListener, std::__1::default_delete<AUv3InstanceBase::ClientPropertyListener> > > > { struct unique_ptr<AUv3InstanceBase::ClientPropertyListener, std::__1::default_delete<AUv3InstanceBase::ClientPropertyListener> > {} *x_10_1_1; struct unique_ptr<AUv3InstanceBase::ClientPropertyListener, std::__1::default_delete<AUv3InstanceBase::ClientPropertyListener> > {} *x_10_1_2; struct __compressed_pair<std::__1::unique_ptr<AUv3InstanceBase::ClientPropertyListener, std::__1::default_delete<AUv3InstanceBase::ClientPropertyListener> > *, std::__1::allocator<std::__1::unique_ptr<AUv3InstanceBase::ClientPropertyListener, std::__1::default_delete<AUv3InstanceBase::ClientPropertyListener> > > > { struct unique_ptr<AUv3InstanceBase::ClientPropertyListener, std::__1::default_delete<AUv3InstanceBase::ClientPropertyListener> > {} *x_3_2_1; } x_10_1_3; } x10; }*)auInstance;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setAuInstance:(struct AUv3InstanceBase { int (**x1)(); int (*x2)(); int (*x3)(); int (*x4)(); void *x5; struct OpaqueAudioComponentInstance {} *x6; struct AudioComponentDescription { unsigned int x_7_1_1; unsigned int x_7_1_2; unsigned int x_7_1_3; unsigned int x_7_1_4; unsigned int x_7_1_5; } x7; id x8; id x9; struct vector<std::__1::unique_ptr<AUv3InstanceBase::ClientPropertyListener, std::__1::default_delete<AUv3InstanceBase::ClientPropertyListener> >, std::__1::allocator<std::__1::unique_ptr<AUv3InstanceBase::ClientPropertyListener, std::__1::default_delete<AUv3InstanceBase::ClientPropertyListener> > > > { struct unique_ptr<AUv3InstanceBase::ClientPropertyListener, std::__1::default_delete<AUv3InstanceBase::ClientPropertyListener> > {} *x_10_1_1; struct unique_ptr<AUv3InstanceBase::ClientPropertyListener, std::__1::default_delete<AUv3InstanceBase::ClientPropertyListener> > {} *x_10_1_2; struct __compressed_pair<std::__1::unique_ptr<AUv3InstanceBase::ClientPropertyListener, std::__1::default_delete<AUv3InstanceBase::ClientPropertyListener> > *, std::__1::allocator<std::__1::unique_ptr<AUv3InstanceBase::ClientPropertyListener, std::__1::default_delete<AUv3InstanceBase::ClientPropertyListener> > > > { struct unique_ptr<AUv3InstanceBase::ClientPropertyListener, std::__1::default_delete<AUv3InstanceBase::ClientPropertyListener> > {} *x_3_2_1; } x_10_1_3; } x10; }*)arg1;

@end
