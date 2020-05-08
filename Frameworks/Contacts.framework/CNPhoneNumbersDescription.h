/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNPhoneNumbersDescription : CNMultiValuePropertyDescription <CNAbstractPropertyDescription>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/Contacts.framework/Contacts

- (void*)ABMultiValueValueFromCNLabeledValueValue:(id)arg1;
- (id)CNLabeledValueValueFromABMultiValueValue:(void*)arg1;
- (id)CNLabeledValueValueFromABMultiValueValueBytes:(char *)arg1 length:(unsigned long long)arg2;
- (id)CNValueForContact:(id)arg1;
- (bool)abPropertyID:(int*)arg1;
- (bool)canUnifyValue:(id)arg1 withValue:(id)arg2;
- (void)decodeUsingCoder:(id)arg1 contact:(id)arg2;
- (void)encodeUsingCoder:(id)arg1 contact:(id)arg2;
- (id)equivalentLabelSets;
- (id /* block */)fromPlistTransform;
- (id)init;
- (bool)isEqualForContact:(id)arg1 other:(id)arg2;
- (bool)isNonnull;
- (Class)labeledValueClass;
- (id /* block */)plistTransform;
- (void)setCNValue:(id)arg1 onContact:(id)arg2;
- (id)standardLabels;
- (id)stringForIndexingForContact:(id)arg1;

// Image: /System/Library/Frameworks/AddressBook.framework/AddressBook

- (id /* block */)ABSMultiValueLabeledValueFromCNLabeledValueTransform;
- (id /* block */)CNLabeledValueFromABSMultiValueTranform;
- (bool)absPropertyID:(int*)arg1;
- (unsigned int)absPropertyType;
- (bool)isABSLabeledValueValue:(id)arg1 equalToValue:(id)arg2;

@end
