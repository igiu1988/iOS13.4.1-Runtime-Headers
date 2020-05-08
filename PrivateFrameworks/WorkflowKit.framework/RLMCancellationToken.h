/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface RLMCancellationToken : RLMNotificationToken {
    RLMRealm * _realm;
    struct NotificationToken { 
        struct AtomicSharedPtr<realm::_impl::CollectionNotifier, true> { 
            struct shared_ptr<realm::_impl::CollectionNotifier> { 
                struct CollectionNotifier {} *__ptr_; 
                struct __shared_weak_count {} *__cntrl_; 
            } m_ptr; 
        } m_notifier; 
        unsigned long long m_token; 
    }  _token;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithToken:(struct NotificationToken { struct AtomicSharedPtr<realm::_impl::CollectionNotifier, true> { struct shared_ptr<realm::_impl::CollectionNotifier> { struct CollectionNotifier {} *x_1_2_1; struct __shared_weak_count {} *x_1_2_2; } x_1_1_1; } x1; unsigned long long x2; })arg1 realm:(id)arg2;
- (void)invalidate;
- (id)realm;
- (void)suppressNextNotification;

@end
