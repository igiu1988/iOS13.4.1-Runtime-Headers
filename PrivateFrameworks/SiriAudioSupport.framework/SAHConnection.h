/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriAudioSupport.framework/SiriAudioSupport
 */

@interface SAHConnection : NSObject {
    void xpcConnection;
}

+ (id)sharedConnection;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)recordAppSelectionSignalsForIntent:(id)arg1 force:(bool)arg2 test:(bool)arg3;
- (void)recordPostEngagementSignalsForIntent:(id)arg1 response:(id)arg2 force:(bool)arg3 test:(bool)arg4;

@end
