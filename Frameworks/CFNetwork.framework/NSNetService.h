/* Generated by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSNetService : NSObject {
    id  _delegate;
    id  _netService;
    id  _reserved;
}

@property (readonly, copy) NSArray *addresses;
@property <NSNetServiceDelegate> *delegate;
@property (readonly, copy) NSString *domain;
@property (readonly, copy) NSString *hostName;
@property bool includesPeerToPeer;
@property (readonly, copy) NSString *name;
@property (readonly) long long port;
@property (readonly, copy) NSString *type;

// Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork

+ (id)dataFromTXTRecordDictionary:(id)arg1;
+ (id)dictionaryFromTXTRecordData:(id)arg1;

- (id)TXTRecordData;
- (void)_dispatchCallBackWithError:(struct { long long x1; int x2; })arg1;
- (bool)_includesAWDL;
- (struct __CFNetService { }*)_internalNetService;
- (void)_internal_publishWithOptions:(unsigned long long)arg1;
- (id)_monitors;
- (void)_scheduleInDefaultRunLoopForMode:(id)arg1;
- (void)_setIncludesAWDL:(bool)arg1;
- (id)addresses;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)domain;
- (bool)getInputStream:(out id*)arg1 outputStream:(out id*)arg2;
- (unsigned long long)hash;
- (id)hostName;
- (bool)includesPeerToPeer;
- (id)init;
- (id)initWithCFNetService:(struct __CFNetService { }*)arg1;
- (id)initWithDomain:(id)arg1 type:(id)arg2 name:(id)arg3;
- (id)initWithDomain:(id)arg1 type:(id)arg2 name:(id)arg3 port:(int)arg4;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)normalizedType;
- (long long)port;
- (void)publish;
- (void)publishWithOptions:(unsigned long long)arg1;
- (void)publishWithServer:(unsigned long long)arg1;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)resolve;
- (void)resolveWithTimeout:(double)arg1;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setIncludesPeerToPeer:(bool)arg1;
- (bool)setTXTRecordData:(id)arg1;
- (void)startMonitoring;
- (void)stop;
- (void)stopMonitoring;
- (id)type;

// Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst

+ (id)cat_dataFromDictionary:(id)arg1;
+ (id)cat_dictionaryFromData:(id)arg1;

@end
