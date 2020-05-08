/* Generated by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface TLSTestHarnessResult : NSObject {
    NSMutableData * _data;
    NSError * _error;
    NSHTTPURLResponse * _response;
    NSObject<OS_dispatch_semaphore> * _sema;
    NSURLSessionTask * _task;
}

@property (retain) NSMutableData *data;
@property (retain) NSError *error;
@property (retain) NSHTTPURLResponse *response;
@property (retain) NSObject<OS_dispatch_semaphore> *sema;
@property (retain) NSURLSessionTask *task;

- (void)appendResponseData:(id)arg1;
- (id)data;
- (void)dealloc;
- (id)error;
- (id)initWithTask:(id)arg1;
- (id)response;
- (id)sema;
- (void)setData:(id)arg1;
- (void)setError:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)setSema:(id)arg1;
- (void)setTask:(id)arg1;
- (id)task;

@end
