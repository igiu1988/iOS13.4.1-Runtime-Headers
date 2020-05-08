/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLXPCPhotoLibraryStoreContainer : NSObject {
    NSXPCListener * _listener;
    NSXPCStoreServer * _server;
}

@property (readonly) NSXPCListenerEndpoint *listenerEndpoint;
@property (readonly) NSXPCStoreServer *server;

+ (id)newContainerWithPathManager:(id)arg1;

- (void).cxx_destruct;
- (id)initWithServer:(id)arg1 listener:(id)arg2;
- (id)listenerEndpoint;
- (id)server;

@end
