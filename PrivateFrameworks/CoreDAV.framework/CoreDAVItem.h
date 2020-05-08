/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVItem : NSObject <CoreDAVItem> {
    NSMutableSet * _attributes;
    NSMutableArray * _extraChildItems;
    NSString * _name;
    NSString * _nameSpace;
    NSData * _payload;
    bool  _useCDATA;
}

@property (nonatomic, retain) NSMutableSet *attributes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableArray *extraChildItems;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *nameSpace;
@property (nonatomic, retain) NSData *payload;
@property (readonly) Class superclass;
@property (nonatomic) bool useCDATA;

+ (id)copyParseRules;
+ (id)parseRuleCache;

- (void).cxx_destruct;
- (id)attributes;
- (id)childrenToWrite;
- (id)copyParseRules;
- (id)description;
- (id)extraChildItems;
- (id)generateXMLString;
- (id)hashString;
- (id)init;
- (id)initWithNameSpace:(id)arg1 andName:(id)arg2;
- (id)name;
- (id)nameSpace;
- (void)parserFoundAttributes:(id)arg1;
- (void)parserFoundPayload:(id)arg1;
- (void)parserFoundUnrecognizedElement:(id)arg1;
- (void)parserSuggestsBaseURL:(id)arg1;
- (id)payload;
- (long long)payloadAsNSInteger;
- (id)payloadAsString;
- (void)setAttributes:(id)arg1;
- (void)setExtraChildItems:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNameSpace:(id)arg1;
- (void)setPayload:(id)arg1;
- (void)setPayloadAsString:(id)arg1;
- (void)setUseCDATA:(bool)arg1;
- (bool)useCDATA;
- (bool)validate;
- (void)write:(id)arg1;

@end
