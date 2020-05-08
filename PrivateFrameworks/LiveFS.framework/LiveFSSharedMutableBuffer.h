/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/LiveFS.framework/LiveFS
 */

@interface LiveFSSharedMutableBuffer : NSObject <NSSecureCoding> {
    unsigned long long  _capacity;
    unsigned long long  _length;
    unsigned int  _mp;
    unsigned long long  _vma;
}

@property unsigned long long length;

+ (id)bufferWithCapacity:(unsigned long long)arg1;
+ (id)bufferWithLength:(unsigned long long)arg1;
+ (id)dataWithCapacity:(unsigned long long)arg1;
+ (id)dataWithLength:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (const void*)bytes;
- (Class)classForCoder;
- (id)createDispatchData;
- (void)dealloc;
- (void)detachBytes;
- (void)encodeWithCoder:(id)arg1;
- (bool)ensureMapped;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithCapacity:(unsigned long long)arg1 andLength:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithLength:(unsigned long long)arg1;
- (id)initWithMachPort:(unsigned int)arg1 capacity:(unsigned long long)arg2 andLength:(unsigned long long)arg3;
- (unsigned long long)length;
- (void*)mutableBytes;
- (void)setLength:(unsigned long long)arg1;

@end
