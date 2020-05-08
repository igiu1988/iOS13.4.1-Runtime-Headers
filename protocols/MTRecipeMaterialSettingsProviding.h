/* Generated by EzioChiu.
 */

@protocol MTRecipeMaterialSettingsProviding <MTMaterialVersioning, MTMaterialStyleProviding>

@required

- (<MTTinting><MTMaterialFiltering> *)auxiliaryOverlaySettings;
- (<MTTinting><MTMaterialFiltering> *)baseMaterialSettings;
- (<MTTinting><MTMaterialFiltering> *)baseOverlaySettings;
- (<MTTinting><MTMaterialFiltering> *)primaryOverlaySettings;
- (<MTTinting><MTMaterialFiltering> *)secondaryOverlaySettings;
- (<MTTinting><MTMaterialFiltering> *)settingsForConfiguration:(NSString *)arg1;

@end
