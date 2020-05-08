/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OAXDrawingState : OCXReadState {
    id /* block */  _clientChartGraphicPropertyDefaultsBlock;
    OAXClient * mClient;
    OADColorMap * mColorMap;
    OADColorScheme * mColorScheme;
    id  mDocumentState;
    NSMutableDictionary * mDrawableIdToVmlShapeIdMap;
    OADFontScheme * mFontScheme;
    NSMutableArray * mGroupStack;
    CXNamespace * mOAXChart2012Namespace;
    CXNamespace * mOAXChartDrawingNamespace;
    CXNamespace * mOAXChartNamespace;
    CXNamespace * mOAXCompatNamespace;
    CXNamespace * mOAXDrawing2010Namespace;
    CXNamespace * mOAXLockedCanvasNamespace;
    CXNamespace * mOAXMainNamespace;
    CXNamespace * mOAXMathNamespace;
    CXNamespace * mOAXPictureNamespace;
    CXNamespace * mOAXTableNamespace;
    CXNamespace * mOAXWordProcessingMLNamespace;
    OAVReadState * mOavState;
    OCPPackagePart * mPackagePart;
    NSMutableDictionary * mShapeIdMap;
    NSMutableDictionary * mSrcURLToTgtBlipIndexMap;
    NSMutableDictionary * mSrcURLToTgtBulletBlipIndexMap;
    OADStyleMatrix * mStyleMatrix;
    OAXTableStyleCache * mTableStyleCache;
    OADBlipCollection * mTgtBlipCollection;
    NSMutableArray * mTgtBulletBlips;
}

@property (nonatomic, retain) CXNamespace *OAXChart2012Namespace;
@property (nonatomic, retain) CXNamespace *OAXChartDrawingNamespace;
@property (nonatomic, retain) CXNamespace *OAXChartNamespace;
@property (nonatomic, retain) CXNamespace *OAXCompatNamespace;
@property (nonatomic, retain) CXNamespace *OAXDrawing2010Namespace;
@property (nonatomic, retain) CXNamespace *OAXLockedCanvasNamespace;
@property (nonatomic, retain) CXNamespace *OAXMainNamespace;
@property (nonatomic, retain) CXNamespace *OAXMathNamespace;
@property (nonatomic, retain) CXNamespace *OAXPictureNamespace;
@property (nonatomic, retain) CXNamespace *OAXTableNamespace;
@property (nonatomic, retain) CXNamespace *OAXWordProcessingMLNamespace;
@property (nonatomic, copy) id /* block */ clientChartGraphicPropertyDefaultsBlock;
@property id documentState;
@property (nonatomic, retain) NSMutableDictionary *sourceURLToTargetBlipIndexMap;
@property (nonatomic, retain) NSMutableDictionary *sourceURLToTargetBulletBlipIndexMap;

- (void).cxx_destruct;
- (id)OAXChart2012Namespace;
- (id)OAXChartDrawingNamespace;
- (id)OAXChartNamespace;
- (id)OAXCompatNamespace;
- (id)OAXDrawing2010Namespace;
- (id)OAXLockedCanvasNamespace;
- (id)OAXMainNamespace;
- (id)OAXMathNamespace;
- (id)OAXPictureNamespace;
- (id)OAXTableNamespace;
- (id)OAXWordProcessingMLNamespace;
- (id)appVersion;
- (id)blipRefForURL:(id)arg1;
- (id)blipRefWithURL:(id)arg1 blipArray:(id)arg2 blipURLtoIndexMap:(id)arg3;
- (id)bulletBlipRefForURL:(id)arg1;
- (void)clearTargetBlipCollection;
- (id)client;
- (id /* block */)clientChartGraphicPropertyDefaultsBlock;
- (id)colorMap;
- (id)colorScheme;
- (id)documentState;
- (id)drawableForShapeId:(unsigned int)arg1;
- (id)fontScheme;
- (id)init;
- (id)initWithClient:(id)arg1;
- (bool)isInsideGroup;
- (id)oavState;
- (id)packagePart;
- (id)peekGroup;
- (id)popGroup;
- (void)pushGroup:(id)arg1;
- (void)replaceGroupStack:(id)arg1;
- (void)resetForNewDrawing;
- (void)setClientChartGraphicPropertyDefaultsBlock:(id /* block */)arg1;
- (void)setColorMap:(id)arg1;
- (void)setColorScheme:(id)arg1;
- (void)setDocumentState:(id)arg1;
- (void)setDrawable:(id)arg1 forShapeId:(unsigned int)arg2;
- (void)setFontScheme:(id)arg1;
- (void)setOAXChart2012Namespace:(id)arg1;
- (void)setOAXChartDrawingNamespace:(id)arg1;
- (void)setOAXChartNamespace:(id)arg1;
- (void)setOAXCompatNamespace:(id)arg1;
- (void)setOAXDrawing2010Namespace:(id)arg1;
- (void)setOAXLockedCanvasNamespace:(id)arg1;
- (void)setOAXMainNamespace:(id)arg1;
- (void)setOAXMathNamespace:(id)arg1;
- (void)setOAXPictureNamespace:(id)arg1;
- (void)setOAXTableNamespace:(id)arg1;
- (void)setOAXWordProcessingMLNamespace:(id)arg1;
- (void)setOavState:(id)arg1;
- (void)setPackagePart:(id)arg1;
- (void)setSourceURLToTargetBlipIndexMap:(id)arg1;
- (void)setSourceURLToTargetBulletBlipIndexMap:(id)arg1;
- (void)setStyleMatrix:(id)arg1;
- (void)setTableStyleCache:(id)arg1;
- (void)setTargetBlipCollection:(id)arg1;
- (void)setTargetBulletBlipArray:(id)arg1;
- (void)setVmlShapeId:(id)arg1 forDrawableId:(unsigned int)arg2;
- (void)setupNSForXMLFormat:(int)arg1;
- (id)sourceURLToTargetBlipIndexMap;
- (id)sourceURLToTargetBulletBlipIndexMap;
- (id)styleMatrix;
- (id)tableStyleCache;
- (id)targetBlipCollection;
- (id)vmlShapeIdForDrawableId:(unsigned int)arg1;

@end
