/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

@interface CRCoderArchiver : CRCoder {
    struct Document { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct VectorTimestamp {} *x5; struct VectorTimestamp {} *x6; struct RepeatedPtrField<CRDT::Document_DocObject> { void **x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; struct RepeatedPtrField<std::__1::basic_string<char> > { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; struct RepeatedPtrField<std::__1::basic_string<char> > { void **x_9_1_1; int x_9_1_2; int x_9_1_3; int x_9_1_4; } x9; struct RepeatedPtrField<std::__1::basic_string<char> > { void **x_10_1_1; int x_10_1_2; int x_10_1_3; int x_10_1_4; } x10; } * _currentDocument;
    NSMutableOrderedSet * _encodedObjects;
    NSMutableOrderedSet * _keySet;
    NSMutableOrderedSet * _uuidSet;
    struct vector<CRDT::Document_DocObject *, std::__1::allocator<CRDT::Document_DocObject *> > { 
        struct Document_DocObject {} **__begin_; 
        struct Document_DocObject {} **__end_; 
        struct __compressed_pair<CRDT::Document_DocObject **, std::__1::allocator<CRDT::Document_DocObject *> > { 
            struct Document_DocObject {} **__value_; 
        } __end_cap_; 
    }  currentDocObjectEncodingStack;
}

@property (nonatomic) /* Warning: unhandled struct encoding: '{Document=^^?{basic_string<char' */ struct *currentDocument; /* unknown property attribute:  std::__1::allocator<char> >={__rep=(?={__long=*QQ}{__short=[23c]{?=C}}{__raw=[3Q]})}}}[1I]i^{VectorTimestamp}^{VectorTimestamp}{RepeatedPtrField<CRDT::Document_DocObject>=^^viii}{RepeatedPtrField<std::__1::basic_string<char> >=^^viii}{RepeatedPtrField<std::__1::basic_string<char> >=^^viii}{RepeatedPtrField<std::__1::basic_string<char> >=^^viii}^{VectorTimestamp}} */
@property (nonatomic, retain) NSMutableOrderedSet *encodedObjects;
@property (nonatomic, retain) NSMutableOrderedSet *keySet;
@property (nonatomic, retain) NSMutableOrderedSet *uuidSet;

+ (id)encodedDataWithDocument:(id)arg1;
+ (void)initialize;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct Document_CustomObject { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<CRDT::Document_CustomObject_MapEntry> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; int x6; }*)currentCustomObjectForEncoding;
- (struct Document { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct VectorTimestamp {} *x5; struct VectorTimestamp {} *x6; struct RepeatedPtrField<CRDT::Document_DocObject> { void **x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; struct RepeatedPtrField<std::__1::basic_string<char> > { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; struct RepeatedPtrField<std::__1::basic_string<char> > { void **x_9_1_1; int x_9_1_2; int x_9_1_3; int x_9_1_4; } x9; struct RepeatedPtrField<std::__1::basic_string<char> > { void **x_10_1_1; int x_10_1_2; int x_10_1_3; int x_10_1_4; } x10; }*)currentDocument;
- (struct Document_DocObject { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; union ContentsUnion { struct RegisterLatest {} *x_5_1_1; struct RegisterLatest {} *x_5_1_2; struct RegisterLatest {} *x_5_1_3; struct Dictionary {} *x_5_1_4; struct Dictionary {} *x_5_1_5; struct Dictionary {} *x_5_1_6; struct Timestamp {} *x_5_1_7; struct VectorTimestamp {} *x_5_1_8; struct Index {} *x_5_1_9; struct String {} *x_5_1_10; unsigned long long x_5_1_11; struct OneOf {} *x_5_1_12; struct Document_CustomObject {} *x_5_1_13; struct StringArray {} *x_5_1_14; struct Array {} *x_5_1_15; struct OrderedSet {} *x_5_1_16; } x5; }*)currentDocumentObjectForEncoding;
- (id)encodeDocument:(id)arg1;
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;
- (void)encodeInt32:(int)arg1 forKey:(id)arg2;
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (void)encodeObject:(id)arg1 forObjectID:(struct ObjectID { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; union ContentsUnion { long long x_5_1_1; unsigned long long x_5_1_2; double x_5_1_3; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_5_1_4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_5_1_5; unsigned int x_5_1_6; } x5; unsigned int x6[1]; }*)arg2;
- (void)encodeString:(id)arg1 forKey:(id)arg2;
- (void)encodeUInt32:(unsigned int)arg1 forKey:(id)arg2;
- (void)encodeUInt64:(unsigned long long)arg1 forKey:(id)arg2;
- (void)encodeUUID:(id)arg1 forKey:(id)arg2;
- (unsigned long long)encodeUUIDIndexFromUUID:(id)arg1;
- (id)encodedObjects;
- (int)indexForKey:(id)arg1;
- (id)keySet;
- (struct ObjectID { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; union ContentsUnion { long long x_5_1_1; unsigned long long x_5_1_2; double x_5_1_3; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_5_1_4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_5_1_5; unsigned int x_5_1_6; } x5; unsigned int x6[1]; }*)mutableObjectIDForKey:(id)arg1;
- (void)setCurrentDocument:(struct Document { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct VectorTimestamp {} *x5; struct VectorTimestamp {} *x6; struct RepeatedPtrField<CRDT::Document_DocObject> { void **x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; struct RepeatedPtrField<std::__1::basic_string<char> > { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; struct RepeatedPtrField<std::__1::basic_string<char> > { void **x_9_1_1; int x_9_1_2; int x_9_1_3; int x_9_1_4; } x9; struct RepeatedPtrField<std::__1::basic_string<char> > { void **x_10_1_1; int x_10_1_2; int x_10_1_3; int x_10_1_4; } x10; }*)arg1;
- (void)setEncodedObjects:(id)arg1;
- (void)setKeySet:(id)arg1;
- (void)setTypeIndexForCurrentCustomObjectIfNecessary:(id)arg1;
- (void)setUuidSet:(id)arg1;
- (id)uuidSet;

@end
