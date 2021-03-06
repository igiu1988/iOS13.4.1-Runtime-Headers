/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSCountableTextRange : NSTextRange {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
}

@property (readonly) NSCountableTextLocation *location;
@property (readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (readonly) NSCountableTextLocation *terminator;
@property (readonly, copy) NSString *type;

+ (id)documentRange;
+ (bool)isBaseClassTestingMode;
+ (void)setBaseClassTestingMode:(bool)arg1;

- (bool)containsLocation:(id)arg1;
- (id)description;
- (id)initWithLocation:(id)arg1 terminator:(id)arg2;
- (id)initWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)intersectsWithTextRange:(id)arg1;
- (bool)isEmpty;
- (bool)isEqualToTextRange:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (id)textRangeByFormingUnionWithTextRange:(id)arg1;
- (id)textRangeByIntersectingWithTextRange:(id)arg1;
- (id)type;

@end
