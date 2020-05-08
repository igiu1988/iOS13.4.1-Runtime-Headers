/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroTreatmentInfo : NSObject <AltAspect> {
    double  _altAspect;
    unsigned long long  _assignedKBStyle;
    NSDictionary * _assignedTreatmentDict;
    int  _assignedTreatmentStyle;
    int  _requiredTreatmentStyle;
    bool  _treatmentApplied;
}

@property (nonatomic) double altAspect;
@property (nonatomic) unsigned long long assignedKBStyle;
@property (nonatomic, retain) NSDictionary *assignedTreatmentDict;
@property (nonatomic) int assignedTreatmentStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int requiredTreatmentStyle;
@property (readonly) Class superclass;
@property (nonatomic) bool treatmentApplied;

- (void).cxx_destruct;
- (double)altAspect;
- (unsigned long long)assignedKBStyle;
- (id)assignedTreatmentDict;
- (int)assignedTreatmentStyle;
- (int)requiredTreatmentStyle;
- (void)setAltAspect:(double)arg1;
- (void)setAssignedKBStyle:(unsigned long long)arg1;
- (void)setAssignedTreatmentDict:(id)arg1;
- (void)setAssignedTreatmentStyle:(int)arg1;
- (void)setRequiredTreatmentStyle:(int)arg1;
- (void)setTreatmentApplied:(bool)arg1;
- (bool)treatmentApplied;

@end
