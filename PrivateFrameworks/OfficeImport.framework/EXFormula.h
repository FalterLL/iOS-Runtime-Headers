/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */



@interface EXFormula : NSObject 
{
}

+ (id)edFormulaFromXmlFormulaElement:(struct _xmlNode { void *x1; NSInteger x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 formulaClass:(Class)arg2 state:(id)arg3;
+ (void)applyArrayedFormulasToSheet:(id)arg1 state:(id)arg2;
+ (id)readFrom:(struct _xmlNode { void *x1; NSInteger x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 formulaClass:(Class)arg2 rowNumber:(NSInteger)arg3 columnNumber:(NSInteger)arg4 edCell:(struct EDCellHeader { unsigned short x1; NSUInteger x2; }*)arg5 edRowBlocks:(id)arg6 state:(id)arg7;
+ (id)edTokensForFormulaString:(id)arg1 formulaClass:(Class)arg2 rowNumber:(NSInteger)arg3 columnNumber:(NSInteger)arg4 state:(id)arg5;
+ (Class)formulaClassFromXmlFormulaElement:(struct _xmlNode { void *x1; NSInteger x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 state:(id)arg2;
+ (void)applyArrayedFormula:(id)arg1 edReference:(id)arg2 edWorksheet:(id)arg3 state:(id)arg4;
+ (id)edFormulaFromXmlFormulaElement:(struct _xmlNode { void *x1; NSInteger x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 state:(id)arg2;
+ (void)readFrom:(struct _xmlNode { void *x1; NSInteger x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 rowNumber:(NSInteger)arg2 columnNumber:(NSInteger)arg3 edCell:(struct EDCellHeader { unsigned short x1; NSUInteger x2; }*)arg4 edRowBlocks:(id)arg5 state:(id)arg6;


@end