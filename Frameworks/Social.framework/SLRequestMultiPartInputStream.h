/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLRequestMultiPartInputStream : NSInputStream {
    unsigned long long  _bytesReadInState;
    int  _currentState;
    SLRequestMultiPart * _multiPart;
    NSData * _srcData;
    unsigned long long  _streamStatus;
    unsigned long long  _totalBytesRead;
}

- (void).cxx_destruct;
- (void)close;
- (long long)currentStateRead:(char *)arg1 maxLength:(unsigned long long)arg2;
- (bool)getBuffer:(char **)arg1 length:(unsigned long long*)arg2;
- (bool)hasBytesAvailable;
- (id)initWithMultiPart:(id)arg1;
- (unsigned long long)length;
- (void)open;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (unsigned long long)readStateSourceData:(id)arg1 toBuffer:(char *)arg2 offset:(unsigned long long)arg3 maxLength:(unsigned long long)arg4;
- (void)transitionState;

@end
