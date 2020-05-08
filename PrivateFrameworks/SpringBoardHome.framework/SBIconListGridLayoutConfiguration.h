/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

@interface SBIconListGridLayoutConfiguration : NSObject <BSDescriptionProviding, NSCopying> {
    SBHClockIconVisualConfiguration * _clockIconVisualConfiguration;
    SBHFloatyFolderVisualConfiguration * _floatyFolderVisualConfiguration;
    SBHFolderIconVisualConfiguration * _folderIconVisualConfiguration;
    SBHIconAccessoryVisualConfiguration * _iconAccessoryVisualConfiguration;
    struct SBIconImageInfo { 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
        double scale; 
        double continuousCornerRadius; 
    }  _iconImageInfo;
    NSMutableDictionary * _iconLabelVisualConfigurations;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _landscapeLayoutInsets;
    unsigned long long  _numberOfLandscapeColumns;
    unsigned long long  _numberOfLandscapeRows;
    unsigned long long  _numberOfPortraitColumns;
    unsigned long long  _numberOfPortraitRows;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _portraitLayoutInsets;
    SBHSidebarVisualConfiguration * _sidebarVisualConfiguration;
}

@property (nonatomic, copy) SBHClockIconVisualConfiguration *clockIconVisualConfiguration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) SBHFloatyFolderVisualConfiguration *floatyFolderVisualConfiguration;
@property (nonatomic, copy) SBHFolderIconVisualConfiguration *folderIconVisualConfiguration;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) SBHIconAccessoryVisualConfiguration *iconAccessoryVisualConfiguration;
@property (nonatomic) struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; } iconImageInfo;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } landscapeLayoutInsets;
@property (nonatomic) unsigned long long numberOfLandscapeColumns;
@property (nonatomic) unsigned long long numberOfLandscapeRows;
@property (nonatomic) unsigned long long numberOfPortraitColumns;
@property (nonatomic) unsigned long long numberOfPortraitRows;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } portraitLayoutInsets;
@property (nonatomic, copy) SBHSidebarVisualConfiguration *sidebarVisualConfiguration;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)clockIconVisualConfiguration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)floatyFolderVisualConfiguration;
- (id)folderIconVisualConfiguration;
- (id)iconAccessoryVisualConfiguration;
- (struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })iconImageInfo;
- (id)iconLabelVisualConfigurationForContentSizeCategory:(id)arg1;
- (id)init;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })landscapeLayoutInsets;
- (unsigned long long)numberOfLandscapeColumns;
- (unsigned long long)numberOfLandscapeRows;
- (unsigned long long)numberOfPortraitColumns;
- (unsigned long long)numberOfPortraitRows;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })portraitLayoutInsets;
- (void)setClockIconVisualConfiguration:(id)arg1;
- (void)setFloatyFolderVisualConfiguration:(id)arg1;
- (void)setFolderIconVisualConfiguration:(id)arg1;
- (void)setIconAccessoryVisualConfiguration:(id)arg1;
- (void)setIconImageInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg1;
- (void)setIconLabelVisualConfiguration:(id)arg1 forContentSizeCategory:(id)arg2;
- (void)setLandscapeLayoutInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setNumberOfLandscapeColumns:(unsigned long long)arg1;
- (void)setNumberOfLandscapeRows:(unsigned long long)arg1;
- (void)setNumberOfPortraitColumns:(unsigned long long)arg1;
- (void)setNumberOfPortraitRows:(unsigned long long)arg1;
- (void)setPortraitLayoutInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSidebarVisualConfiguration:(id)arg1;
- (id)sidebarVisualConfiguration;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
