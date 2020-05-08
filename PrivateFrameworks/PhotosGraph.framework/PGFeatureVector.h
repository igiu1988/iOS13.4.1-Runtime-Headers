/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGFeatureVector : PGGraph

+ (id)_featureVectorWithLocalDate:(id)arg1 location:(id)arg2 peopleClues:(id)arg3 useImpreciseLocation:(bool)arg4;
+ (id)_featureVectorWithLocalDate:(id)arg1 location:(id)arg2 peopleNames:(id)arg3 useImpreciseLocation:(bool)arg4;
+ (id)_imprecisePostalAddressFromPlacemark:(id)arg1;
+ (id)_personForName:(id)arg1;
+ (id)featureVectorWithCalendarEvent:(id)arg1;
+ (id)featureVectorWithCalendarEvent:(id)arg1 requiresLocation:(bool)arg2 requiresPeople:(bool)arg3;
+ (id)featureVectorWithLocalDate:(id)arg1 impreciseLocation:(id)arg2 peopleNames:(id)arg3;
+ (id)featureVectorWithLocalDate:(id)arg1 location:(id)arg2 peopleNames:(id)arg3;
+ (id)featureVectorWithLocalDate:(id)arg1 location:(id)arg2 peopleUUIDs:(id)arg3 inPhotoLibrary:(id)arg4;

@end
