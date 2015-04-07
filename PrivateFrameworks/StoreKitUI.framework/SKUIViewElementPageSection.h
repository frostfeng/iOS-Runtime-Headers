/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, SKUICollectionViewCell<SKUIViewElementView>, SKUIViewElementLayoutContext;

@interface SKUIViewElementPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate> {
    Class _cellClass;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _cellContentInset;
    SKUIViewElementLayoutContext *_cellLayoutContext;
    float _firstSectionTopInset;
    SKUICollectionViewCell<SKUIViewElementView> *_lastCell;
    BOOL _rendersWithPerspective;
    NSString *_reuseIdentifier;
    float _sectionBottomInset;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)_reloadViewElementProperties;
- (void)_requestCellLayout;
- (BOOL)_showsImageReflection;
- (BOOL)_stretchesToFitCollectionViewBounds;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (int)applyUpdateType:(int)arg1;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (id)backgroundColorForIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize { float x1; float x2; })cellSizeForIndexPath:(id)arg1;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;
- (BOOL)collectionViewShouldHighlightItemAtIndexPath:(id)arg1;
- (BOOL)collectionViewShouldSelectItemAtIndexPath:(id)arg1;
- (void)collectionViewWillApplyLayoutAttributes:(id)arg1;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;
- (float)contentInsetAdjustmentForCollectionView:(id)arg1;
- (int)defaultItemPinningStyle;
- (void)expandEditorialForLabelElement:(id)arg1 indexPath:(id)arg2;
- (void)getModalSourceViewForViewElement:(id)arg1 completionBlock:(id)arg2;
- (id)initWithPageComponent:(id)arg1;
- (int)numberOfCells;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })pinningContentInsetForItemAtIndexPath:(id)arg1;
- (struct CGSize { float x1; float x2; })preferredContentSize;
- (void)prefetchResourcesWithReason:(int)arg1;
- (void)reloadCellWithIndexPath:(id)arg1 reason:(int)arg2;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })sectionContentInset;
- (BOOL)updateCellWithIndexPath:(id)arg1 itemState:(id)arg2 animated:(BOOL)arg3;
- (void)willAppearInContext:(id)arg1;
- (void)willTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;

@end