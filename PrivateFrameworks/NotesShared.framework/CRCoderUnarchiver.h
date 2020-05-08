/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

@interface CRCoderUnarchiver : CRCoder {
    NSMutableArray * _allocedDocObjects;
    NSMutableArray * _completionHandlers;
    const struct Document_DocObject { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; union ContentsUnion { struct RegisterLatest {} *x_5_1_1; struct RegisterLatest {} *x_5_1_2; struct RegisterLatest {} *x_5_1_3; struct Dictionary {} *x_5_1_4; struct Dictionary {} *x_5_1_5; struct Dictionary {} *x_5_1_6; struct Timestamp {} *x_5_1_7; struct VectorTimestamp {} *x_5_1_8; struct Index {} *x_5_1_9; struct String {} *x_5_1_10; unsigned long long x_5_1_11; struct OneOf {} *x_5_1_12; struct Document_CustomObject {} *x_5_1_13; struct StringArray {} *x_5_1_14; struct Array {} *x_5_1_15; struct OrderedSet {} *x_5_1_16; } x5; } * _currentDocObjectForDecodingPtr;
    struct Document { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct VectorTimestamp {} *x5; struct VectorTimestamp {} *x6; struct RepeatedPtrField<CRDT::Document_DocObject> { void **x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; struct RepeatedPtrField<std::__1::basic_string<char> > { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; struct RepeatedPtrField<std::__1::basic_string<char> > { void **x_9_1_1; int x_9_1_2; int x_9_1_3; int x_9_1_4; } x9; struct RepeatedPtrField<std::__1::basic_string<char> > { void **x_10_1_1; int x_10_1_2; int x_10_1_3; int x_10_1_4; } x10; } * _currentDocument;
    CRDocument * _document;
    NSMutableOrderedSet * _keySet;
    NSUUID * _replica;
    NSMutableOrderedSet * _typeSetForDecoding;
    NSMutableArray * _uuidArray;
}

@property (nonatomic, retain) NSMutableArray *allocedDocObjects;
@property (nonatomic, retain) NSMutableArray *completionHandlers;
@property (nonatomic) const /* Warning: unhandled struct encoding: '{Document_DocObject=^^?{basic_string<char' */ struct *currentDocObjectForDecodingPtr; /* unknown property attribute:  std::__1::allocator<char> >={__rep=(?={__long=*QQ}{__short=[23c]{?=C}}{__raw=[3Q]})}}}[1I]i(ContentsUnion=^{RegisterLatest}^{RegisterLatest}^{RegisterLatest}^{Dictionary}^{Dictionary}^{Dictionary}^{Timestamp}^{VectorTimestamp}^{Index}^{String}Q^{OneOf}^{Document_CustomObject}^{StringArray}^{Array}^{OrderedSet})[1I]} */
@property (nonatomic) /* Warning: unhandled struct encoding: '{Document=^^?{basic_string<char' */ struct *currentDocument; /* unknown property attribute:  std::__1::allocator<char> >={__rep=(?={__long=*QQ}{__short=[23c]{?=C}}{__raw=[3Q]})}}}[1I]i^{VectorTimestamp}^{VectorTimestamp}{RepeatedPtrField<CRDT::Document_DocObject>=^^viii}{RepeatedPtrField<std::__1::basic_string<char> >=^^viii}{RepeatedPtrField<std::__1::basic_string<char> >=^^viii}{RepeatedPtrField<std::__1::basic_string<char> >=^^viii}^{VectorTimestamp}} */
@property (nonatomic, retain) CRDocument *document;
@property (nonatomic, retain) NSMutableOrderedSet *keySet;
@property (nonatomic, copy) NSUUID *replica;
@property (nonatomic, retain) NSMutableOrderedSet *typeSetForDecoding;
@property (nonatomic, retain) NSMutableArray *uuidArray;

+ (id)decodedDocumentFromData:(id)arg1 replica:(id)arg2;
+ (void)initialize;

- (void).cxx_destruct;
- (void)addDecoderCompletionHandler:(id /* block */)arg1 dependency:(id)arg2 for:(id)arg3;
- (id)allocedDocObjects;
- (id)allocedObjectAtIndex:(unsigned long long)arg1 outNeedsInit:(bool*)arg2;
- (id)completionHandlers;
- (const struct Document_DocObject { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; union ContentsUnion { struct RegisterLatest {} *x_5_1_1; struct RegisterLatest {} *x_5_1_2; struct RegisterLatest {} *x_5_1_3; struct Dictionary {} *x_5_1_4; struct Dictionary {} *x_5_1_5; struct Dictionary {} *x_5_1_6; struct Timestamp {} *x_5_1_7; struct VectorTimestamp {} *x_5_1_8; struct Index {} *x_5_1_9; struct String {} *x_5_1_10; unsigned long long x_5_1_11; struct OneOf {} *x_5_1_12; struct Document_CustomObject {} *x_5_1_13; struct StringArray {} *x_5_1_14; struct Array {} *x_5_1_15; struct OrderedSet {} *x_5_1_16; } x5; }*)currentDocObjectForDecodingPtr;
- (struct Document { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct VectorTimestamp {} *x5; struct VectorTimestamp {} *x6; struct RepeatedPtrField<CRDT::Document_DocObject> { void **x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; struct RepeatedPtrField<std::__1::basic_string<char> > { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; struct RepeatedPtrField<std::__1::basic_string<char> > { void **x_9_1_1; int x_9_1_2; int x_9_1_3; int x_9_1_4; } x9; struct RepeatedPtrField<std::__1::basic_string<char> > { void **x_10_1_1; int x_10_1_2; int x_10_1_3; int x_10_1_4; } x10; }*)currentDocument;
- (const struct Document_DocObject { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; union ContentsUnion { struct RegisterLatest {} *x_5_1_1; struct RegisterLatest {} *x_5_1_2; struct RegisterLatest {} *x_5_1_3; struct Dictionary {} *x_5_1_4; struct Dictionary {} *x_5_1_5; struct Dictionary {} *x_5_1_6; struct Timestamp {} *x_5_1_7; struct VectorTimestamp {} *x_5_1_8; struct Index {} *x_5_1_9; struct String {} *x_5_1_10; unsigned long long x_5_1_11; struct OneOf {} *x_5_1_12; struct Document_CustomObject {} *x_5_1_13; struct StringArray {} *x_5_1_14; struct Array {} *x_5_1_15; struct OrderedSet {} *x_5_1_16; } x5; }*)currentDocumentObjectForDecoding;
- (const struct ObjectID { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; union ContentsUnion { long long x_5_1_1; unsigned long long x_5_1_2; double x_5_1_3; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_5_1_4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_5_1_5; unsigned int x_5_1_6; } x5; unsigned int x6[1]; }*)currentObjectIDForKey:(id)arg1;
- (id)decodeDocumentFromData:(id)arg1 replica:(id)arg2;
- (double)decodeDoubleForKey:(id)arg1;
- (int)decodeInt32ForKey:(id)arg1;
- (long long)decodeInt64ForKey:(id)arg1;
- (id)decodeObjectForKey:(id)arg1;
- (id)decodeObjectForProtobufObjectID:(const struct ObjectID { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; union ContentsUnion { long long x_5_1_1; unsigned long long x_5_1_2; double x_5_1_3; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_5_1_4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_5_1_5; unsigned int x_5_1_6; } x5; unsigned int x6[1]; }*)arg1;
- (id)decodeStringForKey:(id)arg1;
- (unsigned int)decodeUInt32ForKey:(id)arg1;
- (unsigned long long)decodeUInt64ForKey:(id)arg1;
- (id)decodeUUIDForKey:(id)arg1;
- (id)decodeUUIDFromUUIDIndex:(unsigned long long)arg1;
- (id)document;
- (bool)hasDecodableValueForKey:(id)arg1;
- (unsigned long long)indexForKey:(id)arg1;
- (id)keySet;
- (id)replica;
- (void)setAllocedDocObjects:(id)arg1;
- (void)setCompletionHandlers:(id)arg1;
- (void)setCurrentDocObjectForDecodingPtr:(const struct Document_DocObject { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; union ContentsUnion { struct RegisterLatest {} *x_5_1_1; struct RegisterLatest {} *x_5_1_2; struct RegisterLatest {} *x_5_1_3; struct Dictionary {} *x_5_1_4; struct Dictionary {} *x_5_1_5; struct Dictionary {} *x_5_1_6; struct Timestamp {} *x_5_1_7; struct VectorTimestamp {} *x_5_1_8; struct Index {} *x_5_1_9; struct String {} *x_5_1_10; unsigned long long x_5_1_11; struct OneOf {} *x_5_1_12; struct Document_CustomObject {} *x_5_1_13; struct StringArray {} *x_5_1_14; struct Array {} *x_5_1_15; struct OrderedSet {} *x_5_1_16; } x5; }*)arg1;
- (void)setCurrentDocument:(struct Document { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct VectorTimestamp {} *x5; struct VectorTimestamp {} *x6; struct RepeatedPtrField<CRDT::Document_DocObject> { void **x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; struct RepeatedPtrField<std::__1::basic_string<char> > { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; struct RepeatedPtrField<std::__1::basic_string<char> > { void **x_9_1_1; int x_9_1_2; int x_9_1_3; int x_9_1_4; } x9; struct RepeatedPtrField<std::__1::basic_string<char> > { void **x_10_1_1; int x_10_1_2; int x_10_1_3; int x_10_1_4; } x10; }*)arg1;
- (void)setDocument:(id)arg1;
- (void)setKeySet:(id)arg1;
- (void)setReplica:(id)arg1;
- (void)setTypeSetForDecoding:(id)arg1;
- (void)setUuidArray:(id)arg1;
- (void)sortCompletionHandlers;
- (id)typeSetForDecoding;
- (id)uuidArray;
- (bool)willModifySelfInInitForClass:(Class)arg1;

@end
