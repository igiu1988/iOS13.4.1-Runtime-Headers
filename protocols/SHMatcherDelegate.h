/* Generated by EzioChiu.
 */

@protocol SHMatcherDelegate <NSObject>

@required

- (void)matcher:(id <SHMatcher>)arg1 didFailForSignature:(SHSignature *)arg2 apiResponse:(SHMatcherResponse *)arg3 withError:(NSError *)arg4;
- (void)matcher:(id <SHMatcher>)arg1 didFindMatch:(SHMatch *)arg2 forSignature:(SHSignature *)arg3 apiResponse:(SHMatcherResponse *)arg4;
- (void)matcher:(id <SHMatcher>)arg1 didNotFindMatchForSignature:(SHSignature *)arg2 apiResponse:(SHMatcherResponse *)arg3;

@end
