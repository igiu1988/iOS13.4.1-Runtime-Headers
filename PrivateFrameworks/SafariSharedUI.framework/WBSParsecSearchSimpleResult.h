/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
 */

@interface WBSParsecSearchSimpleResult : WBSParsecLegacySearchResult <WBSParsecSearchSimpleResult> {
    NSString * _descriptionLeadInText;
    NSNumber * _descriptionMaximumNumberOfLines;
    bool  _descriptionTextCanWrap;
    NSString * _footnote;
    bool  _hasSingleLineDescriptionAndTitle;
    WBSParsecSearchMapsResultFeedbackSender * _mapsFeedbackSender;
    NSArray * _moreIconRepresentations;
    <WBSParsecSearchSession> * _parsecSearchSession;
    WBSParsecImageRepresentation * _titleGlyph;
    NSNumber * _titleMaximumNumberOfLines;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *descriptionLeadInText;
@property (nonatomic, readonly) NSNumber *descriptionMaximumNumberOfLines;
@property (nonatomic, readonly) bool descriptionTextCanWrap;
@property (nonatomic, readonly) NSString *footnote;
@property (nonatomic, readonly) bool hasSingleLineDescriptionAndTitle;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) WBSParsecSearchMapsResultFeedbackSender *mapsFeedbackSender;
@property (nonatomic, retain) <WBSParsecSearchSession> *parsecSearchSession;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSNumber *titleMaximumNumberOfLines;

- (void).cxx_destruct;
- (id)descriptionLeadInText;
- (id)descriptionMaximumNumberOfLines;
- (bool)descriptionTextCanWrap;
- (id)footnote;
- (bool)hasSingleLineDescriptionAndTitle;
- (id)initWithDictionary:(id)arg1;
- (id)mapsFeedbackSender;
- (id)parsecSearchSession;
- (void)setMapsFeedbackSender:(id)arg1;
- (void)setParsecSearchSession:(id)arg1;
- (id)titleGlyphWithSession:(id)arg1;
- (id)titleMaximumNumberOfLines;

@end
