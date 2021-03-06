/* Generated by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventDetailLocationItem : NSObject <UITextViewDelegate> {
    bool  _hasMapItemLaunchOptionFromTimeToLeaveNotification;
    NSString * _locationComment;
    bool  _locationIsAttendee;
    long long  _locationStatus;
    UITapGestureRecognizer * _locationTapRecognizer;
    NSString * _locationTitle;
    NSURL * _locationURL;
    EKTextViewWithLabelTextMetrics * _locationView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property bool hasMapItemLaunchOptionFromTimeToLeaveNotification;
@property (readonly) unsigned long long hash;
@property (retain) NSString *locationTitle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_locationTapped;
- (bool)hasMapItemLaunchOptionFromTimeToLeaveNotification;
- (id)initWithLocationName:(id)arg1 forEvent:(id)arg2;
- (id)locationTitle;
- (id)locationView;
- (void)setHasMapItemLaunchOptionFromTimeToLeaveNotification:(bool)arg1;
- (void)setLocationTitle:(id)arg1;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)updateLocation:(id)arg1 forEvent:(id)arg2;

@end
