/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
 */

@interface HMICameraVideoAnalyzerRequestLog : HMFObject <HMFLogging> {
    HMICameraVideoAnalyzerRequest * _request;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMICameraVideoAnalyzerRequest *request;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)debug:(id)arg1;
- (void)info:(id)arg1;
- (id)initWithRequest:(id)arg1;
- (id)request;
- (id)stringWithFormat:(id)arg1;

@end
