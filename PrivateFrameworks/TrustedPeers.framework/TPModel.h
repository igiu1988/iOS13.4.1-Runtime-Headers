/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
 */

@interface TPModel : NSObject {
    NSArray * _cachedPartialViableBottles;
    NSArray * _cachedViableBottles;
    <TPDecrypter> * _decrypter;
    NSMutableDictionary * _peersByID;
    NSMutableDictionary * _policiesByVersion;
    NSData * _recoveryEncryptionPubKey;
    NSData * _recoverySigningPubKey;
    NSMutableSet * _uncheckedVouchers;
    NSMutableSet * _vouchers;
}

@property (nonatomic, retain) NSArray *cachedPartialViableBottles;
@property (nonatomic, retain) NSArray *cachedViableBottles;
@property (nonatomic, retain) <TPDecrypter> *decrypter;
@property (nonatomic, retain) NSMutableDictionary *peersByID;
@property (nonatomic, retain) NSMutableDictionary *policiesByVersion;
@property (nonatomic, retain) NSData *recoveryEncryptionPubKey;
@property (nonatomic, retain) NSData *recoverySigningPubKey;
@property (nonatomic, retain) NSMutableSet *uncheckedVouchers;
@property (nonatomic, retain) NSMutableSet *vouchers;

+ (id)preapprovalsFromKeys:(id)arg1;

