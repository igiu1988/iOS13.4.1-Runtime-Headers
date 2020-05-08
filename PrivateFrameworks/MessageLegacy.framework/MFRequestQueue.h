/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFRequestQueue : NSObject <EFLoggable> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableArray * _requestPairs;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *requestPairs;
@property (readonly) Class superclass;

+ (id)log;
+ (id)signpostLog;

- (void).cxx_destruct;
- (bool)_processRequests:(id)arg1;
- (bool)addRequest:(id)arg1;
- (bool)addRequests:(id)arg1;
- (id)init;
- (bool)processRequest:(id)arg1;
- (bool)processRequests:(id)arg1;
- (id)requestPairs;
- (void)setRequestPairs:(id)arg1;
- (unsigned long long)signpostID;

@end
