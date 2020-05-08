/* Generated by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMDIdentifierSaltStore : NSObject {
    NSData * _assistantIdentifierSalt;
    NSData * _identifierSalt;
    HMFUnfairLock * _lock;
}

@property (nonatomic, retain) NSData *assistantIdentifierSalt;
@property (nonatomic, retain) NSData *identifierSalt;

- (void).cxx_destruct;
- (id)assistantIdentifierSalt;
- (id)identifierSalt;
- (id)init;
- (void)setAssistantIdentifierSalt:(id)arg1;
- (void)setIdentifierSalt:(id)arg1;

@end
