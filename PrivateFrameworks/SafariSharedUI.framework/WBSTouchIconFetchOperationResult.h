/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
 */

@interface WBSTouchIconFetchOperationResult : NSObject {
    bool  _favicon;
    bool  _higherPriorityIconDownloadFailedDueToNetworkError;
    NSString * _host;
    bool  _pageRequestDidSucceed;
    UIImage * _touchIcon;
}

@property (getter=isFavicon, nonatomic, readonly) bool favicon;
@property (nonatomic, readonly) bool higherPriorityIconDownloadFailedDueToNetworkError;
@property (nonatomic, readonly, copy) NSString *host;
@property (nonatomic, readonly) bool pageRequestDidSucceed;
@property (nonatomic, readonly) UIImage *touchIcon;

+ (id)resultForFetchFailureWithHost:(id)arg1 pageRequestDidSucceed:(bool)arg2;
+ (id)resultWithTouchIcon:(id)arg1 host:(id)arg2 isFavicon:(bool)arg3 pageRequestDidSucceed:(bool)arg4 higherPriorityIconDownloadFailedDueToNetworkError:(bool)arg5;

- (void).cxx_destruct;
- (bool)higherPriorityIconDownloadFailedDueToNetworkError;
- (id)host;
- (id)initWithTouchIcon:(id)arg1 host:(id)arg2 isFavicon:(bool)arg3 pageRequestDidSucceed:(bool)arg4 higherPriorityIconDownloadFailedDueToNetworkError:(bool)arg5;
- (bool)isFavicon;
- (bool)pageRequestDidSucceed;
- (id)touchIcon;

@end
