/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLToolsDepthStencilState : MTLToolsObject <MTLDepthStencilStateSPI>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (readonly) unsigned int hash;
@property (readonly) NSString *label;
@property (readonly) BOOL readsDepth;
@property (readonly) BOOL readsStencil;
@property (readonly) Class superclass;
@property (readonly) BOOL writesDepth;
@property (readonly) BOOL writesStencil;

- (void)acceptVisitor:(id)arg1;
- (void)dealloc;
- (id)device;
- (id)label;
- (BOOL)readsDepth;
- (BOOL)readsStencil;
- (BOOL)writesDepth;
- (BOOL)writesStencil;

@end