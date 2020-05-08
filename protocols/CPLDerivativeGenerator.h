/* Generated by EzioChiu.
 */

@protocol CPLDerivativeGenerator

@required

+ (bool)canGenerateImageDerivativesFromUTI:(NSString *)arg1;
+ (void)generateDerivativeResourcesFromInputResource:(void *)arg1 withAdjustments:(void *)arg2 destinationDirectory:(void *)arg3 derivativesFilter:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 11: CPLResource *, CPLAdjustments *, NSURL *, CPLDerivativesFilter *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
+ (bool)isMovieUTI:(NSString *)arg1;
+ (bool)isUnsupportedOriginalFormatError:(NSError *)arg1;

@end
