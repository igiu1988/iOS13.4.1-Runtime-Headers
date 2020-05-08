/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFActionDragController : WFComponentDragController <CKComponentHostingViewDelegate> {
    id /* block */  _actionGenerator;
    NSArray * _actions;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialLocation;
    struct CGSize { 
        double width; 
        double height; 
    }  _initialSize;
    WFAction * _sourceAction;
    NSHashTable * _viewControllers;
}

@property (nonatomic, copy) id /* block */ actionGenerator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) WFModuleModel *model;
@property (nonatomic, retain) WFAction *sourceAction;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSHashTable *viewControllers;

+ (id)componentForModel:(id)arg1 context:(id)arg2;

- (void).cxx_destruct;
- (id /* block */)actionGenerator;
- (id)actions;
- (void)componentHostingViewDidInvalidateSize:(id)arg1;
- (id)initWithGestureRecognizer:(id)arg1;
- (id)initWithGestureRecognizer:(id)arg1 actionGenerator:(id /* block */)arg2;
- (id)initWithGestureRecognizer:(id)arg1 sourceAction:(id)arg2;
- (void)loadView;
- (void)reset;
- (void)setActionGenerator:(id /* block */)arg1;
- (void)setSourceAction:(id)arg1;
- (void)setViewControllers:(id)arg1;
- (long long)sizeRangeFlexibility;
- (id)sourceAction;
- (void)updateCurrentViewControllers;
- (void)updateView;
- (id)viewControllers;

@end
