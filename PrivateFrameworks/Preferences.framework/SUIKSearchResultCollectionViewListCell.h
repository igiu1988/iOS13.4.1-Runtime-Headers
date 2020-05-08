/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface SUIKSearchResultCollectionViewListCell : _UICollectionViewListCell {
    UILabel * _detailTextLabel;
    CSSearchableItem * _searchableItem;
    UILayoutGuide * _simulatedImageViewLayoutGuide;
    UILabel * _textLabel;
}

@property (nonatomic, retain) UILabel *detailTextLabel;
@property (nonatomic, retain) CSSearchableItem *searchableItem;
@property (nonatomic, retain) UILayoutGuide *simulatedImageViewLayoutGuide;
@property (nonatomic, retain) UILabel *textLabel;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)_commonInit;
- (void)configureWithSearchableItem:(id)arg1;
- (id)detailTextLabel;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prepareForReuse;
- (id)searchableItem;
- (void)setDetailTextLabel:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setSearchableItem:(id)arg1;
- (void)setSimulatedImageViewLayoutGuide:(id)arg1;
- (void)setTextLabel:(id)arg1;
- (id)simulatedImageViewLayoutGuide;
- (id)textLabel;

@end
