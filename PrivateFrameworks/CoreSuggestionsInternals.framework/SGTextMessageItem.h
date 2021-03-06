/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGTextMessageItem : NSObject <NSSecureCoding> {
    NSString * _content;
    NSArray * _detectedData;
    NSArray * _features;
    NSString * _language;
    SGTextMessage * _message;
}

@property (readonly) NSString *content;
@property (readonly) NSArray *detectedData;
@property (retain) NSArray *features;
@property (readonly) NSString *language;
@property (readonly) SGTextMessage *message;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)content;
- (id)detectedData;
- (void)encodeWithCoder:(id)arg1;
- (id)features;
- (id)initWithCoder:(id)arg1;
- (id)initWithTextMessage:(id)arg1;
- (id)initWithTextMessage:(id)arg1 andDetectedData:(id)arg2;
- (id)language;
- (id)message;
- (void)setFeatures:(id)arg1;

@end
