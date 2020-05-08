/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
 */

@interface _PSMapsPredictionContext : NSObject <NSSecureCoding> {
    NSString * _bundleID;
    NSString * _navigationEndLocationId;
    NSString * _navigationStartLocationId;
    NSDate * _suggestionDate;
}

@property (nonatomic, copy) NSString *bundleID;
@property (nonatomic, copy) NSString *navigationEndLocationId;
@property (nonatomic, copy) NSString *navigationStartLocationId;
@property (nonatomic, copy) NSDate *suggestionDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleID;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)navigationEndLocationId;
- (id)navigationStartLocationId;
- (void)setBundleID:(id)arg1;
- (void)setNavigationEndLocationId:(id)arg1;
- (void)setNavigationStartLocationId:(id)arg1;
- (void)setSuggestionDate:(id)arg1;
- (id)suggestionDate;

@end
