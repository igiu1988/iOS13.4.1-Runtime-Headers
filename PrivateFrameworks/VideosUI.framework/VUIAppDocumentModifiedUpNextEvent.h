/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIAppDocumentModifiedUpNextEvent : VUIAppDocumentUpdateEvent <NSCopying> {
    NSSet * _addedCanonicalIDs;
    NSSet * _removedCanonicalIDs;
}

@property (nonatomic, copy) NSSet *addedCanonicalIDs;
@property (nonatomic, copy) NSSet *removedCanonicalIDs;

- (void).cxx_destruct;
- (id)addedCanonicalIDs;
- (id)coalescedEvent:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithAction:(unsigned long long)arg1 canonicalID:(id)arg2;
- (id)initWithAddedCanonicalIDs:(id)arg1 removedCanonicalIDs:(id)arg2;
- (id)initWithDescriptor:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)removedCanonicalIDs;
- (void)setAddedCanonicalIDs:(id)arg1;
- (void)setRemovedCanonicalIDs:(id)arg1;

@end
