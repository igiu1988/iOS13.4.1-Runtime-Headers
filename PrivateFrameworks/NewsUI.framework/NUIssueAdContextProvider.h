/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUIssueAdContextProvider : NSObject <NUAdContextProvider> {
    FCIssue * _issue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) FCIssue *issue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)adContextValueForKeyPath:(id)arg1;
- (id)initWithIssue:(id)arg1;
- (id)issue;

@end
