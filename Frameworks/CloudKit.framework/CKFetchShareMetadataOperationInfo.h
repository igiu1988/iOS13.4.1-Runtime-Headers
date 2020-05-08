/* Generated by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchShareMetadataOperationInfo : CKOperationInfo <NSSecureCoding> {
    NSArray * _rootRecordDesiredKeys;
    NSDictionary * _shareInvitationTokensByShareURL;
    NSArray * _shareURLsToFetch;
    bool  _shouldFetchRootRecord;
}

@property (nonatomic, retain) NSArray *rootRecordDesiredKeys;
@property (nonatomic, retain) NSDictionary *shareInvitationTokensByShareURL;
@property (nonatomic, retain) NSArray *shareURLsToFetch;
@property (nonatomic) bool shouldFetchRootRecord;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)rootRecordDesiredKeys;
- (void)setRootRecordDesiredKeys:(id)arg1;
- (void)setShareInvitationTokensByShareURL:(id)arg1;
- (void)setShareURLsToFetch:(id)arg1;
- (void)setShouldFetchRootRecord:(bool)arg1;
- (id)shareInvitationTokensByShareURL;
- (id)shareURLsToFetch;
- (bool)shouldFetchRootRecord;

@end