/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsSubscription.framework/NewsSubscription
 */

@interface NPPurchaseContext : NSObject {
    void arrivedFromAd;
    void articleID;
    void campaignID;
    void campaignType;
    void conversionLocation;
    void creativeID;
    void issueID;
    void parentFeedType;
    void productID;
    void purchaseID;
    void purchaseSessionID;
    void qToken;
    void sectionID;
    void sourceChannelID;
    void webAccessOptIn;
}

@property (nonatomic) bool arrivedFromAd;
@property (nonatomic, copy) NSString *articleID;
@property (nonatomic, copy) NSString *campaignID;
@property (nonatomic, copy) NSString *campaignType;
@property (nonatomic, copy) NSString *conversionLocation;
@property (nonatomic, copy) NSString *creativeID;
@property (nonatomic, copy) NSString *issueID;
@property (nonatomic) long long parentFeedType;
@property (nonatomic, copy) NSString *productID;
@property (nonatomic, copy) NSString *purchaseID;
@property (nonatomic, copy) NSString *purchaseSessionID;
@property (nonatomic, copy) NSString *qToken;
@property (nonatomic, copy) NSString *sectionID;
@property (nonatomic, copy) NSString *sourceChannelID;
@property (nonatomic) bool webAccessOptIn;

- (void).cxx_destruct;
- (bool)arrivedFromAd;
- (id)articleID;
- (id)campaignID;
- (id)campaignType;
- (id)conversionLocation;
- (id)creativeID;
- (id)init;
- (id)initWithProductID:(id)arg1 purchaseID:(id)arg2 sourceChannelID:(id)arg3 purchaseSessionID:(id)arg4 conversionLocation:(id)arg5 articleID:(id)arg6 issueID:(id)arg7 parentFeedType:(long long)arg8 sectionID:(id)arg9 webAccessOptIn:(bool)arg10 arrivedFromAd:(bool)arg11 qToken:(id)arg12 creativeID:(id)arg13 campaignID:(id)arg14 campaignType:(id)arg15;
- (id)issueID;
- (long long)parentFeedType;
- (id)productID;
- (id)purchaseID;
- (id)purchaseSessionID;
- (id)qToken;
- (id)sectionID;
- (void)setArrivedFromAd:(bool)arg1;
- (void)setArticleID:(id)arg1;
- (void)setCampaignID:(id)arg1;
- (void)setCampaignType:(id)arg1;
- (void)setConversionLocation:(id)arg1;
- (void)setCreativeID:(id)arg1;
- (void)setIssueID:(id)arg1;
- (void)setParentFeedType:(long long)arg1;
- (void)setProductID:(id)arg1;
- (void)setPurchaseID:(id)arg1;
- (void)setPurchaseSessionID:(id)arg1;
- (void)setQToken:(id)arg1;
- (void)setSectionID:(id)arg1;
- (void)setSourceChannelID:(id)arg1;
- (void)setWebAccessOptIn:(bool)arg1;
- (id)sourceChannelID;
- (bool)webAccessOptIn;

@end