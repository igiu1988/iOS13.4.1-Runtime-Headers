/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentAuthorizationCoordinator : NSObject <NSXPCListenerDelegate> {
    NSXPCConnection * _connection;
    double  _connectionTimeout;
    bool  _didPresent;
    PKPaymentAuthorizationCoordinatorExportedObject * _exportedObject;
    NSString * _hostIdentifier;
    PKInAppPaymentService * _inAppPaymentService;
    NSXPCListener * _listener;
    PKPaymentRequest * _paymentRequest;
    id /* block */  _presentationCompletionBlock;
    NSObject<OS_dispatch_queue> * _queue;
    NSTimer * _timer;
}

@property (setter=_setPrivateDelegate:, nonatomic) <PKPaymentAuthorizationCoordinatorPrivateDelegate> *_privateDelegate;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic) double connectionTimeout;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPaymentAuthorizationCoordinatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didPresent;
@property (nonatomic, retain) PKPaymentAuthorizationCoordinatorExportedObject *exportedObject;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *hostIdentifier;
@property (nonatomic, retain) PKInAppPaymentService *inAppPaymentService;
@property (nonatomic, retain) NSXPCListener *listener;
@property (nonatomic, retain) PKPaymentRequest *paymentRequest;
@property (nonatomic, copy) id /* block */ presentationCompletionBlock;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSTimer *timer;

+ (bool)canMakePayments;
+ (bool)canMakePaymentsUsingNetworks:(id)arg1 capabilities:(unsigned long long)arg2 webDomain:(id)arg3;
+ (bool)canMakePaymentsUsingNetworks:(id)arg1 webDomain:(id)arg2;

- (void).cxx_destruct;
- (void)_invokeCallbackWithSuccess:(bool)arg1;
- (id)_privateDelegate;
- (id)_remoteObjectProxy;
- (id)_remoteObjectProxyWithFailureHandler:(id /* block */)arg1;
- (void)_setPrivateDelegate:(id)arg1;
- (void)_viewServiceTimerFired:(id)arg1;
- (id)connection;
- (double)connectionTimeout;
- (void)dealloc;
- (id)delegate;
- (bool)didPresent;
- (void)dismissWithCompletion:(id /* block */)arg1;
- (id)exportedObject;
- (id)hostIdentifier;
- (id)inAppPaymentService;
- (id)init;
- (id)initWithPaymentRequest:(id)arg1;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)paymentRequest;
- (void)presentWithCompletion:(id /* block */)arg1;
- (void)presentWithOrientation:(id)arg1 completion:(id /* block */)arg2;
- (id /* block */)presentationCompletionBlock;
- (id)queue;
- (void)setConnection:(id)arg1;
- (void)setConnectionTimeout:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidPresent:(bool)arg1;
- (void)setExportedObject:(id)arg1;
- (void)setHostIdentifier:(id)arg1;
- (void)setInAppPaymentService:(id)arg1;
- (void)setListener:(id)arg1;
- (void)setPaymentRequest:(id)arg1;
- (void)setPresentationCompletionBlock:(id /* block */)arg1;
- (void)setQueue:(id)arg1;
- (void)setTimer:(id)arg1;
- (id)timer;

@end