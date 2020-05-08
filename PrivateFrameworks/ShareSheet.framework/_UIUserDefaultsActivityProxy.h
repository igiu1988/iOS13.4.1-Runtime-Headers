/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

@interface _UIUserDefaultsActivityProxy : NSObject <NSSecureCoding> {
    NSUUID * _activityUUID;
    bool  _canEdit;
    bool  _canHide;
    bool  _canMove;
    NSNumber * _imageSlot;
    bool  _isHidden;
    NSNumber * _labelSlot;
    double  _platterTextHeight;
}

@property (nonatomic, retain) NSUUID *activityUUID;
@property (nonatomic) bool canEdit;
@property (nonatomic) bool canHide;
@property (nonatomic) bool canMove;
@property (nonatomic, retain) NSNumber *imageSlot;
@property (nonatomic) bool isHidden;
@property (nonatomic, retain) NSNumber *labelSlot;
@property (nonatomic) double platterTextHeight;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activityUUID;
- (bool)canEdit;
- (bool)canHide;
- (bool)canMove;
- (void)encodeWithCoder:(id)arg1;
- (id)imageSlot;
- (id)initWithCoder:(id)arg1;
- (bool)isHidden;
- (id)labelSlot;
- (double)platterTextHeight;
- (void)setActivityUUID:(id)arg1;
- (void)setCanEdit:(bool)arg1;
- (void)setCanHide:(bool)arg1;
- (void)setCanMove:(bool)arg1;
- (void)setImageSlot:(id)arg1;
- (void)setIsHidden:(bool)arg1;
- (void)setLabelSlot:(id)arg1;
- (void)setPlatterTextHeight:(double)arg1;

@end
