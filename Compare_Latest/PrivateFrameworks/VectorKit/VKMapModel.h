/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <VectorKit/VKModelObject.h>

#import "GEOResourceManifestTileGroupObserver-Protocol.h"
#import "VKAnnotationModelDelegate-Protocol.h"
#import "VKLabelModelDelegate-Protocol.h"
#import "VKOverlayContainerDelegate-Protocol.h"
#import "VKTileProviderClient-Protocol.h"

@class NSArray, NSMapTable, NSMutableArray, NSMutableSet, NSSet, VKAnimation, VKAnnotationMarker, VKAnnotationModel, VKBuildingFootprintMapModel, VKDebugModel, VKGridModel, VKGroundCoverMapModel, VKLabelMarker, VKLabelModel, VKMapRasterizer, VKMercatorTerrainHeightCache, VKOverlayContainerModel, VKOverlayTileSource, VKPolygonMapModel, VKPolylineOverlayPainter, VKRasterMapModel, VKRasterOverlayMapModel, VKRasterOverlayTileSource, VKRasterTrafficMapModel, VKRealisticMapModel, VKRoadMapModel, VKRoadTrafficMapModel, VKSkyModel, VKStylesheet, VKTileProvider, VKTrafficTileSource;

@interface VKMapModel : VKModelObject <VKAnnotationModelDelegate, VKOverlayContainerDelegate, VKLabelModelDelegate, GEOResourceManifestTileGroupObserver, VKTileProviderClient>
{
    unsigned int _mapPurpose;
    int _tileSize;
    VKTileProvider *_tileProviders[3];
    VKTileProvider *_rasterOverlayProvider[2];
    int _mapMode;
    int _desiredMapMode;
    BOOL _transitioningToNav;
    char _activeMapLayers[3][28];
    NSMapTable *_layerToSourceMaps[3];
    VKTrafficTileSource *_trafficSource;
    VKOverlayTileSource *_overlayTileSource;
    VKOverlayTileSource *_realisticOverlayTileSource;
    VKRasterOverlayTileSource *_rasterOverlayTileSource[2];
    VKGridModel *_gridModel;
    VKSkyModel *_skyModel;
    VKLabelModel *_labelModel;
    VKRasterMapModel *_rasterModel;
    VKRasterMapModel *_standardRasterModel;
    VKGroundCoverMapModel *_groundCoverModel;
    VKRasterTrafficMapModel *_rasterTrafficModel;
    VKPolygonMapModel *_polygonModel;
    VKRoadMapModel *_roadModel;
    VKRoadMapModel *_hybridRoadModel;
    VKRoadTrafficMapModel *_roadTrafficModel;
    VKRealisticMapModel *_realisticModel;
    VKBuildingFootprintMapModel *_buildingFootprintModel;
    VKAnnotationModel *_annotationModel;
    VKOverlayContainerModel *_overlayContainerModel;
    VKRasterOverlayMapModel *_rasterOverlayModel[2];
    VKDebugModel *_debugModel;
    NSMapTable *_tileSources;
    NSMutableArray *_drawOrder;
    NSMutableArray *_mapLayerSubmodels;
    NSMutableArray *_mapTileSubmodels;
    VKStylesheet *_activeStylesheet;
    VKStylesheet *_defaultStylesheet;
    VKStylesheet *_hybridStylesheet;
    double _zoomLevel;
    int _mapType;
    id <VKMapModelDelegate> _delegate;
    id <VKRoutePreloadSession> _routePreloadSession;
    BOOL _dynamicMapModesEnabled;
    BOOL _debugDynamicMapModesEnabled;
    BOOL _buildingsAreVisible;
    BOOL _fullyDrawn;
    BOOL _shouldNotifyFullyDrawn;
    BOOL _hasFailedTile;
    BOOL _trafficEnabled;
    BOOL _shouldRasterize;
    int _loadingCount;
    float _contentScale;
    BOOL _disableRoads;
    BOOL _disableLabels;
    BOOL _disablePolygons;
    BOOL _disableBuildingFootprints;
    BOOL _disableRasters;
    BOOL _enableBlackRoadLines;
    BOOL _disableGrid;
    struct _VGLColor _clearColor;
    VKMapRasterizer *_rasterizer;
    VKRasterMapModel *_rasterViewer;
    int _annotationMarkerStyle;
    BOOL _limitingNavCameraHeight;
    NSMutableSet *_blockingStylesheetObservers;
    float _styleTransitionProgress;
    NSMutableArray *_externalAnchors;
    VKAnimation *_modeTransitionAnimation;
    char _disableRoadClass[9];
    id <VKMapModeObserver> _mapModeObserver;
}

