/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INBillPayeeResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithBillPayeeToConfirm:(id)arg1;
+ (id)disambiguationWithBillPayeesToDisambiguate:(id)arg1;
+ (id)successWithResolvedBillPayee:(id)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
