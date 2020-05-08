/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDPatternFill : EDFill {
    EDColorReference * mBackColorReference;
    EDColorReference * mForeColorReference;
    int  mType;
}

+ (id)patternFillWithType:(int)arg1 foreColor:(id)arg2 backColor:(id)arg3 resources:(id)arg4;
+ (id)patternFillWithType:(int)arg1 foreColor:(id)arg2 resources:(id)arg3;
+ (id)patternFillWithType:(int)arg1 foreColorReference:(id)arg2 backColorReference:(id)arg3 resources:(id)arg4;
+ (id)patternFillWithType:(int)arg1 resources:(id)arg2;

- (void).cxx_destruct;
- (id)backColor;
- (id)backColorReference;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)foreColor;
- (id)foreColorReference;
- (unsigned long long)hash;
- (id)initWithResources:(id)arg1;
- (id)initWithType:(int)arg1 foreColor:(id)arg2 backColor:(id)arg3 resources:(id)arg4;
- (id)initWithType:(int)arg1 foreColorReference:(id)arg2 backColorReference:(id)arg3 resources:(id)arg4;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPatternFill:(id)arg1;
- (void)setBackColor:(id)arg1;
- (void)setBackColorReference:(id)arg1;
- (void)setForeColor:(id)arg1;
- (void)setForeColorReference:(id)arg1;
- (void)setType:(int)arg1;
- (int)type;

@end
