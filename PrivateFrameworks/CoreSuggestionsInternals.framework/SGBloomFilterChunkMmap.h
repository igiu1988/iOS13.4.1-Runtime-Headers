/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGBloomFilterChunkMmap : NSObject <SGBloomFilterChunk> {
    char * _buf;
    unsigned int * _countPtr;
    int  _fd;
    unsigned int  _mask;
    NSString * _path;
}

@property (nonatomic, readonly) unsigned int count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *path;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)add:(union { unsigned long long x1; union { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg1;
- (void)close;
- (unsigned int)count;
- (void)dealloc;
- (bool)exists:(union { unsigned long long x1; union { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg1;
- (id)init;
- (id)initWithPath:(id)arg1;
- (id)path;

@end
