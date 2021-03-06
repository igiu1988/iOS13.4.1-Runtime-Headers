/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKASMConcreteStudentFacade : NSObject <CRKASMStudentFacade> {
    <CRKClassKitFacade> * _classKitFacade;
    NSArray * _dataObservers;
    NSArray * _enrolledCourses;
    NSDictionary * _enrolledCoursesByObjectID;
    NSObject<CRKASMOrganization> * _organization;
    CRKASMConcreteUser * _student;
}

@property (nonatomic, readonly) <CRKClassKitFacade> *classKitFacade;
@property (nonatomic, readonly, copy) NSArray *dataObservers;
@property (nonatomic, readonly, copy) NSArray *enrolledCourses;
@property (nonatomic, copy) NSDictionary *enrolledCoursesByObjectID;
@property (nonatomic, retain) NSObject<CRKASMOrganization> *organization;
@property (nonatomic, retain) CRKASMConcreteUser *student;

+ (id)keyPathsForValuesAffectingEnrolledCourses;

- (void).cxx_destruct;
- (id)classKitFacade;
- (void)currentUserDidChange:(id)arg1;
- (id)dataObservers;
- (void)dealloc;
- (void)didFetchCurrentUser:(id)arg1 error:(id)arg2;
- (void)didFetchEnrolledClasses:(id)arg1 error:(id)arg2;
- (id)enrolledCourses;
- (id)enrolledCoursesByObjectID;
- (id)init;
- (id)initWithClassKitFacade:(id)arg1;
- (id)makeDataObservers;
- (id)organization;
- (void)refresh;
- (void)refreshEnrolledCourses;
- (void)refreshStudentValue;
- (void)setEnrolledCoursesByObjectID:(id)arg1;
- (void)setOrganization:(id)arg1;
- (void)setStudent:(id)arg1;
- (id)student;
- (void)updateCoursesByObjectID:(id)arg1;
- (void)updateOrganization:(id)arg1;
- (void)updateStudent:(id)arg1;

@end
