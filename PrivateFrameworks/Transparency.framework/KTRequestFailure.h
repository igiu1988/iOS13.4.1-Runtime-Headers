/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

@interface KTRequestFailure : NSManagedObject

@property (nonatomic) long long errorCode;
@property (nonatomic, retain) NSData *proofOfFailure;
@property (nonatomic, retain) KTRequest *request;

+ (id)fetchRequest;

@end
