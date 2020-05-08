/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreRE.framework/CoreRE
 */

@interface IDSManagerImpl : NSObject <IDSServiceDelegatePrivate> {
    struct Config { 
        struct ServiceLocator {} *serviceLocator; 
        NSObject<OS_dispatch_queue> *dispatchQueue; 
        struct DynamicString { 
            struct Allocator {} *m_allocator; 
            char *m_buffer; 
            unsigned long long m_capacity; 
            unsigned long long m_length; 
        } serviceID; 
    }  _config;
    bool  _isListeningForInvites;
    IDSService * _service;
    struct Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity> > { 
        struct DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity> >::Subscription> { 
            struct Allocator {} *m_allocator; 
            unsigned long long m_capacity; 
            unsigned long long m_size; 
            unsigned int m_version; 
            struct Subscription {} *m_data; 
        } m_subscriptions; 
        struct DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity> >::SubscriptionLegacy> { 
            struct Allocator {} *m_allocator; 
            unsigned long long m_capacity; 
            unsigned long long m_size; 
            unsigned int m_version; 
            struct SubscriptionLegacy {} *m_data; 
        } m_subscriptionsLegacy; 
    }  m_acceptedInvite;
    struct DynamicArray<re::IDSInvite *> { 
        struct Allocator {} *m_allocator; 
        unsigned long long m_capacity; 
        unsigned long long m_size; 
        unsigned int m_version; 
        struct IDSInvite {} **m_data; 
    }  m_invites;
    struct Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite> > { 
        struct DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite> >::Subscription> { 
            struct Allocator {} *m_allocator; 
            unsigned long long m_capacity; 
            unsigned long long m_size; 
            unsigned int m_version; 
            struct Subscription {} *m_data; 
        } m_subscriptions; 
        struct DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite> >::SubscriptionLegacy> { 
            struct Allocator {} *m_allocator; 
            unsigned long long m_capacity; 
            unsigned long long m_size; 
            unsigned int m_version; 
            struct SubscriptionLegacy {} *m_data; 
        } m_subscriptionsLegacy; 
    }  m_receivedInvite;
    struct Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity> > { 
        struct DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity> >::Subscription> { 
            struct Allocator {} *m_allocator; 
            unsigned long long m_capacity; 
            unsigned long long m_size; 
            unsigned int m_version; 
            struct Subscription {} *m_data; 
        } m_subscriptions; 
        struct DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity> >::SubscriptionLegacy> { 
            struct Allocator {} *m_allocator; 
            unsigned long long m_capacity; 
            unsigned long long m_size; 
            unsigned int m_version; 
            struct SubscriptionLegacy {} *m_data; 
        } m_subscriptionsLegacy; 
    }  m_rejectedInvite;
    struct DynamicArray<re::IDSDiscoveryView *> { 
        struct Allocator {} *m_allocator; 
        unsigned long long m_capacity; 
        unsigned long long m_size; 
        unsigned int m_version; 
        struct IDSDiscoveryView {} **m_data; 
    }  m_views;
}

