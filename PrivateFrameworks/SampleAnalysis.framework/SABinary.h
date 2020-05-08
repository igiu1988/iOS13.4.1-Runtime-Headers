/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

@interface SABinary : NSObject <SAJSONSerialization, SASerializable> {
    unsigned long long  _alreadyAttempted;
    bool  _attemptedToGetBundleInfo;
    NSString * _binaryVersion;
    NSString * _bundleIdentifier;
    NSString * _bundleShortVersion;
    NSString * _bundleVersion;
    bool  _hadSymbolOwnerWhenLastSymbolicated;
    bool  _hasTextExecSegment;
    NSMutableDictionary * _instructions;
    NSString * _name;
    unsigned long long  _numInstructionsWhenLastBulkSymbolicated;
    unsigned long long  _numInstructionsWhenLastSymbolicated;
    unsigned long long  _optionsWhenLastSymbolicated;
    NSString * _path;
    bool  _symbolOwnerWasDsymWhenLastSymbolicated;
    SACSSymbolOwnerWrapper * _symbolOwnerWrapper;
    NSMutableArray * _symbols;
    unsigned long long  _textSegmentLength;
    NSUUID * _uuid;
}

@property (retain) NSString *binaryVersion;
@property (retain) NSString *bundleIdentifier;
@property (retain) NSString *bundleShortVersion;
@property (retain) NSString *bundleVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property bool hasTextExecSegment;
@property (readonly) unsigned long long hash;
@property (readonly) NSMutableDictionary *instructions;
@property (retain) NSString *name;
@property (retain) NSString *path;
@property (readonly) Class superclass;
@property (readonly) NSMutableArray *symbols;
@property unsigned long long textSegmentLength;
@property (readonly) NSUUID *uuid;

+ (void)_addDsymPath:(id)arg1;
+ (void)_doCachedBinariesWork:(id /* block */)arg1;
+ (void)_doDsymPathsWork:(id /* block */)arg1;
+ (id)_dsymPaths;
+ (void)addDsymPaths:(id)arg1;
+ (void)addPath:(id)arg1 forBinaryWithUUID:(id)arg2;
+ (void)addSymbolsFromTailspin:(id)arg1;
+ (id)binaryWithCSSymbolOwner:(struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })arg1;
+ (id)binaryWithCSSymbolOwner:(struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })arg1 isSparse:(bool)arg2;
+ (id)binaryWithUUID:(id)arg1;
+ (id)classDictionaryKey;
+ (void)clearCaches;
+ (void)clearCoreSymbolicationCaches;
+ (void)clearSymbolCaches;
+ (void)enableImmediateCleanupOfCSSymbolOwners;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const struct { unsigned char x1; unsigned char x2; unsigned char x3[16]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; union { unsigned char x_11_1_1; struct { unsigned int x_2_2_1 : 1; } x_11_1_2; } x11; }*)arg1 bufferLength:(unsigned long long)arg2;

- (void).cxx_destruct;
- (void)addPath:(id)arg1;
- (bool)addSelfToBuffer:(struct { unsigned char x1; unsigned char x2; unsigned char x3[16]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; union { unsigned char x_11_1_1; struct { unsigned int x_2_2_1 : 1; } x_11_1_2; } x11; }*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (id)addSymbolWithOffsetIntoTextSegment:(unsigned long long)arg1 length:(unsigned long long)arg2 name:(id)arg3;
- (void)addTailspinSymbols:(id)arg1;
- (id)binaryVersion;
- (id)bundleIdentifier;
- (id)bundleShortVersion;
- (id)bundleVersion;
- (void)checkForNewSymbolForInstruction:(id)arg1;
- (void)clearCoreSymbolicationCache;
- (void)clearSymbolCache;
- (id)debugDescription;
- (bool)findPathViaBinaryLocator;
- (void)gatherBundleInfo;
- (void)gatherInfoWithDataGatheringOptions:(unsigned long long)arg1 pid:(int)arg2;
- (bool)hasTextExecSegment;
- (id)initWithUUID:(id)arg1;
- (id)instructionAtOffsetIntoTextSegment:(unsigned long long)arg1;
- (id)instructions;
- (id)name;
- (id)path;
- (void)populateReferencesUsingBuffer:(const struct { unsigned char x1; unsigned char x2; unsigned char x3[16]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; union { unsigned char x_11_1_1; struct { unsigned int x_2_2_1 : 1; } x_11_1_2; } x11; }*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4;
- (void)setBinaryVersion:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setBundleShortVersion:(id)arg1;
- (void)setBundleVersion:(id)arg1;
- (void)setHasTextExecSegment:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setPath:(id)arg1;
- (bool)setSymbolOwner:(struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)setSymbolOwner:(struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })arg1 isSparse:(bool)arg2;
- (void)setTextSegmentLength:(unsigned long long)arg1;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (id)symbolOwnerWrapperWithOptions:(unsigned long long)arg1 pid:(int)arg2;
- (id)symbolWithOffsetIntoTextSegment:(unsigned long long)arg1;
- (void)symbolicateAllInstructionsWithOptions:(unsigned long long)arg1 pid:(int)arg2;
- (id)symbols;
- (unsigned long long)textSegmentLength;
- (id)uuid;
- (void)writeJSONDictionaryEntriesToStream:(id)arg1;

@end