- (void).cxx_destruct;
- (id)actualPeerWithID:(id)arg1 error:(id*)arg2;
- (id)allMachineIDs;
- (id)allPeerIDs;
- (id)allPeers;
- (id)allPolicyVersions;
- (id)allVouchers;
- (id)bestRecoveryKeyForStableInfo:(id)arg1 dynamicInfo:(id)arg2;
- (id)cachedPartialViableBottles;
- (id)cachedViableBottles;
- (id)calculateDynamicInfoForPeerWithID:(id)arg1 addingPeerIDs:(id)arg2 removingPeerIDs:(id)arg3 preapprovedKeys:(id)arg4 signingKeyPair:(id)arg5 currentMachineIDs:(id)arg6 error:(id*)arg7;
- (id)calculateDynamicInfoFromModel:(id)arg1 peer:(id)arg2 peerPermanentInfo:(id)arg3 peerStableInfo:(id)arg4 startingDynamicInfo:(id)arg5 addingPeerIDs:(id)arg6 removingPeerIDs:(id)arg7 preapprovedKeys:(id)arg8 signingKeyPair:(id)arg9 currentMachineIDs:(id)arg10 error:(id*)arg11;
- (bool)canIntroduceCandidate:(id)arg1 withSponsor:(id)arg2 toEpoch:(unsigned long long)arg3 underPolicy:(id)arg4 disposition:(id)arg5;
- (bool)canTrustCandidate:(id)arg1 inEpoch:(unsigned long long)arg2;
- (bool)checkIntroductionForCandidate:(id)arg1 stableInfo:(id)arg2 withSponsorID:(id)arg3 error:(id*)arg4;
- (void)checkVouchers;
- (void)clearViableBottles;
- (id)considerCandidateID:(id)arg1 withSponsorID:(id)arg2 sponsorPermanentInfo:(id)arg3 toExpandIncludedPeerIDs:(id)arg4 andExcludedPeerIDs:(id)arg5 dispositions:(id)arg6 currentMachineIDs:(id)arg7 forEpoch:(unsigned long long)arg8;
- (bool)considerPolicyFromPeerID:(id)arg1 stableInfo:(id)arg2 secrets:(id)arg3 newestPolicyDoc:(id*)arg4 error:(id*)arg5;
- (void)considerPreapprovalsSponsoredByPeer:(id)arg1 toRecursivelyExpandIncludedPeerIDs:(id)arg2 andExcludedPeerIDs:(id)arg3 dispositions:(id)arg4 currentMachineIDs:(id)arg5 forEpoch:(unsigned long long)arg6;
- (void)considerVouchersSponsoredByPeerID:(id)arg1 sponsorPermanentInfo:(id)arg2 toRecursivelyExpandIncludedPeerIDs:(id)arg3 andExcludedPeerIDs:(id)arg4 dispositions:(id)arg5 currentMachineIDs:(id)arg6 forEpoch:(unsigned long long)arg7;
- (id)createDynamicInfoWithIncludedPeerIDs:(id)arg1 excludedPeerIDs:(id)arg2 dispositions:(id)arg3 preapprovals:(id)arg4 signingKeyPair:(id)arg5 error:(id*)arg6;
- (id)createStableInfoWithFrozenPolicyVersion:(id)arg1 flexiblePolicyVersion:(id)arg2 policySecrets:(id)arg3 deviceName:(id)arg4 serialNumber:(id)arg5 osVersion:(id)arg6 signingKeyPair:(id)arg7 recoverySigningPubKey:(id)arg8 recoveryEncryptionPubKey:(id)arg9 error:(id*)arg10;
- (id)createVoucherForCandidate:(id)arg1 stableInfo:(id)arg2 withSponsorID:(id)arg3 reason:(unsigned long long)arg4 signingKeyPair:(id)arg5 error:(id*)arg6;
- (id)currentCachedViableBottlesSet;
- (id)decrypter;
- (void)deletePeerWithID:(id)arg1;
- (id)dynamicInfoForJoiningPeerID:(id)arg1 peerPermanentInfo:(id)arg2 peerStableInfo:(id)arg3 sponsorID:(id)arg4 preapprovedKeys:(id)arg5 signingKeyPair:(id)arg6 currentMachineIDs:(id)arg7 error:(id*)arg8;
- (id)filterPeerList:(id)arg1 byMachineIDs:(id)arg2 dispositions:(id)arg3;
- (void)filterPreapprovals:(id)arg1 forExistingPeers:(id)arg2;
- (id)getDynamicInfoForPeerWithID:(id)arg1;
- (id)getPeerIDsTrustedByPeerWithDynamicInfo:(id)arg1 toAccessView:(id)arg2 error:(id*)arg3;
- (id)getPeerIDsTrustedByPeerWithID:(id)arg1 toAccessView:(id)arg2 error:(id*)arg3;
- (id)getStableInfoForPeerWithID:(id)arg1;
- (id)getViewsForPeer:(id)arg1 stableInfo:(id)arg2 error:(id*)arg3;
- (bool)hasPeerWithID:(id)arg1;
- (bool)hasPotentiallyTrustedPeerPreapprovingKey:(id)arg1;
- (id)initWithDecrypter:(id)arg1;
- (bool)isRecoveryKeyEnrolled;
- (unsigned long long)latestEpochAmongPeerIDs:(id)arg1;
- (unsigned long long)maxClock;
- (id)peerCountsByMachineID;
- (id)peerIDThatTrustsRecoveryKeys:(id)arg1;
- (id)peerWithID:(id)arg1;
- (id)peersByID;
- (id)peersWithMachineID:(id)arg1;
- (id)policiesByVersion;
- (id)policyForPeerIDs:(id)arg1 candidatePeerID:(id)arg2 candidateStableInfo:(id)arg3 error:(id*)arg4;
- (id)policyWithVersion:(unsigned long long)arg1;
- (id)recoveryEncryptionPubKey;
- (id)recoveryEncryptionPublicKey;
- (id)recoverySigningPubKey;
- (id)recoverySigningPublicKey;
- (void)recursivelyExpandIncludedPeerIDs:(id)arg1 andExcludedPeerIDs:(id)arg2 dispositions:(id)arg3 withPeersTrustedBySponsorID:(id)arg4 currentMachineIDs:(id)arg5 forEpoch:(unsigned long long)arg6;
- (void)registerPeerWithPermanentInfo:(id)arg1;
- (void)registerPolicyDocument:(id)arg1;
- (void)registerVoucher:(id)arg1;
- (void)setCachedPartialViableBottles:(id)arg1;
- (void)setCachedViableBottles:(id)arg1;
- (void)setDecrypter:(id)arg1;
- (void)setPeersByID:(id)arg1;
- (void)setPoliciesByVersion:(id)arg1;
- (void)setRecoveryEncryptionPubKey:(id)arg1;
- (void)setRecoveryKeys:(id)arg1;
- (void)setRecoverySigningPubKey:(id)arg1;
- (void)setUncheckedVouchers:(id)arg1;
- (void)setViableBottles:(id)arg1;
- (void)setVouchers:(id)arg1;
- (bool)setWrappedPrivateKeys:(id)arg1 forPeerWithID:(id)arg2 error:(id*)arg3;
- (unsigned long long)statusOfPeerWithID:(id)arg1;
- (id)uncheckedVouchers;
- (id)untrustedPeerIDs;
- (bool)updateDynamicInfo:(id)arg1 forPeerWithID:(id)arg2 error:(id*)arg3;
- (bool)updateStableInfo:(id)arg1 forPeerWithID:(id)arg2 error:(id*)arg3;
- (bool)validatePeerWithPreApproval:(id)arg1 sponsor:(id)arg2;
- (bool)validateVoucherForPeer:(id)arg1 sponsor:(id)arg2;
- (id)vectorClock;
- (id)viablePeerCountsByModelID;
- (id)vouchers;

@end
