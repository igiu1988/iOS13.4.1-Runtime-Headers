/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserFS.framework/UserFS
 */

@interface UserFSStream : NSObject {
    NSObject<OS_xpc_object> * _connection;
    UserFSItem * _item;
    unsigned long long  _length;
}

@property (nonatomic, retain) NSObject<OS_xpc_object> *connection;
@property (nonatomic, retain) UserFSItem *item;
@property (nonatomic) unsigned long long length;
@property (nonatomic, readonly) bool writable;

- (void).cxx_destruct;
- (void)_cancelConnection;
- (long long)_readBytesUpToLength:(unsigned long long)arg1 atOffset:(unsigned long long)arg2 toBuffer:(void*)arg3 error:(id*)arg4;
- (bool)closeAndReturnError:(id*)arg1;
- (id)connection;
- (void)dealloc;
- (id)initWithUserFSItem:(id)arg1 length:(unsigned long long)arg2 connection:(id)arg3;
- (id)item;
- (unsigned long long)length;
- (long long)readBytesOfLength:(unsigned long long)arg1 atOffset:(unsigned long long)arg2 toBuffer:(void*)arg3 error:(id*)arg4;
- (void)setConnection:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setLength:(unsigned long long)arg1;
- (bool)writable;

@end
