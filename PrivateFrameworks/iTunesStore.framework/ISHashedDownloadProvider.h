/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISHashedDownloadProvider : ISDataProvider <NSCopying> {
    int  _fileDescriptor;
    NSArray * _hashes;
    ISHashError * _lastHashError;
    NSString * _localFilePath;
    struct CC_MD5state_st { 
        unsigned int A; 
        unsigned int B; 
        unsigned int C; 
        unsigned int D; 
        unsigned int Nl; 
        unsigned int Nh; 
        unsigned int data[16]; 
        int num; 
    }  _md5Context;
    long long  _numberOfBytesToHash;
    bool  _shouldResumeFromLocalBytes;
    long long  _totalBytesWritten;
    long long  _validatedBytes;
}

@property (retain) NSArray *hashes;
@property (copy) ISHashError *lastHashError;
@property (retain) NSString *localFilePath;
@property long long numberOfBytesToHash;
@property bool shouldResumeFromLocalBytes;
@property long long streamedBytes;
@property long long validatedBytes;

- (bool)_checkHashForByteCount:(long long)arg1;
- (void)_closeFile;
- (bool)_openFile;
- (bool)_truncateToSize:(long long)arg1;
- (long long)_verifiedBytesByInitializingHashForFileSize:(long long)arg1;
- (bool)_writeDataWithHashing:(id)arg1 returningError:(id*)arg2;
- (bool)_writeDataWithoutHashing:(id)arg1 returningError:(id*)arg2;
- (bool)canStreamContentLength:(long long)arg1 error:(id*)arg2;
- (id)closeStream;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)hashes;
- (id)init;
- (bool)isStream;
- (id)lastHashError;
- (id)localFilePath;
- (long long)numberOfBytesToHash;
- (bool)parseData:(id)arg1 returningError:(id*)arg2;
- (void)resetStream;
- (void)setHashes:(id)arg1;
- (void)setLastHashError:(id)arg1;
- (void)setLocalFilePath:(id)arg1;
- (void)setNumberOfBytesToHash:(long long)arg1;
- (void)setShouldResumeFromLocalBytes:(bool)arg1;
- (void)setStreamedBytes:(long long)arg1;
- (void)setValidatedBytes:(long long)arg1;
- (void)setup;
- (bool)shouldResumeFromLocalBytes;
- (long long)streamedBytes;
- (long long)validatedBytes;

@end
