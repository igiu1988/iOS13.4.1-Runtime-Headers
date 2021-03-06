/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentManagerCore.framework/DocumentManagerCore
 */

@interface DOCEnumerationProperties : NSObject {
    NSArray * _allowedFileTypes;
    NSArray * _excludedFileTypes;
    NSString * _hostIdentifier;
    NSNumber * _maximumNumberOfItems;
    NSArray * _tagIdentifiers;
}

@property (copy) NSArray *allowedFileTypes;
@property (copy) NSArray *excludedFileTypes;
@property (copy) NSString *hostIdentifier;
@property (copy) NSNumber *maximumNumberOfItems;
@property (copy) NSArray *tagIdentifiers;

- (void).cxx_destruct;
- (id)allowedFileTypes;
- (id)excludedFileTypes;
- (id)hostIdentifier;
- (id)initWithConfiguration:(id)arg1 tags:(id)arg2;
- (id)initWithHostIdentifier:(id)arg1 maximumNumberOfItems:(long long)arg2 allowedDocumentTypes:(id)arg3 excludedDocumentTypes:(id)arg4 tags:(id)arg5;
- (id)maximumNumberOfItems;
- (void)setAllowedFileTypes:(id)arg1;
- (void)setExcludedFileTypes:(id)arg1;
- (void)setHostIdentifier:(id)arg1;
- (void)setMaximumNumberOfItems:(id)arg1;
- (void)setTagIdentifiers:(id)arg1;
- (id)tagIdentifiers;

@end
