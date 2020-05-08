/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

@interface CEMDeviceDockDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSNumber * _payloadAllowDockFixupOverride;
    NSNumber * _payloadAutohide;
    NSNumber * _payloadAutohideImmutable;
    NSNumber * _payloadContentsImmutable;
    NSNumber * _payloadDblclickbehaviorImmutable;
    NSNumber * _payloadLargesize;
    NSNumber * _payloadLaunchanim;
    NSNumber * _payloadLaunchanimImmutable;
    NSArray * _payloadMCXDockSpecialFolders;
    NSNumber * _payloadMagnification;
    NSNumber * _payloadMagnifyImmutable;
    NSNumber * _payloadMagsizeImmutable;
    NSString * _payloadMineffect;
    NSNumber * _payloadMineffectImmutable;
    NSNumber * _payloadMinimizeToApplication;
    NSNumber * _payloadMinimizeToApplicationImmutable;
    NSString * _payloadOrientation;
    NSNumber * _payloadPositionImmutable;
    NSNumber * _payloadShowProcessIndicators;
    NSNumber * _payloadShowRecents;
    NSNumber * _payloadShowindicatorsImmutable;
    NSNumber * _payloadSizeImmutable;
    NSArray * _payloadStaticApps;
    NSNumber * _payloadStaticOnly;
    NSArray * _payloadStaticOthers;
    NSNumber * _payloadTilesize;
    NSNumber * _payloadWindowtabbingImmutable;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *payloadAllowDockFixupOverride;
@property (nonatomic, copy) NSNumber *payloadAutohide;
@property (nonatomic, copy) NSNumber *payloadAutohideImmutable;
@property (nonatomic, copy) NSNumber *payloadContentsImmutable;
@property (nonatomic, copy) NSNumber *payloadDblclickbehaviorImmutable;
@property (nonatomic, copy) NSNumber *payloadLargesize;
@property (nonatomic, copy) NSNumber *payloadLaunchanim;
@property (nonatomic, copy) NSNumber *payloadLaunchanimImmutable;
@property (nonatomic, copy) NSArray *payloadMCXDockSpecialFolders;
@property (nonatomic, copy) NSNumber *payloadMagnification;
@property (nonatomic, copy) NSNumber *payloadMagnifyImmutable;
@property (nonatomic, copy) NSNumber *payloadMagsizeImmutable;
@property (nonatomic, copy) NSString *payloadMineffect;
@property (nonatomic, copy) NSNumber *payloadMineffectImmutable;
@property (nonatomic, copy) NSNumber *payloadMinimizeToApplication;
@property (nonatomic, copy) NSNumber *payloadMinimizeToApplicationImmutable;
@property (nonatomic, copy) NSString *payloadOrientation;
@property (nonatomic, copy) NSNumber *payloadPositionImmutable;
@property (nonatomic, copy) NSNumber *payloadShowProcessIndicators;
@property (nonatomic, copy) NSNumber *payloadShowRecents;
@property (nonatomic, copy) NSNumber *payloadShowindicatorsImmutable;
@property (nonatomic, copy) NSNumber *payloadSizeImmutable;
@property (nonatomic, copy) NSArray *payloadStaticApps;
@property (nonatomic, copy) NSNumber *payloadStaticOnly;
@property (nonatomic, copy) NSArray *payloadStaticOthers;
@property (nonatomic, copy) NSNumber *payloadTilesize;
@property (nonatomic, copy) NSNumber *payloadWindowtabbingImmutable;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withOrientation:(id)arg2 withPositionImmutable:(id)arg3 withAutohide:(id)arg4 withAutohideImmutable:(id)arg5 withMinimizeToApplication:(id)arg6 withMinimizeToApplicationImmutable:(id)arg7 withMagnification:(id)arg8 withMagnifyImmutable:(id)arg9 withLargesize:(id)arg10 withMagsizeImmutable:(id)arg11 withShowProcessIndicators:(id)arg12 withLaunchanim:(id)arg13 withLaunchanimImmutable:(id)arg14 withMineffect:(id)arg15 withMineffectImmutable:(id)arg16 withTilesize:(id)arg17 withSizeImmutable:(id)arg18 withMCXDockSpecialFolders:(id)arg19 withAllowDockFixupOverride:(id)arg20 withStaticOnly:(id)arg21 withStaticOthers:(id)arg22 withStaticApps:(id)arg23 withContentsImmutable:(id)arg24 withWindowtabbingImmutable:(id)arg25 withDblclickbehaviorImmutable:(id)arg26 withShowindicatorsImmutable:(id)arg27 withShowRecents:(id)arg28;
+ (id)profileType;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)restrictionPayloadKeys;

- (void).cxx_destruct;
- (int)activationLevel;
- (id)assetReferences;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (bool)multipleAllowed;
- (bool)mustBeSupervised;
- (id)payloadAllowDockFixupOverride;
- (id)payloadAutohide;
- (id)payloadAutohideImmutable;
- (id)payloadContentsImmutable;
- (id)payloadDblclickbehaviorImmutable;
- (id)payloadLargesize;
- (id)payloadLaunchanim;
- (id)payloadLaunchanimImmutable;
- (id)payloadMCXDockSpecialFolders;
- (id)payloadMagnification;
- (id)payloadMagnifyImmutable;
- (id)payloadMagsizeImmutable;
- (id)payloadMineffect;
- (id)payloadMineffectImmutable;
- (id)payloadMinimizeToApplication;
- (id)payloadMinimizeToApplicationImmutable;
- (id)payloadOrientation;
- (id)payloadPositionImmutable;
- (id)payloadShowProcessIndicators;
- (id)payloadShowRecents;
- (id)payloadShowindicatorsImmutable;
- (id)payloadSizeImmutable;
- (id)payloadStaticApps;
- (id)payloadStaticOnly;
- (id)payloadStaticOthers;
- (id)payloadTilesize;
- (id)payloadWindowtabbingImmutable;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadAllowDockFixupOverride:(id)arg1;
- (void)setPayloadAutohide:(id)arg1;
- (void)setPayloadAutohideImmutable:(id)arg1;
- (void)setPayloadContentsImmutable:(id)arg1;
- (void)setPayloadDblclickbehaviorImmutable:(id)arg1;
- (void)setPayloadLargesize:(id)arg1;
- (void)setPayloadLaunchanim:(id)arg1;
- (void)setPayloadLaunchanimImmutable:(id)arg1;
- (void)setPayloadMCXDockSpecialFolders:(id)arg1;
- (void)setPayloadMagnification:(id)arg1;
- (void)setPayloadMagnifyImmutable:(id)arg1;
- (void)setPayloadMagsizeImmutable:(id)arg1;
- (void)setPayloadMineffect:(id)arg1;
- (void)setPayloadMineffectImmutable:(id)arg1;
- (void)setPayloadMinimizeToApplication:(id)arg1;
- (void)setPayloadMinimizeToApplicationImmutable:(id)arg1;
- (void)setPayloadOrientation:(id)arg1;
- (void)setPayloadPositionImmutable:(id)arg1;
- (void)setPayloadShowProcessIndicators:(id)arg1;
- (void)setPayloadShowRecents:(id)arg1;
- (void)setPayloadShowindicatorsImmutable:(id)arg1;
- (void)setPayloadSizeImmutable:(id)arg1;
- (void)setPayloadStaticApps:(id)arg1;
- (void)setPayloadStaticOnly:(id)arg1;
- (void)setPayloadStaticOthers:(id)arg1;
- (void)setPayloadTilesize:(id)arg1;
- (void)setPayloadWindowtabbingImmutable:(id)arg1;

@end
