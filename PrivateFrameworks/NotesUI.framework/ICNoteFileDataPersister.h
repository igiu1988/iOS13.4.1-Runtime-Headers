/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface ICNoteFileDataPersister : NSObject <ICDataPersister> {
    NSURL * _baseURL;
}

@property (nonatomic, retain) NSURL *baseURL;

- (void).cxx_destruct;
- (id)baseURL;
- (id)init;
- (id)initWithNotePackageURL:(id)arg1;
- (id)loadDataForIdentifier:(id)arg1;
- (bool)saveData:(id)arg1 identifier:(id)arg2;
- (void)setBaseURL:(id)arg1;
- (id)urlForIdentifier:(id)arg1;

@end
