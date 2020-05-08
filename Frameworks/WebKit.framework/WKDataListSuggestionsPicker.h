/* Generated by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKDataListSuggestionsPicker : WKDataListSuggestionsControl <UIPickerViewDataSource, UIPickerViewDelegate> {
    struct RetainPtr<WKDataListSuggestionsPickerView> { 
        void *m_ptr; 
    }  _pickerView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithInformation:(struct DataListSuggestionInformation { int x1; struct Vector<WTF::String, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { struct String {} *x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; } x2; struct IntRect { struct IntPoint { int x_1_2_1; int x_1_2_2; } x_3_1_1; struct IntSize { int x_2_2_1; int x_2_2_2; } x_3_1_2; } x3; }*)arg1 inView:(id)arg2;
- (void)invalidate;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)showSuggestionsDropdown:(struct WebDataListSuggestionsDropdownIOS { int (**x1)(); unsigned int x2; struct WeakPtr<WebKit::WebPageProxy> { struct RefPtr<WTF::WeakPtrImpl, WTF::DumbPtrTraits<WTF::WeakPtrImpl> > { struct WeakPtrImpl {} *x_1_2_1; } x_3_1_1; } x3; id x4; struct RetainPtr<WKDataListSuggestionsControl> { void *x_5_1_1; } x5; }*)arg1 activationType:(int)arg2;
- (void)updateWithInformation:(struct DataListSuggestionInformation { int x1; struct Vector<WTF::String, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { struct String {} *x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; } x2; struct IntRect { struct IntPoint { int x_1_2_1; int x_1_2_2; } x_3_1_1; struct IntSize { int x_2_2_1; int x_2_2_2; } x_3_1_2; } x3; }*)arg1;

@end
