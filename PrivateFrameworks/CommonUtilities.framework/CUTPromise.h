/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
 */

@interface CUTPromise : CUTUnsafePromise

+ (id)all:(id)arg1;
+ (id)failedPromiseWithError:(id)arg1;
+ (id)fulfilledPromiseWithValue:(id)arg1;

- (void)registerResultBlock:(id /* block */)arg1;
- (id)then:(id /* block */)arg1;

@end
