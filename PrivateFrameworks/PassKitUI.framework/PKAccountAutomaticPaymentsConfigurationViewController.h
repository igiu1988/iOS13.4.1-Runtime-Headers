/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKAccountAutomaticPaymentsConfigurationViewController : PKSectionTableViewController <PKAddBankAccountInformationViewControllerDelegate, PKMonthDayCollectionViewControllerDelegate, UIPickerViewDataSource, UIPickerViewDelegate> {
    PKAccount * _account;
    UIPickerView * _amountPicker;
    NSArray * _amounts;
    NSDateFormatter * _cardinalDayDateFormatter;
    NSDateFormatter * _cellDateFormatter;
    PKAccountAutomaticPaymentsController * _controller;
    NSNumberFormatter * _currencyFormatter;
    UIPickerView * _datePicker;
    NSArray * _dates;
    NSDateFormatter * _dayNameFormatter;
    unsigned long long  _featureIdentifier;
    PKAccountAutomaticPaymentsDateFooterView * _footerView;
    NSArray * _frequencies;
    NSDictionary * _frequenciesMap;
    UIPickerView * _frequencyPicker;
    NSDateFormatter * _modelDateFormatter;
    PKMonthDayCollectionViewController * _monthDayCollectionViewController;
    NSNumberFormatter * _ordinalDayNumberFormatter;
    NSDateFormatter * _pickerDateFormatter;
    NSCalendar * _productCalendar;
    NSTimeZone * _productTimeZone;
    long long  _scheduledDay;
    NSNumber * _selectedAmount;
    NSDate * _selectedDate;
    NSNumber * _selectedFrequency;
    long long  _selectedRowType;
    bool  _shouldShowCollectionView;
    PKTableHeaderView * _tableHeaderView;
    bool  _useOrdinalDay;
    PKFixedAmountWrapperView * _wrapperView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_addBankAccountInformationViewController;
- (id)_amount;
- (id)_amounts;
- (void)_configureCell:(id)arg1 forIndexPath:(id)arg2;
- (id)_dates;
- (id)_datesForFrequency:(long long)arg1;
- (id)_detailTextForPaymentRowType:(long long)arg1;
- (id)_displayStringForSelectedDate;
- (id)_footerText;
- (id)_frequencies;
- (long long)_frequency;
- (id)_frequencyTitleForFrequency:(long long)arg1;
- (long long)_paymentRowTypeForIndexPath:(id)arg1;
- (void)_performNextButtonTapped;
- (long long)_preset;
- (id)_textForAmount:(id)arg1;
- (id)_textForPaymentRowType:(long long)arg1;
- (void)_updateDates;
- (void)_updateNextButtonEnabledIfNecessary;
- (void)addBankAccountInformationViewController:(id)arg1 didAddFundingSource:(id)arg2;
- (void)addBankAccountInformationViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)addBankAccountInformationViewControllerDidFinish:(id)arg1;
- (void)bankAccountInformationViewControllerChangedBankAccountInformation:(id)arg1;
- (void)dealloc;
- (void)handleNextButtonTapped:(id)arg1;
- (id)initWithController:(id)arg1;
- (void)monthDaySelectionViewController:(id)arg1 didSelectDate:(id)arg2 day:(long long)arg3;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)setSelectedAmount:(id)arg1;
- (void)setSelectedDate:(id)arg1;
- (void)setSelectedFrequency:(id)arg1;
- (bool)shouldMapSection:(unsigned long long)arg1;
- (id)tableHeaderView;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
