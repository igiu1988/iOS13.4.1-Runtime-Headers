/* Generated by EzioChiu.
 */

@protocol _PARSuggestion <NSObject>

@required

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (float)score;
- (void)setScore:(float)arg1;
- (void)setSuggestion:(NSString *)arg1;
- (void)setTopic:(NSString *)arg1;
- (void)setType:(int)arg1;
- (NSString *)suggestion;
- (NSString *)topic;
- (int)type;

@end
