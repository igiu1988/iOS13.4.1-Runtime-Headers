/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKTransitBalanceModel : NSObject {
    NSMutableArray * _balanceFields;
    NSDictionary * _balancesByID;
    NSMutableArray * _commutePlanBalanceFields;
    NSArray * _displayableBalances;
    NSArray * _displayableCommutePlanBalances;
    NSArray * _displayableCommutePlans;
    PKPaymentPass * _pass;
    NSArray * _transitCommutePlans;
    PKTransitPassProperties * _transitProperties;
}

@property (nonatomic, retain) NSMutableArray *balanceFields;
@property (nonatomic, readonly) NSArray *displayableBalances;
@property (nonatomic, readonly) NSArray *displayableCommutePlanBalances;
@property (nonatomic, readonly) NSArray *displayableCommutePlans;
@property (nonatomic, readonly) bool hasBalanceContent;
@property (nonatomic, readonly) bool hasCommutePlanContent;
@property (nonatomic, readonly) NSString *primaryDisplayableBalance;
@property (nonatomic, readonly) NSArray *transitCommutePlans;

- (void).cxx_destruct;
- (void)_addCommutePlanBalanceFieldsToCommutePlanBalanceFields;
- (void)_updateBalancesAndPlans;
- (id)balanceFields;
- (id)balanceForIdentifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)displayableBalances;
- (id)displayableCommutePlanBalances;
- (id)displayableCommutePlans;
- (bool)hasBalanceContent;
- (bool)hasCommutePlanContent;
- (id)initWithPass:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)primaryDisplayableBalance;
- (void)setBalanceFields:(id)arg1;
- (void)setDynamicBalances:(id)arg1;
- (void)setDynamicBalancesByID:(id)arg1;
- (void)setTransitProperties:(id)arg1;
- (id)transitCommutePlans;

@end
