/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface asn1OSToken : asn1Token {
    asn1Token * mValue;
}

@property (readonly) asn1Token *value;

- (id)_initWithID:(unsigned long long)arg1 class:(unsigned char)arg2 length:(unsigned long long)arg3 content:(const char *)arg4 opaque:(bool)arg5;
- (void)dealloc;
- (id)stringValue;
- (id)value;

@end
