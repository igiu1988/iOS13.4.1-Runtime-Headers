/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

@interface VSApplicationBootURLOperation : VSAsyncOperation <NSURLSessionDelegate> {
    bool  _isDeveloper;
    VSPreferences * _preferences;
    NSURL * _url;
    VSFailable * _urlOrError;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isDeveloper;
@property (nonatomic, retain) VSPreferences *preferences;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSURL *url;
@property (nonatomic, retain) VSFailable *urlOrError;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)executionDidBegin;
- (id)generateFilePathForURL:(id)arg1;
- (id)init;
- (id)initWithBootURL:(id)arg1 isDeveloper:(bool)arg2;
- (bool)isDeveloper;
- (id)preferences;
- (void)setIsDeveloper:(bool)arg1;
- (void)setPreferences:(id)arg1;
- (void)setUrl:(id)arg1;
- (void)setUrlOrError:(id)arg1;
- (id)url;
- (id)urlOrError;
- (bool)verifyExtendedValidationWithTrust:(struct __SecTrust { }*)arg1;

@end
