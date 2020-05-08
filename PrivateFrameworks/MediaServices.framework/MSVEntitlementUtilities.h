/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

@interface MSVEntitlementUtilities : NSObject

+ (id)_checkArrayEntitlement:(id)arg1 group:(id)arg2 task:(struct __SecTask { }*)arg3;
+ (id)_checkBooleanEntitlement:(id)arg1 task:(struct __SecTask { }*)arg2;
+ (bool)_checkEntitlement:(id)arg1 inGroup:(id)arg2;
+ (void)_processKeyChainResult:(id)arg1;
+ (bool)hasBoolEntitlement:(id)arg1;
+ (bool)hasEntitlement:(id)arg1 inGroup:(id)arg2;

@end
