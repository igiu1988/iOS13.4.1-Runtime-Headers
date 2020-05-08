/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUICounterViewElement : SKUIViewElement {
    double  _changeRatePerSecond;
    long long  _counterType;
    long long  _dateFormatType;
    NSDate * _endDate;
    NSString * _numberFormat;
    long long  _startValue;
    NSDate * _startValueDate;
    long long  _stopValue;
}

@property (nonatomic, readonly) SKUIImageViewElement *backgroundImageElement;
@property (nonatomic, readonly) double changeRatePerSecond;
@property (nonatomic, readonly) long long counterType;
@property (nonatomic, readonly) long long dateFormatType;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSString *numberFormat;
@property (nonatomic, readonly) long long startValue;
@property (nonatomic, readonly) NSDate *startValueDate;
@property (nonatomic, readonly) long long stopValue;

- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)backgroundImageElement;
- (double)changeRatePerSecond;
- (long long)counterType;
- (long long)currentNumberValue;
- (long long)dateFormatType;
- (id)endDate;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)numberFormat;
- (long long)startValue;
- (id)startValueDate;
- (long long)stopValue;

@end