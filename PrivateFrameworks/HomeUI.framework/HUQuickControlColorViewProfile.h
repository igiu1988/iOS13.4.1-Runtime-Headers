/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlColorViewProfile : HUQuickControlViewProfile {
    <HFColorProfile> * _colorProfile;
    unsigned long long  _mode;
    bool  _supportsRGBColor;
}

@property (nonatomic, retain) <HFColorProfile> *colorProfile;
@property (nonatomic) unsigned long long mode;
@property (nonatomic) bool supportsRGBColor;

- (void).cxx_destruct;
- (id)colorProfile;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (unsigned long long)mode;
- (void)setColorProfile:(id)arg1;
- (void)setMode:(unsigned long long)arg1;
- (void)setSupportsRGBColor:(bool)arg1;
- (bool)supportsRGBColor;

@end
