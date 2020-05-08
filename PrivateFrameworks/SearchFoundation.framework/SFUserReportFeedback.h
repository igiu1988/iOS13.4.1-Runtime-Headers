/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFUserReportFeedback : SFFeedback <CRUserReportRequestFeedback, NSCopying> {
    SFCardSection * _cardSection;
    SFSearchResult * _result;
    SFPunchout * _userSelection;
}

@property (nonatomic, readonly) SFFeedback *backingFeedback;
@property (nonatomic, retain) SFCardSection *cardSection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SFSearchResult *result;
@property (readonly) Class superclass;
@property (nonatomic, retain) SFPunchout *userSelection;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cardSection;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSelection:(id)arg1 result:(id)arg2 cardSection:(id)arg3;
- (id)result;
- (void)setCardSection:(id)arg1;
- (void)setResult:(id)arg1;
- (void)setUserSelection:(id)arg1;
- (id)userSelection;

// Image: /System/Library/PrivateFrameworks/Cards.framework/Cards

- (id)backingFeedback;

@end
