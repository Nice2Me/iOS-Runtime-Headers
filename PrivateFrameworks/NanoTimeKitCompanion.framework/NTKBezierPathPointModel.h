/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKBezierPathPointModel : NSObject {
    NSDictionary * _horizontalPercentageCache;
    UIBezierPath * _path;
    NSArray * _pathElements;
}

@property (nonatomic, readonly) UIBezierPath *path;

- (void).cxx_destruct;
- (id)_buildHorizontalPercentageCache;
- (struct CGPoint { float x1; float x2; })_computePointOnPathForHorizontalPercentage:(float)arg1;
- (id)initWithPath:(id)arg1;
- (id)path;
- (struct CGPoint { float x1; float x2; })pointOnPathForHorizontalPercentage:(float)arg1;

@end
