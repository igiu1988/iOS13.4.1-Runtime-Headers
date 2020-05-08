/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBPressSequenceMetricData : SBAWDMetricData {
    unsigned long long  _clickMax;
    bool  _didTriggerSOS;
    NSString * _pressName;
    NSArray * _pressSequence;
    NSUUID * _sosTriggerUUID;
}

@property (nonatomic) unsigned long long clickMax;
@property (nonatomic) bool didTriggerSOS;
@property (nonatomic, copy) NSString *pressName;
@property (nonatomic, copy) NSArray *pressSequence;
@property (nonatomic, copy) NSUUID *sosTriggerUUID;

- (void).cxx_destruct;
- (unsigned long long)clickMax;
- (bool)didTriggerSOS;
- (id)pressName;
- (id)pressSequence;
- (void)setClickMax:(unsigned long long)arg1;
- (void)setDidTriggerSOS:(bool)arg1;
- (void)setPressName:(id)arg1;
- (void)setPressSequence:(id)arg1;
- (void)setSosTriggerUUID:(id)arg1;
- (id)sosTriggerUUID;

@end
