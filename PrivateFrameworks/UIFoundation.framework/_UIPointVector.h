/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface _UIPointVector : NSObject {
    unsigned long long  _capacity;
    unsigned long long  _count;
    /* Warning: Unrecognized filer type: '' using 'void*' */ void** _vectors;
}

@property (nonatomic) unsigned long long capacity;
@property (nonatomic) unsigned long long count;
@property (nonatomic) /* Warning: Unrecognized filer type: '' using 'void*' */ void**vectors;

- (void)addVector;
- (unsigned long long)capacity;
- (void)clear;
- (unsigned long long)count;
- (void)dealloc;
- (id)init;
- (void)lastVector;
- (void)removeVectorAtIndex:(unsigned long long)arg1;
- (void)reset;
- (void)setCapacity:(unsigned long long)arg1;
- (void)setCount:(unsigned long long)arg1;
- (void)setVectors:(/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1;
- (void)vectorAtIndex:(unsigned long long)arg1;
- (/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)vectors;

@end
