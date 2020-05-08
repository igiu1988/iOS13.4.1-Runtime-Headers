/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

@interface MapsSuggestionsMeCard : NSObject <NSCopying> {
    bool  _hasCorrected;
    bool  _hasGeocoded;
    bool  _hasHomeOrWork;
    NSArray * _hiddenShortcutsForHome;
    NSArray * _hiddenShortcutsForWork;
    NSArray * _mapItemsForAll;
    NSArray * _mapItemsForHome;
    NSArray * _mapItemsForWork;
    NSDictionary * _perCNPostalAddress;
    NSArray * _shortcutsForAll;
    NSArray * _shortcutsForHome;
    NSArray * _shortcutsForWork;
}

@property (nonatomic, readonly) bool hasCorrected;
@property (nonatomic, readonly) bool hasGeocoded;
@property (nonatomic, readonly) bool hasHomeOrWork;
@property (nonatomic, readonly) NSArray *hiddenShortcutsForHome;
@property (nonatomic, readonly) NSArray *hiddenShortcutsForWork;
@property (nonatomic, readonly) NSArray *mapItemsForAll;
@property (nonatomic, readonly) NSArray *mapItemsForHome;
@property (nonatomic, readonly) NSArray *mapItemsForWork;
@property (nonatomic, readonly) NSArray *shortcutsForAll;
@property (nonatomic, readonly) NSArray *shortcutsForHome;
@property (nonatomic, readonly) NSArray *shortcutsForWork;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)hasCorrected;
- (bool)hasGeocoded;
- (bool)hasHomeOrWork;
- (id)hiddenShortcutsForHome;
- (id)hiddenShortcutsForWork;
- (id)initWithHomes:(id)arg1 works:(id)arg2 hiddenHomes:(id)arg3 hiddenWorks:(id)arg4 all:(id)arg5 perCNPostalAddress:(id)arg6 hasCorrect:(bool)arg7 hasGeocoded:(bool)arg8;
- (id)initWithShortcuts:(id)arg1 hasCorrected:(bool)arg2 hasGeocoded:(bool)arg3;
- (id)initWithShortcuts:(id)arg1 perCNPostalAddress:(id)arg2 hasCorrected:(bool)arg3 hasGeocoded:(bool)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToMeCard:(id)arg1;
- (id)mapItemsForAll;
- (id)mapItemsForHome;
- (id)mapItemsForWork;
- (id)shortcutForCNPostalAddressIdentifier:(id)arg1;
- (id)shortcutsForAll;
- (id)shortcutsForHome;
- (id)shortcutsForWork;
- (id)shortcutsPerCNPostalAddress;

@end
