/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

@interface _SiriCoreSQLiteColumnInfo : NSObject <SiriCoreSQLiteColumn> {
    <SiriCoreSQLiteValue> * _defaultValue;
    int  _identifier;
    BOOL  _isNotNull;
    BOOL  _isPrimaryKey;
    NSString * _name;
    NSString * _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) <SiriCoreSQLiteValue> *defaultValue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) int identifier;
@property (nonatomic, readonly) BOOL isNotNull;
@property (nonatomic, readonly) BOOL isPrimaryKey;
@property (nonatomic, readonly, copy) NSString *name;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *type;

- (void).cxx_destruct;
- (id)defaultValue;
- (int)identifier;
- (id)initWithIdentifier:(int)arg1 name:(id)arg2 type:(id)arg3 isPrimaryKey:(BOOL)arg4 isNotNull:(BOOL)arg5 defaultValue:(id)arg6;
- (BOOL)isNotNull;
- (BOOL)isPrimaryKey;
- (id)name;
- (id)type;

@end
