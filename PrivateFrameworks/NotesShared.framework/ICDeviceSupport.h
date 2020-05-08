/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICDeviceSupport : NSObject

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

+ (bool)deviceIsIPad;
+ (bool)deviceSupportsFaceID;
+ (bool)deviceSupportsPencil;
+ (bool)deviceSupportsTouchID;
+ (struct CGSize { double x1; double x2; })notesDeviceDrawingSize;
+ (bool)notesDeviceSupportsLetterpress;
+ (bool)notesLowEndHardware;
+ (id)notesProductType;
+ (bool)shouldOnlyDrawWithPencil;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

+ (bool)cameraAvailable;
+ (bool)isLargerCompactHorizontalWidthDevice;

@end
