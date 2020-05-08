/* Generated by EzioChiu
   Image: /usr/lib/libapplist.dylib
 */

@interface ALValueCell : UITableViewCell {
    <ALValueCellDelegate> * delegate;
}

@property (nonatomic) <ALValueCellDelegate> *delegate;

- (id)delegate;
- (void)didSelect;
- (void)loadValue:(id)arg1;
- (void)loadValue:(id)arg1 withTitle:(id)arg2;
- (void)setDelegate:(id)arg1;

@end
