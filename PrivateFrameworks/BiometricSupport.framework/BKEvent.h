/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/BiometricSupport.framework/BiometricSupport
 */

@interface BKEvent : NSObject {
    unsigned char  _cls;
    unsigned int  _event;
    bool  _isHigh;
    bool  _isLow;
    bool  _isMetadata;
    bool  _isSmartKeyboard;
    bool  _isStart;
    bool  _isTerminal;
}

@property (readonly) unsigned char cls;
@property (readonly) unsigned int event;
@property (readonly) bool isHigh;
@property (readonly) bool isLow;
@property (readonly) bool isMetadata;
@property (readonly) bool isSmartKeyboard;
@property (readonly) bool isStart;
@property (readonly) bool isTerminal;

- (unsigned char)cls;
- (id)description;
- (void)encodeEventValue:(unsigned int*)arg1 secondValue:(unsigned int*)arg2;
- (unsigned int)event;
- (id)initWithEncodedEventOrCode:(unsigned int)arg1;
- (id)initWithEventOrCode:(unsigned long long)arg1;
- (bool)isHigh;
- (bool)isLow;
- (bool)isMetadata;
- (bool)isSmartKeyboard;
- (bool)isStart;
- (bool)isTerminal;
- (void)setProperties;

@end
