/* Generated by RuntimeBrowser.
 */

@protocol BLTCompanionServer <NSObject>

@required

- (void)handleAction:(BLTActionInfo *)arg1;
- (void)handleDidPlayLightsAndSirens:(BOOL)arg1 forBulletin:(NSString *)arg2 inPhoneSection:(NSString *)arg3 transmissionDate:(NSDate *)arg4 receptionDate:(NSDate *)arg5;
- (void)removeBulletinWithPublisherBulletinID:(NSString *)arg1 recordID:(NSString *)arg2 sectionID:(NSString *)arg3;
- (bool)shouldSuppressLightsAndSirensNow;
- (void)willSendLightsAndSirensWithPublisherBulletinID:(void *)arg1 recordID:(void *)arg2 inPhoneSection:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: NSString *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end