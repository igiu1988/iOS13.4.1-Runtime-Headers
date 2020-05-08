/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
 */

@interface CUIKIcon : ISIcon {
    NSCalendar * _calendar;
    NSDateComponents * _dateComponents;
    long long  _format;
    <CUIKIconGenerator> * _iconGenerator;
    ISIcon * _isIcon;
}

@property (nonatomic, readonly, copy) NSCalendar *calendar;
@property (nonatomic, readonly, copy) NSDateComponents *dateComponents;
@property (nonatomic, readonly) long long format;
@property (nonatomic, readonly) <CUIKIconGenerator> *iconGenerator;
@property (nonatomic, retain) ISIcon *isIcon;

- (void).cxx_destruct;
- (struct CGImage { }*)CGImageForImageDescriptor:(id)arg1;
- (id)calendar;
- (id)dateComponents;
- (long long)format;
- (void)getCGImageForImageDescriptor:(id)arg1 completion:(id /* block */)arg2;
- (void)getImageForImageDescriptor:(id)arg1 completion:(id /* block */)arg2;
- (id)iconGenerator;
- (id)imageForImageDescriptor:(id)arg1;
- (id)initWithDate:(id)arg1 calendar:(id)arg2 format:(long long)arg3;
- (id)initWithDateComponents:(id)arg1 calendar:(id)arg2 format:(long long)arg3;
- (id)isIcon;
- (void)prepareImagesForImageDescriptors:(id)arg1;
- (void)setIsIcon:(id)arg1;

@end