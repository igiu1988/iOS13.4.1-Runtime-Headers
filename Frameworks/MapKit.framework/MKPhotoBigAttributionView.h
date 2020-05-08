/* Generated by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPhotoBigAttributionView : UIView {
    UIView * _backgroundView;
    long long  _context;
    _MKUILabel * _firstLineLabel;
    UIImageView * _imageView;
    UIView * _labelsView;
    MKMapItem * _mapItem;
    _MKUILabel * _secondLineLabel;
    long long  _type;
}

@property (nonatomic, retain) MKMapItem *mapItem;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (id)firstLineLabelFont;
- (id)initWithContext:(long long)arg1;
- (id)mapItem;
- (id)secondLineLabelFont;
- (void)setMapItem:(id)arg1;
- (void)setMapItem:(id)arg1 andType:(long long)arg2;
- (void)setType:(long long)arg1;
- (long long)type;
- (void)updateBackground;
- (void)updateInfoAttributionString;

@end
