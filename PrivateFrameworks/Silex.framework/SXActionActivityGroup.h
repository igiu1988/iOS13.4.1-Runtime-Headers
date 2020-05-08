/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXActionActivityGroup : NSObject <SXActionActivityGroup> {
    NSMutableArray * _activities;
    NSString * _title;
}

@property (nonatomic, retain) NSMutableArray *activities;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)activities;
- (void)addActivity:(id)arg1;
- (id)initWithTitle:(id)arg1;
- (void)setActivities:(id)arg1;
- (id)title;

@end
