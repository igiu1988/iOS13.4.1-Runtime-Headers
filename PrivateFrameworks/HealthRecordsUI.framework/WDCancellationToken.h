/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
 */

@interface WDCancellationToken : NSObject {
    bool  _cancelled;
}

@property (getter=isCancelled, nonatomic) bool cancelled;

- (void)cancel;
- (bool)isCancelled;
- (void)setCancelled:(bool)arg1;

@end
