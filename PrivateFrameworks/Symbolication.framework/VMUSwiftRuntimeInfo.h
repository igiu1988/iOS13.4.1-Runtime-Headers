/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUSwiftRuntimeInfo : NSObject {
    unsigned long long  _nativeWeakReferenceMarkerMask;
    unsigned long long  _nativeWeakReferenceMarkerValue;
    bool  _nativeWeakReferencePointerIsSideTable;
    unsigned long long  _nativeWeakReferencePointerMask;
    unsigned long long  _refcountIsSideTableMarkerMask;
    unsigned long long  _refcountIsSideTableMarkerValue;
    bool  _runtimeHasStableABI;
    VMUMutableClassInfo * _sideTableLayout;
    unsigned char  _sideTablePointerLeftShift;
    unsigned long long  _sideTablePointerMask;
    unsigned char  _sideTablePointerRightShift;
    VMUMutableClassInfo * _unownedExtraDataLayout;
}

@property (nonatomic, readonly) unsigned long long nativeWeakReferenceMarkerMask;
@property (nonatomic, readonly) unsigned long long nativeWeakReferenceMarkerValue;
@property (nonatomic, readonly) bool nativeWeakReferencePointerIsSideTable;
@property (nonatomic, readonly) unsigned long long nativeWeakReferencePointerMask;
@property (nonatomic, readonly) unsigned long long refcountIsSideTableMarkerMask;
@property (nonatomic, readonly) unsigned long long refcountIsSideTableMarkerValue;
@property (nonatomic, readonly) bool runtimeHasStableABI;
@property (nonatomic, readonly) VMUMutableClassInfo *sideTableLayout;
@property (nonatomic, readonly) unsigned char sideTablePointerLeftShift;
@property (nonatomic, readonly) unsigned long long sideTablePointerMask;
@property (nonatomic, readonly) unsigned char sideTablePointerRightShift;
@property (nonatomic, readonly) VMUMutableClassInfo *unownedExtraDataLayout;

- (void).cxx_destruct;
- (id)initWithSwiftCore:(struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })arg1 memoryReader:(id /* block */)arg2;
- (unsigned long long)nativeWeakReferenceMarkerMask;
- (unsigned long long)nativeWeakReferenceMarkerValue;
- (bool)nativeWeakReferencePointerIsSideTable;
- (unsigned long long)nativeWeakReferencePointerMask;
- (unsigned long long)refcountIsSideTableMarkerMask;
- (unsigned long long)refcountIsSideTableMarkerValue;
- (bool)runtimeHasStableABI;
- (id)sideTableLayout;
- (unsigned char)sideTablePointerLeftShift;
- (unsigned long long)sideTablePointerMask;
- (unsigned char)sideTablePointerRightShift;
- (id)unownedExtraDataLayout;

@end
