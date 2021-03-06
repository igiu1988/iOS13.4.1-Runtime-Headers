/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

@interface TPSTip : NSObject <NSCopying, NSSecureCoding> {
    TPSURLAction * _action;
    NSString * _altImage;
    NSString * _altVideo;
    NSAttributedString * _attributedString;
    UIColor * _backgroundColor;
    NSArray * _collections;
    bool  _containsLinks;
    bool  _containsTargetingMeta;
    NSString * _identifier;
    NSString * _imageName;
    NSString * _languageCode;
    NSString * _notificationText;
    NSString * _notificationTitle;
    unsigned long long  _priority;
    NSString * _publishedDate;
    NSString * _shareText;
    NSString * _shortTitle;
    NSString * _summary;
    NSString * _text;
    bool  _textContainsHTML;
    NSString * _title;
    unsigned long long  _type;
    NSString * _videoName;
    NSString * _webURLPath;
}

@property (nonatomic, copy) TPSURLAction *action;
@property (nonatomic, copy) NSString *altImage;
@property (nonatomic, copy) NSString *altVideo;
@property (nonatomic, copy) NSAttributedString *attributedString;
@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, copy) NSArray *collections;
@property (nonatomic) bool containsLinks;
@property (nonatomic) bool containsTargetingMeta;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *imageName;
@property (nonatomic, copy) NSString *languageCode;
@property (nonatomic, copy) NSString *notificationText;
@property (nonatomic, copy) NSString *notificationTitle;
@property (nonatomic) unsigned long long priority;
@property (nonatomic, copy) NSString *publishedDate;
@property (nonatomic, copy) NSString *shareText;
@property (nonatomic, copy) NSString *shortTitle;
@property (nonatomic, copy) NSString *summary;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) bool textContainsHTML;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) unsigned long long type;
@property (nonatomic, copy) NSString *videoName;
@property (nonatomic, copy) NSString *webURLPath;

+ (id)assetNameFromFileName:(id)arg1;
+ (id)classSet;
+ (id)identifierFromTipDictionary:(id)arg1;
+ (id)imageNameFromTipDictionary:(id)arg1;
+ (id)languageCodeFromTipDictionary:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)videoNameFromTipDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)action;
- (id)altImage;
- (id)altVideo;
- (id)attributedString;
- (id)backgroundColor;
- (id)collections;
- (bool)containsLinks;
- (bool)containsTargetingMeta;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)imageName;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)languageCode;
- (id)notificationText;
- (id)notificationTitle;
- (unsigned long long)priority;
- (id)publishedDate;
- (void)setAction:(id)arg1;
- (void)setAltImage:(id)arg1;
- (void)setAltVideo:(id)arg1;
- (void)setAttributedString:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setCollections:(id)arg1;
- (void)setContainsLinks:(bool)arg1;
- (void)setContainsTargetingMeta:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setImageName:(id)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setNotificationText:(id)arg1;
- (void)setNotificationTitle:(id)arg1;
- (void)setPriority:(unsigned long long)arg1;
- (void)setPublishedDate:(id)arg1;
- (void)setShareText:(id)arg1;
- (void)setShortTitle:(id)arg1;
- (void)setSummary:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextContainsHTML:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setVideoName:(id)arg1;
- (void)setWebURLPath:(id)arg1;
- (id)shareText;
- (id)shortTitle;
- (id)summary;
- (id)text;
- (bool)textContainsHTML;
- (id)title;
- (unsigned long long)type;
- (void)updateWithDictionary:(id)arg1;
- (id)videoName;
- (id)webURLPath;

@end
