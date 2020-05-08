/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

@interface DDOpenURLAction : DDAction {
    LSAppLink * _appLink;
    bool  _appLinkInitDone;
}

- (void).cxx_destruct;
- (id)appLink;
- (bool)canBePerformedByOpeningURL;
- (id)companionAction;
- (id)icon;
- (id)localizedName;
- (id)notificationIconBundleIdentifier;
- (id)notificationURL;
- (void)performFromView:(id)arg1;
- (bool)shouldOpenInApp;
- (bool)shouldOpenInSafari;

@end
