/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

@interface TTVersionedDocument : NSObject {
    struct Document { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<versioned_document::Version> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; unsigned int x6; } * _documentArchive;
}

@property (nonatomic) /* Warning: unhandled struct encoding: '{Document=^^?{basic_string<char' */ struct *documentArchive; /* unknown property attribute:  std::__1::allocator<char> >={__rep=(?={__long=*QQ}{__short=[23c]{?=C}}{__raw=[3Q]})}}}[1I]i{RepeatedPtrField<versioned_document::Version>=^^viii}I} */
@property (nonatomic, readonly) unsigned long long futureVersionCount;

+ (unsigned int)minimumSupportedVersion;
+ (unsigned int)serializationVersion;
+ (unsigned int)versionedDocumentSerializationVersion;

- (void)dealloc;
- (struct Document { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<versioned_document::Version> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; unsigned int x6; }*)documentArchive;
- (unsigned long long)futureVersionCount;
- (id)initWithArchive:(const struct Document { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<versioned_document::Version> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; unsigned int x6; }*)arg1;
- (id)initWithData:(id)arg1;
- (void)loadArchive:(const struct Document { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<versioned_document::Version> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; unsigned int x6; }*)arg1;
- (void)loadData:(id)arg1;
- (void)loadDocumentArchive:(struct Document { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<versioned_document::Version> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; unsigned int x6; }*)arg1;
- (unsigned int)maxDocumentVersion;
- (void)mergeVersion:(unsigned int)arg1 fromData:(id)arg2;
- (unsigned long long)mergeWithVersionedDocument:(id)arg1;
- (void)saveCurrentVersion:(struct Version { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned int x5; unsigned int x6; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x7; }*)arg1;
- (void)saveToArchive:(struct Document { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<versioned_document::Version> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; unsigned int x6; }*)arg1;
- (id)serialize;
- (id)serializeCurrentVersion:(unsigned int*)arg1;
- (void)setDocumentArchive:(struct Document { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<versioned_document::Version> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; unsigned int x6; }*)arg1;

@end
