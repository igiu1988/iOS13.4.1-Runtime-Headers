/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface _SFPBMediaInfoCardSection : PBCodable <NSSecureCoding, _SFPBMediaInfoCardSection> {
    _SFPBColor * _backgroundColor;
    bool  _canBeHidden;
    NSArray * _details;
    bool  _hasBottomPadding;
    bool  _hasTopPadding;
    bool  _isMediaContainer;
    _SFPBMediaItem * _mediaItem;
    NSArray * _offers;
    _SFPBActionItem * _playAction;
    NSArray * _punchoutOptions;
    NSString * _punchoutPickerDismissText;
    NSString * _punchoutPickerTitle;
    int  _separatorStyle;
    _SFPBRichText * _specialOfferButtonLabel;
    NSString * _type;
    NSString * _watchListButtonLabel;
    NSString * _watchListConfirmationText;
    NSString * _watchListContinuationText;
    NSString * _watchListIdentifier;
}

@property (nonatomic, retain) _SFPBColor *backgroundColor;
@property (nonatomic) bool canBeHidden;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *details;
@property (nonatomic) bool hasBottomPadding;
@property (nonatomic) bool hasTopPadding;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isMediaContainer;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) _SFPBMediaItem *mediaItem;
@property (nonatomic, copy) NSArray *offers;
@property (nonatomic, retain) _SFPBActionItem *playAction;
@property (nonatomic, copy) NSArray *punchoutOptions;
@property (nonatomic, copy) NSString *punchoutPickerDismissText;
@property (nonatomic, copy) NSString *punchoutPickerTitle;
@property (nonatomic) int separatorStyle;
@property (nonatomic, retain) _SFPBRichText *specialOfferButtonLabel;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, copy) NSString *watchListButtonLabel;
@property (nonatomic, copy) NSString *watchListConfirmationText;
@property (nonatomic, copy) NSString *watchListContinuationText;
@property (nonatomic, copy) NSString *watchListIdentifier;

- (void).cxx_destruct;
- (void)addDetails:(id)arg1;
- (void)addOffers:(id)arg1;
- (void)addPunchoutOptions:(id)arg1;
- (id)backgroundColor;
- (bool)canBeHidden;
- (void)clearDetails;
- (void)clearOffers;
- (void)clearPunchoutOptions;
- (id)details;
- (id)detailsAtIndex:(unsigned long long)arg1;
- (unsigned long long)detailsCount;
- (id)dictionaryRepresentation;
- (bool)hasBottomPadding;
- (bool)hasTopPadding;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isMediaContainer;
- (id)jsonData;
- (id)mediaItem;
- (id)offers;
- (id)offersAtIndex:(unsigned long long)arg1;
- (unsigned long long)offersCount;
- (id)playAction;
- (id)punchoutOptions;
- (id)punchoutOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)punchoutOptionsCount;
- (id)punchoutPickerDismissText;
- (id)punchoutPickerTitle;
- (bool)readFrom:(id)arg1;
- (int)separatorStyle;
- (void)setBackgroundColor:(id)arg1;
- (void)setCanBeHidden:(bool)arg1;
- (void)setDetails:(id)arg1;
- (void)setHasBottomPadding:(bool)arg1;
- (void)setHasTopPadding:(bool)arg1;
- (void)setIsMediaContainer:(bool)arg1;
- (void)setMediaItem:(id)arg1;
- (void)setOffers:(id)arg1;
- (void)setPlayAction:(id)arg1;
- (void)setPunchoutOptions:(id)arg1;
- (void)setPunchoutPickerDismissText:(id)arg1;
- (void)setPunchoutPickerTitle:(id)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setSpecialOfferButtonLabel:(id)arg1;
- (void)setType:(id)arg1;
- (void)setWatchListButtonLabel:(id)arg1;
- (void)setWatchListConfirmationText:(id)arg1;
- (void)setWatchListContinuationText:(id)arg1;
- (void)setWatchListIdentifier:(id)arg1;
- (id)specialOfferButtonLabel;
- (id)type;
- (id)watchListButtonLabel;
- (id)watchListConfirmationText;
- (id)watchListContinuationText;
- (id)watchListIdentifier;
- (void)writeTo:(id)arg1;

@end
