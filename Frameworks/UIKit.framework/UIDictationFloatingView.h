/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class CADisplayLink;

@interface UIDictationFloatingView : UIDictationView <UIGestureRecognizerDelegate> {
    CADisplayLink *_displayLink;
    struct CGPoint { 
        float x; 
        float y; 
    } _velocity;
    struct CGPoint { 
        float x; 
        float y; 
    } _target;
    BOOL _startedThrowAnimation;
    int _targetZone;
}


- (void)handlePanGestureFinished:(id)arg1;
- (void)startThrowAnimation;
- (BOOL)allowsHorizontalTranslation;
- (void)updateThrowAnimation:(id)arg1;
- (void)finishedThrowAnimation;
- (void)setTransformForNewCenter:(struct CGPoint { float x1; float x2; })arg1;
- (void)snapToTargetZone:(int)arg1;
- (void)setInputViewsHiddenForDictation:(BOOL)arg1;
- (void)setTargetZone:(int)arg1;
- (struct CGPoint { float x1; float x2; })middleZonePosition;
- (struct CGPoint { float x1; float x2; })transformedCenterOnscreen;
- (struct CGPoint { float x1; float x2; })transformedCenter;
- (void)handlePanDetected:(id)arg1;
- (struct CGPoint { float x1; float x2; })positionForShow;
- (void)applicationEnteredBackground;
- (void)endpointButtonPressed;
- (void)returnToKeyboard;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)show;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end