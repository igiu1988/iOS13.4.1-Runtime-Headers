/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TISKCandidateAcceptEvent : TISKEvent {
    TIKeyboardCandidate * _candidate;
}

@property (nonatomic, retain) TIKeyboardCandidate *candidate;

- (void).cxx_destruct;
- (id)candidate;
- (id)description;
- (id)init:(id)arg1 order:(long long)arg2;
- (void)reportToSession:(id)arg1;
- (void)setCandidate:(id)arg1;

@end