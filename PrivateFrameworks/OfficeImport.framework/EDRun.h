/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDRun : NSObject <EDKeyedObject> {
    unsigned int  mCharIndex;
    NSArray * mEffects;
    unsigned int  mFontIndex;
    EDResources * mResources;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)runWithCharIndex:(unsigned int)arg1 font:(id)arg2 effects:(id)arg3 resources:(id)arg4;
+ (id)runWithCharIndex:(unsigned int)arg1 font:(id)arg2 resources:(id)arg3;
+ (id)runWithCharIndex:(unsigned int)arg1 fontIndex:(unsigned int)arg2 effects:(id)arg3 resources:(id)arg4;
+ (id)runWithCharIndex:(unsigned int)arg1 fontIndex:(unsigned int)arg2 resources:(id)arg3;
+ (id)runWithResources:(id)arg1;

- (void)adjustIndex:(unsigned int)arg1;
- (unsigned int)charIndex;
- (void)dealloc;
- (id)description;
- (id)effects;
- (id)font;
- (unsigned int)fontIndex;
- (id)initWithCharIndex:(unsigned int)arg1 font:(id)arg2 effects:(id)arg3 resources:(id)arg4;
- (id)initWithCharIndex:(unsigned int)arg1 font:(id)arg2 resources:(id)arg3;
- (id)initWithCharIndex:(unsigned int)arg1 fontIndex:(unsigned int)arg2 effects:(id)arg3 resources:(id)arg4;
- (id)initWithCharIndex:(unsigned int)arg1 fontIndex:(unsigned int)arg2 resources:(id)arg3;
- (id)initWithResources:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToRun:(id)arg1;
- (int)key;
- (void)overrideFont:(id)arg1;
- (void)setCharIndex:(unsigned int)arg1;
- (void)setFont:(id)arg1;
- (void)setFontIndex:(unsigned int)arg1;

@end
