/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebPreviewConverterDelegate : NSObject {
    struct WeakPtr<WebCore::PreviewPlatformDelegate> { 
        struct RefPtr<WTF::WeakPtrImpl, WTF::DumbPtrTraits<WTF::WeakPtrImpl> > { 
            struct WeakPtrImpl {} *m_ptr; 
        } m_impl; 
    }  _delegate;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2 lengthReceived:(long long)arg3;
- (void)connectionDidFinishLoading:(id)arg1;
- (id)initWithDelegate:(struct PreviewPlatformDelegate { int (**x1)(); struct WeakPtrFactory<WebCore::PreviewPlatformDelegate> { struct RefPtr<WTF::WeakPtrImpl, WTF::DumbPtrTraits<WTF::WeakPtrImpl> > { struct WeakPtrImpl {} *x_1_2_1; } x_2_1_1; } x2; }*)arg1;

@end