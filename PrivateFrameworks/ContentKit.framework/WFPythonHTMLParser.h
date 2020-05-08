/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

@interface WFPythonHTMLParser : NSObject {
    NSRegularExpression * _attributeFindExpression;
    NSString * _cdataElement;
    NSRegularExpression * _charrefExpression;
    NSRegularExpression * _commentCloseExpression;
    long long  _currentLineNumber;
    long long  _currentOffset;
    <WFPythonHTMLParserDelegate> * _delegate;
    NSRegularExpression * _endEndTagExpression;
    NSRegularExpression * _endTagFindExpression;
    NSRegularExpression * _entityrefExpression;
    NSRegularExpression * _incompleteExpression;
    NSRegularExpression * _interestingExpression;
    NSRegularExpression * _locateStartTagEndExpression;
    NSString * _rawData;
    NSRegularExpression * _startTagOpenExpression;
    NSRegularExpression * _tagFindExpression;
}

@property (nonatomic, readonly) NSRegularExpression *attributeFindExpression;
@property (nonatomic, copy) NSString *cdataElement;
@property (nonatomic, readonly) NSRegularExpression *charrefExpression;
@property (nonatomic, readonly) NSRegularExpression *commentCloseExpression;
@property (nonatomic) long long currentLineNumber;
@property (nonatomic) long long currentOffset;
@property (nonatomic) <WFPythonHTMLParserDelegate> *delegate;
@property (nonatomic, readonly) NSRegularExpression *endEndTagExpression;
@property (nonatomic, readonly) NSRegularExpression *endTagFindExpression;
@property (nonatomic, readonly) NSRegularExpression *entityrefExpression;
@property (nonatomic, readonly) NSRegularExpression *incompleteExpression;
@property (nonatomic, retain) NSRegularExpression *interestingExpression;
@property (nonatomic, readonly) NSRegularExpression *locateStartTagEndExpression;
@property (nonatomic, copy) NSString *rawData;
@property (nonatomic, readonly) NSRegularExpression *startTagOpenExpression;
@property (nonatomic, readonly) NSRegularExpression *tagFindExpression;

- (void).cxx_destruct;
- (id)attributeFindExpression;
- (id)cdataElement;
- (id)charrefExpression;
- (long long)checkForWholeStartTag:(long long)arg1;
- (void)close;
- (id)commentCloseExpression;
- (long long)currentLineNumber;
- (long long)currentOffset;
- (id)delegate;
- (id)endEndTagExpression;
- (id)endTagFindExpression;
- (id)entityrefExpression;
- (void)feed:(id)arg1;
- (void)handleCharacterRef:(id)arg1;
- (void)handleComment:(id)arg1;
- (void)handleData:(id)arg1;
- (void)handleDoctypeDeclaration:(id)arg1;
- (void)handleEndTag:(id)arg1;
- (void)handleEntityRef:(id)arg1;
- (void)handleProcessingInstruction:(id)arg1;
- (void)handleStartEndTag:(id)arg1 attributes:(id)arg2;
- (void)handleStartTag:(id)arg1 attributes:(id)arg2;
- (void)handleUnknownDeclaration:(id)arg1;
- (id)incompleteExpression;
- (id)init;
- (id)interestingExpression;
- (id)locateStartTagEndExpression;
- (long long)parseBogusComment:(long long)arg1;
- (long long)parseComment:(long long)arg1;
- (void)parseDataAndEnd:(bool)arg1;
- (long long)parseEndTag:(long long)arg1;
- (long long)parseHTMLDeclaration:(long long)arg1;
- (long long)parseMarkedSection:(long long)arg1;
- (long long)parseProcessingInstruction:(long long)arg1;
- (long long)parseStartTag:(long long)arg1;
- (id)rawData;
- (void)reset;
- (id)scanName:(long long)arg1 declarationStartPosition:(long long)arg2 location:(long long*)arg3;
- (void)setCdataElement:(id)arg1;
- (void)setCurrentLineNumber:(long long)arg1;
- (void)setCurrentOffset:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInterestingExpression:(id)arg1;
- (void)setRawData:(id)arg1;
- (id)startTagOpenExpression;
- (id)tagFindExpression;
- (long long)updatePosition:(long long)arg1 j:(long long)arg2;

@end
