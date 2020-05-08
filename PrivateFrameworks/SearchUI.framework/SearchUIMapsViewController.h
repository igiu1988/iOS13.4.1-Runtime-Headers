/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIMapsViewController : _MKPlaceViewController <_MKPlaceViewControllerFeedbackDelegate> {
    <SFFeedbackListener> * _feedbackListener;
    unsigned long long  _queryId;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property <SFFeedbackListener> *feedbackListener;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long queryId;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)feedbackListener;
- (id)initWithMapsData:(id)arg1 feedbackListener:(id)arg2 queryId:(unsigned long long)arg3;
- (void)placeViewController:(id)arg1 shouldLogFeedbackOfType:(int)arg2;
- (unsigned long long)queryId;
- (void)setFeedbackListener:(id)arg1;

@end
