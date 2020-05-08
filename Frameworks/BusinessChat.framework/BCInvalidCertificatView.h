/* Generated by EzioChiu
   Image: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
 */

@interface BCInvalidCertificatView : UIView {
    UIView * _contentView;
    NSString * _host;
    UIImageView * _insecureIcon;
    UILabel * _messageLabel;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UIView *contentView;
@property (nonatomic, retain) NSString *host;
@property (nonatomic, retain) UIImageView *insecureIcon;
@property (nonatomic, retain) UILabel *messageLabel;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)contentView;
- (id)host;
- (id)initWithHost:(id)arg1;
- (id)insecureIcon;
- (id)messageLabel;
- (void)setContentView:(id)arg1;
- (void)setHost:(id)arg1;
- (void)setInsecureIcon:(id)arg1;
- (void)setMessageLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setupConstraints;
- (void)setupSubviews;
- (id)titleLabel;

@end
