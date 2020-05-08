/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/BehaviorMiner.framework/BehaviorMiner
 */

@interface BMRuleExtractor : NSObject {
    unsigned long long  _basketCount;
    NSMutableArray * _items;
    NSMutableDictionary * _patterns;
}

@property unsigned long long basketCount;
@property (nonatomic, retain) NSMutableArray *items;
@property (nonatomic, retain) NSMutableDictionary *patterns;

- (void).cxx_destruct;
- (unsigned long long)basketCount;
- (void)extractRulesWithMinSupport:(unsigned long long)arg1 minConfidence:(double)arg2 targetTypes:(id)arg3 batchSize:(unsigned long long)arg4 handler:(id /* block */)arg5;
- (id)initWithPatterns:(id)arg1 items:(id)arg2 basketCount:(unsigned long long)arg3;
- (id)itemSetForItemIndexSet:(id)arg1;
- (id)items;
- (id)patterns;
- (void)setBasketCount:(unsigned long long)arg1;
- (void)setItems:(id)arg1;
- (void)setPatterns:(id)arg1;
- (id)subsetsOfItemset:(id)arg1;
- (id)supportOfItemSet:(id)arg1;

@end
