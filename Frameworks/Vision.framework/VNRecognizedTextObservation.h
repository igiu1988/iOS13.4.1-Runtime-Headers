/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNRecognizedTextObservation : VNRectangleObservation {
    NSString * _text;
    NSArray * _textObjects;
}

@property (nonatomic, readonly, copy) NSString *text;
@property (nonatomic, copy) NSArray *textObjects;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextObjects:(id)arg1;
- (id)text;
- (id)textObjects;
- (id)topCandidates:(unsigned long long)arg1;

@end
