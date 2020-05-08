/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
 */

@interface TMLAspectsRegistration : NSObject {
    NSMapTable * _registeredAspects;
}

+ (id)keyForClassNamed:(id)arg1 signalName:(id)arg2 advice:(int)arg3;
+ (id)keyForProtocolNamed:(id)arg1 signalName:(id)arg2 advice:(int)arg3;
+ (id)keysForObject:(id)arg1 withMetaObjects:(id)arg2 signalName:(id)arg3 advice:(int)arg4;
+ (id)shared;

- (void).cxx_destruct;
- (id)aspectsForObject:(id)arg1 signalName:(id)arg2 advice:(int)arg3;
- (id)aspectsWithKey:(id)arg1;
- (id)aspectsWithKeys:(id)arg1;
- (id)init;
- (void)registerAspect:(id)arg1 withKey:(id)arg2;
- (id)storageForKey:(id)arg1 createIfMissing:(bool)arg2;
- (id)strongAspectsFromArray:(id)arg1;
- (void)unregisterAspect:(id)arg1 withKey:(id)arg2;

@end
