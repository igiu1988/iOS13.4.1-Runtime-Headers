/* Generated by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface __PartitionedCacheLookupKey : NSObject <NSCopying> {
    NSString * _domain;
    NSString * _mainDocOrigin;
}

@property (nonatomic, retain) NSString *domain;
@property (nonatomic, retain) NSString *mainDocOrigin;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)domain;
- (unsigned long long)hash;
- (id)init;
- (id)initWithPartition:(id)arg1 domain:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)mainDocOrigin;
- (void)setDomain:(id)arg1;
- (void)setMainDocOrigin:(id)arg1;

@end
