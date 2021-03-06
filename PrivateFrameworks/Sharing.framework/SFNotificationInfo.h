/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFNotificationInfo : NSObject <NSCopying, NSSecureCoding> {
    NSURL * _attachmentURL;
    NSString * _body;
    SFNotificationInfo * _cachedMediumBubbleVersion;
    unsigned char  _deviceClass;
    SFNotificationError * _error;
    NSString * _header;
    unsigned char  _interactionBehavior;
    unsigned char  _interactionDirection;
    unsigned int  _notificationType;
    NSString * _title;
}

@property (nonatomic, retain) NSURL *attachmentURL;
@property (nonatomic, retain) NSString *body;
@property (nonatomic) unsigned char deviceClass;
@property (nonatomic, retain) SFNotificationError *error;
@property (nonatomic, retain) NSString *header;
@property (nonatomic) unsigned char interactionBehavior;
@property (nonatomic) unsigned char interactionDirection;
@property (nonatomic, readonly) SFNotificationInfo *mediumBubbleVersion;
@property (nonatomic) unsigned int notificationType;
@property (nonatomic, retain) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attachmentURL;
- (id)body;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned char)deviceClass;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)header;
- (id)initWithCoder:(id)arg1;
- (unsigned char)interactionBehavior;
- (unsigned char)interactionDirection;
- (id)mediumBubbleVersion;
- (unsigned int)notificationType;
- (void)setAttachmentURL:(id)arg1;
- (void)setBody:(id)arg1;
- (void)setDeviceClass:(unsigned char)arg1;
- (void)setError:(id)arg1;
- (void)setHeader:(id)arg1;
- (void)setInteractionBehavior:(unsigned char)arg1;
- (void)setInteractionDirection:(unsigned char)arg1;
- (void)setNotificationType:(unsigned int)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