@property (nonatomic) struct Config { struct ServiceLocator {} *x1; id x2; struct DynamicString { struct Allocator {} *x_3_1_1; char *x_3_1_2; unsigned long long x_3_1_3; unsigned long long x_3_1_4; } x3; } config;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isListeningForInvites;
@property (nonatomic, retain) IDSService *service;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)acceptInvite:(struct IDSInvite { int (**x1)(); struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x_1_2_1; } x_2_1_1; } x2; struct SharedPtr<re::internal::WeakCount> { struct WeakCount {} *x_3_1_1; } x3; struct Allocator {} *x4; struct WeakPtr<re::IDSManager> { struct SharedPtr<re::internal::WeakCount> { struct WeakCount {} *x_1_2_1; } x_5_1_1; } x5; struct DynamicString { struct Allocator {} *x_6_1_1; char *x_6_1_2; unsigned long long x_6_1_3; unsigned long long x_6_1_4; } x6; struct SharedPtr<re::IDSDiscoveryIdentity> { struct IDSDiscoveryIdentity {} *x_7_1_1; } x7; struct SharedPtr<re::DiscoveryView> { struct DiscoveryView {} *x_8_1_1; } x8; }*)arg1;
- (struct Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity> > { struct DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity> >::Subscription> { struct Allocator {} *x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; unsigned int x_1_1_4; struct Subscription {} *x_1_1_5; } x1; struct DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity> >::SubscriptionLegacy> { struct Allocator {} *x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; unsigned int x_2_1_4; struct SubscriptionLegacy {} *x_2_1_5; } x2; }*)acceptedInviteEvent;
- (void)broadcastViewUpdate:(struct IDSDiscoveryView { int (**x1)(); struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x_1_2_1; } x_2_1_1; } x2; struct SharedPtr<re::internal::WeakCount> { struct WeakCount {} *x_3_1_1; } x3; struct Allocator {} *x4; struct WeakPtr<re::IDSManager> { struct SharedPtr<re::internal::WeakCount> { struct WeakCount {} *x_1_2_1; } x_5_1_1; } x5; struct Event<re::DiscoveryView, re::SharedPtr<re::DiscoveryIdentity> > { struct DynamicArray<re::Event<re::DiscoveryView, re::SharedPtr<re::DiscoveryIdentity> >::Subscription> { struct Allocator {} *x_1_2_1; unsigned long long x_1_2_2; unsigned long long x_1_2_3; unsigned int x_1_2_4; struct Subscription {} *x_1_2_5; } x_6_1_1; struct DynamicArray<re::Event<re::DiscoveryView, re::SharedPtr<re::DiscoveryIdentity> >::SubscriptionLegacy> { struct Allocator {} *x_2_2_1; unsigned long long x_2_2_2; unsigned long long x_2_2_3; unsigned int x_2_2_4; struct SubscriptionLegacy {} *x_2_2_5; } x_6_1_2; } x6; struct Event<re::DiscoveryView, re::SharedPtr<re::DiscoveryIdentity> > { struct DynamicArray<re::Event<re::DiscoveryView, re::SharedPtr<re::DiscoveryIdentity> >::Subscription> { struct Allocator {} *x_1_2_1; unsigned long long x_1_2_2; unsigned long long x_1_2_3; unsigned int x_1_2_4; struct Subscription {} *x_1_2_5; } x_7_1_1; struct DynamicArray<re::Event<re::DiscoveryView, re::SharedPtr<re::DiscoveryIdentity> >::SubscriptionLegacy> { struct Allocator {} *x_2_2_1; unsigned long long x_2_2_2; unsigned long long x_2_2_3; unsigned int x_2_2_4; struct SubscriptionLegacy {} *x_2_2_5; } x_7_1_2; } x7; }*)arg1;
- (struct Config { struct ServiceLocator {} *x1; id x2; struct DynamicString { struct Allocator {} *x_3_1_1; char *x_3_1_2; unsigned long long x_3_1_3; unsigned long long x_3_1_4; } x3; })config;
- (struct SharedPtr<re::IDSDiscoveryView> { struct IDSDiscoveryView {} *x1; })createDiscoveryViewWithDestinations:(id)arg1 destinations:(id)arg2;
- (struct SharedPtr<re::DiscoveryInvite> { struct DiscoveryInvite {} *x1; })createInviteWithDestinations:(struct Slice<re::DynamicString> { struct DynamicString {} *x1; unsigned long long x2; })arg1;
- (struct SharedPtr<re::DiscoveryInvite> { struct DiscoveryInvite {} *x1; })createInviteWithDiscoveryView:(struct SharedPtr<re::DiscoveryView> { struct DiscoveryView {} *x1; })arg1 destinations:(struct Slice<re::DynamicString> { struct DynamicString {} *x1; unsigned long long x2; })arg2;
- (struct SharedPtr<re::IDSDiscoveryIdentity> { struct IDSDiscoveryIdentity {} *x1; })createLocalIdentity;
- (void)dealloc;
- (id)discoveryViewToNSArray:(struct DiscoveryView { int (**x1)(); struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x_1_2_1; } x_2_1_1; } x2; struct SharedPtr<re::internal::WeakCount> { struct WeakCount {} *x_3_1_1; } x3; struct Allocator {} *x4; }*)arg1 to:(id)arg2;
- (struct IDSDiscoveryView { int (**x1)(); struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x_1_2_1; } x_2_1_1; } x2; struct SharedPtr<re::internal::WeakCount> { struct WeakCount {} *x_3_1_1; } x3; struct Allocator {} *x4; struct WeakPtr<re::IDSManager> { struct SharedPtr<re::internal::WeakCount> { struct WeakCount {} *x_1_2_1; } x_5_1_1; } x5; struct Event<re::DiscoveryView, re::SharedPtr<re::DiscoveryIdentity> > { struct DynamicArray<re::Event<re::DiscoveryView, re::SharedPtr<re::DiscoveryIdentity> >::Subscription> { struct Allocator {} *x_1_2_1; unsigned long long x_1_2_2; unsigned long long x_1_2_3; unsigned int x_1_2_4; struct Subscription {} *x_1_2_5; } x_6_1_1; struct DynamicArray<re::Event<re::DiscoveryView, re::SharedPtr<re::DiscoveryIdentity> >::SubscriptionLegacy> { struct Allocator {} *x_2_2_1; unsigned long long x_2_2_2; unsigned long long x_2_2_3; unsigned int x_2_2_4; struct SubscriptionLegacy {} *x_2_2_5; } x_6_1_2; } x6; struct Event<re::DiscoveryView, re::SharedPtr<re::DiscoveryIdentity> > { struct DynamicArray<re::Event<re::DiscoveryView, re::SharedPtr<re::DiscoveryIdentity> >::Subscription> { struct Allocator {} *x_1_2_1; unsigned long long x_1_2_2; unsigned long long x_1_2_3; unsigned int x_1_2_4; struct Subscription {} *x_1_2_5; } x_7_1_1; struct DynamicArray<re::Event<re::DiscoveryView, re::SharedPtr<re::DiscoveryIdentity> >::SubscriptionLegacy> { struct Allocator {} *x_2_2_1; unsigned long long x_2_2_2; unsigned long long x_2_2_3; unsigned int x_2_2_4; struct SubscriptionLegacy {} *x_2_2_5; } x_7_1_2; } x7; }*)discoveryViewWithGuid:(id)arg1;
- (struct IDSSessionService { int (**x1)(); }*)idsSessionService;
- (void)incomingInviteMessage:(struct IDSInvite { int (**x1)(); struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x_1_2_1; } x_2_1_1; } x2; struct SharedPtr<re::internal::WeakCount> { struct WeakCount {} *x_3_1_1; } x3; struct Allocator {} *x4; struct WeakPtr<re::IDSManager> { struct SharedPtr<re::internal::WeakCount> { struct WeakCount {} *x_1_2_1; } x_5_1_1; } x5; struct DynamicString { struct Allocator {} *x_6_1_1; char *x_6_1_2; unsigned long long x_6_1_3; unsigned long long x_6_1_4; } x6; struct SharedPtr<re::IDSDiscoveryIdentity> { struct IDSDiscoveryIdentity {} *x_7_1_1; } x7; struct SharedPtr<re::DiscoveryView> { struct DiscoveryView {} *x_8_1_1; } x8; }*)arg1 type:(id)arg2 message:(id)arg3 from:(id)arg4;
- (void)incomingInviteRequest:(id)arg1 payload:(id)arg2 from:(id)arg3;
- (void)incomingViewMessage:(struct IDSDiscoveryView { int (**x1)(); struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x_1_2_1; } x_2_1_1; } x2; struct SharedPtr<re::internal::WeakCount> { struct WeakCount {} *x_3_1_1; } x3; struct Allocator {} *x4; struct WeakPtr<re::IDSManager> { struct SharedPtr<re::internal::WeakCount> { struct WeakCount {} *x_1_2_1; } x_5_1_1; } x5; struct Event<re::DiscoveryView, re::SharedPtr<re::DiscoveryIdentity> > { struct DynamicArray<re::Event<re::DiscoveryView, re::SharedPtr<re::DiscoveryIdentity> >::Subscription> { struct Allocator {} *x_1_2_1; unsigned long long x_1_2_2; unsigned long long x_1_2_3; unsigned int x_1_2_4; struct Subscription {} *x_1_2_5; } x_6_1_1; struct DynamicArray<re::Event<re::DiscoveryView, re::SharedPtr<re::DiscoveryIdentity> >::SubscriptionLegacy> { struct Allocator {} *x_2_2_1; unsigned long long x_2_2_2; unsigned long long x_2_2_3; unsigned int x_2_2_4; struct SubscriptionLegacy {} *x_2_2_5; } x_6_1_2; } x6; struct Event<re::DiscoveryView, re::SharedPtr<re::DiscoveryIdentity> > { struct DynamicArray<re::Event<re::DiscoveryView, re::SharedPtr<re::DiscoveryIdentity> >::Subscription> { struct Allocator {} *x_1_2_1; unsigned long long x_1_2_2; unsigned long long x_1_2_3; unsigned int x_1_2_4; struct Subscription {} *x_1_2_5; } x_7_1_1; struct DynamicArray<re::Event<re::DiscoveryView, re::SharedPtr<re::DiscoveryIdentity> >::SubscriptionLegacy> { struct Allocator {} *x_2_2_1; unsigned long long x_2_2_2; unsigned long long x_2_2_3; unsigned int x_2_2_4; struct SubscriptionLegacy {} *x_2_2_5; } x_7_1_2; } x7; }*)arg1 type:(id)arg2 message:(id)arg3 from:(id)arg4;
- (id)initWithConfig:(struct Config { struct ServiceLocator {} *x1; id x2; struct DynamicString { struct Allocator {} *x_3_1_1; char *x_3_1_2; unsigned long long x_3_1_3; unsigned long long x_3_1_4; } x3; })arg1;
- (void)inviteAcceptedFrom:(struct IDSInvite { int (**x1)(); struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x_1_2_1; } x_2_1_1; } x2; struct SharedPtr<re::internal::WeakCount> { struct WeakCount {} *x_3_1_1; } x3; struct Allocator {} *x4; struct WeakPtr<re::IDSManager> { struct SharedPtr<re::internal::WeakCount> { struct WeakCount {} *x_1_2_1; } x_5_1_1; } x5; struct DynamicString { struct Allocator {} *x_6_1_1; char *x_6_1_2; unsigned long long x_6_1_3; unsigned long long x_6_1_4; } x6; struct SharedPtr<re::IDSDiscoveryIdentity> { struct IDSDiscoveryIdentity {} *x_7_1_1; } x7; struct SharedPtr<re::DiscoveryView> { struct DiscoveryView {} *x_8_1_1; } x8; }*)arg1 from:(id)arg2;
- (struct IDSInvite { int (**x1)(); struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x_1_2_1; } x_2_1_1; } x2; struct SharedPtr<re::internal::WeakCount> { struct WeakCount {} *x_3_1_1; } x3; struct Allocator {} *x4; struct WeakPtr<re::IDSManager> { struct SharedPtr<re::internal::WeakCount> { struct WeakCount {} *x_1_2_1; } x_5_1_1; } x5; struct DynamicString { struct Allocator {} *x_6_1_1; char *x_6_1_2; unsigned long long x_6_1_3; unsigned long long x_6_1_4; } x6; struct SharedPtr<re::IDSDiscoveryIdentity> { struct IDSDiscoveryIdentity {} *x_7_1_1; } x7; struct SharedPtr<re::DiscoveryView> { struct DiscoveryView {} *x_8_1_1; } x8; }*)inviteWithGuid:(id)arg1;
- (bool)isListeningForInvites;
- (bool)isLoggedIn;
- (bool)isValidDestinationsArray:(id)arg1;
- (bool)isValidInviteResponse:(id)arg1 message:(id)arg2;
- (bool)isValidViewUpdate:(id)arg1 message:(id)arg2;
- (bool)parseMessage:(id)arg1 payload:(id*)arg2 objectGUID:(id*)arg3 type:(id*)arg4;
- (struct Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite> > { struct DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite> >::Subscription> { struct Allocator {} *x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; unsigned int x_1_1_4; struct Subscription {} *x_1_1_5; } x1; struct DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite> >::SubscriptionLegacy> { struct Allocator {} *x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; unsigned int x_2_1_4; struct SubscriptionLegacy {} *x_2_1_5; } x2; }*)receivedInviteEvent;
- (struct Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity> > { struct DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity> >::Subscription> { struct Allocator {} *x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; unsigned int x_1_1_4; struct Subscription {} *x_1_1_5; } x1; struct DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity> >::SubscriptionLegacy> { struct Allocator {} *x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; unsigned int x_2_1_4; struct SubscriptionLegacy {} *x_2_1_5; } x2; }*)rejectedInviteEvent;
- (void)sendInviteRequest:(struct IDSInvite { int (**x1)(); struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x_1_2_1; } x_2_1_1; } x2; struct SharedPtr<re::internal::WeakCount> { struct WeakCount {} *x_3_1_1; } x3; struct Allocator {} *x4; struct WeakPtr<re::IDSManager> { struct SharedPtr<re::internal::WeakCount> { struct WeakCount {} *x_1_2_1; } x_5_1_1; } x5; struct DynamicString { struct Allocator {} *x_6_1_1; char *x_6_1_2; unsigned long long x_6_1_3; unsigned long long x_6_1_4; } x6; struct SharedPtr<re::IDSDiscoveryIdentity> { struct IDSDiscoveryIdentity {} *x_7_1_1; } x7; struct SharedPtr<re::DiscoveryView> { struct DiscoveryView {} *x_8_1_1; } x8; }*)arg1 destinations:(id)arg2;
- (void)sendMessage:(id)arg1 type:(id)arg2 objectGUID:(id)arg3 to:(id)arg4;
- (id)service;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)setConfig:(struct Config { struct ServiceLocator {} *x1; id x2; struct DynamicString { struct Allocator {} *x_3_1_1; char *x_3_1_2; unsigned long long x_3_1_3; unsigned long long x_3_1_4; } x3; })arg1;
- (void)setIsListeningForInvites:(bool)arg1;
- (void)setService:(id)arg1;
- (void)setupService;
- (void)startListeningForInvites;
- (void)stopListeningForInvites;
- (void)willDestroyDiscoveryView:(struct IDSDiscoveryView { int (**x1)(); struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x_1_2_1; } x_2_1_1; } x2; struct SharedPtr<re::internal::WeakCount> { struct WeakCount {} *x_3_1_1; } x3; struct Allocator {} *x4; struct WeakPtr<re::IDSManager> { struct SharedPtr<re::internal::WeakCount> { struct WeakCount {} *x_1_2_1; } x_5_1_1; } x5; struct Event<re::DiscoveryView, re::SharedPtr<re::DiscoveryIdentity> > { struct DynamicArray<re::Event<re::DiscoveryView, re::SharedPtr<re::DiscoveryIdentity> >::Subscription> { struct Allocator {} *x_1_2_1; unsigned long long x_1_2_2; unsigned long long x_1_2_3; unsigned int x_1_2_4; struct Subscription {} *x_1_2_5; } x_6_1_1; struct DynamicArray<re::Event<re::DiscoveryView, re::SharedPtr<re::DiscoveryIdentity> >::SubscriptionLegacy> { struct Allocator {} *x_2_2_1; unsigned long long x_2_2_2; unsigned long long x_2_2_3; unsigned int x_2_2_4; struct SubscriptionLegacy {} *x_2_2_5; } x_6_1_2; } x6; struct Event<re::DiscoveryView, re::SharedPtr<re::DiscoveryIdentity> > { struct DynamicArray<re::Event<re::DiscoveryView, re::SharedPtr<re::DiscoveryIdentity> >::Subscription> { struct Allocator {} *x_1_2_1; unsigned long long x_1_2_2; unsigned long long x_1_2_3; unsigned int x_1_2_4; struct Subscription {} *x_1_2_5; } x_7_1_1; struct DynamicArray<re::Event<re::DiscoveryView, re::SharedPtr<re::DiscoveryIdentity> >::SubscriptionLegacy> { struct Allocator {} *x_2_2_1; unsigned long long x_2_2_2; unsigned long long x_2_2_3; unsigned int x_2_2_4; struct SubscriptionLegacy {} *x_2_2_5; } x_7_1_2; } x7; }*)arg1;
- (void)willDestroyInvite:(struct IDSInvite { int (**x1)(); struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x_1_2_1; } x_2_1_1; } x2; struct SharedPtr<re::internal::WeakCount> { struct WeakCount {} *x_3_1_1; } x3; struct Allocator {} *x4; struct WeakPtr<re::IDSManager> { struct SharedPtr<re::internal::WeakCount> { struct WeakCount {} *x_1_2_1; } x_5_1_1; } x5; struct DynamicString { struct Allocator {} *x_6_1_1; char *x_6_1_2; unsigned long long x_6_1_3; unsigned long long x_6_1_4; } x6; struct SharedPtr<re::IDSDiscoveryIdentity> { struct IDSDiscoveryIdentity {} *x_7_1_1; } x7; struct SharedPtr<re::DiscoveryView> { struct DiscoveryView {} *x_8_1_1; } x8; }*)arg1;

@end