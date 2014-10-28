/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSMutableDictionary, NSString;

@interface SKUIScreenshot : NSObject <NSCopying, SKUICacheCoding> {
    NSString *_orientation;
    NSMutableDictionary *_sizes;
    long long _uniqueIdentifier;
    NSMutableDictionary *_urls;
}

@property(readonly) NSMutableDictionary * cacheRepresentation;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) int numberOfVariants;
@property(readonly) NSString * orientationString;
@property(readonly) Class superclass;
@property(readonly) long long uniqueIdentifier;

- (void).cxx_destruct;
- (id)URLForVariant:(id)arg1;
- (void)_addURLsFromDictionary:(id)arg1 withRemoteLocalKeysMap:(id)arg2;
- (id)_firstVariant;
- (id)_initSKUIScreenshot;
- (id)cacheRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithCacheRepresentation:(id)arg1;
- (id)initWithScreenshotDictionary:(id)arg1;
- (int)numberOfVariants;
- (id)orientationString;
- (void)setArtwork:(id)arg1 forVariant:(id)arg2;
- (struct CGSize { float x1; float x2; })sizeForVariant:(id)arg1;
- (long long)uniqueIdentifier;

@end