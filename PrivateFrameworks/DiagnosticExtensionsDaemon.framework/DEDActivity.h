/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
 */

@interface DEDActivity : NSObject {
    NSObject<OS_os_activity> * _cleanup;
}

@property (retain) NSObject<OS_os_activity> *cleanup;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)cleanup;
- (id)currentCleanupActivity;
- (id)newCleanupActivity;
- (void)setCleanup:(id)arg1;

@end
