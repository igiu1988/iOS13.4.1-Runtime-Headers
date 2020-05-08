/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

@interface CADGroupedAccountAccessHandler : NSObject <CADAccountAccessHandler> {
    NSMutableArray * _accessHandlers;
}

@property (nonatomic, readonly) NSMutableArray *accessHandlers;

- (void).cxx_destruct;
- (id)accessHandlers;
- (void)addAccountAccessHandler:(id)arg1;
- (id)init;
- (bool)isAccountManaged:(id)arg1;
- (bool)isActionAllowed:(unsigned long long)arg1 forAccountIdentifier:(id)arg2;
- (void)reset;
- (id)restrictedCalendarRowIDsForAction:(unsigned long long)arg1;

@end
