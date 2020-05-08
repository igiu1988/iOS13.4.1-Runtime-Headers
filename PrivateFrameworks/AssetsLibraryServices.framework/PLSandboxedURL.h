/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

@interface PLSandboxedURL : NSURL {
    long long  _sandboxExtensionHandle;
    NSString * _sandboxExtensionToken;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_commonPLSandboxedURLInitialize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 sandboxExtensionToken:(id)arg2 consume:(bool)arg3;

@end
