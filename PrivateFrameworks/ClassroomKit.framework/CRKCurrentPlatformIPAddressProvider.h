/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKCurrentPlatformIPAddressProvider : NSObject <CRKIPAddressProviding> {
    <CRKIPAddressProviding> * _baseProvider;
}

@property (nonatomic, readonly, copy) NSString *IPAddress;
@property (nonatomic, readonly) <CRKIPAddressProviding> *baseProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)keyPathsForValuesAffectingIPAddress;

- (void).cxx_destruct;
- (id)IPAddress;
- (id)baseProvider;
- (id)init;
- (id)makeProviderForCurrentPlatform;

@end
