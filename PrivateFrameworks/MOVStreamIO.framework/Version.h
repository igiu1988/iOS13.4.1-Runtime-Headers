/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
 */

@interface Version : NSObject {
    unsigned int  _bugfix;
    unsigned int  _major;
    unsigned int  _minor;
    NSString * _modifier;
}

@property (readonly) unsigned int bugfix;
@property (readonly) unsigned int major;
@property (readonly) unsigned int minor;
@property (readonly) NSString *modifier;

- (void).cxx_destruct;
- (unsigned int)bugfix;
- (long long)compareToVersion:(id)arg1;
- (id)description;
- (id)getVersionAsString;
- (id)init;
- (id)initWithVersionString:(id)arg1;
- (bool)isAllDigitsInString:(id)arg1;
- (bool)isEqualToVersion:(id)arg1;
- (unsigned int)major;
- (unsigned int)minor;
- (id)modifier;

@end
