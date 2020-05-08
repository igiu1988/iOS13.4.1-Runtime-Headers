/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBStarkNotificationConfiguration : NSObject <SBStarkNotificationsConfiguring, SBWindowLayoutStrategy> {
    CRCarPlayAppPolicyEvaluator * _appPolicyEvaluator;
    NSMutableDictionary * _appPolicyForBundleID;
    bool  _connectedWirelessly;
    FBSDisplayIdentity * _displayIdentity;
    UIWindow * _focusWindow;
    NSHashTable * _layoutObservers;
    BSServiceConnectionEndpoint * _openServiceEndpoint;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sceneBounds;
}

@property (getter=isConnectedWirelessly, nonatomic, readonly) bool connectedWirelessly;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) FBSDisplayIdentity *displayIdentity;
@property (nonatomic, readonly) UIWindow *focusWindow;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) BSServiceConnectionEndpoint *openServiceEndpoint;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)displayIdentity;
- (id)focusWindow;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameWithInterfaceOrientation:(long long)arg1;
- (id)init;
- (bool)isConnectedWirelessly;
- (id)openServiceEndpoint;
- (id)policyForApp:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)setGeoSupported:(bool)arg1;
- (bool)shouldClipForWindow:(id)arg1;

@end
