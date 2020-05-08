/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

@interface TVRMSDAAPParser : NSObject

+ (id)objectWithData:(id)arg1;
+ (id)objectWithData:(id)arg1 error:(id*)arg2;
+ (id)sharedInstance;
+ (id)typeForDRCPValueType:(int)arg1;

- (void)enumerateDAAPChunksInBytes:(const char *)arg1 length:(unsigned int)arg2 usingBlock:(id /* block */)arg3;
- (id)parseBrowseResults:(const char *)arg1 length:(unsigned int)arg2;
- (id)parseContentCodes:(const char *)arg1 length:(unsigned int)arg2;
- (id)parseContentCollectionDict:(const char *)arg1 length:(unsigned int)arg2;
- (id)parseControlPromptCollection:(const char *)arg1 length:(unsigned int)arg2;
- (id)parseControlPromptResponse:(const char *)arg1 length:(unsigned int)arg2;
- (id)parseDACPPropertyResponse:(const char *)arg1 length:(unsigned int)arg2;
- (id)parseGetSpeakersResponse:(const char *)arg1 length:(unsigned int)arg2;
- (id)parseListingCollection:(const char *)arg1 length:(unsigned int)arg2 capacity:(int)arg3 sectionHeaders:(id*)arg4;
- (id)parseListingHeader:(const char *)arg1 length:(unsigned int)arg2;
- (id)parseListingItem:(const char *)arg1 length:(unsigned int)arg2;
- (id)parseLogin:(const char *)arg1 length:(unsigned int)arg2;
- (id)parseMACAddressListing:(const char *)arg1 length:(unsigned int)arg2;
- (id)parseQueueSectionItems:(const char *)arg1 length:(unsigned int)arg2;
- (id)parseServerInfo:(const char *)arg1 length:(unsigned int)arg2;
- (id)parseUTF8String:(const char *)arg1 length:(unsigned int)arg2;
- (id)parseUnicodeCharacter:(const char *)arg1 length:(unsigned int)arg2;
- (id)parseXMLContent:(const char *)arg1 length:(unsigned int)arg2;
- (id)processResponseCode:(unsigned int)arg1 bytes:(const char *)arg2 length:(unsigned int)arg3;
- (void)setBool:(const char *)arg1 size:(unsigned int)arg2 inDict:(id)arg3 forKey:(id)arg4;
- (void)setDate:(const char *)arg1 size:(unsigned int)arg2 inDict:(id)arg3 forKey:(id)arg4;
- (void)setFloat32:(const char *)arg1 size:(unsigned int)arg2 inDict:(id)arg3 forKey:(id)arg4;
- (void)setSInt16:(const char *)arg1 size:(unsigned int)arg2 inDict:(id)arg3 forKey:(id)arg4;
- (void)setSInt8:(const char *)arg1 size:(unsigned int)arg2 inDict:(id)arg3 forKey:(id)arg4;
- (void)setString:(const char *)arg1 size:(unsigned int)arg2 inDict:(id)arg3 forKey:(id)arg4;
- (void)setUInt16:(const char *)arg1 size:(unsigned int)arg2 inDict:(id)arg3 forKey:(id)arg4;
- (void)setUInt32:(const char *)arg1 size:(unsigned int)arg2 inDict:(id)arg3 forKey:(id)arg4;
- (void)setUInt64:(const char *)arg1 size:(unsigned int)arg2 inDict:(id)arg3 forKey:(id)arg4;
- (void)setUInt8:(const char *)arg1 size:(unsigned int)arg2 inDict:(id)arg3 forKey:(id)arg4;
- (void)unknownChunk:(struct RSDAAPChunk { struct RSDAAPChunkHeader { unsigned int x_1_1_1; unsigned int x_1_1_2; } x1; char *x2; })arg1;

@end
