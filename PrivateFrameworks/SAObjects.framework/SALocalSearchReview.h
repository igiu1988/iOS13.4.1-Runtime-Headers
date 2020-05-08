/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SALocalSearchReview : AceObject <SAAceSerializable>

@property (nonatomic, copy) NSString *author;
@property (nonatomic, copy) NSString *comment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) SACalendar *lastUpdated;
@property (nonatomic, copy) NSString *publication;
@property (nonatomic, retain) SAUIAppPunchOut *reviewPunchOut;
@property (nonatomic, retain) SALocalSearchRating *reviewRating;
@property (readonly) Class superclass;

+ (id)review;
+ (id)reviewWithDictionary:(id)arg1 context:(id)arg2;

- (id)author;
- (id)comment;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)identifier;
- (id)lastUpdated;
- (id)publication;
- (id)reviewPunchOut;
- (id)reviewRating;
- (void)setAuthor:(id)arg1;
- (void)setComment:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLastUpdated:(id)arg1;
- (void)setPublication:(id)arg1;
- (void)setReviewPunchOut:(id)arg1;
- (void)setReviewRating:(id)arg1;

@end
