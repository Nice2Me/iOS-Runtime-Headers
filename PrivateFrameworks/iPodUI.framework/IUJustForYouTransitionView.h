/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class FoldingTransitionViewFaceParameters;

@interface IUJustForYouTransitionView : IUFoldingTransitionView {
    FoldingTransitionViewFaceParameters *_faceParameters[4];
}

- (unsigned int)faceCount;
- (unsigned int)frontFaceIndex;
- (void)initializeFaceParameters;
- (id)parametersForFaceWithIndex:(unsigned int)arg1;
- (void)releaseFaceParameters;
- (void)setFacesWithControllerToSnapshot:(id)arg1;

@end