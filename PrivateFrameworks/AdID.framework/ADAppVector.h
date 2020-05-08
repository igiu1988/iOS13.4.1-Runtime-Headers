/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AdID.framework/AdID
 */

@interface ADAppVector : ADVector {
    unsigned int  _adamID;
}

@property (nonatomic, readonly) unsigned int adamID;

- (unsigned int)adamID;
- (id)data;
- (id)description;
- (id)initWithString:(id)arg1 version:(id)arg2;
- (id)initWithVersion:(id)arg1 header:(struct ADAppVectorHeader { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg2 floats:(float*)arg3;

@end