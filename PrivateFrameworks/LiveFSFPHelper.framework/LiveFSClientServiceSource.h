/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/LiveFSFPHelper.framework/LiveFSFPHelper
 */

@interface LiveFSClientServiceSource : NSObject <NSFileProviderServiceSource> {
    LiveFSFPExtensionHelper * ex;
    NSString * ident;
}

@property (nonatomic, readonly, copy) NSString *serviceName;

- (void).cxx_destruct;
- (id)initWithFileProviderExtension:(id)arg1 itemIdentifier:(id)arg2;
- (id)makeListenerEndpointAndReturnError:(id*)arg1;
- (id)serviceName;

@end
