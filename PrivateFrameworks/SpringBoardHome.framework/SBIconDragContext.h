/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

@interface SBIconDragContext : NSObject <BSDescriptionProviding> {
    NSMapTable * _appDragLocalContexts;
    NSMutableSet * _appLocalContexts;
    NSMapTable * _bouncedIcons;
    bool  _cancelled;
    NSMutableDictionary * _destinationFolderIconViews;
    NSMutableSet * _destinationIconViews;
    NSMapTable * _dragPreviewForIconViews;
    NSMutableSet * _dropAnimatingDragItems;
    NSMutableSet * _enteredIconListViews;
    NSArray * _grabbedIconViews;
    SBPlaceholderIcon * _iconPlaceholder;
    NSMapTable * _iconToExpandAfterDropAnimation;
    NSMapTable * _iconViewDropAssertions;
    NSMutableDictionary * _initialIconPaths;
    NSSet * _itemIdentifiers;
    NSDate * _lastUserInteractionDate;
    NSCountedSet * _messageExpectations;
    bool  _notifiedDelegateForDropSession;
    bool  _performedIconDrop;
    SBIconView * _primaryIconView;
    SBIconView * _recipientIconView;
    NSMutableSet * _sourceIconViews;
    NSSet * _sourceIcons;
    long long  _state;
    NSMapTable * _targetsForCancellingIconViews;
    NSTimer * _watchdogTimer;
}

@property (nonatomic, readonly, copy) NSSet *appLocalContexts;
@property (getter=isCancelled, nonatomic) bool cancelled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSSet *expectedMessages;
@property (nonatomic, copy) NSArray *grabbedIconViews;
@property (nonatomic, readonly) bool hasUserDragged;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SBPlaceholderIcon *iconPlaceholder;
@property (nonatomic, copy) NSSet *itemIdentifiers;
@property (nonatomic, copy) NSDate *lastUserInteractionDate;
@property (nonatomic) bool notifiedDelegateForDropSession;
@property (nonatomic) bool performedIconDrop;
@property (nonatomic, retain) SBIconView *primaryIconView;
@property (nonatomic, retain) SBIconView *recipientIconView;
@property (nonatomic, copy) NSSet *sourceIcons;
@property (nonatomic) long long state;
@property (readonly) Class superclass;
@property (getter=isUserActive, nonatomic, readonly) bool userActive;
@property (getter=isWaitingForMessage, nonatomic, readonly) bool waitingForMessage;
@property (nonatomic, retain) NSTimer *watchdogTimer;

- (void).cxx_destruct;
- (void)addAppLocalContext:(id)arg1;
- (void)addDestinationIconView:(id)arg1;
- (void)addDropAnimatingDragItem:(id)arg1;
- (void)addEnteredIconListView:(id)arg1;
- (void)addGrabbedIconView:(id)arg1;
- (void)addItemIdentifier:(id)arg1;
- (void)addMessageExpectationNamed:(id)arg1;
- (void)addSourceIcon:(id)arg1;
- (void)addSourceIconView:(id)arg1;
- (void)addSourceIcons:(id)arg1;
- (id)appDragLocalContextForDragItem:(id)arg1;
- (id)appLocalContexts;
- (id)bouncedIconForListModel:(id)arg1;
- (void)clearDropAssertionForIconView:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)destinationFolderIconViewForIconWithIdentifier:(id)arg1;
- (void)enumerateDestinationIconViewsUsingBlock:(id /* block */)arg1;
- (void)enumerateDragPreviewsUsingBlock:(id /* block */)arg1;
- (void)enumerateSourceIconViewsUsingBlock:(id /* block */)arg1;
- (id)expectedMessages;
- (id)grabbedIconViews;
- (bool)hasEnteredIconListView:(id)arg1;
- (bool)hasItemIdentifier:(id)arg1;
- (bool)hasMessageExpectationNamed:(id)arg1;
- (bool)hasSourceIconView:(id)arg1;
- (bool)hasUserDragged;
- (id)iconPlaceholder;
- (id)iconToExpandAfterDropAnimationForDragItem:(id)arg1;
- (id)init;
- (id)initialIndexPathForIcon:(id)arg1;
- (id)initialIndexPathForIconWithIdentifier:(id)arg1;
- (bool)isAnimatingDropForDragItem:(id)arg1;
- (bool)isCancelled;
- (bool)isUserActive;
- (bool)isWaitingForMessage;
- (id)itemIdentifiers;
- (id)lastUserInteractionDate;
- (id)listModelEnumeratorForBouncedIcons;
- (bool)notifiedDelegateForDropSession;
- (bool)performedIconDrop;
- (id)primaryIconView;
- (id)recipientIconView;
- (void)removeAllMessageExpectations;
- (void)removeMessageExpectationNamed:(id)arg1;
- (void)resetLastUserInteractionDate;
- (void)setAppDragLocalContext:(id)arg1 forDragItem:(id)arg2;
- (void)setBouncedIcon:(id)arg1 forListModel:(id)arg2;
- (void)setCancelled:(bool)arg1;
- (void)setDestinationFolderIconView:(id)arg1 forIconWithIdentifier:(id)arg2;
- (void)setDragPreview:(id)arg1 forIconView:(id)arg2;
- (void)setGrabbedIconViews:(id)arg1;
- (void)setIcon:(id)arg1 shouldExpandAfterDropAnimationForDragItems:(id)arg2;
- (void)setIconPlaceholder:(id)arg1;
- (void)setInitialIndexPath:(id)arg1 forIcon:(id)arg2;
- (void)setItemIdentifiers:(id)arg1;
- (void)setLastUserInteractionDate:(id)arg1;
- (void)setNotifiedDelegateForDropSession:(bool)arg1;
- (void)setPerformedIconDrop:(bool)arg1;
- (void)setPrimaryIconView:(id)arg1;
- (void)setRecipientIconView:(id)arg1;
- (void)setSourceIcons:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setTargetIconView:(id)arg1 forCancellingIconView:(id)arg2;
- (void)setWatchdogTimer:(id)arg1;
- (id)sourceIcons;
- (long long)state;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)swapSourceIconWithIdentifier:(id)arg1 withIcon:(id)arg2;
- (id)targetIconViewForCancellingIconView:(id)arg1;
- (id)watchdogTimer;

@end
