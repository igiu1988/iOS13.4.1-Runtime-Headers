/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBScene : NSObject <BSDescriptionProviding, FBSceneHost> {
    <FBSceneClient> * _client;
    FBProcess * _clientProcess;
    <FBSceneClientProvider> * _clientProvider;
    FBSSceneClientSettings * _clientSettings;
    long long  _contentState;
    bool  _contentStateIsChanging;
    FBSSceneDefinition * _definition;
    FBSceneObserver * _delegateProxy;
    NSHashTable * _geometryObservers;
    FBSceneHostManager * _hostManager;
    NSString * _identifier;
    FBSSceneIdentityToken * _identityToken;
    bool  _inTransaction;
    unsigned long long  _lastForegroundingTransitionID;
    FBSceneLayerManager * _layerManager;
    FBSMutableSceneSettings * _mutableSettings;
    NSMutableOrderedSet * _observerProxies;
    <FBSceneManagerSceneDelegate> * _sceneManagerSceneDelegate;
    FBSSceneSettings * _settings;
    <BSInvalidatable> * _stateCaptureAssertion;
    unsigned long long  _transactionID;
    bool  _valid;
    NSString * _workspaceIdentifier;
}

@property (getter=_isInTransaction, nonatomic, readonly) bool _inTransaction;
@property (nonatomic, readonly) unsigned long long _transactionID;
@property (nonatomic, readonly) <FBSceneClient> *client;
@property (nonatomic, readonly) FBProcess *clientProcess;
@property (nonatomic, readonly) <FBSceneClientProvider> *clientProvider;
@property (nonatomic, readonly) FBSSceneClientSettings *clientSettings;
@property (nonatomic, readonly) long long contentState;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) FBSSceneDefinition *definition;
@property (nonatomic) <FBSceneDelegate> *delegate;
@property (nonatomic, readonly) FBSceneObserver *delegateProxy;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, retain) FBSDisplayConfiguration *display;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) FBSceneHostManager *hostManager;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) FBSSceneIdentityToken *identityToken;
@property (nonatomic, readonly) FBSceneLayerManager *layerManager;
@property (nonatomic, retain) FBSMutableSceneSettings *mutableSettings;
@property (nonatomic, readonly, copy) NSArray *observerProxies;
@property (nonatomic, readonly, copy) FBSSceneParameters *parameters;
@property (nonatomic) <FBSceneManagerSceneDelegate> *sceneManagerSceneDelegate;
@property (nonatomic, readonly) FBSSceneSettings *settings;
@property (nonatomic, readonly, copy) FBSSceneSpecification *specification;
@property (readonly) Class superclass;
@property (getter=isValid, nonatomic, readonly) bool valid;
@property (nonatomic, readonly, copy) NSString *workspaceIdentifier;

// Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard

- (void).cxx_destruct;
- (void)_addSceneGeometryObserver:(id)arg1;
- (void)_adjustInitialSettings:(id)arg1;
- (void)_applyUpdateWithContext:(id)arg1 completion:(id /* block */)arg2;
- (unsigned long long)_beginTransaction;
- (void)_dispatchClientMessageWithBlock:(id /* block */)arg1;
- (void)_endTransaction:(unsigned long long)arg1;
- (void)_invalidateWithTransitionContext:(id)arg1;
- (bool)_isInTransaction;
- (void)_removeSceneGeometryObserver:(id)arg1;
- (void)_setContentState:(long long)arg1;
- (unsigned long long)_transactionID;
- (void)addObserver:(id)arg1;
- (id)client;
- (void)client:(id)arg1 didReceiveActions:(id)arg2;
- (void)client:(id)arg1 didUpdateClientSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4;
- (id)clientProcess;
- (id)clientProvider;
- (id)clientSettings;
- (void)clientWillInvalidate:(id)arg1;
- (long long)contentState;
- (id)createSnapshot;
- (id)createSnapshotWithContext:(id)arg1;
- (long long)currentInterfaceOrientation;
- (void)dealloc;
- (id)debugDescription;
- (id)definition;
- (id)delegate;
- (id)delegateProxy;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)display;
- (id)hostManager;
- (id)identifier;
- (id)identityToken;
- (id)initWithDefiniton:(id)arg1 initialParameters:(id)arg2 clientProvider:(id)arg3;
- (bool)isValid;
- (id)layerManager;
- (id)mutableSettings;
- (id)observerProxies;
- (id)parameters;
- (void)removeObserver:(id)arg1;
- (id)sceneManagerSceneDelegate;
- (void)sendActions:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMutableSettings:(id)arg1;
- (void)setSceneManagerSceneDelegate:(id)arg1;
- (id)settings;
- (id)snapshotContext;
- (id)specification;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)uiClientSettings;
- (id)uiSettings;
- (void)updateSettings:(id)arg1 withTransitionContext:(id)arg2;
- (void)updateSettings:(id)arg1 withTransitionContext:(id)arg2 completion:(id /* block */)arg3;
- (void)updateSettingsWithBlock:(id /* block */)arg1;
- (void)updateSettingsWithTransitionBlock:(id /* block */)arg1;
- (void)updateUISettingsWithBlock:(id /* block */)arg1;
- (void)updateUISettingsWithTransitionBlock:(id /* block */)arg1;
- (id)workspaceIdentifier;

// Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXFrontBoardUtils.framework/AXFrontBoardUtils

- (bool)accessibilityIsSceneOccluded;
- (bool)accessibilityIsSceneOnCarScreen;
- (bool)accessibilityIsSceneOnMainScreen;
- (bool)accessibilitySceneBelongsToTheSystemApp;
- (id)accessibilitySceneDescription;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilitySceneFrame;
- (id)accessibilitySceneIdentifier;
- (bool)accessibilitySceneIsDeactivatedBySidebar;
- (bool)accessibilitySceneIsDeactivatedBySwitcher;
- (bool)accessibilitySceneIsForegroundVisible;
- (bool)accessibilitySceneIsRunningInForeground;
- (bool)accessibilitySceneIsSuspended;
- (double)accessibilitySceneLevel;
- (bool)accessibilitySceneOwnerIsAUIApplication;
- (id)accessibilityScenePID;
- (id)accessibilitySceneProcess;

@end
