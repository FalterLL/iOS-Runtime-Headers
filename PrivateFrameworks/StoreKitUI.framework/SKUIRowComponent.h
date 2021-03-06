/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIRowComponent : SKUIPageComponent {
    UIColor * _backgroundColor;
    NSArray * _childComponents;
    NSArray * _columnWidths;
    int  _missingItemCount;
    int  _numberOfColumns;
    BOOL  _shouldAutoFlow;
}

@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) NSArray *childComponents;
@property (nonatomic, readonly) NSArray *columnWidths;
@property (nonatomic, readonly) int numberOfColumns;
@property (nonatomic, readonly) BOOL shouldAutoFlow;
@property (nonatomic, readonly) SKUIRowViewElement *viewElement;

- (void).cxx_destruct;
- (id)_childComponentWithContext:(id)arg1;
- (BOOL)_isChildMissingItemData:(id)arg1;
- (id)_updateWithMissingItems:(id)arg1;
- (id)backgroundColor;
- (id)childComponents;
- (id)columnWidths;
- (int)componentType;
- (id)description;
- (void)enumerateMissingItemIdentifiersFromIndex:(int)arg1 usingBlock:(id /* block */)arg2;
- (id)initWithCustomPageContext:(id)arg1;
- (id)initWithViewElement:(id)arg1;
- (BOOL)isMissingItemData;
- (id)metricsElementName;
- (int)numberOfColumns;
- (BOOL)shouldAutoFlow;

@end
