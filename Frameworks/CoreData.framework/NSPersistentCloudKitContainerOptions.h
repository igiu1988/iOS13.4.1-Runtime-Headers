/* Generated by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSPersistentCloudKitContainerOptions : NSObject {
    NSString * _apsConnectionMachServiceName;
    NSString * _containerIdentifier;
    bool  _useDeviceToDeviceEncryption;
}

@property (nonatomic, retain) NSString *apsConnectionMachServiceName;
@property (readonly, copy) NSString *containerIdentifier;
@property (nonatomic) bool useDeviceToDeviceEncryption;
@property bool useEncryptedStorage;

- (id)apsConnectionMachServiceName;
- (id)containerIdentifier;
- (void)dealloc;
- (id)initWithContainerIdentifier:(id)arg1;
- (void)setApsConnectionMachServiceName:(id)arg1;
- (void)setUseDeviceToDeviceEncryption:(bool)arg1;
- (void)setUseEncryptedStorage:(bool)arg1;
- (bool)useDeviceToDeviceEncryption;
- (bool)useEncryptedStorage;

@end
