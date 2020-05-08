/* Generated by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKTransitShield : NSObject <GEOTransitShieldDataSource> {
    NSString * _shieldColorString;
    NSString * _shieldText;
    long long  _shieldType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *shieldColorString;
@property (nonatomic, readonly) NSString *shieldText;
@property (nonatomic, readonly) long long shieldType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithShieldType:(long long)arg1 text:(id)arg2 color:(id)arg3;
- (id)shieldColorString;
- (id)shieldText;
- (long long)shieldType;

@end
