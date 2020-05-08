/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
 */

@interface SSHarvestedApplicationMetadata : NSObject <BSXPCCoding, SSLoggable> {
    bool  _canGenerateDocument;
    NSArray * _contentRects;
    NSString * _userActivityTitle;
}

@property (nonatomic) bool canGenerateDocument;
@property (nonatomic, copy) NSArray *contentRects;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *loggableDescription;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *userActivityTitle;

- (void).cxx_destruct;
- (bool)canGenerateDocument;
- (id)contentRects;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)loggableDescription;
- (void)setCanGenerateDocument:(bool)arg1;
- (void)setContentRects:(id)arg1;
- (void)setUserActivityTitle:(id)arg1;
- (id)userActivityTitle;

@end
