/* Generated by EzioChiu.
 */

@protocol PASScoreInputSet <NSObject>

@required

+ (void)iterScoreInputsWithBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, bool*, void*
+ (unsigned long long)maxScoreInput;
+ (unsigned long long)scoreInputForString:(NSString *)arg1;
+ (NSDictionary *)scoreInputsToNames;
+ (NSString *)stringForScoreInput:(unsigned long long)arg1;

@end
