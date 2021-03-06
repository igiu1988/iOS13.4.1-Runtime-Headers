/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SEService.framework/SEService
 */

@interface SEProxy : NSObject <SEProxyInterface> {
    NSString * _seid;
    NFSecureElementManagerSession * _session;
}

@property (nonatomic, retain) NSString *seid;
@property (nonatomic, retain) NFSecureElementManagerSession *session;

- (void).cxx_destruct;
- (oneway void)applets:(id /* block */)arg1;
- (id)initWithSession:(id)arg1 seid:(id)arg2;
- (id)seid;
- (id)session;
- (void)setSeid:(id)arg1;
- (void)setSession:(id)arg1;
- (oneway void)transceive:(id)arg1 callback:(id /* block */)arg2;

@end
