/* Generated by EzioChiu
   Image: /System/Library/Frameworks/CarPlay.framework/CarPlay
 */

@interface CPListItem : NSObject <NSSecureCoding> {
    NSString * _detailText;
    NSUUID * _identifier;
    CPImageSet * _imageSet;
    bool  _showsDisclosureIndicator;
    NSString * _text;
    id  _userInfo;
}

@property (nonatomic, readonly, copy) NSString *detailText;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, retain) CPImageSet *imageSet;
@property (nonatomic, readonly) bool showsDisclosureIndicator;
@property (nonatomic, readonly, copy) NSString *text;
@property (nonatomic, retain) id userInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)detailText;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)image;
- (id)imageSet;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithText:(id)arg1 detailText:(id)arg2;
- (id)initWithText:(id)arg1 detailText:(id)arg2 image:(id)arg3;
- (id)initWithText:(id)arg1 detailText:(id)arg2 image:(id)arg3 showsDisclosureIndicator:(bool)arg4;
- (bool)isEqual:(id)arg1;
- (void)setImageSet:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (bool)showsDisclosureIndicator;
- (id)text;
- (id)userInfo;

@end
