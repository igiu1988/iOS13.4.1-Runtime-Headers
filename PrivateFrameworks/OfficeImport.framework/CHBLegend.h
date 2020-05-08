/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHBLegend : NSObject

+ (int)chdLegendPositionEnumFromXlLegendPosition:(int)arg1;
+ (id)readCHDLegendEntryFrom:(const struct XlChartCustomLegend { int (**x1)(); float x2; float x3; float x4; float x5; int x6; int x7; int x8; int x9; struct XlChartLineStyle {} *x10; struct XlChartFillStyle {} *x11; struct XlChartPicF {} *x12; bool x13; bool x14; bool x15; char *x16; unsigned int x17; struct OcText {} *x18; struct CsColour { unsigned short x_19_1_1; unsigned short x_19_1_2; unsigned short x_19_1_3; unsigned short x_19_1_4; } x19; char *x20; char *x21; int x22; int x23; int x24; int x25; int x26; struct ChVector<XlChartTextFrame::TextRun> { struct TextRun {} *x_27_1_1; struct TextRun {} *x_27_1_2; struct __compressed_pair<XlChartTextFrame::TextRun *, ChAllocator<XlChartTextFrame::TextRun> > { struct TextRun {} *x_3_2_1; } x_27_1_3; } x27; unsigned int x28; unsigned int x29; short x30; short x31; unsigned int x32; short x33; short x34; bool x35; bool x36; bool x37; bool x38; bool x39; bool x40; bool x41; bool x42; bool x43; bool x44; bool x45; bool x46; bool x47; bool x48; bool x49; struct XlString {} *x50; short x51; bool x52; bool x53; }*)arg1 state:(id)arg2;
+ (id)readFrom:(struct XlChartLegendFrame { int (**x1)(); float x2; float x3; float x4; float x5; int x6; int x7; int x8; int x9; struct XlChartLineStyle {} *x10; struct XlChartFillStyle {} *x11; struct XlChartPicF {} *x12; bool x13; bool x14; bool x15; char *x16; unsigned int x17; struct OcText {} *x18; struct CsColour { unsigned short x_19_1_1; unsigned short x_19_1_2; unsigned short x_19_1_3; unsigned short x_19_1_4; } x19; char *x20; char *x21; int x22; int x23; int x24; int x25; int x26; struct ChVector<XlChartTextFrame::TextRun> { struct TextRun {} *x_27_1_1; struct TextRun {} *x_27_1_2; struct __compressed_pair<XlChartTextFrame::TextRun *, ChAllocator<XlChartTextFrame::TextRun> > { struct TextRun {} *x_3_2_1; } x_27_1_3; } x27; unsigned int x28; unsigned int x29; short x30; short x31; unsigned int x32; short x33; short x34; bool x35; bool x36; bool x37; bool x38; bool x39; bool x40; bool x41; bool x42; bool x43; bool x44; bool x45; bool x46; bool x47; bool x48; bool x49; struct XlString {} *x50; int x51; int x52; int x53; int x54; bool x55; bool x56; }*)arg1 state:(id)arg2;
+ (int)xlLegendPositionEnumFromCHDLegendPosition:(int)arg1;

@end
