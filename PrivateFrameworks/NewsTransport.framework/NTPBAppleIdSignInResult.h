/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBAppleIdSignInResult : PBCodable <NSCopying> {
    struct { 
        unsigned int paidSubscriptionConversionPointType : 1; 
        unsigned int signInResult : 1; 
    }  _has;
    int  _paidSubscriptionConversionPointType;
    int  _signInResult;
    NSData * _subscriptionPurchaseSessionId;
}

@property (nonatomic) bool hasPaidSubscriptionConversionPointType;
@property (nonatomic) bool hasSignInResult;
@property (nonatomic, readonly) bool hasSubscriptionPurchaseSessionId;
@property (nonatomic) int paidSubscriptionConversionPointType;
@property (nonatomic) int signInResult;
@property (nonatomic, retain) NSData *subscriptionPurchaseSessionId;

- (void).cxx_destruct;
- (int)StringAsPaidSubscriptionConversionPointType:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPaidSubscriptionConversionPointType;
- (bool)hasSignInResult;
- (bool)hasSubscriptionPurchaseSessionId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)paidSubscriptionConversionPointType;
- (id)paidSubscriptionConversionPointTypeAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasPaidSubscriptionConversionPointType:(bool)arg1;
- (void)setHasSignInResult:(bool)arg1;
- (void)setPaidSubscriptionConversionPointType:(int)arg1;
- (void)setSignInResult:(int)arg1;
- (void)setSubscriptionPurchaseSessionId:(id)arg1;
- (int)signInResult;
- (id)subscriptionPurchaseSessionId;
- (void)writeTo:(id)arg1;

@end
