/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGGraphLocationNode : PGGraphNode <PGGraphLocationCoordinates, PGGraphLocationNaming> {
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _centroidCoordinate;
    PGGraphLocationNode * _densestCloseLocationNode;
}

@property (nonatomic) struct CLLocationCoordinate2D { double x1; double x2; } centroidCoordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) PGGraphLocationNode *densestCloseLocationNode;
@property (readonly, copy) NSString *description;
@property (readonly) NSString *fullname;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)addressNodes;
- (id)anyAddressNode;
- (id)associatedNodesForRemoval;
- (struct CLLocationCoordinate2D { double x1; double x2; })centroidCoordinate;
- (id)childLocationNodesWithLabel:(id)arg1;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (id)deepParentLocationNodes;
- (id)densestCloseLocationNode;
- (void)enumerateChildLocationNodesWithLabel:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)fullname;
- (id)keywordDescription;
- (unsigned long long)locationMask;
- (id)parentLocationNodeWithLabel:(id)arg1;
- (void)setCentroidCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;

@end
