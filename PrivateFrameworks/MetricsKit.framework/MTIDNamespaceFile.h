/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
 */

@interface MTIDNamespaceFile : NSObject {
    MTInterprocessChangeNotifier * _changeNotifier;
    NSString * _fileName;
    NSDictionary * _options;
}

@property (nonatomic, retain) MTInterprocessChangeNotifier *changeNotifier;
@property (nonatomic, retain) NSString *fileName;
@property (retain) NSDictionary *options;

+ (id)dataFromOptions:(id)arg1 error:(id*)arg2;
+ (id)optionsFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)changeNotifier;
- (id)deleteFile;
- (id)fileName;
- (id)initWithFileName:(id)arg1 shouldDisableChangeNotifications:(bool)arg2;
- (id)lockFileWithFlags:(int)arg1 block:(id /* block */)arg2;
- (id)options;
- (id)optionsWithCachePolicy:(long long)arg1;
- (void)setChangeNotifier:(id)arg1;
- (void)setFileName:(id)arg1;
- (void)setOptions:(id)arg1;
- (id)updateOptions:(id)arg1 resetSeed:(bool)arg2;

@end
