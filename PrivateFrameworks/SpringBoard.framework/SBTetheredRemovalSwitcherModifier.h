/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBTetheredRemovalSwitcherModifier : SBSwitcherModifier {
    unsigned long long  _indexToScrollAfterInsertion;
    bool  _isFloating;
    unsigned long long  _phase;
    NSUUID * _tetheredRemovalID;
}

- (void).cxx_destruct;
- (id)handleTetheredRemovalEvent:(id)arg1;
- (id)initWithTetheredRemovalID:(id)arg1 floating:(bool)arg2;
- (bool)isIndexVisible:(unsigned long long)arg1;
- (long long)layoutUpdateMode;

@end
