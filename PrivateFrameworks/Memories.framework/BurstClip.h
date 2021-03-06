/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface BurstClip : CompoundClip <CompoundClipInformation, KonaClipMiroAutoEditAdditions, NSCopying> {
    NSArray * _allSourceClips;
    unsigned long long  _allowedBurstStyles;
    BurstClipStyle * _burstClipStyle;
    unsigned long long  _burstStyle;
    NSArray * _containedClips;
    double  _idealVideoDuration;
    double  _minimumVideoDuration;
    UIColor * _threeUpStyleGapColor;
    UIColor * _threeUpStylePopBackgroundColor;
}

@property (nonatomic, retain) NSArray *allSourceClips;
@property (nonatomic) unsigned long long allowedBurstStyles;
@property (nonatomic, readonly) unsigned long long assetCount;
@property (nonatomic, retain) BurstClipStyle *burstClipStyle;
@property (nonatomic) unsigned long long burstStyle;
@property (nonatomic, retain) NSArray *containedClips;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double idealDuration;
@property (nonatomic) double idealVideoDuration;
@property (nonatomic, readonly) PHAsset *keyAsset;
@property (nonatomic, readonly) double maximumDuration;
@property (nonatomic, readonly) double minimumDuration;
@property (nonatomic) double minimumVideoDuration;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIColor *threeUpStyleGapColor;
@property (nonatomic, retain) UIColor *threeUpStylePopBackgroundColor;

- (void).cxx_destruct;
- (id)allSourceClips;
- (unsigned long long)allowedBurstStyles;
- (double)aspectRatio;
- (unsigned long long)assetCount;
- (double)autoEditLongestDurationWithBlueprint:(id)arg1;
- (double)autoEditShortestDurationWithBlueprint:(id)arg1;
- (id)autoPickedIndices;
- (id)bestClipsForClipCount:(unsigned long long)arg1;
- (id)burstClipStyle;
- (unsigned long long)burstStyle;
- (id)containedClips;
- (id)containedClipsWithInTransition:(id)arg1 outTransition:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionOfBurstStyle;
- (void)fetchIfNeeded;
- (double)idealDuration;
- (double)idealVideoDuration;
- (id)indicesWithBurstSelectionType:(unsigned long long)arg1;
- (id)init;
- (id)initWithKenBurnsClip:(id)arg1 sourceClips:(id)arg2;
- (bool)isBurst;
- (bool)isPhoto;
- (id)keyAsset;
- (id)lastInterestingClip;
- (unsigned long long)lastInterestingIndex;
- (double)maximumDuration;
- (double)minimumDuration;
- (double)minimumVideoDuration;
- (id)pickedIndices;
- (id)pickedKBClips;
- (id)plistRepresentationFromProject:(id)arg1;
- (id)representingClip;
- (void)setAllSourceClips:(id)arg1;
- (void)setAllowedBurstStyles:(unsigned long long)arg1;
- (void)setAltAspect:(double)arg1;
- (void)setBurstClipStyle:(id)arg1;
- (void)setBurstStyle:(unsigned long long)arg1;
- (void)setContainedClips:(id)arg1;
- (void)setContentsFromPlist:(id)arg1 inProject:(id)arg2;
- (void)setDuration:(int)arg1;
- (void)setIdealPhotoDuration:(double)arg1;
- (void)setIdealVideoDuration:(double)arg1;
- (void)setMinimumPhotoDuration:(double)arg1;
- (void)setMinimumVideoDuration:(double)arg1;
- (void)setThreeUpStyleGapColor:(id)arg1;
- (void)setThreeUpStylePopBackgroundColor:(id)arg1;
- (unsigned long long)supportedBurstStyles;
- (id)supportedBurstStylesArray;
- (id)threeUpStyleGapColor;
- (id)threeUpStylePopBackgroundColor;
- (id)userPickedIndices;

@end
