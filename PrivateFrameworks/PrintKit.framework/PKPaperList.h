/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
 */

@interface PKPaperList : NSObject {
    NSArray * _duplexPapers;
    bool  _hasMediaReady;
    NSArray * _papers;
    NSArray * _photoPapers;
    NSArray * _rolls;
    NSArray * _simplexPapers;
}

@property (retain) NSArray *duplexPapers;
@property bool hasMediaReady;
@property (retain) NSArray *papers;
@property (retain) NSArray *photoPapers;
@property (nonatomic, retain) NSArray *rolls;
@property (retain) NSArray *simplexPapers;

+ (id)mediaDictFromAttrs:(struct _ipp_s { }*)arg1;
+ (id)paperListWithAttrs:(struct _ipp_s { }*)arg1;
+ (id)paperListWithTXTRecord:(id)arg1;

- (void)addPaperSet:(id*)arg1 withCount:(int)arg2 toArrays:(id*)arg3;
- (id)adjustMargins:(id)arg1 forDuplex:(id)arg2;
- (id)availableRollPapersPreferBorderless:(bool)arg1;
- (void)categorizePapers:(id)arg1;
- (id)conjureMediaFromTXT:(id)arg1;
- (void)dealloc;
- (id)duplexPapers;
- (id)filterPapers:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)filterUsingBlock:(id /* block */)arg1;
- (bool)hasMatchingLoadedRoll:(id)arg1;
- (bool)hasMediaReady;
- (id)initWithAttrs:(struct _ipp_s { }*)arg1;
- (id)initWithTXTRecord:(id)arg1;
- (bool)isPaperReady:(id)arg1;
- (long long)jobTypesSupported:(id)arg1;
- (id)matchPaper:(id)arg1;
- (id)matchPaper:(id)arg1 inList:(id)arg2;
- (id)matchedPaper:(id)arg1 preferBorderless:(bool)arg2 withDuplexMode:(id)arg3 didMatch:(bool*)arg4;
- (id)paperListForDuplexMode:(id)arg1;
- (id)papers;
- (id)papersForDocumentWithSize:(struct CGSize { double x1; double x2; })arg1 scaleUpOnRoll:(bool)arg2 andDuplex:(bool)arg3;
- (id)papersForPhotoWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)photoPapers;
- (id)rollReadyPaperListForDocumentWithContentSize:(struct CGSize { double x1; double x2; })arg1 scaleUp:(bool)arg2;
- (id)rollReadyPaperListForPhotoWithContentSize:(struct CGSize { double x1; double x2; })arg1;
- (id)rollReadyPaperListWithContentSize:(struct CGSize { double x1; double x2; })arg1 forPhoto:(bool)arg2;
- (id)rolls;
- (void)setDuplexPapers:(id)arg1;
- (void)setHasMediaReady:(bool)arg1;
- (void)setPapers:(id)arg1;
- (void)setPhotoPapers:(id)arg1;
- (void)setRolls:(id)arg1;
- (void)setSimplexPapers:(id)arg1;
- (id)simplexPapers;
- (id)tersePaperFrom:(id)arg1 withMediaInfo:(id)arg2;
- (id)tersePaperFrom:(id)arg1 withRequest:(id)arg2;

@end