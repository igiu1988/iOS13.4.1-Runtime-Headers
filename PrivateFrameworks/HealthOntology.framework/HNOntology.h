/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthOntology.framework/HealthOntology
 */

@interface HNOntology : NSObject

@property (nonatomic, readonly) bool needsDownload;

+ (id)sharedOntology;

- (id)executeQuery:(id)arg1 error:(out id*)arg2;
- (id)init;
- (bool)needsDownload;

@end
