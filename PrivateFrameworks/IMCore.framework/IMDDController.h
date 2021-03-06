/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMDDController : NSObject {
    NSObject<OS_dispatch_queue> * _scannerQueue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_processLinkInAttributedString:(id)arg1;
- (bool)_scanAttributedStringWithMessage:(id)arg1 attributedString:(id)arg2 plainText:(id)arg3;
- (bool)_scanMessageUsingScanner:(id)arg1 attributedString:(id)arg2;
- (id)init;
- (void)scanMessage:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)scanMessage:(id)arg1 waitUntilDone:(bool)arg2 completionBlock:(id /* block */)arg3;
- (id)scannerQueue;
- (struct __DDScanner { }*)sharedScanner;

@end
