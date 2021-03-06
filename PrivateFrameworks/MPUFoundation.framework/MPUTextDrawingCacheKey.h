/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUTextDrawingCacheKey : NSObject <NSCopying> {
    struct CGSize { 
        double width; 
        double height; 
    }  _allowedSize;
    NSString * _text;
}

@property (nonatomic) struct CGSize { double x1; double x2; } allowedSize;
@property (nonatomic, copy) NSString *text;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })allowedSize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)setAllowedSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
