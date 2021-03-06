/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUStandardImageStackItemView : MPUImageStackItemView {
    MPUBorderConfiguration *_borderConfiguration;
    MPUBorderView *_borderView;
    float _dropShadowAlpha;
    UIColor *_dropShadowColor;
    unsigned int _dropShadowEdges;
    float _dropShadowWidth;
    BOOL _hasPendingBorderUpdates;
    BOOL _isBeingConfigured;
    float _overlayBorderAlpha;
    UIColor *_overlayBorderColor;
    float _overlayBorderWidth;
    float _overlayCenterAlpha;
    UIColor *_overlayCenterColor;
}

@property (nonatomic) float dropShadowAlpha;
@property (nonatomic, retain) UIColor *dropShadowColor;
@property (nonatomic) unsigned int dropShadowEdges;
@property (nonatomic) float dropShadowWidth;
@property (nonatomic) float overlayBorderAlpha;
@property (nonatomic, retain) UIColor *overlayBorderColor;
@property (nonatomic) float overlayBorderWidth;
@property (nonatomic) float overlayCenterAlpha;
@property (nonatomic, retain) UIColor *overlayCenterColor;

- (void).cxx_destruct;
- (void)_updateForBorderViewChange;
- (void)didCompleteItemViewConfiguration;
- (float)dropShadowAlpha;
- (id)dropShadowColor;
- (unsigned int)dropShadowEdges;
- (float)dropShadowWidth;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (float)overlayBorderAlpha;
- (id)overlayBorderColor;
- (float)overlayBorderWidth;
- (float)overlayCenterAlpha;
- (id)overlayCenterColor;
- (void)setDropShadowAlpha:(float)arg1;
- (void)setDropShadowColor:(id)arg1;
- (void)setDropShadowEdges:(unsigned int)arg1;
- (void)setDropShadowWidth:(float)arg1;
- (void)setOverlayBorderAlpha:(float)arg1;
- (void)setOverlayBorderColor:(id)arg1;
- (void)setOverlayBorderWidth:(float)arg1;
- (void)setOverlayCenterAlpha:(float)arg1;
- (void)setOverlayCenterColor:(id)arg1;
- (void)willBeginItemViewConfiguration;

@end
