/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFTriggerUISummary : NSObject {
    NSString * _triggerDescription;
    <HFIconDescriptor> * _triggerIconDescriptor;
    NSArray * _triggerSummaryIconDescriptors;
    NSString * _triggerTitle;
    unsigned long long  _triggerType;
}

@property (nonatomic, readonly) NSString *triggerDescription;
@property (nonatomic, readonly) <HFIconDescriptor> *triggerIconDescriptor;
@property (nonatomic, readonly) NSArray *triggerSummaryIconDescriptors;
@property (nonatomic, readonly) NSString *triggerTitle;
@property (nonatomic, readonly) unsigned long long triggerType;

- (void).cxx_destruct;
- (void)_updateWithTrigger:(id)arg1 inHome:(id)arg2 forceDisabled:(bool)arg3;
- (id)initWithTrigger:(id)arg1 inHome:(id)arg2 forceDisabled:(bool)arg3;
- (id)triggerDescription;
- (id)triggerIconDescriptor;
- (id)triggerSummaryIconDescriptors;
- (id)triggerTitle;
- (unsigned long long)triggerType;

@end
