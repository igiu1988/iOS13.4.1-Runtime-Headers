/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

@interface WFRecordAudioAction : WFAction

@property (nonatomic, readonly) long long outputFormat;
@property (nonatomic, readonly) double recordingDuration;
@property (nonatomic, readonly) bool startImmediately;

// Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit

+ (id)datedFilenameForFormat:(long long)arg1;
+ (id)fileTypeForFormat:(long long)arg1;

- (long long)outputFormat;
- (double)recordingDuration;
- (bool)startImmediately;

// Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI

- (void)runWithUIKitUserInterface:(id)arg1 input:(id)arg2;

@end
