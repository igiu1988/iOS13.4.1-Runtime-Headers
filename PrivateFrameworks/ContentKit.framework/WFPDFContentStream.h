/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

@interface WFPDFContentStream : NSObject {
    struct CGPDFContentStream { } * _contentStreamRef;
    NSMutableDictionary * _operatorBlocks;
    struct CGPDFOperatorTable { } * _operatorTableRef;
    NSArray * _textContainers;
}

@property (nonatomic, readonly) struct CGPDFContentStream { }*contentStreamRef;
@property (nonatomic, retain) NSMutableDictionary *operatorBlocks;
@property (nonatomic) struct CGPDFOperatorTable { }*operatorTableRef;
@property (nonatomic, retain) NSArray *textContainers;

- (void).cxx_destruct;
- (struct CGPDFContentStream { }*)contentStreamRef;
- (void)dealloc;
- (id)initWithContentStreamRef:(struct CGPDFContentStream { }*)arg1;
- (id)operatorBlocks;
- (struct CGPDFOperatorTable { }*)operatorTableRef;
- (void)setOperatorBlocks:(id)arg1;
- (void)setOperatorTableRef:(struct CGPDFOperatorTable { }*)arg1;
- (void)setTextContainers:(id)arg1;
- (id)textContainers;
- (id)textInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
