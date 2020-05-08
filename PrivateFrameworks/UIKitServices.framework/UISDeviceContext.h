/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
 */

@interface UISDeviceContext : NSObject <BSXPCCoding, NSCopying, NSMutableCopying> {
    NSDictionary * _deviceInfoKeysToValues;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_allKeys;
+ (id)_keysToValueTypes;
+ (id)defaultContext;

- (void).cxx_destruct;
- (id)_dictionaryWithOnlyValidKeysFromDictionary:(id)arg1;
- (bool)_isDeviceInfoType:(long long)arg1 appropriateForKey:(id)arg2;
- (bool)_isDeviceInfoValue:(id)arg1 appropriateForKey:(id)arg2;
- (id)_rawDeviceInfoKeysToValues;
- (long long)_valueTypeForKey:(id)arg1;
- (long long)_valueTypeForValue:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)deviceInfoBoolValueForKey:(id)arg1;
- (double)deviceInfoFloatValueForKey:(id)arg1;
- (long long)deviceInfoIntegerValueForKey:(id)arg1;
- (id)deviceInfoStringValueForKey:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (bool)hasDeviceInfoValueForKey:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDeviceInfoValues:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;

@end
