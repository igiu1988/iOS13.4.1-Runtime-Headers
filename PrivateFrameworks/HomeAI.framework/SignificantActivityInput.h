/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
 */

@interface SignificantActivityInput : NSObject <MLFeatureProvider> {
    struct __CVBuffer { } * _image__Placeholder__0;
}

@property (nonatomic, readonly) NSSet *featureNames;
@property (nonatomic) struct __CVBuffer { }*image__Placeholder__0;

- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (struct __CVBuffer { }*)image__Placeholder__0;
- (id)initWithImage__Placeholder__0:(struct __CVBuffer { }*)arg1;
- (void)setImage__Placeholder__0:(struct __CVBuffer { }*)arg1;

@end
