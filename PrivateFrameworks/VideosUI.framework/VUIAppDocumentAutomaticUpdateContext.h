/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIAppDocumentAutomaticUpdateContext : NSObject <VUIAppDocumentUpdateContext> {
    IKUpdateServiceRequest * _currentUpdateRequest;
    NSArray * _receivedEvents;
    NSMutableOrderedSet * _remainingViewElements;
}

@property (nonatomic, retain) IKUpdateServiceRequest *currentUpdateRequest;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *receivedEvents;
@property (nonatomic, retain) NSMutableOrderedSet *remainingViewElements;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_documentUpdateRequestForViewElement:(id)arg1 appContext:(id)arg2 documentRef:(id)arg3;
- (id)currentUpdateRequest;
- (id)init;
- (id)initWithEvents:(id)arg1 viewElements:(id)arg2;
- (id)receivedEvents;
- (id)remainingViewElements;
- (void)setCurrentUpdateRequest:(id)arg1;
- (void)setReceivedEvents:(id)arg1;
- (void)setRemainingViewElements:(id)arg1;
- (void)updateCurrentUpdateRequestWithAppContext:(id)arg1 documentRef:(id)arg2;
- (void)updateRequestCompletedWithViewElements:(id)arg1 documentRef:(id)arg2;

@end
