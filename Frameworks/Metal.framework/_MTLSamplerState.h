/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface _MTLSamplerState : NSObject <MTLSamplerStateSPI> {
    <MTLDevice> * _device;
    NSString * _label;
    unsigned long long  _resourceIndex;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *label;
@property (nonatomic) unsigned long long resourceIndex;
@property (readonly) Class superclass;
@property (readonly) unsigned long long uniqueIdentifier;

- (void)dealloc;
- (id)description;
- (id)device;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)initWithDevice:(id)arg1 samplerDescriptor:(id)arg2;
- (id)label;
- (unsigned long long)resourceIndex;
- (void)setResourceIndex:(unsigned long long)arg1;
- (unsigned long long)uniqueIdentifier;

@end