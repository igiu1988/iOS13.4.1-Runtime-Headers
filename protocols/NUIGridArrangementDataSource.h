/* Generated by EzioChiu.
 */

@protocol NUIGridArrangementDataSource <NSObject>

@required

- (<NUIArrangementItem> *)gridArrangement:(NUIGridArrangement *)arg1 itemAtIndex:(long long)arg2 columns:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3 rows:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg4 horizontalAlignment:(long long*)arg5 verticalAlignment:(long long*)arg6;
- (long long)numberOfItemsInGridArrangement:(NUIGridArrangement *)arg1;

@optional

- (double)gridArrangement:(NUIGridArrangement *)arg1 heightOfRowAtIndex:(long long)arg2 spacingAfter:(double*)arg3;
- (double)gridArrangement:(NUIGridArrangement *)arg1 widthOfColumnAtIndex:(long long)arg2 spacingAfter:(double*)arg3;

@end
