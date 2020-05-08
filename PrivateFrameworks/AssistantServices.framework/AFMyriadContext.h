/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFMyriadContext : NSObject <NSCopying, NSSecureCoding> {
    AFMyriadPerceptualAudioHash * _perceptualAudioHash;
    unsigned long long  _timestamp;
}

@property (nonatomic, readonly, copy) AFMyriadPerceptualAudioHash *perceptualAudioHash;
@property (nonatomic, readonly) unsigned long long timestamp;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimestamp:(unsigned long long)arg1 perceptualAudioHash:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (id)perceptualAudioHash;
- (unsigned long long)timestamp;

@end