+ (unsigned long)numberOfRoadClasses;
+ (const char *)nameForRoadClass:(int)arg1;
@property(nonatomic) BOOL limitingNavCameraHeight; // @synthesize limitingNavCameraHeight=_limitingNavCameraHeight;
@property(nonatomic) float contentScale; // @synthesize contentScale=_contentScale;
@property(nonatomic, getter=isTrafficEnabled) BOOL trafficEnabled; // @synthesize trafficEnabled=_trafficEnabled;
@property(readonly, nonatomic) BOOL buildingsAreVisible; // @synthesize buildingsAreVisible=_buildingsAreVisible;
@property(nonatomic) BOOL dynamicMapModesEnabled; // @synthesize dynamicMapModesEnabled=_dynamicMapModesEnabled;
@property(retain, nonatomic) VKStylesheet *stylesheet; // @synthesize stylesheet=_activeStylesheet;
@property(nonatomic) id <VKMapModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) VKBuildingFootprintMapModel *buildingFootprintModel; // @synthesize buildingFootprintModel=_buildingFootprintModel;
@property(readonly, nonatomic) int currentMapMode; // @synthesize currentMapMode=_mapMode;
@property(nonatomic) int mapType; // @synthesize mapType=_mapType;
@property(nonatomic) struct _VGLColor clearColor; // @synthesize clearColor=_clearColor;
@property(nonatomic) BOOL disableGrid; // @synthesize disableGrid=_disableGrid;
@property(nonatomic) BOOL enableBlackRoadLines; // @synthesize enableBlackRoadLines=_enableBlackRoadLines;
@property(nonatomic) BOOL disableRasters; // @synthesize disableRasters=_disableRasters;
@property(nonatomic) BOOL disableBuildingFootprints; // @synthesize disableBuildingFootprints=_disableBuildingFootprints;
@property(nonatomic) BOOL disablePolygons; // @synthesize disablePolygons=_disablePolygons;
@property(nonatomic) BOOL disableLabels; // @synthesize disableLabels=_disableLabels;
@property(nonatomic) BOOL disableRoads; // @synthesize disableRoads=_disableRoads;
- (id).cxx_construct;
- (void)resetTileContainers;
- (id)labelDebugString;
- (void)debugHighlightLabelAtScreenPoint:(struct CGPoint)arg1 viewTransform:(id)arg2;
- (void)removeExternalAnchor:(id)arg1;
- (void)addExternalAnchor:(id)arg1;
- (id)externalAnchors;
@property(retain, nonatomic) id <VKRoutePreloadSession> routePreloadSession;
@property(nonatomic) id <VKRouteMatchedAnnotationPresentation> routeLineSplitAnnotation;
@property(retain, nonatomic) VKPolylineOverlayPainter *focusedLabelsPolylinePainter;
- (void)setCurrentLocationText:(id)arg1;
- (void)setRouteUserOffset:(struct PolylineCoordinate)arg1;
- (void)labelModel:(id)arg1 selectedLabelMarkerWillDisappear:(id)arg2;
- (id)labelModel:(id)arg1 mapTileForTile:(id)arg2 layer:(unsigned int)arg3;
- (void)_updateOverlayTileSource;
- (id)overlayContainer:(id)arg1 roadTileForTile:(id)arg2;
- (BOOL)overlayContainerIsInRealisticMode:(id)arg1;
- (id)overlayContainer:(id)arg1 painterForOverlay:(id)arg2;
- (void)removePersistentOverlay:(id)arg1;
- (void)addPersistentOverlay:(id)arg1;
@property(readonly, nonatomic) NSSet *persistentOverlays;
@property(readonly, nonatomic) NSArray *overlays;
- (void)removeOverlay:(id)arg1;
- (void)addOverlay:(id)arg1;
- (void)insertRasterOverlay:(id)arg1 belowOverlay:(id)arg2;
- (void)insertRasterOverlay:(id)arg1 aboveOverlay:(id)arg2;
- (void)removeRasterOverlay:(id)arg1;
- (void)addRasterOverlay:(id)arg1;
- (void)_updateTileExclusionAreas;
- (id)_rasterOverlayTileSourceForLevel:(unsigned int)arg1;
- (void)annotationModel:(id)arg1 didFinishAddingAnnotationMarkers:(id)arg2;
- (void)annotationModel:(id)arg1 didAnimateInAnnotationMarkers:(id)arg2;
- (void)annotationModel:(id)arg1 willAnimateInAnnotationMarkers:(id)arg2;
@property(readonly, nonatomic) VKAnnotationMarker *selectedAnnotationMarker;
@property(nonatomic) BOOL labelMarkerSelectionEnabled;
@property(readonly, nonatomic) VKLabelMarker *selectedLabelMarker;
- (void)deselectLabelMarker;
- (void)selectLabelMarker:(id)arg1;
- (id)labelMarkers;
- (id)labelMarkerForSelectionAtPoint:(struct CGPoint)arg1 selectableLabelsOnly:(BOOL)arg2;
- (id)annotationMarkerForSelectionAtPoint:(struct VKPoint)arg1 avoidCurrent:(BOOL)arg2 canvasSize:(struct CGSize)arg3;
- (id)annotationCoordinateTest;
- (id)annotationRectTest;
- (id)annotationMarkerDeselectionCallback;
- (void)setAnnotationMarkerDeselectionCallback:(id)arg1;
- (void)deselectAnnotationMarker:(id)arg1;
- (void)selectAnnotationMarker:(id)arg1;
- (void)removeAnnotationMarker:(id)arg1;
- (void)addAnnotationMarker:(id)arg1 allowAnimation:(BOOL)arg2;
- (id)annotationMarkers;
- (void)addSubmodel:(id)arg1;
- (unsigned int)supportedRenderPasses;
@property(readonly, nonatomic) BOOL isFullyDrawn;
- (void)didStopLoadingTilesWithError:(id)arg1;
- (void)willStartLoadingTiles;
- (void)drawScene:(id)arg1 withContext:(id)arg2;
- (void)recursiveDrawScene:(id)arg1 withContext:(id)arg2 pass:(unsigned int)arg3;
- (void)layoutScene:(id)arg1 withContext:(id)arg2;
- (void)layoutSceneIfNeeded:(id)arg1 withContext:(id)arg2;
- (void)tileProviderNeedsUpdate:(id)arg1;
- (BOOL)tileProviderMayUseNetwork:(id)arg1;
- (void)_transitionFromMode:(int)arg1 toMode:(int)arg2 animated:(BOOL)arg3;
- (void)_updateZoomLevel:(id)arg1;
- (double)maxTileHeightAtPoint:(struct VKPoint)arg1;
- (double)heightAtPoint:(struct VKPoint)arg1;
- (int)maximumZoomLevelInView:(id)arg1;
- (int)minimumZoomLevelInView:(id)arg1;
- (int)tileSize;
- (void)_forceLayout;
- (void)shouldFlushCaches:(id)arg1;
- (void)flushCaches;
- (void)clearScene;
- (void)didTapZoom;
- (void)willTapZoom;
- (BOOL)isShowingNoDataPlaceholders;
@property(retain, nonatomic) NSArray *alwaysVisibleTrafficIncidents;
- (id)attributionsForCurrentRegion;
@property(readonly, nonatomic) NSArray *visibleTileSets;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (id)initShouldRasterize:(BOOL)arg1 mapPurpose:(unsigned int)arg2 contentScale:(float)arg3;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)createTrafficTileSourceIfNecessary;
- (id)navTileSource;
- (void)_reloadStylesheet;
- (void)performStylesheetDoneChanging;
- (void)performStylesheetDidChange;
- (void)performStylesheetWillChange;
- (void)_setStylesheetFromMapType:(int)arg1;
- (void)_tryTransitionAndPreloadIfNecessary:(id)arg1;
- (void)_mapConfigurationDidChange;
- (void)_updateRegularTileProviderMode;
- (void)didEndNavigation;
- (void)didBeginTransitionToNavigation;
- (void)preloadNavigationSceneResourcesWithContext:(id)arg1;
@property(nonatomic) int shieldIdiom;
@property(nonatomic) int navigationShieldSize;
@property(nonatomic) int shieldSize;
- (id)detailedDescription;
- (void)_setStyleTransitionProgress:(float)arg1 targetStyle:(int)arg2 step:(int)arg3;
- (float)_styleTransitionProgress;
- (void)stylesheetAnimationDidEnd:(BOOL)arg1;
- (void)stylesheetAnimationDidProgress:(float)arg1;
- (void)stylesheetAnimationWillStartFromStyle:(int)arg1 toStyle:(int)arg2;
- (void)requestStylesheetAnimation:(id)arg1 targetMapDisplayStyle:(int)arg2 setupHandler:(id)arg3;
- (void)forceMapType:(int)arg1;
- (void)configureTileSources;
- (void)_deactivateModel:(id)arg1;
- (void)_activateModel:(id)arg1;
- (id)sourceForLayer:(unsigned int)arg1 mode:(int)arg2;
- (id)createSourceForLayer:(unsigned int)arg1 tileSet:(id)arg2 mode:(int)arg3;
- (int)tileStyleForMapLayer:(unsigned int)arg1;
@property(nonatomic) int labelScaleFactor;
@property(nonatomic) BOOL localizeLabels;
- (float)ppi;
- (void)setDesiredMapMode:(int)arg1 immediate:(BOOL)arg2;
@property(nonatomic) BOOL disableRealisticLand;
@property(nonatomic) BOOL disableRealisticRoads;
@property(readonly, nonatomic) VKMercatorTerrainHeightCache *terrainHeightCache;
- (BOOL)isRoadClassDisabled:(int)arg1;
- (void)disableRoadClass:(BOOL)arg1 withRoadClass:(int)arg2;
@property(readonly, nonatomic) VKTileProvider *tileProvider;
- (void)foreachActiveLayer:(id)arg1;
@property(nonatomic) unsigned int neighborMode;
@property(nonatomic) BOOL shouldLoadFallbackTiles;

@end

