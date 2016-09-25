/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/vCard.framework/vCard
 */

@interface CNVCardOptions : NSObject {
    NSArray * _availableEncodings;
    BOOL  _compressPhotos;
    BOOL  _includeNotes;
    BOOL  _includePhotos;
    BOOL  _includePrivateFields;
    BOOL  _includeUserSettings;
    unsigned int  _maximumEncodingLength;
    unsigned int  _maximumImageEncodingLength;
    unsigned int  _outputVersion;
    BOOL  _prefersUncroppedPhotos;
    NSArray * _treatAsUnknownProperties;
    BOOL  _usePhotoReferencesIfAvailable;
}

@property (copy) NSArray *availableEncodings;
@property BOOL compressPhotos;
@property BOOL includeNotes;
@property BOOL includePhotos;
@property BOOL includePrivateFields;
@property BOOL includeUserSettings;
@property unsigned int maximumEncodingLength;
@property unsigned int maximumImageEncodingLength;
@property unsigned int outputVersion;
@property BOOL prefersUncroppedPhotos;
@property (copy) NSArray *treatAsUnknownProperties;
@property BOOL usePhotoReferencesIfAvailable;

+ (id)optionsFromPreferences;

- (void).cxx_destruct;
- (id)availableEncodings;
- (BOOL)compressPhotos;
- (BOOL)includeNotes;
- (BOOL)includePhotos;
- (BOOL)includePrivateFields;
- (BOOL)includeUserSettings;
- (unsigned int)maximumEncodingLength;
- (unsigned int)maximumImageEncodingLength;
- (unsigned int)outputVersion;
- (BOOL)prefersUncroppedPhotos;
- (void)setAvailableEncodings:(id)arg1;
- (void)setCompressPhotos:(BOOL)arg1;
- (void)setIncludeNotes:(BOOL)arg1;
- (void)setIncludePhotos:(BOOL)arg1;
- (void)setIncludePrivateFields:(BOOL)arg1;
- (void)setIncludeUserSettings:(BOOL)arg1;
- (void)setMaximumEncodingLength:(unsigned int)arg1;
- (void)setMaximumImageEncodingLength:(unsigned int)arg1;
- (void)setOutputVersion:(unsigned int)arg1;
- (void)setPrefersUncroppedPhotos:(BOOL)arg1;
- (void)setTreatAsUnknownProperties:(id)arg1;
- (void)setUsePhotoReferencesIfAvailable:(BOOL)arg1;
- (id)treatAsUnknownProperties;
- (BOOL)usePhotoReferencesIfAvailable;

@end