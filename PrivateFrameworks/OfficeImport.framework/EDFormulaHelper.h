/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDFormulaHelper : NSObject <EFHelper> {
    int  mColumnNumber;
    ECMappingContext * mMappingContext;
    int  mRowNumber;
    EDWorkbook * mWorkbook;
    EDWorksheet * mWorksheet;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)columnNumber;
- (unsigned long long)createIndexWithType:(int)arg1 firstSheetIndex:(unsigned long long)arg2 lastSheetIndex:(unsigned long long)arg3;
- (id)initWithWorkbook:(id)arg1 worksheet:(id)arg2 rowNumber:(int)arg3 columnNumber:(int)arg4;
- (bool)isCurrentSheet:(id)arg1;
- (unsigned long long)resolveFile:(id)arg1;
- (unsigned long long)resolveFirstSheet:(id)arg1 lastSheet:(id)arg2;
- (int)resolveFunctionName:(id)arg1;
- (unsigned long long)resolveName:(id)arg1;
- (unsigned long long)resolveSheet:(id)arg1;
- (id)resolveTable:(id)arg1;
- (unsigned long long)resolveTableColumn:(id)arg1 columnName:(id)arg2;
- (unsigned long long)resolveTableToSheetId:(id)arg1;
- (int)rowNumber;
- (id)workbook;

@end
