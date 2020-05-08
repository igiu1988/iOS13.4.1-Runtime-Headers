/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNChangeHistoryResult : NSObject <NSSecureCoding> {
    bool  _changesTruncated;
    NSArray * _contactChanges;
    NSArray * _groupChanges;
    NSArray * _labeledValueChanges;
    CNChangeHistoryAnchor * _latestChangeAnchor;
    bool  _unifyResults;
}

@property (nonatomic) bool changesTruncated;
@property (nonatomic, retain) NSArray *contactChanges;
@property (nonatomic, retain) NSArray *groupChanges;
@property (nonatomic, retain) NSArray *labeledValueChanges;
@property (nonatomic, retain) CNChangeHistoryAnchor *latestChangeAnchor;
@property (nonatomic) bool unifyResults;

+ (bool)enumerateEnumerator:(id)arg1 usingBlock:(id /* block */)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)changesTruncated;
- (id)contactChanges;
- (id)contactChangesEnumeratorWithKeysToFetch:(id)arg1 contactStore:(id)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)enumerateContactChangesWithKeysToFetch:(id)arg1 fromContactStore:(id)arg2 error:(id*)arg3 usingBlock:(id /* block */)arg4;
- (bool)enumerateGroupChangesFromContactStore:(id)arg1 error:(id*)arg2 usingBlock:(id /* block */)arg3;
- (id)groupChanges;
- (id)groupChangesEnumeratorWithContactStore:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)labeledValueChanges;
- (id)labeledValueChangesEnumeratorWithContactStore:(id)arg1;
- (id)latestChangeAnchor;
- (void)setChangesTruncated:(bool)arg1;
- (void)setContactChanges:(id)arg1;
- (void)setGroupChanges:(id)arg1;
- (void)setLabeledValueChanges:(id)arg1;
- (void)setLatestChangeAnchor:(id)arg1;
- (void)setUnifyResults:(bool)arg1;
- (bool)unifyResults;

@end
