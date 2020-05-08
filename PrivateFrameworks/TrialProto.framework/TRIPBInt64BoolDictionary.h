/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

@interface TRIPBInt64BoolDictionary : NSObject <NSCopying, TRIPBDictionaryInternalsProtocol> {
    TRIPBMessage * _autocreator;
    NSMutableDictionary * _dictionary;
}

@property (nonatomic, readonly) unsigned long long count;

- (void)addEntriesFromDictionary:(id)arg1;
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)description;
- (void)enumerateForTextFormat:(id /* block */)arg1;
- (void)enumerateKeysAndBoolsUsingBlock:(id /* block */)arg1;
- (bool)getBool:(bool*)arg1 forKey:(long long)arg2;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBools:(const bool*)arg1 forKeys:(const long long*)arg2 count:(unsigned long long)arg3;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)removeAll;
- (void)removeBoolForKey:(long long)arg1;
- (void)setBool:(bool)arg1 forKey:(long long)arg2;
- (void)setTRIPBGenericValue:(union { bool x1; int x2; long long x3; unsigned int x4; unsigned long long x5; float x6; double x7; id x8; id x9; id x10; int x11; }*)arg1 forTRIPBGenericValueKey:(union { bool x1; int x2; long long x3; unsigned int x4; unsigned long long x5; float x6; double x7; id x8; id x9; id x10; int x11; }*)arg2;
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;

@end
