/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor, _UIRefreshControlContentView, UIScrollView, NSAttributedString;

@interface UIRefreshControl : UIControl  {
    int _style;
    _UIRefreshControlContentView *_contentView;
    UIScrollView *_scrollView;
    float _refreshControlHeight;
    float _visibleHeight;
    float _snappingHeight;
    BOOL _insetsApplied;
    BOOL _adjustingInsets;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _appliedInsets;
    int _refreshControlState;
}

@property(getter=isRefreshing,readonly) BOOL refreshing;
@property(retain) UIColor * tintColor;
@property(retain) NSAttributedString * attributedTitle;
@property(readonly) int refreshControlState;
@property(readonly) int style;
@property(readonly) float _refreshControlHeight;
@property(readonly) float _snappingHeight;
@property(readonly) float _visibleHeight;
@property(getter=_isApplyingInsets,readonly) BOOL _applyingInsets;
@property(getter=_appliedInsets,readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } appliedInsets;

+ (id)_defaultColor;
+ (Class)_contentViewClassForStyle:(int)arg1;

- (void)dealloc;
- (id)init;
- (float)_snappingHeight;
- (BOOL)isRefreshing;
- (BOOL)_canTransitionFromState:(int)arg1 toState:(int)arg2;
- (float)_visibleHeight;
- (void)_setRefreshControlState:(int)arg1 notify:(BOOL)arg2;
- (void)_setVisibleHeight:(float)arg1;
- (float)_visibleHeightForContentOffset:(struct CGPoint { float x1; float x2; })arg1 origin:(struct CGPoint { float x1; float x2; })arg2;
- (struct CGPoint { float x1; float x2; })_originForContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (int)_recomputeNewState;
- (float)revealedFraction;
- (void)_addInsetHeight:(float)arg1;
- (void)_removeInsetHeight:(float)arg1;
- (void)_resizeToFitContents;
- (void)setRefreshControlState:(int)arg1;
- (void)_updateSnappingHeight;
- (id)_attributedTitle;
- (void)_setAttributedTitle:(id)arg1;
- (id)attributedTitle;
- (id)initWithStyle:(int)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_appliedInsets;
- (void)endRefreshing;
- (void)beginRefreshing;
- (void)_addInsets;
- (void)_update;
- (void)_removeInsets;
- (int)refreshControlState;
- (BOOL)_isApplyingInsets;
- (float)_refreshControlHeight;
- (void)_setTintColor:(id)arg1;
- (id)_tintColor;
- (int)style;
- (void)setTintColor:(id)arg1;
- (id)tintColor;
- (id)_contentView;
- (void)_didScroll;
- (void)willMoveToSuperview:(id)arg1;
- (void)didMoveToSuperview;
- (void)sizeToFit;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)setAttributedTitle:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end