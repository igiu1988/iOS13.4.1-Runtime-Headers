/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSEntity : NSObject <SSXPCCoding> {
    SSXPCConnection * _connection;
    NSArray * _dirtyLocalExternalProperties;
    NSArray * _dirtyLocalProperties;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSMutableDictionary * _localExternalValues;
    NSMutableDictionary * _localValues;
    long long  _pid;
}

@property (getter=_localExternalValues, setter=_setLocalExternalValues:, copy) NSDictionary *_localExternalValues;
@property (getter=_localValues, setter=_setLocalValues:, copy) NSDictionary *_localValues;
@property (getter=_isManaged, readonly) bool _managed;
@property (readonly) long long _persistentIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) bool exists;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices

+ (long long)_existsMessage;
+ (long long)_getExternalValuesMessage;
+ (long long)_getValueMessage;
+ (long long)_setExternalValuesMessage;
+ (long long)_setValuesMessage;

- (void)__addCachedExternalValues:(id)arg1;
- (void)__addCachedPropertyValues:(id)arg1;
- (void)_addCachedExternalValues:(id)arg1;
- (void)_addCachedPropertyValues:(id)arg1;
- (void)_becomeManagedOnConnection:(id)arg1;
- (void)_getValues:(id*)arg1 forProperties:(const id*)arg2 count:(unsigned long long)arg3 message:(long long)arg4;
- (id)_initWithPersistentIdentifier:(long long)arg1;
- (bool)_isManaged;
- (id)_localExternalValues;
- (id)_localValues;
- (long long)_persistentIdentifier;
- (void)_resetLocalIVars;
- (void)_setDirtyCachedExternalProperties:(id)arg1;
- (void)_setDirtyCachedProperties:(id)arg1;
- (void)_setLocalExternalValues:(id)arg1;
- (void)_setLocalValues:(id)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)description;
- (bool)exists;
- (void)getValues:(id*)arg1 forExternalProperties:(const id*)arg2 count:(unsigned long long)arg3;
- (void)getValues:(id*)arg1 forProperties:(const id*)arg2 count:(unsigned long long)arg3;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (void)resetCachedExternalProperties:(const id*)arg1 count:(unsigned long long)arg2;
- (void)resetCachedProperties:(const id*)arg1 count:(unsigned long long)arg2;
- (bool)setExternalValuesWithDictionary:(id)arg1;
- (bool)setValue:(id)arg1 forProperty:(id)arg2;
- (bool)setValuesWithDictionary:(id)arg1;
- (id)valueForExternalProperty:(id)arg1;
- (id)valueForProperty:(id)arg1;

// Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI

- (id)vui_valuesForProperties:(id)arg1;

@end
