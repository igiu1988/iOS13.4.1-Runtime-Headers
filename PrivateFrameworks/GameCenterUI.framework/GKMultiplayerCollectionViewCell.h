/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKMultiplayerCollectionViewCell : UICollectionViewCell {
    UIView * _accessoryContainerView;
    NSLayoutConstraint * _cellLeadingConstraint;
    GKDashboardPlayerPhotoView * _iconView;
    UILabel * _nameLabel;
    NSLayoutConstraint * _nameLabelBaselineConstraintToCenterLine;
    NSLayoutConstraint * _nameLabelCenterlineConstraintToCenterline;
    long long  _number;
    GKMultiplayerParticipant * _participant;
    bool  _removable;
    UILabel * _statusLabel;
    NSLayoutConstraint * _statusLabelBaselineConstraintToNameBaseline;
    NSLayoutConstraint * _statusLabelTopConstraintToNameBaseline;
}

@property (nonatomic, retain) UIView *accessoryContainerView;
@property (nonatomic, retain) NSLayoutConstraint *cellLeadingConstraint;
@property (nonatomic, retain) GKDashboardPlayerPhotoView *iconView;
@property (nonatomic, retain) UILabel *nameLabel;
@property (nonatomic, retain) NSLayoutConstraint *nameLabelBaselineConstraintToCenterLine;
@property (nonatomic, retain) NSLayoutConstraint *nameLabelCenterlineConstraintToCenterline;
@property (nonatomic) long long number;
@property (nonatomic, copy) GKMultiplayerParticipant *participant;
@property (nonatomic) bool removable;
@property (nonatomic, retain) UILabel *statusLabel;
@property (nonatomic, retain) NSLayoutConstraint *statusLabelBaselineConstraintToNameBaseline;
@property (nonatomic, retain) NSLayoutConstraint *statusLabelTopConstraintToNameBaseline;

+ (id)reuseIdentifier;

- (id)accessoryContainerView;
- (void)awakeFromNib;
- (id)cellLeadingConstraint;
- (void)configureConstraintsForCurrentTraitCollection;
- (void)dealloc;
- (id)description;
- (id)iconView;
- (id)nameLabel;
- (id)nameLabelBaselineConstraintToCenterLine;
- (id)nameLabelCenterlineConstraintToCenterline;
- (long long)number;
- (id)participant;
- (void)participantChanged;
- (void)prepareForReuse;
- (bool)removable;
- (void)removeAccessorySubviews;
- (void)setAccessoryContainerView:(id)arg1;
- (void)setCellLeadingConstraint:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setNameLabelBaselineConstraintToCenterLine:(id)arg1;
- (void)setNameLabelCenterlineConstraintToCenterline:(id)arg1;
- (void)setNumber:(long long)arg1;
- (void)setParticipant:(id)arg1;
- (void)setRemovable:(bool)arg1;
- (void)setStatusLabel:(id)arg1;
- (void)setStatusLabelBaselineConstraintToNameBaseline:(id)arg1;
- (void)setStatusLabelTopConstraintToNameBaseline:(id)arg1;
- (id)statusLabel;
- (id)statusLabelBaselineConstraintToNameBaseline;
- (id)statusLabelTopConstraintToNameBaseline;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateAccessoryViewForType:(long long)arg1;

@end
