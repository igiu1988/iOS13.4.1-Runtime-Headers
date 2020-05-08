/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIHardwareKeyboardLayout : TIKeyboardLayout <NSSecureCoding> {
    long long  _keyboardType;
}

@property (nonatomic, readonly) long long keyboardType;

+ (void)flushLayoutCaches;
+ (bool)supportsSecureCoding;

- (id)_ANSIFrames;
- (id)_ISOFrames;
- (id)_JISFrames;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForKeyCode:(unsigned long long)arg1;
- (void)addString:(id)arg1 forKeyCode:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyboardType:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (long long)keyboardType;

@end
