/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/OSAnalytics.framework/OSAnalytics
 */

@interface OSASymbolInfo : NSObject {
    bool  _isAppleCode;
    NSString * _path;
    unsigned long long  _size;
    unsigned long long  _start;
    unsigned char  _uuid;
    NSString * legacy_arch;
    NSString * legacy_name;
}

@property bool isAppleCode;
@property (readonly) NSString *path;
@property unsigned long long size;
@property unsigned long long start;

- (void).cxx_destruct;
- (id)get_uuid;
- (id)initWithAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 for:(unsigned char)arg3;
- (id)initWithSharedCache:(unsigned char)arg1 atBaseAddress:(unsigned long long)arg2;
- (bool)isAppleCode;
- (id)path;
- (void)setIsAppleCode:(bool)arg1;
- (void)setPath:(id)arg1;
- (void)setSize:(unsigned long long)arg1;
- (void)setStart:(unsigned long long)arg1;
- (unsigned long long)size;
- (unsigned long long)start;

@end
