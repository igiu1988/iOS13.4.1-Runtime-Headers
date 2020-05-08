/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WBParagraph : NSObject

+ (int)blockType;
+ (void)check:(id)arg1 forFieldMarkerFrom:(id)arg2 runEnd:(int*)arg3 readState:(struct WBParagraphReadState { int x1; int x2; int x3; struct WrdFieldPosition {} *x4; int x5; int x6; struct vector<unsigned int, std::__1::allocator<unsigned int> > { unsigned int *x_7_1_1; unsigned int *x_7_1_2; struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > { unsigned int *x_3_2_1; } x_7_1_3; } x7; int x8; int x9; struct vector<unsigned int, std::__1::allocator<unsigned int> > { unsigned int *x_10_1_1; unsigned int *x_10_1_2; struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > { unsigned int *x_3_2_1; } x_10_1_3; } x10; }*)arg4;
+ (void)checkForAnnotationBookmarkFrom:(id)arg1 runEnd:(int*)arg2 readState:(struct WBParagraphReadState { int x1; int x2; int x3; struct WrdFieldPosition {} *x4; int x5; int x6; struct vector<unsigned int, std::__1::allocator<unsigned int> > { unsigned int *x_7_1_1; unsigned int *x_7_1_2; struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > { unsigned int *x_3_2_1; } x_7_1_3; } x7; int x8; int x9; struct vector<unsigned int, std::__1::allocator<unsigned int> > { unsigned int *x_10_1_1; unsigned int *x_10_1_2; struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > { unsigned int *x_3_2_1; } x_10_1_3; } x10; }*)arg3;
+ (void)checkForAnnotationFrom:(id)arg1 runEnd:(int*)arg2 readState:(struct WBParagraphReadState { int x1; int x2; int x3; struct WrdFieldPosition {} *x4; int x5; int x6; struct vector<unsigned int, std::__1::allocator<unsigned int> > { unsigned int *x_7_1_1; unsigned int *x_7_1_2; struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > { unsigned int *x_3_2_1; } x_7_1_3; } x7; int x8; int x9; struct vector<unsigned int, std::__1::allocator<unsigned int> > { unsigned int *x_10_1_1; unsigned int *x_10_1_2; struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > { unsigned int *x_3_2_1; } x_10_1_3; } x10; }*)arg3;
+ (void)checkForBookmarkFrom:(id)arg1 runEnd:(int*)arg2 readState:(struct WBParagraphReadState { int x1; int x2; int x3; struct WrdFieldPosition {} *x4; int x5; int x6; struct vector<unsigned int, std::__1::allocator<unsigned int> > { unsigned int *x_7_1_1; unsigned int *x_7_1_2; struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > { unsigned int *x_3_2_1; } x_7_1_3; } x7; int x8; int x9; struct vector<unsigned int, std::__1::allocator<unsigned int> > { unsigned int *x_10_1_1; unsigned int *x_10_1_2; struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > { unsigned int *x_3_2_1; } x_10_1_3; } x10; }*)arg3;
+ (void)checkForNoteFrom:(id)arg1 footnote:(bool)arg2 runEnd:(int*)arg3 readState:(struct WBParagraphReadState { int x1; int x2; int x3; struct WrdFieldPosition {} *x4; int x5; int x6; struct vector<unsigned int, std::__1::allocator<unsigned int> > { unsigned int *x_7_1_1; unsigned int *x_7_1_2; struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > { unsigned int *x_3_2_1; } x_7_1_3; } x7; int x8; int x9; struct vector<unsigned int, std::__1::allocator<unsigned int> > { unsigned int *x_10_1_1; unsigned int *x_10_1_2; struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > { unsigned int *x_3_2_1; } x_10_1_3; } x10; }*)arg4;
+ (bool)isCPAnnotationRangeEnd:(int)arg1 bookmarkTable:(struct WrdBookmarkTable { int (**x1)(); int x2; struct ChVector<WrdBookmark *> { struct WrdBookmark {} **x_3_1_1; struct WrdBookmark {} **x_3_1_2; struct __compressed_pair<WrdBookmark **, ChAllocator<WrdBookmark *> > { struct WrdBookmark {} **x_3_2_1; } x_3_1_3; } x3; }*)arg2;
+ (void)readAnnotationBookmarkFor:(id)arg1 from:(id)arg2 readState:(struct WBParagraphReadState { int x1; int x2; int x3; struct WrdFieldPosition {} *x4; int x5; int x6; struct vector<unsigned int, std::__1::allocator<unsigned int> > { unsigned int *x_7_1_1; unsigned int *x_7_1_2; struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > { unsigned int *x_3_2_1; } x_7_1_3; } x7; int x8; int x9; struct vector<unsigned int, std::__1::allocator<unsigned int> > { unsigned int *x_10_1_1; unsigned int *x_10_1_2; struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > { unsigned int *x_3_2_1; } x_10_1_3; } x10; }*)arg3;
+ (void)readAnnotationFor:(id)arg1 from:(id)arg2 readState:(struct WBParagraphReadState { int x1; int x2; int x3; struct WrdFieldPosition {} *x4; int x5; int x6; struct vector<unsigned int, std::__1::allocator<unsigned int> > { unsigned int *x_7_1_1; unsigned int *x_7_1_2; struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > { unsigned int *x_3_2_1; } x_7_1_3; } x7; int x8; int x9; struct vector<unsigned int, std::__1::allocator<unsigned int> > { unsigned int *x_10_1_1; unsigned int *x_10_1_2; struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > { unsigned int *x_3_2_1; } x_10_1_3; } x10; }*)arg3;
+ (void)readBookmarkFor:(id)arg1 from:(id)arg2 readState:(struct WBParagraphReadState { int x1; int x2; int x3; struct WrdFieldPosition {} *x4; int x5; int x6; struct vector<unsigned int, std::__1::allocator<unsigned int> > { unsigned int *x_7_1_1; unsigned int *x_7_1_2; struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > { unsigned int *x_3_2_1; } x_7_1_3; } x7; int x8; int x9; struct vector<unsigned int, std::__1::allocator<unsigned int> > { unsigned int *x_10_1_1; unsigned int *x_10_1_2; struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > { unsigned int *x_3_2_1; } x_10_1_3; } x10; }*)arg3;
+ (void)readCharacterRunsFor:(id)arg1 from:(id)arg2 readState:(struct WBParagraphReadState { int x1; int x2; int x3; struct WrdFieldPosition {} *x4; int x5; int x6; struct vector<unsigned int, std::__1::allocator<unsigned int> > { unsigned int *x_7_1_1; unsigned int *x_7_1_2; struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > { unsigned int *x_3_2_1; } x_7_1_3; } x7; int x8; int x9; struct vector<unsigned int, std::__1::allocator<unsigned int> > { unsigned int *x_10_1_1; unsigned int *x_10_1_2; struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > { unsigned int *x_3_2_1; } x_10_1_3; } x10; }*)arg3;
+ (void)readFieldMarkerFor:(id)arg1 from:(id)arg2 readState:(struct WBParagraphReadState { int x1; int x2; int x3; struct WrdFieldPosition {} *x4; int x5; int x6; struct vector<unsigned int, std::__1::allocator<unsigned int> > { unsigned int *x_7_1_1; unsigned int *x_7_1_2; struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > { unsigned int *x_3_2_1; } x_7_1_3; } x7; int x8; int x9; struct vector<unsigned int, std::__1::allocator<unsigned int> > { unsigned int *x_10_1_1; unsigned int *x_10_1_2; struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > { unsigned int *x_3_2_1; } x_10_1_3; } x10; }*)arg3;
+ (void)readFrom:(id)arg1 textRun:(struct WrdParagraphTextRun { int (**x1)(); int x2; unsigned int x3; unsigned int x4; struct WrdParagraphProperties {} *x5; struct WrdParagraphProperties {} *x6; struct WrdTableProperties {} *x7; struct WrdTableProperties {} *x8; }*)arg2 paragraph:(id)arg3;
+ (void)readNoteFor:(id)arg1 from:(id)arg2 readState:(struct WBParagraphReadState { int x1; int x2; int x3; struct WrdFieldPosition {} *x4; int x5; int x6; struct vector<unsigned int, std::__1::allocator<unsigned int> > { unsigned int *x_7_1_1; unsigned int *x_7_1_2; struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > { unsigned int *x_3_2_1; } x_7_1_3; } x7; int x8; int x9; struct vector<unsigned int, std::__1::allocator<unsigned int> > { unsigned int *x_10_1_1; unsigned int *x_10_1_2; struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > { unsigned int *x_3_2_1; } x_10_1_3; } x10; }*)arg3;
+ (void)readOfficeArtFor:(id)arg1 from:(id)arg2 at:(int)arg3 textRun:(struct WrdCharacterTextRun { int (**x1)(); int x2; unsigned int x3; unsigned int x4; struct WrdCharacterProperties {} *x5; struct WrdCharacterProperties {} *x6; }*)arg4;
+ (void)readPictureFor:(id)arg1 from:(id)arg2 at:(int)arg3 textRun:(struct WrdCharacterTextRun { int (**x1)(); int x2; unsigned int x3; unsigned int x4; struct WrdCharacterProperties {} *x5; struct WrdCharacterProperties {} *x6; }*)arg4;
+ (void)readRunsFor:(id)arg1 from:(id)arg2 textRun:(struct WrdParagraphTextRun { int (**x1)(); int x2; unsigned int x3; unsigned int x4; struct WrdParagraphProperties {} *x5; struct WrdParagraphProperties {} *x6; struct WrdTableProperties {} *x7; struct WrdTableProperties {} *x8; }*)arg3;
+ (void)readSpecialCharacterFor:(id)arg1 from:(id)arg2 at:(int)arg3 textRun:(struct WrdCharacterTextRun { int (**x1)(); int x2; unsigned int x3; unsigned int x4; struct WrdCharacterProperties {} *x5; struct WrdCharacterProperties {} *x6; }*)arg4;
+ (void)readSpecialCharactersFor:(id)arg1 from:(id)arg2 textRun:(struct WrdCharacterTextRun { int (**x1)(); int x2; unsigned int x3; unsigned int x4; struct WrdCharacterProperties {} *x5; struct WrdCharacterProperties {} *x6; }*)arg3;
+ (void)readSymbolsFor:(id)arg1 from:(id)arg2 textRun:(struct WrdCharacterTextRun { int (**x1)(); int x2; unsigned int x3; unsigned int x4; struct WrdCharacterProperties {} *x5; struct WrdCharacterProperties {} *x6; }*)arg3;

@end
