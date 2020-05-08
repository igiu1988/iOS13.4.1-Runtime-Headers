/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CoreUtilsNSSubrangeData : NSData {
    NSData * _data;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
}

- (void).cxx_destruct;
- (bool)_isCompact;
- (const void*)bytes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)getBytes:(void*)arg1;
- (void)getBytes:(void*)arg1 length:(unsigned long long)arg2;
- (void)getBytes:(void*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)init;
- (id)initWithData:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)length;

@end