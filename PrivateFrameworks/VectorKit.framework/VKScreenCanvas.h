/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKScreenCanvas : NSObject {
    struct AnimationRunner { struct MapEngine {} *x1; } * _animationRunner;
    ARSession * _arSession;
    VKCamera * _camera;
    VKCameraController * _cameraController;
    bool  _deallocing;
    <MDRenderTarget> * _displayTarget;
    struct VKEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _edgeInsets;
    struct VKEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _fullyOccludedEdgeInsets;
    struct LayoutContext { id x1; struct shared_ptr<md::ViewTransform> { struct ViewTransform {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; id x3; struct shared_ptr<mdc::Camera> { struct Camera {} *x_4_1_1; struct __shared_weak_count {} *x_4_1_2; } x4; unsigned char x5; struct VKEdgeInsets { float x_6_1_1; float x_6_1_2; float x_6_1_3; float x_6_1_4; } x6; struct VKEdgeInsets { float x_7_1_1; float x_7_1_2; float x_7_1_3; float x_7_1_4; } x7; struct shared_ptr<ggl::PolygonBase::MeshMesh> { struct MeshMesh {} *x_8_1_1; struct __shared_weak_count {} *x_8_1_2; } x8; struct shared_ptr<ggl::PolygonBase::MeshMesh> { struct MeshMesh {} *x_9_1_1; struct __shared_weak_count {} *x_9_1_2; } x9; struct shared_ptr<ggl::TextureMesh::MeshMesh> { struct MeshMesh {} *x_10_1_1; struct __shared_weak_count {} *x_10_1_2; } x10; struct StencilManager { unsigned char x_11_1_1; unsigned char x_11_1_2; unsigned char x_11_1_3; struct ClearItem { unsigned char x_4_2_1; struct Matrix<float, 4, 1> { float x_2_3_1[4]; } x_4_2_2; bool x_4_2_3; float x_4_2_4; unsigned char x_4_2_5; unsigned int x_4_2_6; } x_11_1_4; } x11; } * _layoutContext;
    <MDMapControllerDelegate> * _mapDelegate;
    struct MapEngine { int (**x1)(); struct shared_ptr<md::TaskContext> { struct TaskContext {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct Device {} *x3; struct _retain_ptr<_MapEngineRenderQueueSource *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { int (**x_4_1_1)(); id x_4_1_2; struct _retain_objc { } x_4_1_3; struct _release_objc { } x_4_1_4; } x4; struct unique_ptr<ggl::DisplayLink, std::__1::default_delete<ggl::DisplayLink> > { struct __compressed_pair<ggl::DisplayLink *, std::__1::default_delete<ggl::DisplayLink> > { struct DisplayLink {} *x_1_2_1; } x_5_1_1; } x5; struct unique_ptr<ggl::SnapshotRunLoop, std::__1::default_delete<ggl::SnapshotRunLoop> > { struct __compressed_pair<ggl::SnapshotRunLoop *, std::__1::default_delete<ggl::SnapshotRunLoop> > { struct SnapshotRunLoop {} *x_1_2_1; } x_6_1_1; } x6; struct RunLoop {} *x7; struct unique_ptr<md::AnimationManager, std::__1::default_delete<md::AnimationManager> > { struct __compressed_pair<md::AnimationManager *, std::__1::default_delete<md::AnimationManager> > { struct AnimationManager {} *x_1_2_1; } x_8_1_1; } x8; } * _mapEngine;
    struct Renderer { int (**x1)(); struct shared_ptr<md::TaskContext> { struct TaskContext {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct unique_ptr<md::PassList, std::__1::default_delete<md::PassList> > { struct __compressed_pair<md::PassList *, std::__1::default_delete<md::PassList> > { struct PassList {} *x_1_2_1; } x_3_1_1; } x3; struct unique_ptr<md::RenderTargetRegistry, std::__1::default_delete<md::RenderTargetRegistry> > { struct __compressed_pair<md::RenderTargetRegistry *, std::__1::default_delete<md::RenderTargetRegistry> > { struct RenderTargetRegistry {} *x_1_2_1; } x_4_1_1; } x4; struct vector<std::__1::unique_ptr<md::RenderLayer, std::__1::default_delete<md::RenderLayer> >, std::__1::allocator<std::__1::unique_ptr<md::RenderLayer, std::__1::default_delete<md::RenderLayer> > > > { struct unique_ptr<md::RenderLayer, std::__1::default_delete<md::RenderLayer> > {} *x_5_1_1; struct unique_ptr<md::RenderLayer, std::__1::default_delete<md::RenderLayer> > {} *x_5_1_2; struct __compressed_pair<std::__1::unique_ptr<md::RenderLayer, std::__1::default_delete<md::RenderLayer> > *, std::__1::allocator<std::__1::unique_ptr<md::RenderLayer, std::__1::default_delete<md::RenderLayer> > > > { struct unique_ptr<md::RenderLayer, std::__1::default_delete<md::RenderLayer> > {} *x_3_2_1; } x_5_1_3; } x5; } * _mapRenderer;
    struct RunLoopController { struct MapEngine {} *x1; long long x2; long long x3; } * _runLoopController;
    struct shared_ptr<md::TaskContext> { 
        struct TaskContext {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _taskContext;
    bool  _userIsGesturing;
    struct PerspectiveView<double> { 
        struct RigidTransform<double, double> { 
            struct Matrix<double, 3, 1> { 
                double _e[3]; 
            } _translation; 
            struct Quaternion<double> { 
                struct Matrix<double, 3, 1> { 
                    double _e[3]; 
                } _imaginary; 
                double _scalar; 
            } _rotation; 
        } _transform; 
        struct Matrix<double, 4, 4> { 
            double _e[16]; 
        } _projectionMatrix; 
        struct Matrix<double, 4, 4> { 
            double _e[16]; 
        } _inverseProjection; 
        struct Matrix<double, 4, 4> { 
            double _e[16]; 
        } _matrix; 
        double _ndcZNear; 
        double _aspectRatio; 
        struct ViewSize { 
            unsigned short width; 
            unsigned short height; 
        } _size; 
        int _type; 
        struct Unit<RadianUnitDescription, double> { 
            double _value; 
        } _verticalFOV; 
        double _near; 
        double _far; 
    }  _view;
}

@property (nonatomic, readonly) VKCamera *camera;
@property (nonatomic) struct VKEdgeInsets { float x1; float x2; float x3; float x4; } edgeInsets;
@property (nonatomic) struct VKEdgeInsets { float x1; float x2; float x3; float x4; } fullyOccludedEdgeInsets;
@property (getter=isGesturing, nonatomic) bool gesturing;
@property (nonatomic) <MDMapControllerDelegate> *mapDelegate;
@property (nonatomic, readonly) struct MapEngine { int (**x1)(); struct shared_ptr<md::TaskContext> { struct TaskContext {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct Device {} *x3; /* Warning: unhandled struct encoding: '{_retain_ptr<_MapEngineRenderQueueSource *' */ struct x4; }*mapEngine; /* unknown property attribute:  geo::_equal_objc>=^^?@{_retain_objc=}{_release_objc=}}QQ} */

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)camera;
- (id)cameraController;
- (void)cameraController:(id)arg1 requestsDisplayRate:(long long)arg2;
- (void)dealloc;
- (void)didPresent;
- (void)didReceiveMemoryWarning:(bool)arg1 beAggressive:(bool)arg2;
- (struct VKEdgeInsets { float x1; float x2; float x3; float x4; })edgeInsets;
- (void)enterARSessionAtCoordinate:(struct { double x1; double x2; })arg1;
- (void)exitARSession;
- (struct shared_ptr<md::FeatureMarker> { struct FeatureMarker {} *x1; struct __shared_weak_count {} *x2; })featureMarkerAtScreenPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct VKEdgeInsets { float x1; float x2; float x3; float x4; })fullyOccludedEdgeInsets;
- (id)initWithMapEngine:(struct MapEngine { int (**x1)(); struct shared_ptr<md::TaskContext> { struct TaskContext {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct Device {} *x3; struct _retain_ptr<_MapEngineRenderQueueSource *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { int (**x_4_1_1)(); id x_4_1_2; struct _retain_objc { } x_4_1_3; struct _release_objc { } x_4_1_4; } x4; struct unique_ptr<ggl::DisplayLink, std::__1::default_delete<ggl::DisplayLink> > { struct __compressed_pair<ggl::DisplayLink *, std::__1::default_delete<ggl::DisplayLink> > { struct DisplayLink {} *x_1_2_1; } x_5_1_1; } x5; struct unique_ptr<ggl::SnapshotRunLoop, std::__1::default_delete<ggl::SnapshotRunLoop> > { struct __compressed_pair<ggl::SnapshotRunLoop *, std::__1::default_delete<ggl::SnapshotRunLoop> > { struct SnapshotRunLoop {} *x_1_2_1; } x_6_1_1; } x6; struct RunLoop {} *x7; struct unique_ptr<md::AnimationManager, std::__1::default_delete<md::AnimationManager> > { struct __compressed_pair<md::AnimationManager *, std::__1::default_delete<md::AnimationManager> > { struct AnimationManager {} *x_1_2_1; } x_8_1_1; } x8; }*)arg1 inBackground:(bool)arg2;
- (bool)isGesturing;
- (id)mapDelegate;
- (struct MapEngine { int (**x1)(); struct shared_ptr<md::TaskContext> { struct TaskContext {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct Device {} *x3; struct _retain_ptr<_MapEngineRenderQueueSource *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { int (**x_4_1_1)(); id x_4_1_2; struct _retain_objc { } x_4_1_3; struct _release_objc { } x_4_1_4; } x4; struct unique_ptr<ggl::DisplayLink, std::__1::default_delete<ggl::DisplayLink> > { struct __compressed_pair<ggl::DisplayLink *, std::__1::default_delete<ggl::DisplayLink> > { struct DisplayLink {} *x_1_2_1; } x_5_1_1; } x5; struct unique_ptr<ggl::SnapshotRunLoop, std::__1::default_delete<ggl::SnapshotRunLoop> > { struct __compressed_pair<ggl::SnapshotRunLoop *, std::__1::default_delete<ggl::SnapshotRunLoop> > { struct SnapshotRunLoop {} *x_1_2_1; } x_6_1_1; } x6; struct RunLoop {} *x7; struct unique_ptr<md::AnimationManager, std::__1::default_delete<md::AnimationManager> > { struct __compressed_pair<md::AnimationManager *, std::__1::default_delete<md::AnimationManager> > { struct AnimationManager {} *x_1_2_1; } x_8_1_1; } x8; }*)mapEngine;
- (void)puckAnimator:(id)arg1 updatedPosition:(const struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_1_1; } x1; struct Unit<RadianUnitDescription, double> { double x_2_1_1; } x2; struct Unit<MeterUnitDescription, double> { double x_3_1_1; } x3; }*)arg2 course:(const struct Unit<RadianUnitDescription, double> { double x1; }*)arg3;
- (void)puckAnimator:(id)arg1 updatedTargetPosition:(const struct Coordinate3D<Radians, double> { struct Unit<RadianUnitDescription, double> { double x_1_1_1; } x1; struct Unit<RadianUnitDescription, double> { double x_2_1_1; } x2; struct Unit<MeterUnitDescription, double> { double x_3_1_1; } x3; }*)arg2;
- (bool)restoreViewportFromInfo:(id)arg1;
- (void)runAnimation:(id)arg1;
- (void)setCameraController:(id)arg1;
- (void)setContentsScale:(double)arg1;
- (void)setEdgeInsets:(struct VKEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setFullyOccludedEdgeInsets:(struct VKEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setGesturing:(bool)arg1;
- (void)setMapDelegate:(id)arg1;
- (long long)tileSize;
- (void)transferStateFromCanvas:(id)arg1;
- (void)updateCameraForFrameResize;
- (void)updateWithTimestamp:(double)arg1;
- (id)viewportInfo;
- (bool)wantsTimerTick;

@end
