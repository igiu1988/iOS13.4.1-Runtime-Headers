/* Generated by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPolygonRenderer : MKOverlayPathRenderer {
    VKVectorOverlayPolygonGroup * _vectorData;
}

@property (nonatomic, readonly) MKPolygon *polygon;

+ (Class)_mapkitLeafClass;

- (void).cxx_destruct;
- (bool)_canProvideVectorGeometry;
- (void)_updateRenderColors;
- (id)_vectorGeometry;
- (void)createPath;
- (void)fillPath:(struct CGPath { }*)arg1 inContext:(struct CGContext { }*)arg2;
- (id)initWithPolygon:(id)arg1;
- (bool)overlayCanProvideVectorData:(id)arg1;
- (id)polygon;
- (void)setAlpha:(double)arg1;
- (void)setFillColor:(id)arg1;
- (void)setLineJoin:(int)arg1;
- (void)setLineWidth:(double)arg1;
- (void)setMiterLimit:(double)arg1;
- (void)setStrokeColor:(id)arg1;
- (id)vectorDataForOverlay:(id)arg1;

@end
