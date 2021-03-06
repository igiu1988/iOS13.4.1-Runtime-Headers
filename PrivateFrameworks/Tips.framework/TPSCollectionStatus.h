/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

@interface TPSCollectionStatus : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _activatedDate;
    NSDate * _featuredDate;
    NSDate * _firstViewedDate;
    NSString * _identifier;
    bool  _skipFeature;
}

@property (nonatomic, copy) NSDate *activatedDate;
@property (nonatomic, copy) NSDate *featuredDate;
@property (nonatomic, copy) NSDate *firstViewedDate;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) bool skipFeature;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activatedDate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)featuredDate;
- (id)firstViewedDate;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (void)setActivatedDate:(id)arg1;
- (void)setFeaturedDate:(id)arg1;
- (void)setFirstViewedDate:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setSkipFeature:(bool)arg1;
- (bool)skipFeature;

@end
