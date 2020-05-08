/* Generated by EzioChiu
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKAlarmChange : EKObjectChange <EKOwnerIDProviding> {
    EKObjectID * _ownerID;
}

@property (nonatomic, readonly) EKObjectID *ownerID;

+ (int)entityType;
+ (void)fetchAlarmChangesInCalendar:(id)arg1 resultHandler:(id /* block */)arg2;
+ (void)fetchAlarmChangesInSource:(id)arg1 resultHandler:(id /* block */)arg2;
+ (void)fetchAlarmChangesInStore:(id)arg1 resultHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)initWithChangeProperties:(id)arg1;
- (id)ownerID;

@end
