/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
 */

@interface CAT : NSObject

+ (id)evaluate:(id)arg1 propName:(id)arg2 parameters:(id)arg3 globals:(id)arg4;
+ (void)execute:(id)arg1 catId:(id)arg2 parameters:(id)arg3 globals:(id)arg4 callback:(id)arg5 completion:(id /* block */)arg6;
+ (void)execute:(id)arg1 catId:(id)arg2 parameters:(id)arg3 globals:(id)arg4 callback:(id)arg5 options:(int)arg6 completion:(id /* block */)arg7;
+ (void)execute:(id)arg1 catId:(id)arg2 parameters:(id)arg3 globals:(id)arg4 completion:(id /* block */)arg5;
+ (id)getPublicationUrl;
+ (id)resolve:(id)arg1 propName:(id)arg2 parameters:(id)arg3 completion:(id /* block */)arg4;

@end