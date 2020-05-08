/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit
 */

@interface ConversationKit.ParticipantView : UIView {
    void alertView;
    void backgroundEffectsView;
    void bottomBar;
    void contentView;
    void customCornerRadius;
    void debugLabel;
    void delegate;
    void hideAlertViewTimer;
    void hideBottomBarTimer;
    void isExpanded;
    void isInRoster;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  loggingIdentifier;
    void monogramView;
    void mostRecentViewModelHash;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  participantIdentifier;
    void videoOverlayView;
    void videoView;
}

@property (nonatomic, readonly) _TtC15ConversationKit19ParticipantInfoView *bottomBar;
@property (nonatomic) bool isExpanded;
@property (nonatomic) bool isInRoster;

- (void).cxx_destruct;
- (id)bottomBar;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isExpanded;
- (bool)isInRoster;
- (void)layoutSubviews;
- (void)setIsExpanded:(bool)arg1;
- (void)setIsInRoster:(bool)arg1;

@end