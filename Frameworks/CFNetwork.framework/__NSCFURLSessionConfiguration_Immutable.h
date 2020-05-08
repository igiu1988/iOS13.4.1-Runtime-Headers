/* Generated by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface __NSCFURLSessionConfiguration_Immutable : NSURLSessionConfiguration <NSCopying, NSSecureCoding> {
    NSURLSessionConfiguration * _target;
}

+ (bool)supportsSecureCoding;

- (void*)_copyAttribute:(struct __CFString { }*)arg1;
- (bool)_isProxySession;
- (struct _CFHSTSPolicy { }*)copyHSTSPolicy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)disposition;
- (void)encodeWithCoder:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (struct HTTPConnectionCacheLimits { int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; int x10; })getConnectionCacheLimits;
- (id)initWithTarget:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;

@end
