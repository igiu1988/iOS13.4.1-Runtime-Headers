/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface CRWeakReference : NSObject <CRCoding, CRDataType> {
    CRDocument * _document;
    NSUUID * _identifier;
}

@property (nonatomic, readonly) id contents;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CRDocument *document;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSUUID *identifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)contents;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (id)description;
- (id)document;
- (void)encodeWithCRCoder:(id)arg1;
- (id)identifier;
- (id)initWithCRCoder:(id)arg1;
- (id)initWithContents:(id)arg1;
- (id)initWithContents:(id)arg1 document:(id)arg2;
- (id)initWithIdentifier:(id)arg1 document:(id)arg2;
- (void)mergeWith:(id)arg1;
- (void)realizeLocalChangesIn:(id)arg1;
- (void)setDocument:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (id)tombstone;
- (void)walkGraph:(id /* block */)arg1;

@end
