/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAVRoutingController : NSObject {
    NSMutableArray * _asyncFetchingCompletionHandlers;
    BOOL  _asyncFetchingRoutes;
    MPAVRoute * _cachedPickedRoute;
    NSArray * _cachedRoutes;
    NSString * _category;
    <MPAVRoutingControllerDelegate> * _delegate;
    int  _deviceAvailabilityNotifyToken;
    BOOL  _deviceAvailabilityOverrideState;
    int  _discoveryMode;
    int  _externalScreenType;
    BOOL  _hasExternalScreenType;
    BOOL  _hasVolumeControlInfoForPickedRoute;
    MPAVRoute * _legacyCachedRoute;
    NSString * _name;
    MPAVRoute * _pendingPickedRoute;
    BOOL  _pickedRouteHasVolumeControl;
    BOOL  _scheduledSendDelegateRoutesChanged;
}

@property (nonatomic, readonly, copy) NSArray *availableRoutes;
@property (nonatomic, copy) NSString *category;
@property (nonatomic) <MPAVRoutingControllerDelegate> *delegate;
@property (nonatomic) int discoveryMode;
@property (nonatomic, readonly) int externalScreenType;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) MPAVRoute *pendingPickedRoute;
@property (nonatomic, readonly) MPAVRoute *pickedRoute;
@property (nonatomic, readonly) BOOL volumeControlIsAvailable;

- (void).cxx_destruct;
- (void)_activeAudioRouteDidChangeNotification:(id)arg1;
- (void)_externalScreenTypeDidChangeNotification:(id)arg1;
- (void)_mediaServerDiedNotification:(id)arg1;
- (id)_parseAVRouteDescriptions:(id)arg1;
- (void)_pickableRoutesDidChangeNotification:(id)arg1;
- (id)_pickedRouteInArray:(id)arg1;
- (void)_registerNotifications;
- (void)_routeStatusDidChangeNotification:(id)arg1;
- (void)_scheduleSendDelegateRoutesChanged;
- (void)_setExternalScreenType:(int)arg1;
- (void)_unregisterNotifications;
- (void)_updateCachedRoutes;
- (BOOL)airtunesRouteIsPicked;
- (id)availableRoutes;
- (id)category;
- (void)clearCachedRoutes;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (int)discoveryMode;
- (int)externalScreenType;
- (void)fetchAvailableRoutesWithCompletionHandler:(id /* block */)arg1;
- (BOOL)handsetRouteIsPicked;
- (id)init;
- (id)initWithName:(id)arg1;
- (void)logCurrentRoutes;
- (id)name;
- (id)pendingPickedRoute;
- (BOOL)pickBestDeviceRoute;
- (BOOL)pickHandsetRoute;
- (BOOL)pickRoute:(id)arg1;
- (BOOL)pickRoute:(id)arg1 withPassword:(id)arg2;
- (BOOL)pickSpeakerRoute;
- (id)pickedRoute;
- (BOOL)receiverRouteIsPicked;
- (BOOL)routeOtherThanHandsetAndSpeakerAvailable;
- (BOOL)routeOtherThanHandsetAvailable;
- (void)setCategory:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDiscoveryMode:(int)arg1;
- (void)setName:(id)arg1;
- (BOOL)speakerRouteIsPicked;
- (void)unpickAirPlayScreenRouteWithCompletion:(id /* block */)arg1;
- (id)videoRouteForRoute:(id)arg1;
- (BOOL)volumeControlIsAvailable;
- (BOOL)wirelessDisplayRouteIsPicked;
- (BOOL)wirelessDisplayRoutesAvailable;

@end
