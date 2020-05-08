/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNContactImage : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cropRect;
    NSString * _identifier;
    NSData * _imageData;
    NSDate * _lastUsedDate;
    long long  _source;
    NSString * _sourceIdentifier;
    NSString * _variant;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cropRect;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSData *imageData;
@property (nonatomic, readonly) NSDate *lastUsedDate;
@property (nonatomic) long long source;
@property (nonatomic, retain) NSString *sourceIdentifier;
@property (nonatomic, retain) NSString *variant;

- (void).cxx_destruct;
- (id)copyWithNewImageData:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cropRect;
- (id)identifier;
- (id)imageData;
- (id)initWithIdentifier:(id)arg1 imageData:(id)arg2 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 lastUsedDate:(id)arg4;
- (id)initWithImageData:(id)arg1 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 lastUsedDate:(id)arg3;
- (id)lastUsedDate;
- (void)setSource:(long long)arg1;
- (void)setSourceIdentifier:(id)arg1;
- (void)setVariant:(id)arg1;
- (long long)source;
- (id)sourceIdentifier;
- (id)variant;

@end
