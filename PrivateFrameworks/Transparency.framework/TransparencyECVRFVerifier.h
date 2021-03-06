/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

@interface TransparencyECVRFVerifier : TransparencyVRFVerifier {
    struct ccvrf { 
        unsigned long long publickey_nbytes; 
        unsigned long long secretkey_nbytes; 
        unsigned long long proof_nbytes; 
        unsigned long long hash_nbytes; 
        unsigned long long group_nbytes; 
        struct ccdigest_info {} *di; 
        void *custom; 
        int (*derive_public_key)(); 
        int (*prove)(); 
        int (*verify)(); 
        int (*proof_to_hash)(); 
    }  vrf;
}

+ (bool)verifyMessage:(id)arg1 output:(id)arg2 proof:(id)arg3 key:(id)arg4 error:(id*)arg5;
+ (bool)verifyMessage:(id)arg1 salt:(id)arg2 output:(id)arg3 proof:(id)arg4 key:(id)arg5 error:(id*)arg6;

- (id)initWithKey:(id)arg1;
- (bool)verifyMessage:(id)arg1 output:(id)arg2 proof:(id)arg3 error:(id*)arg4;
- (bool)verifyMessage:(id)arg1 salt:(id)arg2 output:(id)arg3 proof:(id)arg4 error:(id*)arg5;
- (int)vrfType;

@end
