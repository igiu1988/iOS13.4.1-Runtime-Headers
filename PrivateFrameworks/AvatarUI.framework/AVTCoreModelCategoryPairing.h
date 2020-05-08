/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

@interface AVTCoreModelCategoryPairing : NSObject {
    NSString * _localizedPairTitle;
    NSString * _localizedPairedTitle;
    NSString * _localizedUnpairTitle;
    long long  _pairedCategory;
}

@property (nonatomic, readonly, copy) NSString *localizedPairTitle;
@property (nonatomic, readonly, copy) NSString *localizedPairedTitle;
@property (nonatomic, readonly, copy) NSString *localizedUnpairTitle;
@property (nonatomic, readonly) long long pairedCategory;

- (void).cxx_destruct;
- (id)initWithPairedCategory:(long long)arg1 pairedTitle:(id)arg2 pairTitle:(id)arg3 unpairTitle:(id)arg4;
- (id)localizedPairTitle;
- (id)localizedPairedTitle;
- (id)localizedUnpairTitle;
- (long long)pairedCategory;

@end
