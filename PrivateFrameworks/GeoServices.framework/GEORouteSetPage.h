/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORouteSetPage : NSObject {
    NSMutableDictionary * _alternateStartRoutesLookup;
    NSMutableDictionary * _composedRoutesDict;
    NSMutableDictionary * _constructedRouteDict;
    NSMutableArray * _contingentMiddleRoutes;
    NSMutableArray * _contingentRoutes;
    NSMutableArray * _contingentStartRoutes;
    BOOL  _isNavigable;
    BOOL  _lazyLoadingEnabled;
    GEOComposedRoute * _preferredRoute;
    GEODirectionsRequest * _request;
    GEODirectionsResponse * _response;
    NSMutableDictionary * _routeConnectionTable;
    GEORouteSet * _routeSet;
    NSMutableDictionary * _routeUniquePointRangeDict;
    NSArray * _routes;
    NSArray * _routesAndContingencies;
    NSArray * _routesAndGaps;
    NSMutableDictionary * _routesDict;
    int  _selectedRouteIndex;
    <GEOTransitRoutingIncidentMessage> * _transitRoutingIncidentMessage;
}

@property (nonatomic, readonly) BOOL allTransitRoutesBlockedByIncident;
@property (nonatomic, readonly) NSDictionary *alternateStartRoutesLookup;
@property (nonatomic, readonly) BOOL isNavigable;
@property (nonatomic, readonly) GEOComposedRoute *preferredRoute;
@property (nonatomic, readonly) GEODirectionsRequest *request;
@property (nonatomic, readonly) GEODirectionsResponse *response;
@property (nonatomic) GEORouteSet *routeSet;
@property (nonatomic, readonly) NSArray *routes;
@property (nonatomic, readonly) NSArray *routesAndContingencies;
@property (nonatomic, readonly) NSArray *routesAndGaps;
@property (nonatomic, readonly) BOOL transitModePreferencesIgnored;
@property (nonatomic, readonly) <GEOTransitRoutingIncidentMessage> *transitRoutingIncidentMessage;

- (void)_attachAlternateStartRoute:(id)arg1 toRouteID:(id)arg2;
- (void)_buildAllRouteTypes:(id)arg1;
- (void)_buildRoutesAndGapsForResponse:(id)arg1;
- (id)_composedRouteForRoute:(id)arg1;
- (void)_createAlternateStartRoutesLookup;
- (void)_createIncidentsOnRoute:(id)arg1;
- (id)_lazyRoutesAtIndex:(unsigned int)arg1 partial:(BOOL)arg2;
- (void)_setupDriveWalkRoutesForResponse:(id)arg1;
- (void)_setupTransitRoutesForResponse:(id)arg1;
- (void)_stitchRoutesFromArray:(id)arg1 addToRoutes:(id)arg2 includeDepartureRoutes:(BOOL)arg3;
- (BOOL)allTransitRoutesBlockedByIncident;
- (id)alternateStartRoutesLookup;
- (void)dealloc;
- (unsigned int)indexOfFullRoute:(id)arg1;
- (id)initWithRequest:(id)arg1 response:(id)arg2 routeSet:(id)arg3 shouldLazyLoad:(BOOL)arg4 selectedRouteIndex:(int)arg5;
- (id)initWithReroute:(id)arg1 request:(id)arg2 response:(id)arg3 shouldLazyLoad:(BOOL)arg4;
- (BOOL)isNavigable;
- (id)preferredRoute;
- (id)request;
- (id)response;
- (id)routeAndFullLazyContingenciesAtIndex:(unsigned int)arg1;
- (id)routeAndPartialLazyContingenciesAtIndex:(unsigned int)arg1;
- (id)routeSet;
- (id)routes;
- (id)routesAndContingencies;
- (id)routesAndGaps;
- (void)setRouteSet:(id)arg1;
- (BOOL)transitModePreferencesIgnored;
- (id)transitRoutingIncidentMessage;

@end
