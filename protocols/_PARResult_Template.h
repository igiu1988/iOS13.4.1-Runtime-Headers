/* Generated by EzioChiu.
 */

@protocol _PARResult_Template <NSObject>

@required

- (NSData *)cardData;
- (NSString *)completion;
- (NSData *)completionIcon;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setCardData:(NSData *)arg1;
- (void)setCompletion:(NSString *)arg1;
- (void)setCompletionIcon:(NSData *)arg1;
- (void)setThumbnail:(NSData *)arg1;
- (void)setTitle:(NSString *)arg1;
- (NSData *)thumbnail;
- (NSString *)title;

@end
