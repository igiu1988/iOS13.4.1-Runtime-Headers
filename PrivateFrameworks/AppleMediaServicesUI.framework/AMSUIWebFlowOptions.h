/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
 */

@interface AMSUIWebFlowOptions : NSObject {
    bool  _animated;
    NSString * _backgroundColor;
    bool  _deferredPresentation;
    bool  _isReappear;
    AMSUIWebLoadingPageModel * _loadingPage;
    long long  _modalPresentationStyle;
    long long  _modalTransitionStyle;
    AMSUIWebNavigationBarModel * _navigationBar;
    NSDictionary * _pageData;
}

@property (nonatomic) bool animated;
@property (nonatomic, retain) NSString *backgroundColor;
@property (nonatomic) bool deferredPresentation;
@property (nonatomic) bool isReappear;
@property (nonatomic, retain) AMSUIWebLoadingPageModel *loadingPage;
@property (nonatomic) long long modalPresentationStyle;
@property (nonatomic) long long modalTransitionStyle;
@property (nonatomic, retain) AMSUIWebNavigationBarModel *navigationBar;
@property (nonatomic, retain) NSDictionary *pageData;

- (void).cxx_destruct;
- (bool)animated;
- (id)backgroundColor;
- (bool)deferredPresentation;
- (bool)isReappear;
- (id)loadingPage;
- (long long)modalPresentationStyle;
- (long long)modalTransitionStyle;
- (id)navigationBar;
- (id)pageData;
- (void)setAnimated:(bool)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setDeferredPresentation:(bool)arg1;
- (void)setIsReappear:(bool)arg1;
- (void)setLoadingPage:(id)arg1;
- (void)setModalPresentationStyle:(long long)arg1;
- (void)setModalTransitionStyle:(long long)arg1;
- (void)setNavigationBar:(id)arg1;
- (void)setPageData:(id)arg1;

@end
