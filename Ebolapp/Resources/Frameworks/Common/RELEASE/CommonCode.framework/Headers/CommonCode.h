#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class CommonCodeRiskMatchTableAdapter, CommonCodeDatabaseDriverFactory, CommonCodeMapRegionCaseCacheTable, CommonCodeMapRegionCaseLegendTable, CommonCodeMapRegionCaseTable, CommonCodeMapRegionGeoRingTable, CommonCodeMapRegionTable, CommonCodeMapStatesCaseTable, CommonCodeRiskMatchNotificationTable, CommonCodeVisit, CommonCodeRiskMatchTable, CommonCodeStaticPagesCacheTable, CommonCodeUserLocationTable, CommonCodeVisitTable, CommonCodeRuntimeQuery<__covariant RowType>, CommonCodeDateUtilsTZone, CommonCodeDateUtilsDayInterval, CommonCodeKotlinEnum<E>, CommonCodeKotlinArray<T>, CommonCodeMapRegionBox, CommonCodePosition, CommonCodeDatabaseWrapper, CommonCodeStaticPages, CommonCodeKotlinUnit, CommonCodeEndpoints, CommonCodeAnalyseRiskMatchUseCaseImpl, CommonCodeCreateRiskMatchNotificationUseCaseImpl, CommonCodeRiskMatch, CommonCodeRiskMatchType, CommonCodeNotNotifiedRiskMatch, CommonCodeMapRegionInfo, CommonCodeDistrictRegion, CommonCodeStateRegion, CommonCodeMapRegion, CommonCodeMapRegionWithGeometry, CommonCodeKotlinThrowable, CommonCodeUserLocation, CommonCodeMapRegionCase, CommonCodeMapRegionCaseCacheKey, CommonCodeMapRegionLegendItem, CommonCodeMapRegionLegend, CommonCodeMapStateCase, CommonCodeKotlinPair<__covariant A, __covariant B>, CommonCodeKtor_client_coreHttpClient, CommonCodeNetworkApiParameterNames, CommonCodeNetworkApiParameter, CommonCodeLanguage, CommonCodeRuntimeTransacterTransaction, CommonCodeKotlinException, CommonCodeKotlinRuntimeException, CommonCodeKotlinIllegalStateException, CommonCodeKotlinx_coroutines_coreCancellationException, CommonCodeKtor_client_coreHttpClientEngineConfig, CommonCodeKtor_client_coreHttpClientConfig<T>, CommonCodeKtor_client_coreHttpRequestBuilder, CommonCodeKtor_client_coreHttpClientCall, CommonCodeKotlinx_coroutines_coreCoroutineDispatcher, CommonCodeKtor_client_coreHttpReceivePipeline, CommonCodeKtor_client_coreHttpRequestPipeline, CommonCodeKtor_client_coreHttpResponsePipeline, CommonCodeKtor_client_coreHttpSendPipeline, CommonCodeKotlinByteArray, CommonCodeKotlinx_serialization_coreSerializersModule, CommonCodeKotlinx_serialization_coreSerialKind, CommonCodeKotlinNothing, CommonCodeKtor_client_coreHttpRequestData, CommonCodeKtor_client_coreHttpResponseData, CommonCodeKtor_client_coreProxyConfig, CommonCodeKtor_httpHeadersBuilder, CommonCodeKtor_httpURLBuilder, CommonCodeKtor_httpHttpMethod, CommonCodeKtor_client_coreTypeInfo, CommonCodeKtor_client_coreHttpResponse, CommonCodeKtor_utilsAttributeKey<T>, CommonCodeKotlinAbstractCoroutineContextElement, CommonCodeKtor_utilsPipelinePhase, CommonCodeKtor_utilsPipeline<TSubject, TContext>, CommonCodeKtor_client_coreHttpResponseContainer, CommonCodeKotlinByteIterator, CommonCodeKotlinx_coroutines_coreAtomicDesc, CommonCodeKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp, CommonCodeKtor_httpUrl, CommonCodeKtor_httpOutgoingContent, CommonCodeKtor_httpHttpStatusCode, CommonCodeKtor_utilsGMTDate, CommonCodeKtor_httpHttpProtocolVersion, CommonCodeKtor_utilsStringValuesBuilder, CommonCodeKtor_httpURLProtocol, CommonCodeKtor_httpParametersBuilder, CommonCodeKtor_ioMemory, CommonCodeKtor_ioIoBuffer, CommonCodeKtor_ioByteReadPacket, CommonCodeKtor_ioByteOrder, CommonCodeKotlinx_coroutines_coreAtomicOp<__contravariant T>, CommonCodeKotlinx_coroutines_coreOpDescriptor, CommonCodeKotlinx_coroutines_coreLockFreeLinkedListNode, CommonCodeKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc, CommonCodeKtor_httpContentType, CommonCodeKtor_utilsWeekDay, CommonCodeKtor_utilsMonth, CommonCodeKtor_ioBuffer, CommonCodeKtor_ioChunkBuffer, CommonCodeKotlinCharArray, CommonCodeKtor_ioAbstractInput, CommonCodeKtor_ioByteReadPacketBase, CommonCodeKtor_ioByteReadPacketPlatformBase, CommonCodeKotlinKTypeProjection, CommonCodeKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<T>, CommonCodeKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<T>, CommonCodeKtor_httpHeaderValueParam, CommonCodeKtor_httpHeaderValueWithParameters, CommonCodeKotlinCharIterator, CommonCodeKotlinKVariance;

@protocol CommonCodeMapRegionCaseCacheTableQueries, CommonCodeMapRegionCaseLegendTableQueries, CommonCodeMapRegionCaseTableQueries, CommonCodeMapRegionGeoRingTableQueries, CommonCodeMapRegionTableQueries, CommonCodeMapStatesCaseTableQueries, CommonCodeRiskMatchNotificationTableQueries, CommonCodeRiskMatchTableQueries, CommonCodeStaticPagesCacheTableQueries, CommonCodeUserLocationTableQueries, CommonCodeVisitTableQueries, CommonCodeRuntimeTransactionWithoutReturn, CommonCodeRuntimeTransactionWithReturn, CommonCodeRuntimeTransacter, CommonCodeAppDatabase, CommonCodeRuntimeSqlDriver, CommonCodeRuntimeSqlDriverSchema, CommonCodeRuntimeColumnAdapter, CommonCodeKotlinComparable, CommonCodeGetStaticPageUseCase, CommonCodeNetworkParametersSendStrategy, CommonCodeStaticPagesNetworkApi, CommonCodeStaticPagesDbApi, CommonCodeCleanRiskMatchesCacheUseCase, CommonCodeGetNotNotifiedRiskMatchesUseCase, CommonCodeGetNotRiskyVisitsForDayUseCase, CommonCodeGetRiskMatchesForDayUseCase, CommonCodeGetRiskMatchesForPeriodUseCase, CommonCodeMarkAsNotifiedRiskMatchesUseCase, CommonCodeObserveNotNotifiedRiskMatchesUseCase, CommonCodeObserveRiskDatesOffsetsFromCurrentDateForPeriod, CommonCodeObserveRiskMatchForPeriodUseCase, CommonCodeObserveRiskMatchesForTodayUseCase, CommonCodePerformRiskMatchingForDayUseCase, CommonCodeKotlinx_coroutines_coreFlow, CommonCodeAnalyseRiskMatchUseCase, CommonCodeRiskMatchDbApi, CommonCodeVisitsDbApi, CommonCodeCreateRiskMatchNotificationUseCase, CommonCodeKotlinx_coroutines_coreJob, CommonCodeGetVisitsBetweenTimestampsUseCase, CommonCodeGetMapRegionIdByPositionUseCase, CommonCodeGetMapRegionInfoUseCase, CommonCodeCreateMapRegionsUseCase, CommonCodeJsonFileReader, CommonCodeGetMapRegionsUseCase, CommonCodeGetMapRegionsWithGeometryUseCase, CommonCodeKotlinx_serialization_coreKSerializer, CommonCodeGetLastUserLocationUseCase, CommonCodeGetUserLocationsForDayByTimestampUseCase, CommonCodeGetVisitsForDayUseCase, CommonCodeObserveVisitsUseCase, CommonCodeSaveUserLocationsUseCase, CommonCodeUpdateVisitsUseCase, CommonCodeDebugRecalculateVisitsUseCase, CommonCodeUserLocationsDbApi, CommonCodeGetMapRegionCasesLegendUseCase, CommonCodeGetMapRegionCasesByTimestampUseCase, CommonCodeGetMapStatesCasesByTimestampUseCase, CommonCodeSaveMapRegionsCasesByTimestampSecUseCase, CommonCodeCasesNetworkApi, CommonCodeCasesDbApi, CommonCodeGetMapRegionCasesDbgInfoUseCase, CommonCodeGetMapRegionLegendDbgInfoUseCase, CommonCodeGetMapRegionsDbgInfoUseCase, CommonCodeGetRiskMatchNotificationDbgInfoUseCase, CommonCodeGetRiskMatchDbgInfoUseCase, CommonCodeGetMapStatesCasesDbgInfoUseCase, CommonCodeGetUserLocationsDbgInfoUseCase, CommonCodeGetVisitsDbgInfoUseCase, CommonCodeRuntimeTransactionCallbacks, CommonCodeRuntimeSqlPreparedStatement, CommonCodeRuntimeSqlCursor, CommonCodeRuntimeCloseable, CommonCodeRuntimeQueryListener, CommonCodeKotlinIterator, CommonCodeKotlinx_coroutines_coreFlowCollector, CommonCodeKotlinx_coroutines_coreChildHandle, CommonCodeKotlinx_coroutines_coreChildJob, CommonCodeKotlinx_coroutines_coreDisposableHandle, CommonCodeKotlinSequence, CommonCodeKotlinx_coroutines_coreSelectClause0, CommonCodeKotlinCoroutineContextKey, CommonCodeKotlinCoroutineContextElement, CommonCodeKotlinCoroutineContext, CommonCodeKotlinx_serialization_coreEncoder, CommonCodeKotlinx_serialization_coreSerialDescriptor, CommonCodeKotlinx_serialization_coreSerializationStrategy, CommonCodeKotlinx_serialization_coreDecoder, CommonCodeKotlinx_serialization_coreDeserializationStrategy, CommonCodeKotlinx_coroutines_coreCoroutineScope, CommonCodeKtor_ioCloseable, CommonCodeKtor_client_coreHttpClientEngine, CommonCodeKtor_client_coreHttpClientEngineCapability, CommonCodeKtor_utilsAttributes, CommonCodeKotlinx_coroutines_coreParentJob, CommonCodeKotlinx_coroutines_coreSelectInstance, CommonCodeKotlinSuspendFunction0, CommonCodeKotlinx_serialization_coreCompositeEncoder, CommonCodeKotlinAnnotation, CommonCodeKotlinx_serialization_coreCompositeDecoder, CommonCodeKtor_client_coreHttpClientFeature, CommonCodeKtor_httpHttpMessageBuilder, CommonCodeKtor_ioByteReadChannel, CommonCodeKtor_client_coreHttpRequest, CommonCodeKotlinContinuation, CommonCodeKotlinContinuationInterceptor, CommonCodeKotlinx_coroutines_coreRunnable, CommonCodeKotlinSuspendFunction2, CommonCodeKotlinFunction, CommonCodeKotlinx_serialization_coreSerializersModuleCollector, CommonCodeKotlinKClass, CommonCodeKtor_httpHeaders, CommonCodeKtor_utilsStringValues, CommonCodeKotlinMapEntry, CommonCodeKtor_ioReadSession, CommonCodeKotlinSuspendFunction1, CommonCodeKotlinAppendable, CommonCodeKotlinKType, CommonCodeKtor_httpHttpMessage, CommonCodeKotlinKDeclarationContainer, CommonCodeKotlinKAnnotatedElement, CommonCodeKotlinKClassifier, CommonCodeKtor_httpParameters, CommonCodeKtor_ioObjectPool, CommonCodeKtor_ioInput, CommonCodeKtor_ioOutput;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

__attribute__((swift_name("KotlinBase")))
@interface CommonCodeBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface CommonCodeBase (CommonCodeBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface CommonCodeMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface CommonCodeMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorCommonCodeKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface CommonCodeNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface CommonCodeByte : CommonCodeNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface CommonCodeUByte : CommonCodeNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface CommonCodeShort : CommonCodeNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface CommonCodeUShort : CommonCodeNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface CommonCodeInt : CommonCodeNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface CommonCodeUInt : CommonCodeNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface CommonCodeLong : CommonCodeNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface CommonCodeULong : CommonCodeNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface CommonCodeFloat : CommonCodeNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface CommonCodeDouble : CommonCodeNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface CommonCodeBoolean : CommonCodeNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((swift_name("RuntimeTransacter")))
@protocol CommonCodeRuntimeTransacter
@required
- (void)transactionNoEnclosing:(BOOL)noEnclosing body:(void (^)(id<CommonCodeRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(noEnclosing:body:)")));
- (id _Nullable)transactionWithResultNoEnclosing:(BOOL)noEnclosing bodyWithReturn:(id _Nullable (^)(id<CommonCodeRuntimeTransactionWithReturn>))bodyWithReturn __attribute__((swift_name("transactionWithResult(noEnclosing:bodyWithReturn:)")));
@end;

__attribute__((swift_name("AppDatabase")))
@protocol CommonCodeAppDatabase <CommonCodeRuntimeTransacter>
@required
@property (readonly) id<CommonCodeMapRegionCaseCacheTableQueries> mapRegionCaseCacheTableQueries __attribute__((swift_name("mapRegionCaseCacheTableQueries")));
@property (readonly) id<CommonCodeMapRegionCaseLegendTableQueries> mapRegionCaseLegendTableQueries __attribute__((swift_name("mapRegionCaseLegendTableQueries")));
@property (readonly) id<CommonCodeMapRegionCaseTableQueries> mapRegionCaseTableQueries __attribute__((swift_name("mapRegionCaseTableQueries")));
@property (readonly) id<CommonCodeMapRegionGeoRingTableQueries> mapRegionGeoRingTableQueries __attribute__((swift_name("mapRegionGeoRingTableQueries")));
@property (readonly) id<CommonCodeMapRegionTableQueries> mapRegionTableQueries __attribute__((swift_name("mapRegionTableQueries")));
@property (readonly) id<CommonCodeMapStatesCaseTableQueries> mapStatesCaseTableQueries __attribute__((swift_name("mapStatesCaseTableQueries")));
@property (readonly) id<CommonCodeRiskMatchNotificationTableQueries> riskMatchNotificationTableQueries __attribute__((swift_name("riskMatchNotificationTableQueries")));
@property (readonly) id<CommonCodeRiskMatchTableQueries> riskMatchTableQueries __attribute__((swift_name("riskMatchTableQueries")));
@property (readonly) id<CommonCodeStaticPagesCacheTableQueries> staticPagesCacheTableQueries __attribute__((swift_name("staticPagesCacheTableQueries")));
@property (readonly) id<CommonCodeUserLocationTableQueries> userLocationTableQueries __attribute__((swift_name("userLocationTableQueries")));
@property (readonly) id<CommonCodeVisitTableQueries> visitTableQueries __attribute__((swift_name("visitTableQueries")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppDatabaseCompanion")))
@interface CommonCodeAppDatabaseCompanion : CommonCodeBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<CommonCodeAppDatabase>)invokeDriver:(id<CommonCodeRuntimeSqlDriver>)driver RiskMatchTableAdapter:(CommonCodeRiskMatchTableAdapter *)RiskMatchTableAdapter __attribute__((swift_name("invoke(driver:RiskMatchTableAdapter:)")));
@property (readonly) id<CommonCodeRuntimeSqlDriverSchema> Schema __attribute__((swift_name("Schema")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DatabaseDriverFactory")))
@interface CommonCodeDatabaseDriverFactory : CommonCodeBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<CommonCodeRuntimeSqlDriver>)createDriver __attribute__((swift_name("createDriver()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DatabaseWrapper")))
@interface CommonCodeDatabaseWrapper : CommonCodeBase
- (instancetype)initWithDatabaseDriverFactory:(CommonCodeDatabaseDriverFactory *)databaseDriverFactory __attribute__((swift_name("init(databaseDriverFactory:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<CommonCodeAppDatabase> database __attribute__((swift_name("database")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MapRegionCaseCacheTable")))
@interface CommonCodeMapRegionCaseCacheTable : CommonCodeBase
- (instancetype)initWithTimestsampSec:(int64_t)timestsampSec eEtag:(NSString *)eEtag __attribute__((swift_name("init(timestsampSec:eEtag:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (CommonCodeMapRegionCaseCacheTable *)doCopyTimestsampSec:(int64_t)timestsampSec eEtag:(NSString *)eEtag __attribute__((swift_name("doCopy(timestsampSec:eEtag:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *eEtag __attribute__((swift_name("eEtag")));
@property (readonly) int64_t timestsampSec __attribute__((swift_name("timestsampSec")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MapRegionCaseLegendTable")))
@interface CommonCodeMapRegionCaseLegendTable : CommonCodeBase
- (instancetype)initWithName:(NSString *)name itemId:(int32_t)itemId severity:(int32_t)severity info:(NSString * _Nullable)info color:(NSString * _Nullable)color isRisky:(CommonCodeLong * _Nullable)isRisky timestampSec:(CommonCodeLong * _Nullable)timestampSec __attribute__((swift_name("init(name:itemId:severity:info:color:isRisky:timestampSec:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (CommonCodeLong * _Nullable)component6 __attribute__((swift_name("component6()")));
- (CommonCodeLong * _Nullable)component7 __attribute__((swift_name("component7()")));
- (CommonCodeMapRegionCaseLegendTable *)doCopyName:(NSString *)name itemId:(int32_t)itemId severity:(int32_t)severity info:(NSString * _Nullable)info color:(NSString * _Nullable)color isRisky:(CommonCodeLong * _Nullable)isRisky timestampSec:(CommonCodeLong * _Nullable)timestampSec __attribute__((swift_name("doCopy(name:itemId:severity:info:color:isRisky:timestampSec:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable color __attribute__((swift_name("color")));
@property (readonly) NSString * _Nullable info __attribute__((swift_name("info")));
@property (readonly) CommonCodeLong * _Nullable isRisky __attribute__((swift_name("isRisky")));
@property (readonly) int32_t itemId __attribute__((swift_name("itemId")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t severity __attribute__((swift_name("severity")));
@property (readonly) CommonCodeLong * _Nullable timestampSec __attribute__((swift_name("timestampSec")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MapRegionCaseTable")))
@interface CommonCodeMapRegionCaseTable : CommonCodeBase
- (instancetype)initWithAreaId:(NSString *)areaId severity:(int32_t)severity numberOfCases:(float)numberOfCases timestsampSec:(int64_t)timestsampSec stateId:(CommonCodeLong * _Nullable)stateId informationUrl:(NSString * _Nullable)informationUrl __attribute__((swift_name("init(areaId:severity:numberOfCases:timestsampSec:stateId:informationUrl:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (float)component3 __attribute__((swift_name("component3()")));
- (int64_t)component4 __attribute__((swift_name("component4()")));
- (CommonCodeLong * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (CommonCodeMapRegionCaseTable *)doCopyAreaId:(NSString *)areaId severity:(int32_t)severity numberOfCases:(float)numberOfCases timestsampSec:(int64_t)timestsampSec stateId:(CommonCodeLong * _Nullable)stateId informationUrl:(NSString * _Nullable)informationUrl __attribute__((swift_name("doCopy(areaId:severity:numberOfCases:timestsampSec:stateId:informationUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *areaId __attribute__((swift_name("areaId")));
@property (readonly) NSString * _Nullable informationUrl __attribute__((swift_name("informationUrl")));
@property (readonly) float numberOfCases __attribute__((swift_name("numberOfCases")));
@property (readonly) int32_t severity __attribute__((swift_name("severity")));
@property (readonly) CommonCodeLong * _Nullable stateId __attribute__((swift_name("stateId")));
@property (readonly) int64_t timestsampSec __attribute__((swift_name("timestsampSec")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MapRegionGeoRingTable")))
@interface CommonCodeMapRegionGeoRingTable : CommonCodeBase
- (instancetype)initWithRegionId:(NSString *)regionId ringIndex:(int64_t)ringIndex lat:(double)lat lon:(double)lon __attribute__((swift_name("init(regionId:ringIndex:lat:lon:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int64_t)component2 __attribute__((swift_name("component2()")));
- (double)component3 __attribute__((swift_name("component3()")));
- (double)component4 __attribute__((swift_name("component4()")));
- (CommonCodeMapRegionGeoRingTable *)doCopyRegionId:(NSString *)regionId ringIndex:(int64_t)ringIndex lat:(double)lat lon:(double)lon __attribute__((swift_name("doCopy(regionId:ringIndex:lat:lon:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double lat __attribute__((swift_name("lat")));
@property (readonly) double lon __attribute__((swift_name("lon")));
@property (readonly) NSString *regionId __attribute__((swift_name("regionId")));
@property (readonly) int64_t ringIndex __attribute__((swift_name("ringIndex")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MapRegionTable")))
@interface CommonCodeMapRegionTable : CommonCodeBase
- (instancetype)initWithId:(NSString *)id name:(NSString *)name parentId:(NSString * _Nullable)parentId topLeftLat:(CommonCodeDouble * _Nullable)topLeftLat topLeftLon:(CommonCodeDouble * _Nullable)topLeftLon bottomRightLat:(CommonCodeDouble * _Nullable)bottomRightLat bottomRightLon:(CommonCodeDouble * _Nullable)bottomRightLon __attribute__((swift_name("init(id:name:parentId:topLeftLat:topLeftLon:bottomRightLat:bottomRightLon:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (CommonCodeDouble * _Nullable)component4 __attribute__((swift_name("component4()")));
- (CommonCodeDouble * _Nullable)component5 __attribute__((swift_name("component5()")));
- (CommonCodeDouble * _Nullable)component6 __attribute__((swift_name("component6()")));
- (CommonCodeDouble * _Nullable)component7 __attribute__((swift_name("component7()")));
- (CommonCodeMapRegionTable *)doCopyId:(NSString *)id name:(NSString *)name parentId:(NSString * _Nullable)parentId topLeftLat:(CommonCodeDouble * _Nullable)topLeftLat topLeftLon:(CommonCodeDouble * _Nullable)topLeftLon bottomRightLat:(CommonCodeDouble * _Nullable)bottomRightLat bottomRightLon:(CommonCodeDouble * _Nullable)bottomRightLon __attribute__((swift_name("doCopy(id:name:parentId:topLeftLat:topLeftLon:bottomRightLat:bottomRightLon:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CommonCodeDouble * _Nullable bottomRightLat __attribute__((swift_name("bottomRightLat")));
@property (readonly) CommonCodeDouble * _Nullable bottomRightLon __attribute__((swift_name("bottomRightLon")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable parentId __attribute__((swift_name("parentId")));
@property (readonly) CommonCodeDouble * _Nullable topLeftLat __attribute__((swift_name("topLeftLat")));
@property (readonly) CommonCodeDouble * _Nullable topLeftLon __attribute__((swift_name("topLeftLon")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MapStatesCaseTable")))
@interface CommonCodeMapStatesCaseTable : CommonCodeBase
- (instancetype)initWithStateId:(int64_t)stateId severity:(int32_t)severity numberOfCases:(float)numberOfCases timestsampSec:(int64_t)timestsampSec informationUrl:(NSString * _Nullable)informationUrl __attribute__((swift_name("init(stateId:severity:numberOfCases:timestsampSec:informationUrl:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (float)component3 __attribute__((swift_name("component3()")));
- (int64_t)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (CommonCodeMapStatesCaseTable *)doCopyStateId:(int64_t)stateId severity:(int32_t)severity numberOfCases:(float)numberOfCases timestsampSec:(int64_t)timestsampSec informationUrl:(NSString * _Nullable)informationUrl __attribute__((swift_name("doCopy(stateId:severity:numberOfCases:timestsampSec:informationUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable informationUrl __attribute__((swift_name("informationUrl")));
@property (readonly) float numberOfCases __attribute__((swift_name("numberOfCases")));
@property (readonly) int32_t severity __attribute__((swift_name("severity")));
@property (readonly) int64_t stateId __attribute__((swift_name("stateId")));
@property (readonly) int64_t timestsampSec __attribute__((swift_name("timestsampSec")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RiskMatchNotificationTable")))
@interface CommonCodeRiskMatchNotificationTable : CommonCodeBase
- (instancetype)initWithRegionId:(NSString *)regionId visitId:(int64_t)visitId dayStartTimestampSec:(int64_t)dayStartTimestampSec handled:(int64_t)handled __attribute__((swift_name("init(regionId:visitId:dayStartTimestampSec:handled:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int64_t)component2 __attribute__((swift_name("component2()")));
- (int64_t)component3 __attribute__((swift_name("component3()")));
- (int64_t)component4 __attribute__((swift_name("component4()")));
- (CommonCodeRiskMatchNotificationTable *)doCopyRegionId:(NSString *)regionId visitId:(int64_t)visitId dayStartTimestampSec:(int64_t)dayStartTimestampSec handled:(int64_t)handled __attribute__((swift_name("doCopy(regionId:visitId:dayStartTimestampSec:handled:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t dayStartTimestampSec __attribute__((swift_name("dayStartTimestampSec")));
@property (readonly) int64_t handled __attribute__((swift_name("handled")));
@property (readonly) NSString *regionId __attribute__((swift_name("regionId")));
@property (readonly) int64_t visitId __attribute__((swift_name("visitId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RiskMatchTable")))
@interface CommonCodeRiskMatchTable : CommonCodeBase
- (instancetype)initWithRegionId:(NSString *)regionId visitId:(int64_t)visitId dayStartTimestampSec:(int64_t)dayStartTimestampSec visit:(CommonCodeVisit *)visit severity:(int64_t)severity __attribute__((swift_name("init(regionId:visitId:dayStartTimestampSec:visit:severity:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int64_t)component2 __attribute__((swift_name("component2()")));
- (int64_t)component3 __attribute__((swift_name("component3()")));
- (CommonCodeVisit *)component4 __attribute__((swift_name("component4()")));
- (int64_t)component5 __attribute__((swift_name("component5()")));
- (CommonCodeRiskMatchTable *)doCopyRegionId:(NSString *)regionId visitId:(int64_t)visitId dayStartTimestampSec:(int64_t)dayStartTimestampSec visit:(CommonCodeVisit *)visit severity:(int64_t)severity __attribute__((swift_name("doCopy(regionId:visitId:dayStartTimestampSec:visit:severity:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t dayStartTimestampSec __attribute__((swift_name("dayStartTimestampSec")));
@property (readonly) NSString *regionId __attribute__((swift_name("regionId")));
@property (readonly) int64_t severity __attribute__((swift_name("severity")));
@property (readonly) CommonCodeVisit *visit __attribute__((swift_name("visit")));
@property (readonly) int64_t visitId __attribute__((swift_name("visitId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RiskMatchTable.Adapter")))
@interface CommonCodeRiskMatchTableAdapter : CommonCodeBase
- (instancetype)initWithVisitAdapter:(id<CommonCodeRuntimeColumnAdapter>)visitAdapter __attribute__((swift_name("init(visitAdapter:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<CommonCodeRuntimeColumnAdapter> visitAdapter __attribute__((swift_name("visitAdapter")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StaticPagesCacheTable")))
@interface CommonCodeStaticPagesCacheTable : CommonCodeBase
- (instancetype)initWithUrl:(NSString *)url content:(NSString *)content timestampSec:(int64_t)timestampSec __attribute__((swift_name("init(url:content:timestampSec:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (int64_t)component3 __attribute__((swift_name("component3()")));
- (CommonCodeStaticPagesCacheTable *)doCopyUrl:(NSString *)url content:(NSString *)content timestampSec:(int64_t)timestampSec __attribute__((swift_name("doCopy(url:content:timestampSec:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) int64_t timestampSec __attribute__((swift_name("timestampSec")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserLocationTable")))
@interface CommonCodeUserLocationTable : CommonCodeBase
- (instancetype)initWithLat:(double)lat lon:(double)lon timestampSec:(int64_t)timestampSec __attribute__((swift_name("init(lat:lon:timestampSec:)"))) __attribute__((objc_designated_initializer));
- (double)component1 __attribute__((swift_name("component1()")));
- (double)component2 __attribute__((swift_name("component2()")));
- (int64_t)component3 __attribute__((swift_name("component3()")));
- (CommonCodeUserLocationTable *)doCopyLat:(double)lat lon:(double)lon timestampSec:(int64_t)timestampSec __attribute__((swift_name("doCopy(lat:lon:timestampSec:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double lat __attribute__((swift_name("lat")));
@property (readonly) double lon __attribute__((swift_name("lon")));
@property (readonly) int64_t timestampSec __attribute__((swift_name("timestampSec")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VisitTable")))
@interface CommonCodeVisitTable : CommonCodeBase
- (instancetype)initWithId:(int64_t)id lat:(double)lat lon:(double)lon startTimestampSec:(int64_t)startTimestampSec endTimestampSec:(int64_t)endTimestampSec __attribute__((swift_name("init(id:lat:lon:startTimestampSec:endTimestampSec:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (double)component2 __attribute__((swift_name("component2()")));
- (double)component3 __attribute__((swift_name("component3()")));
- (int64_t)component4 __attribute__((swift_name("component4()")));
- (int64_t)component5 __attribute__((swift_name("component5()")));
- (CommonCodeVisitTable *)doCopyId:(int64_t)id lat:(double)lat lon:(double)lon startTimestampSec:(int64_t)startTimestampSec endTimestampSec:(int64_t)endTimestampSec __attribute__((swift_name("doCopy(id:lat:lon:startTimestampSec:endTimestampSec:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t endTimestampSec __attribute__((swift_name("endTimestampSec")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) double lat __attribute__((swift_name("lat")));
@property (readonly) double lon __attribute__((swift_name("lon")));
@property (readonly) int64_t startTimestampSec __attribute__((swift_name("startTimestampSec")));
@end;

__attribute__((swift_name("MapRegionCaseCacheTableQueries")))
@protocol CommonCodeMapRegionCaseCacheTableQueries <CommonCodeRuntimeTransacter>
@required
- (void)deleteAll __attribute__((swift_name("deleteAll()")));
- (void)deleteAllBeforeTimestampTimestsampSec:(int64_t)timestsampSec __attribute__((swift_name("deleteAllBeforeTimestamp(timestsampSec:)")));
- (CommonCodeRuntimeQuery<CommonCodeMapRegionCaseCacheTable *> *)selectAll __attribute__((swift_name("selectAll()")));
- (CommonCodeRuntimeQuery<id> *)selectAllMapper:(id (^)(CommonCodeLong *, NSString *))mapper __attribute__((swift_name("selectAll(mapper:)")));
- (CommonCodeRuntimeQuery<CommonCodeMapRegionCaseCacheTable *> *)selectTagTimestampSec:(int64_t)timestampSec __attribute__((swift_name("selectTag(timestampSec:)")));
- (CommonCodeRuntimeQuery<id> *)selectTagTimestampSec:(int64_t)timestampSec mapper:(id (^)(CommonCodeLong *, NSString *))mapper __attribute__((swift_name("selectTag(timestampSec:mapper:)")));
- (void)upsertTagMapRegionCaseCacheTable:(CommonCodeMapRegionCaseCacheTable *)MapRegionCaseCacheTable __attribute__((swift_name("upsertTag(MapRegionCaseCacheTable:)")));
@end;

__attribute__((swift_name("MapRegionCaseLegendTableQueries")))
@protocol CommonCodeMapRegionCaseLegendTableQueries <CommonCodeRuntimeTransacter>
@required
- (void)deleteAll __attribute__((swift_name("deleteAll()")));
- (void)insertName:(NSString *)name itemId:(CommonCodeInt * _Nullable)itemId severity:(int32_t)severity info:(NSString * _Nullable)info color:(NSString * _Nullable)color isRisky:(CommonCodeLong * _Nullable)isRisky timestampSec:(CommonCodeLong * _Nullable)timestampSec __attribute__((swift_name("insert(name:itemId:severity:info:color:isRisky:timestampSec:)")));
- (CommonCodeRuntimeQuery<CommonCodeMapRegionCaseLegendTable *> *)selectAllForTimestampTimestampSec:(CommonCodeLong * _Nullable)timestampSec __attribute__((swift_name("selectAllForTimestamp(timestampSec:)")));
- (CommonCodeRuntimeQuery<id> *)selectAllForTimestampTimestampSec:(CommonCodeLong * _Nullable)timestampSec mapper:(id (^)(NSString *, CommonCodeInt *, CommonCodeInt *, NSString * _Nullable, NSString * _Nullable, CommonCodeLong * _Nullable, CommonCodeLong * _Nullable))mapper __attribute__((swift_name("selectAllForTimestamp(timestampSec:mapper:)")));
@end;

__attribute__((swift_name("MapRegionCaseTableQueries")))
@protocol CommonCodeMapRegionCaseTableQueries <CommonCodeRuntimeTransacter>
@required
- (void)deleteAllBeforeTimestampTimestsampSec:(int64_t)timestsampSec __attribute__((swift_name("deleteAllBeforeTimestamp(timestsampSec:)")));
- (void)insertRiskAreaAreaId:(NSString *)areaId severity:(int32_t)severity numberOfCases:(float)numberOfCases timestsampSec:(int64_t)timestsampSec stateId:(CommonCodeLong * _Nullable)stateId informationUrl:(NSString * _Nullable)informationUrl __attribute__((swift_name("insertRiskArea(areaId:severity:numberOfCases:timestsampSec:stateId:informationUrl:)")));
- (CommonCodeRuntimeQuery<CommonCodeMapRegionCaseTable *> *)selectAll __attribute__((swift_name("selectAll()")));
- (CommonCodeRuntimeQuery<id> *)selectAllMapper_:(id (^)(NSString *, CommonCodeInt *, CommonCodeFloat *, CommonCodeLong *, CommonCodeLong * _Nullable, NSString * _Nullable))mapper __attribute__((swift_name("selectAll(mapper_:)")));
- (CommonCodeRuntimeQuery<CommonCodeMapRegionCaseTable *> *)selectBetweenTimestampsTimestsampSec:(int64_t)timestsampSec timestsampSec_:(int64_t)timestsampSec_ __attribute__((swift_name("selectBetweenTimestamps(timestsampSec:timestsampSec_:)")));
- (CommonCodeRuntimeQuery<id> *)selectBetweenTimestampsTimestsampSec:(int64_t)timestsampSec timestsampSec_:(int64_t)timestsampSec_ mapper:(id (^)(NSString *, CommonCodeInt *, CommonCodeFloat *, CommonCodeLong *, CommonCodeLong * _Nullable, NSString * _Nullable))mapper __attribute__((swift_name("selectBetweenTimestamps(timestsampSec:timestsampSec_:mapper:)")));
@end;

__attribute__((swift_name("MapRegionGeoRingTableQueries")))
@protocol CommonCodeMapRegionGeoRingTableQueries <CommonCodeRuntimeTransacter>
@required
- (void)deleteAll __attribute__((swift_name("deleteAll()")));
- (void)deleteAllMapRegionsGeoRings __attribute__((swift_name("deleteAllMapRegionsGeoRings()")));
- (void)deleteMapRegionGeoRingRegionId:(NSString *)regionId __attribute__((swift_name("deleteMapRegionGeoRing(regionId:)")));
- (void)insertMapRegionGeoRingMapRegionGeoRingTable:(CommonCodeMapRegionGeoRingTable *)MapRegionGeoRingTable __attribute__((swift_name("insertMapRegionGeoRing(MapRegionGeoRingTable:)")));
- (CommonCodeRuntimeQuery<CommonCodeMapRegionGeoRingTable *> *)selectAllMapRegionsGeoRings __attribute__((swift_name("selectAllMapRegionsGeoRings()")));
- (CommonCodeRuntimeQuery<id> *)selectAllMapRegionsGeoRingsMapper:(id (^)(NSString *, CommonCodeLong *, CommonCodeDouble *, CommonCodeDouble *))mapper __attribute__((swift_name("selectAllMapRegionsGeoRings(mapper:)")));
- (CommonCodeRuntimeQuery<CommonCodeMapRegionGeoRingTable *> *)selectMapRegionGeoRingRegionId:(NSString *)regionId __attribute__((swift_name("selectMapRegionGeoRing(regionId:)")));
- (CommonCodeRuntimeQuery<id> *)selectMapRegionGeoRingRegionId:(NSString *)regionId mapper:(id (^)(NSString *, CommonCodeLong *, CommonCodeDouble *, CommonCodeDouble *))mapper __attribute__((swift_name("selectMapRegionGeoRing(regionId:mapper:)")));
@end;

__attribute__((swift_name("MapRegionTableQueries")))
@protocol CommonCodeMapRegionTableQueries <CommonCodeRuntimeTransacter>
@required
- (CommonCodeRuntimeQuery<CommonCodeLong *> *)countChildren __attribute__((swift_name("countChildren()")));
- (CommonCodeRuntimeQuery<CommonCodeLong *> *)countParents __attribute__((swift_name("countParents()")));
- (void)deleteAll __attribute__((swift_name("deleteAll()")));
- (void)insertChildId:(NSString *)id name:(NSString *)name parentId:(NSString * _Nullable)parentId topLeftLat:(CommonCodeDouble * _Nullable)topLeftLat topLeftLon:(CommonCodeDouble * _Nullable)topLeftLon bottomRightLat:(CommonCodeDouble * _Nullable)bottomRightLat bottomRightLon:(CommonCodeDouble * _Nullable)bottomRightLon __attribute__((swift_name("insertChild(id:name:parentId:topLeftLat:topLeftLon:bottomRightLat:bottomRightLon:)")));
- (void)insertParentId:(NSString *)id name:(NSString *)name topLeftLat:(CommonCodeDouble * _Nullable)topLeftLat topLeftLon:(CommonCodeDouble * _Nullable)topLeftLon bottomRightLat:(CommonCodeDouble * _Nullable)bottomRightLat bottomRightLon:(CommonCodeDouble * _Nullable)bottomRightLon __attribute__((swift_name("insertParent(id:name:topLeftLat:topLeftLon:bottomRightLat:bottomRightLon:)")));
- (CommonCodeRuntimeQuery<CommonCodeMapRegionTable *> *)selectAll __attribute__((swift_name("selectAll()")));
- (CommonCodeRuntimeQuery<id> *)selectAllMapper__:(id (^)(NSString *, NSString *, NSString * _Nullable, CommonCodeDouble * _Nullable, CommonCodeDouble * _Nullable, CommonCodeDouble * _Nullable, CommonCodeDouble * _Nullable))mapper __attribute__((swift_name("selectAll(mapper__:)")));
- (CommonCodeRuntimeQuery<CommonCodeMapRegionTable *> *)selectMapRegionByPositionLat:(CommonCodeDouble * _Nullable)lat lon:(CommonCodeDouble * _Nullable)lon __attribute__((swift_name("selectMapRegionByPosition(lat:lon:)")));
- (CommonCodeRuntimeQuery<id> *)selectMapRegionByPositionLat:(CommonCodeDouble * _Nullable)lat lon:(CommonCodeDouble * _Nullable)lon mapper:(id (^)(NSString *, NSString *, NSString * _Nullable, CommonCodeDouble * _Nullable, CommonCodeDouble * _Nullable, CommonCodeDouble * _Nullable, CommonCodeDouble * _Nullable))mapper __attribute__((swift_name("selectMapRegionByPosition(lat:lon:mapper:)")));
- (CommonCodeRuntimeQuery<CommonCodeMapRegionTable *> *)selectMapRegionWithIdId:(NSString *)id __attribute__((swift_name("selectMapRegionWithId(id:)")));
- (CommonCodeRuntimeQuery<id> *)selectMapRegionWithIdId:(NSString *)id mapper:(id (^)(NSString *, NSString *, NSString * _Nullable, CommonCodeDouble * _Nullable, CommonCodeDouble * _Nullable, CommonCodeDouble * _Nullable, CommonCodeDouble * _Nullable))mapper __attribute__((swift_name("selectMapRegionWithId(id:mapper:)")));
- (CommonCodeRuntimeQuery<CommonCodeMapRegionTable *> *)selectMapRegionsWithBoxTopLeftLon:(CommonCodeDouble * _Nullable)topLeftLon bottomRightLon:(CommonCodeDouble * _Nullable)bottomRightLon topLeftLat:(CommonCodeDouble * _Nullable)topLeftLat bottomRightLat:(CommonCodeDouble * _Nullable)bottomRightLat statesOnly:(int64_t)statesOnly __attribute__((swift_name("selectMapRegionsWithBox(topLeftLon:bottomRightLon:topLeftLat:bottomRightLat:statesOnly:)")));
- (CommonCodeRuntimeQuery<id> *)selectMapRegionsWithBoxTopLeftLon:(CommonCodeDouble * _Nullable)topLeftLon bottomRightLon:(CommonCodeDouble * _Nullable)bottomRightLon topLeftLat:(CommonCodeDouble * _Nullable)topLeftLat bottomRightLat:(CommonCodeDouble * _Nullable)bottomRightLat statesOnly:(int64_t)statesOnly mapper:(id (^)(NSString *, NSString *, NSString * _Nullable, CommonCodeDouble * _Nullable, CommonCodeDouble * _Nullable, CommonCodeDouble * _Nullable, CommonCodeDouble * _Nullable))mapper __attribute__((swift_name("selectMapRegionsWithBox(topLeftLon:bottomRightLon:topLeftLat:bottomRightLat:statesOnly:mapper:)")));
- (CommonCodeRuntimeQuery<CommonCodeMapRegionTable *> *)selectMapRegionsWithParentIdParentId:(NSString * _Nullable)parentId __attribute__((swift_name("selectMapRegionsWithParentId(parentId:)")));
- (CommonCodeRuntimeQuery<id> *)selectMapRegionsWithParentIdParentId:(NSString * _Nullable)parentId mapper:(id (^)(NSString *, NSString *, NSString * _Nullable, CommonCodeDouble * _Nullable, CommonCodeDouble * _Nullable, CommonCodeDouble * _Nullable, CommonCodeDouble * _Nullable))mapper __attribute__((swift_name("selectMapRegionsWithParentId(parentId:mapper:)")));
@end;

__attribute__((swift_name("MapStatesCaseTableQueries")))
@protocol CommonCodeMapStatesCaseTableQueries <CommonCodeRuntimeTransacter>
@required
- (void)deleteAllBeforeTimestampTimestsampSec:(int64_t)timestsampSec __attribute__((swift_name("deleteAllBeforeTimestamp(timestsampSec:)")));
- (void)insertMapStateCaseMapStatesCaseTable:(CommonCodeMapStatesCaseTable *)MapStatesCaseTable __attribute__((swift_name("insertMapStateCase(MapStatesCaseTable:)")));
- (CommonCodeRuntimeQuery<CommonCodeMapStatesCaseTable *> *)selectAll __attribute__((swift_name("selectAll()")));
- (CommonCodeRuntimeQuery<id> *)selectAllMapper___:(id (^)(CommonCodeLong *, CommonCodeInt *, CommonCodeFloat *, CommonCodeLong *, NSString * _Nullable))mapper __attribute__((swift_name("selectAll(mapper___:)")));
- (CommonCodeRuntimeQuery<CommonCodeMapStatesCaseTable *> *)selectBetweenTimestampsTimestsampSec:(int64_t)timestsampSec timestsampSec_:(int64_t)timestsampSec_ __attribute__((swift_name("selectBetweenTimestamps(timestsampSec:timestsampSec_:)")));
- (CommonCodeRuntimeQuery<id> *)selectBetweenTimestampsTimestsampSec:(int64_t)timestsampSec timestsampSec_:(int64_t)timestsampSec_ mapper_:(id (^)(CommonCodeLong *, CommonCodeInt *, CommonCodeFloat *, CommonCodeLong *, NSString * _Nullable))mapper __attribute__((swift_name("selectBetweenTimestamps(timestsampSec:timestsampSec_:mapper_:)")));
@end;

__attribute__((swift_name("RiskMatchNotificationTableQueries")))
@protocol CommonCodeRiskMatchNotificationTableQueries <CommonCodeRuntimeTransacter>
@required
- (void)deleteAllBeforeTimestampDayStartTimestampSec:(int64_t)dayStartTimestampSec __attribute__((swift_name("deleteAllBeforeTimestamp(dayStartTimestampSec:)")));
- (void)insertOrReplaceUnhandledRegionId:(NSString *)regionId visitId:(int64_t)visitId dayStartTimestampSec:(int64_t)dayStartTimestampSec __attribute__((swift_name("insertOrReplaceUnhandled(regionId:visitId:dayStartTimestampSec:)")));
- (void)markAsHandledRegionId:(NSString *)regionId visitId:(int64_t)visitId dayStartTimestampSec:(int64_t)dayStartTimestampSec __attribute__((swift_name("markAsHandled(regionId:visitId:dayStartTimestampSec:)")));
- (CommonCodeRuntimeQuery<CommonCodeRiskMatchNotificationTable *> *)selectAll __attribute__((swift_name("selectAll()")));
- (CommonCodeRuntimeQuery<id> *)selectAllMapper____:(id (^)(NSString *, CommonCodeLong *, CommonCodeLong *, CommonCodeLong *))mapper __attribute__((swift_name("selectAll(mapper____:)")));
- (CommonCodeRuntimeQuery<CommonCodeRiskMatchTable *> *)selectAllUnhandled __attribute__((swift_name("selectAllUnhandled()")));
- (CommonCodeRuntimeQuery<id> *)selectAllUnhandledMapper:(id (^)(NSString *, CommonCodeLong *, CommonCodeLong *, CommonCodeVisit *, CommonCodeLong *))mapper __attribute__((swift_name("selectAllUnhandled(mapper:)")));
- (CommonCodeRuntimeQuery<CommonCodeLong *> *)selectCountOfRecordsWithVisitIdVisitId:(int64_t)visitId __attribute__((swift_name("selectCountOfRecordsWithVisitId(visitId:)")));
@end;

__attribute__((swift_name("RiskMatchTableQueries")))
@protocol CommonCodeRiskMatchTableQueries <CommonCodeRuntimeTransacter>
@required
- (void)deleteAllBeforeTimestampDayStartTimestampSec:(int64_t)dayStartTimestampSec __attribute__((swift_name("deleteAllBeforeTimestamp(dayStartTimestampSec:)")));
- (void)insertOrReplaceRiskMatchTable:(CommonCodeRiskMatchTable *)RiskMatchTable __attribute__((swift_name("insertOrReplace(RiskMatchTable:)")));
- (CommonCodeRuntimeQuery<CommonCodeRiskMatchTable *> *)selectAll __attribute__((swift_name("selectAll()")));
- (CommonCodeRuntimeQuery<id> *)selectAllMapper_____:(id (^)(NSString *, CommonCodeLong *, CommonCodeLong *, CommonCodeVisit *, CommonCodeLong *))mapper __attribute__((swift_name("selectAll(mapper_____:)")));
- (CommonCodeRuntimeQuery<CommonCodeRiskMatchTable *> *)selectAllAfterTimestampDayStartTimestampSec:(int64_t)dayStartTimestampSec __attribute__((swift_name("selectAllAfterTimestamp(dayStartTimestampSec:)")));
- (CommonCodeRuntimeQuery<id> *)selectAllAfterTimestampDayStartTimestampSec:(int64_t)dayStartTimestampSec mapper:(id (^)(NSString *, CommonCodeLong *, CommonCodeLong *, CommonCodeVisit *, CommonCodeLong *))mapper __attribute__((swift_name("selectAllAfterTimestamp(dayStartTimestampSec:mapper:)")));
- (CommonCodeRuntimeQuery<CommonCodeRiskMatchTable *> *)selectForTimestampDayStartTimestampSec:(int64_t)dayStartTimestampSec __attribute__((swift_name("selectForTimestamp(dayStartTimestampSec:)")));
- (CommonCodeRuntimeQuery<id> *)selectForTimestampDayStartTimestampSec:(int64_t)dayStartTimestampSec mapper:(id (^)(NSString *, CommonCodeLong *, CommonCodeLong *, CommonCodeVisit *, CommonCodeLong *))mapper __attribute__((swift_name("selectForTimestamp(dayStartTimestampSec:mapper:)")));
- (CommonCodeRuntimeQuery<CommonCodeRiskMatchTable *> *)selectRiskMatchForVisitVisitId:(int64_t)visitId __attribute__((swift_name("selectRiskMatchForVisit(visitId:)")));
- (CommonCodeRuntimeQuery<id> *)selectRiskMatchForVisitVisitId:(int64_t)visitId mapper:(id (^)(NSString *, CommonCodeLong *, CommonCodeLong *, CommonCodeVisit *, CommonCodeLong *))mapper __attribute__((swift_name("selectRiskMatchForVisit(visitId:mapper:)")));
@end;

__attribute__((swift_name("StaticPagesCacheTableQueries")))
@protocol CommonCodeStaticPagesCacheTableQueries <CommonCodeRuntimeTransacter>
@required
- (void)deleteAllBeforeTimestampTimestampSec:(int64_t)timestampSec __attribute__((swift_name("deleteAllBeforeTimestamp(timestampSec:)")));
- (void)deleteWithUrlUrl:(NSString *)url __attribute__((swift_name("deleteWithUrl(url:)")));
- (void)insertOrReplaceStaticPagesCacheTable:(CommonCodeStaticPagesCacheTable *)StaticPagesCacheTable __attribute__((swift_name("insertOrReplace(StaticPagesCacheTable:)")));
- (CommonCodeRuntimeQuery<CommonCodeStaticPagesCacheTable *> *)selectWithUrlUrl:(NSString *)url __attribute__((swift_name("selectWithUrl(url:)")));
- (CommonCodeRuntimeQuery<id> *)selectWithUrlUrl:(NSString *)url mapper:(id (^)(NSString *, NSString *, CommonCodeLong *))mapper __attribute__((swift_name("selectWithUrl(url:mapper:)")));
@end;

__attribute__((swift_name("UserLocationTableQueries")))
@protocol CommonCodeUserLocationTableQueries <CommonCodeRuntimeTransacter>
@required
- (void)deleteAllBeforeTimestampTimestampSec:(int64_t)timestampSec __attribute__((swift_name("deleteAllBeforeTimestamp(timestampSec:)")));
- (void)insertUserLocationUserLocationTable:(CommonCodeUserLocationTable *)UserLocationTable __attribute__((swift_name("insertUserLocation(UserLocationTable:)")));
- (CommonCodeRuntimeQuery<CommonCodeUserLocationTable *> *)selectAll __attribute__((swift_name("selectAll()")));
- (CommonCodeRuntimeQuery<id> *)selectAllMapper______:(id (^)(CommonCodeDouble *, CommonCodeDouble *, CommonCodeLong *))mapper __attribute__((swift_name("selectAll(mapper______:)")));
- (CommonCodeRuntimeQuery<CommonCodeUserLocationTable *> *)selectBetweenTimestampsTimestampSec:(int64_t)timestampSec timestampSec_:(int64_t)timestampSec_ __attribute__((swift_name("selectBetweenTimestamps(timestampSec:timestampSec_:)")));
- (CommonCodeRuntimeQuery<id> *)selectBetweenTimestampsTimestampSec:(int64_t)timestampSec timestampSec_:(int64_t)timestampSec_ mapper:(id (^)(CommonCodeDouble *, CommonCodeDouble *, CommonCodeLong *))mapper __attribute__((swift_name("selectBetweenTimestamps(timestampSec:timestampSec_:mapper:)")));
- (CommonCodeRuntimeQuery<CommonCodeUserLocationTable *> *)selectLastUserLocation __attribute__((swift_name("selectLastUserLocation()")));
- (CommonCodeRuntimeQuery<id> *)selectLastUserLocationMapper:(id (^)(CommonCodeDouble *, CommonCodeDouble *, CommonCodeLong *))mapper __attribute__((swift_name("selectLastUserLocation(mapper:)")));
@end;

__attribute__((swift_name("VisitTableQueries")))
@protocol CommonCodeVisitTableQueries <CommonCodeRuntimeTransacter>
@required
- (void)deleteAllBeforeTimestampEndTimestampSec:(int64_t)endTimestampSec __attribute__((swift_name("deleteAllBeforeTimestamp(endTimestampSec:)")));
- (void)insertVisitLat:(double)lat lon:(double)lon startTimestampSec:(int64_t)startTimestampSec endTimestampSec:(int64_t)endTimestampSec __attribute__((swift_name("insertVisit(lat:lon:startTimestampSec:endTimestampSec:)")));
- (CommonCodeRuntimeQuery<CommonCodeVisitTable *> *)selectAll __attribute__((swift_name("selectAll()")));
- (CommonCodeRuntimeQuery<id> *)selectAllMapper_______:(id (^)(CommonCodeLong *, CommonCodeDouble *, CommonCodeDouble *, CommonCodeLong *, CommonCodeLong *))mapper __attribute__((swift_name("selectAll(mapper_______:)")));
- (CommonCodeRuntimeQuery<CommonCodeVisitTable *> *)selectFirstVisit __attribute__((swift_name("selectFirstVisit()")));
- (CommonCodeRuntimeQuery<id> *)selectFirstVisitMapper:(id (^)(CommonCodeLong *, CommonCodeDouble *, CommonCodeDouble *, CommonCodeLong *, CommonCodeLong *))mapper __attribute__((swift_name("selectFirstVisit(mapper:)")));
- (CommonCodeRuntimeQuery<CommonCodeVisitTable *> *)selectLastVisit __attribute__((swift_name("selectLastVisit()")));
- (CommonCodeRuntimeQuery<id> *)selectLastVisitMapper:(id (^)(CommonCodeLong *, CommonCodeDouble *, CommonCodeDouble *, CommonCodeLong *, CommonCodeLong *))mapper __attribute__((swift_name("selectLastVisit(mapper:)")));
- (CommonCodeRuntimeQuery<CommonCodeVisitTable *> *)selectVisitBeforeVisitWithMinDurationId:(int64_t)id durationSec:(int64_t)durationSec __attribute__((swift_name("selectVisitBeforeVisitWithMinDuration(id:durationSec:)")));
- (CommonCodeRuntimeQuery<id> *)selectVisitBeforeVisitWithMinDurationId:(int64_t)id durationSec:(int64_t)durationSec mapper:(id (^)(CommonCodeLong *, CommonCodeDouble *, CommonCodeDouble *, CommonCodeLong *, CommonCodeLong *))mapper __attribute__((swift_name("selectVisitBeforeVisitWithMinDuration(id:durationSec:mapper:)")));
- (CommonCodeRuntimeQuery<CommonCodeVisitTable *> *)selectVisitsBetweenTimestampsStartTimestampSec:(int64_t)startTimestampSec endTimestampSec:(int64_t)endTimestampSec durationSec:(int64_t)durationSec __attribute__((swift_name("selectVisitsBetweenTimestamps(startTimestampSec:endTimestampSec:durationSec:)")));
- (CommonCodeRuntimeQuery<id> *)selectVisitsBetweenTimestampsStartTimestampSec:(int64_t)startTimestampSec endTimestampSec:(int64_t)endTimestampSec durationSec:(int64_t)durationSec mapper:(id (^)(CommonCodeLong *, CommonCodeDouble *, CommonCodeDouble *, CommonCodeLong *, CommonCodeLong *))mapper __attribute__((swift_name("selectVisitsBetweenTimestamps(startTimestampSec:endTimestampSec:durationSec:mapper:)")));
- (void)updateVisitLat:(double)lat lon:(double)lon startTimestampSec:(int64_t)startTimestampSec endTimestampSec:(int64_t)endTimestampSec id:(int64_t)id __attribute__((swift_name("updateVisit(lat:lon:startTimestampSec:endTimestampSec:id:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Constants")))
@interface CommonCodeConstants : CommonCodeBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)constants __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Constants.Cache")))
@interface CommonCodeConstantsCache : CommonCodeBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cache __attribute__((swift_name("init()")));
@property (readonly) int32_t CASES_CACHE_DAYS_COUNT __attribute__((swift_name("CASES_CACHE_DAYS_COUNT")));
@property (readonly) int32_t LOCATIONS_CACHE_DAYS_COUNT __attribute__((swift_name("LOCATIONS_CACHE_DAYS_COUNT")));
@property (readonly) int32_t MIN_CASES_CACHE_SEC __attribute__((swift_name("MIN_CASES_CACHE_SEC")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Constants.Map")))
@interface CommonCodeConstantsMap : CommonCodeBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)map __attribute__((swift_name("init()")));
@property (readonly) double minStatesFetchDistanceKm __attribute__((swift_name("minStatesFetchDistanceKm")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Constants.Strings")))
@interface CommonCodeConstantsStrings : CommonCodeBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)strings __attribute__((swift_name("init()")));
@property (readonly) NSString *covid19 __attribute__((swift_name("covid19")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Constants.VisitsRange")))
@interface CommonCodeConstantsVisitsRange : CommonCodeBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)visitsRange __attribute__((swift_name("init()")));
@property (readonly) int32_t VISIT_RANGE_METERS __attribute__((swift_name("VISIT_RANGE_METERS")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DateUtils")))
@interface CommonCodeDateUtils : CommonCodeBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)dateUtils __attribute__((swift_name("init()")));
- (NSString *)dateForURLTimestampSec:(int64_t)timestampSec __attribute__((swift_name("dateForURL(timestampSec:)")));
- (int64_t)dayEndTimestampTimestampSec:(int64_t)timestampSec __attribute__((swift_name("dayEndTimestamp(timestampSec:)")));
- (int64_t)dayStartTimestampTimestampSec:(int64_t)timestampSec __attribute__((swift_name("dayStartTimestamp(timestampSec:)")));
- (int32_t)daysBetweenTimestampFromSec:(int64_t)timestampFromSec timestampToSec:(int64_t)timestampToSec __attribute__((swift_name("daysBetween(timestampFromSec:timestampToSec:)")));
- (NSString *)formattedDateTimestampSec:(int64_t)timestampSec timeZone:(CommonCodeDateUtilsTZone *)timeZone __attribute__((swift_name("formattedDate(timestampSec:timeZone:)")));
- (NSString *)formattedPeriodBetweenTimestampStartSec:(int64_t)timestampStartSec timestampEndSec:(int64_t)timestampEndSec timeZone:(CommonCodeDateUtilsTZone *)timeZone __attribute__((swift_name("formattedPeriodBetween(timestampStartSec:timestampEndSec:timeZone:)")));
- (NSString *)formattedTimeTimestampSec:(int64_t)timestampSec timeZone:(CommonCodeDateUtilsTZone *)timeZone __attribute__((swift_name("formattedTime(timestampSec:timeZone:)")));
- (BOOL)isTodayTimestampSec:(int64_t)timestampSec __attribute__((swift_name("isToday(timestampSec:)")));
- (int64_t)nowTimestampSec __attribute__((swift_name("nowTimestampSec()")));
- (NSString *)pointFormattedDateTimestampSec:(int64_t)timestampSec timeZone:(CommonCodeDateUtilsTZone *)timeZone __attribute__((swift_name("pointFormattedDate(timestampSec:timeZone:)")));
- (NSArray<CommonCodeDateUtilsDayInterval *> *)splitTimestampsInDayIntervalsStartTimestampSec:(int64_t)startTimestampSec endTimestampSec:(int64_t)endTimestampSec __attribute__((swift_name("splitTimestampsInDayIntervals(startTimestampSec:endTimestampSec:)")));
- (int64_t)timestampAtStartOfDayByAddingDaysTimestampSec:(int64_t)timestampSec days:(int32_t)days __attribute__((swift_name("timestampAtStartOfDayByAddingDays(timestampSec:days:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DateUtils.DayInterval")))
@interface CommonCodeDateUtilsDayInterval : CommonCodeBase
- (instancetype)initWithStartTimestampSec:(int64_t)startTimestampSec endTimestampSec:(int64_t)endTimestampSec __attribute__((swift_name("init(startTimestampSec:endTimestampSec:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (int64_t)component2 __attribute__((swift_name("component2()")));
- (CommonCodeDateUtilsDayInterval *)doCopyStartTimestampSec:(int64_t)startTimestampSec endTimestampSec:(int64_t)endTimestampSec __attribute__((swift_name("doCopy(startTimestampSec:endTimestampSec:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t endTimestampSec __attribute__((swift_name("endTimestampSec")));
@property (readonly) int64_t startTimestampSec __attribute__((swift_name("startTimestampSec")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol CommonCodeKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface CommonCodeKotlinEnum<E> : CommonCodeBase <CommonCodeKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DateUtils.TZone")))
@interface CommonCodeDateUtilsTZone : CommonCodeKotlinEnum<CommonCodeDateUtilsTZone *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CommonCodeDateUtilsTZone *current __attribute__((swift_name("current")));
@property (class, readonly) CommonCodeDateUtilsTZone *utc __attribute__((swift_name("utc")));
+ (CommonCodeKotlinArray<CommonCodeDateUtilsTZone *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Language")))
@interface CommonCodeLanguage : CommonCodeBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *code __attribute__((swift_name("code")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MapUtils")))
@interface CommonCodeMapUtils : CommonCodeBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)mapUtils __attribute__((swift_name("init()")));
- (CommonCodeMapRegionBox *)calculateMapRegionBoxGeoRings:(NSArray<NSArray<CommonCodePosition *> *> *)geoRings __attribute__((swift_name("calculateMapRegionBox(geoRings:)")));
- (double)distanceBetweenInKmFrom:(CommonCodePosition *)from to:(CommonCodePosition *)to __attribute__((swift_name("distanceBetweenInKm(from:to:)")));
- (double)distanceBetweenInMetersFrom:(CommonCodePosition *)from to:(CommonCodePosition *)to __attribute__((swift_name("distanceBetweenInMeters(from:to:)")));
- (BOOL)pointBelongsToBoxPoint:(CommonCodePosition *)point mapRegionBox:(CommonCodeMapRegionBox *)mapRegionBox __attribute__((swift_name("pointBelongsToBox(point:mapRegionBox:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StaticPagesUseCaseFactory")))
@interface CommonCodeStaticPagesUseCaseFactory : CommonCodeBase
- (instancetype)initWithDatabaseWrapper:(CommonCodeDatabaseWrapper *)databaseWrapper __attribute__((swift_name("init(databaseWrapper:)"))) __attribute__((objc_designated_initializer));
- (id<CommonCodeGetStaticPageUseCase>)createGetStaticPageUseCase __attribute__((swift_name("createGetStaticPageUseCase()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StaticPages")))
@interface CommonCodeStaticPages : CommonCodeBase
- (instancetype)initWithImprint:(id<CommonCodeNetworkParametersSendStrategy>)imprint dataPrivacy:(id<CommonCodeNetworkParametersSendStrategy>)dataPrivacy about:(id<CommonCodeNetworkParametersSendStrategy>)about __attribute__((swift_name("init(imprint:dataPrivacy:about:)"))) __attribute__((objc_designated_initializer));
- (CommonCodeStaticPages *)doCopyImprint:(id<CommonCodeNetworkParametersSendStrategy>)imprint dataPrivacy:(id<CommonCodeNetworkParametersSendStrategy>)dataPrivacy about:(id<CommonCodeNetworkParametersSendStrategy>)about __attribute__((swift_name("doCopy(imprint:dataPrivacy:about:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *aboutURL __attribute__((swift_name("aboutURL")));
@property (readonly) NSString *dataPrivacyURL __attribute__((swift_name("dataPrivacyURL")));
@property (readonly) NSString *imprintURL __attribute__((swift_name("imprintURL")));
@end;

__attribute__((swift_name("StaticPagesNetworkApi")))
@protocol CommonCodeStaticPagesNetworkApi
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getHTMLUrl:(NSString *)url completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getHTML(url:completionHandler:)")));
@end;

__attribute__((swift_name("GetStaticPageUseCase")))
@protocol CommonCodeGetStaticPageUseCase
@required

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (void)invokeUrl:(NSString *)url completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(url:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetStaticPageUseCaseImpl")))
@interface CommonCodeGetStaticPageUseCaseImpl : CommonCodeBase <CommonCodeGetStaticPageUseCase>
- (instancetype)initWithNetworkApi:(id<CommonCodeStaticPagesNetworkApi>)networkApi staticPagesDbApi:(id<CommonCodeStaticPagesDbApi>)staticPagesDbApi __attribute__((swift_name("init(networkApi:staticPagesDbApi:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (void)invokeUrl:(NSString *)url completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(url:completionHandler:)")));
@end;

__attribute__((swift_name("StaticPagesDbApi")))
@protocol CommonCodeStaticPagesDbApi
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteAllBeforeTimestampTimestampSec:(int64_t)timestampSec completionHandler:(void (^)(CommonCodeKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("deleteAllBeforeTimestamp(timestampSec:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteWithUrlUrl:(NSString *)url completionHandler:(void (^)(CommonCodeKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("deleteWithUrl(url:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)insertOrUpdateUrl:(NSString *)url content:(NSString *)content completionHandler:(void (^)(CommonCodeKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("insertOrUpdate(url:content:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)selectWithUrlUrl:(NSString *)url completionHandler:(void (^)(CommonCodeStaticPagesCacheTable * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("selectWithUrl(url:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RiskMatchingUseCaseFactory")))
@interface CommonCodeRiskMatchingUseCaseFactory : CommonCodeBase
- (instancetype)initWithDatabaseWrapper:(CommonCodeDatabaseWrapper *)databaseWrapper endpoints:(CommonCodeEndpoints *)endpoints __attribute__((swift_name("init(databaseWrapper:endpoints:)"))) __attribute__((objc_designated_initializer));
- (CommonCodeAnalyseRiskMatchUseCaseImpl *)createAnalyseRiskMatchUseCase __attribute__((swift_name("createAnalyseRiskMatchUseCase()")));
- (id<CommonCodeCleanRiskMatchesCacheUseCase>)createCleanRiskMatchesCacheUseCase __attribute__((swift_name("createCleanRiskMatchesCacheUseCase()")));
- (CommonCodeCreateRiskMatchNotificationUseCaseImpl *)createCreateRiskMatchNotificationUseCase __attribute__((swift_name("createCreateRiskMatchNotificationUseCase()")));
- (id<CommonCodeGetNotNotifiedRiskMatchesUseCase>)createGetNotNotifiedRiskMatchesUseCase __attribute__((swift_name("createGetNotNotifiedRiskMatchesUseCase()")));
- (id<CommonCodeGetNotRiskyVisitsForDayUseCase>)createGetNotRiskyVisitsForDayUseCase __attribute__((swift_name("createGetNotRiskyVisitsForDayUseCase()")));
- (id<CommonCodeGetRiskMatchesForDayUseCase>)createGetRiskMatchesForDayUseCase __attribute__((swift_name("createGetRiskMatchesForDayUseCase()")));
- (id<CommonCodeGetRiskMatchesForPeriodUseCase>)createGetRiskMatchesForPeriodUseCase __attribute__((swift_name("createGetRiskMatchesForPeriodUseCase()")));
- (id<CommonCodeMarkAsNotifiedRiskMatchesUseCase>)createMarkAsNotifiedRiskMatchesUseCase __attribute__((swift_name("createMarkAsNotifiedRiskMatchesUseCase()")));
- (id<CommonCodeObserveNotNotifiedRiskMatchesUseCase>)createObserveNotNotifiedRiskMatchesUseCase __attribute__((swift_name("createObserveNotNotifiedRiskMatchesUseCase()")));
- (id<CommonCodeObserveRiskDatesOffsetsFromCurrentDateForPeriod>)createObserveRiskDatesOffsetsFromCurrentDateForPeriod __attribute__((swift_name("createObserveRiskDatesOffsetsFromCurrentDateForPeriod()")));
- (id<CommonCodeObserveRiskMatchForPeriodUseCase>)createObserveRiskMatchesForPeriodUseCase __attribute__((swift_name("createObserveRiskMatchesForPeriodUseCase()")));
- (id<CommonCodeObserveRiskMatchesForTodayUseCase>)createObserveRiskMatchesForTodayUseCase __attribute__((swift_name("createObserveRiskMatchesForTodayUseCase()")));
- (id<CommonCodePerformRiskMatchingForDayUseCase>)createPerformRiskMatchingForDayUseCase __attribute__((swift_name("createPerformRiskMatchingForDayUseCase()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NotNotifiedRiskMatch")))
@interface CommonCodeNotNotifiedRiskMatch : CommonCodeBase
- (instancetype)initWithRiskMatch:(CommonCodeRiskMatch *)riskMatch type:(CommonCodeRiskMatchType *)type __attribute__((swift_name("init(riskMatch:type:)"))) __attribute__((objc_designated_initializer));
- (CommonCodeRiskMatch *)component1 __attribute__((swift_name("component1()")));
- (CommonCodeRiskMatchType *)component2 __attribute__((swift_name("component2()")));
- (CommonCodeNotNotifiedRiskMatch *)doCopyRiskMatch:(CommonCodeRiskMatch *)riskMatch type:(CommonCodeRiskMatchType *)type __attribute__((swift_name("doCopy(riskMatch:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CommonCodeRiskMatch *riskMatch __attribute__((swift_name("riskMatch")));
@property (readonly) CommonCodeRiskMatchType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RiskMatch")))
@interface CommonCodeRiskMatch : CommonCodeBase
- (instancetype)initWithRegionInfo:(CommonCodeMapRegionInfo *)regionInfo visit:(CommonCodeVisit *)visit dayStartTimestampSec:(int64_t)dayStartTimestampSec __attribute__((swift_name("init(regionInfo:visit:dayStartTimestampSec:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithRegionId:(NSString *)regionId visitId:(int64_t)visitId visit:(CommonCodeVisit *)visit severity:(int32_t)severity dayStartTimestampSec:(int64_t)dayStartTimestampSec __attribute__((swift_name("init(regionId:visitId:visit:severity:dayStartTimestampSec:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int64_t)component2 __attribute__((swift_name("component2()")));
- (CommonCodeVisit *)component3 __attribute__((swift_name("component3()")));
- (int32_t)component4 __attribute__((swift_name("component4()")));
- (int64_t)component5 __attribute__((swift_name("component5()")));
- (CommonCodeRiskMatch *)doCopyRegionId:(NSString *)regionId visitId:(int64_t)visitId visit:(CommonCodeVisit *)visit severity:(int32_t)severity dayStartTimestampSec:(int64_t)dayStartTimestampSec __attribute__((swift_name("doCopy(regionId:visitId:visit:severity:dayStartTimestampSec:)")));
- (int64_t)durationSec __attribute__((swift_name("durationSec()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t dayStartTimestampSec __attribute__((swift_name("dayStartTimestampSec")));
@property (readonly) NSString *regionId __attribute__((swift_name("regionId")));
@property (readonly) int32_t severity __attribute__((swift_name("severity")));
@property (readonly) CommonCodeVisit *visit __attribute__((swift_name("visit")));
@property (readonly) int64_t visitId __attribute__((swift_name("visitId")));
@end;

__attribute__((swift_name("RiskMatchDbApi")))
@protocol CommonCodeRiskMatchDbApi
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteRiskMatchesBeforeTimestampSec:(int64_t)timestampSec completionHandler:(void (^)(CommonCodeKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("deleteRiskMatchesBefore(timestampSec:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteRiskMatchesNotificationsBeforeTimestampSec:(int64_t)timestampSec completionHandler:(void (^)(CommonCodeKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("deleteRiskMatchesNotificationsBefore(timestampSec:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getCountRiskMatchNotificationsVisitId:(int64_t)visitId completionHandler:(void (^)(CommonCodeLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getCountRiskMatchNotifications(visitId:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRiskMatchForVisitVisitId:(int64_t)visitId completionHandler:(void (^)(CommonCodeRiskMatch * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRiskMatchForVisit(visitId:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)loadRiskMatchesTimestampSec:(int64_t)timestampSec completionHandler:(void (^)(NSArray<CommonCodeRiskMatch *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("loadRiskMatches(timestampSec:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)loadUnNotifiedRiskMatchesWithCompletionHandler:(void (^)(NSArray<CommonCodeRiskMatch *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("loadUnNotifiedRiskMatches(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)markAsNotifiedRiskMatchesRiskMatches:(NSArray<CommonCodeRiskMatch *> *)riskMatches completionHandler:(void (^)(CommonCodeKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("markAsNotifiedRiskMatches(riskMatches:completionHandler:)")));
- (id<CommonCodeKotlinx_coroutines_coreFlow>)observeUnNotifiedRiskMatches __attribute__((swift_name("observeUnNotifiedRiskMatches()")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)saveOrUpdateRiskMatchRiskMatch:(CommonCodeRiskMatch *)riskMatch completionHandler:(void (^)(CommonCodeKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("saveOrUpdateRiskMatch(riskMatch:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)saveOrUpdateRiskMatchNotificationRiskMatch:(CommonCodeRiskMatch *)riskMatch completionHandler:(void (^)(CommonCodeKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("saveOrUpdateRiskMatchNotification(riskMatch:completionHandler:)")));
@end;

__attribute__((swift_name("AnalyseRiskMatchUseCase")))
@protocol CommonCodeAnalyseRiskMatchUseCase
@required

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (void)invokeRiskMatch:(CommonCodeRiskMatch *)riskMatch completionHandler:(void (^)(CommonCodeRiskMatchType * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(riskMatch:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AnalyseRiskMatchUseCaseImpl")))
@interface CommonCodeAnalyseRiskMatchUseCaseImpl : CommonCodeBase <CommonCodeAnalyseRiskMatchUseCase>
- (instancetype)initWithRiskMatchDbApi:(id<CommonCodeRiskMatchDbApi>)riskMatchDbApi visitsDbApi:(id<CommonCodeVisitsDbApi>)visitsDbApi __attribute__((swift_name("init(riskMatchDbApi:visitsDbApi:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (void)invokeRiskMatch:(CommonCodeRiskMatch *)riskMatch completionHandler:(void (^)(CommonCodeRiskMatchType * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(riskMatch:completionHandler:)")));
@end;

__attribute__((swift_name("CleanRiskMatchesCacheUseCase")))
@protocol CommonCodeCleanRiskMatchesCacheUseCase
@required

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (void)invokeWithCompletionHandler:(void (^)(CommonCodeKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CleanRiskMatchesCacheUseCaseImpl")))
@interface CommonCodeCleanRiskMatchesCacheUseCaseImpl : CommonCodeBase <CommonCodeCleanRiskMatchesCacheUseCase>
- (instancetype)initWithRiskMatchDbApi:(id<CommonCodeRiskMatchDbApi>)riskMatchDbApi __attribute__((swift_name("init(riskMatchDbApi:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (void)invokeWithCompletionHandler:(void (^)(CommonCodeKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end;

__attribute__((swift_name("CreateRiskMatchNotificationUseCase")))
@protocol CommonCodeCreateRiskMatchNotificationUseCase
@required

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (void)invokeRiskMatch:(CommonCodeRiskMatch *)riskMatch completionHandler:(void (^)(CommonCodeKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(riskMatch:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateRiskMatchNotificationUseCaseImpl")))
@interface CommonCodeCreateRiskMatchNotificationUseCaseImpl : CommonCodeBase <CommonCodeCreateRiskMatchNotificationUseCase>
- (instancetype)initWithRiskMatchDbApi:(id<CommonCodeRiskMatchDbApi>)riskMatchDbApi analyseRiskMatchUseCase:(id<CommonCodeAnalyseRiskMatchUseCase>)analyseRiskMatchUseCase __attribute__((swift_name("init(riskMatchDbApi:analyseRiskMatchUseCase:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (void)invokeRiskMatch:(CommonCodeRiskMatch *)riskMatch completionHandler:(void (^)(CommonCodeKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(riskMatch:completionHandler:)")));
@end;

__attribute__((swift_name("GetNotNotifiedRiskMatchesUseCase")))
@protocol CommonCodeGetNotNotifiedRiskMatchesUseCase
@required

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (void)invokeUpToTimestampSec:(int64_t)upToTimestampSec completionHandler:(void (^)(NSArray<CommonCodeNotNotifiedRiskMatch *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(upToTimestampSec:completionHandler:)")));
@end;

__attribute__((swift_name("GetNotRiskyVisitsForDayUseCase")))
@protocol CommonCodeGetNotRiskyVisitsForDayUseCase
@required

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (void)invokeTimestampSec:(int64_t)timestampSec completionHandler:(void (^)(NSArray<CommonCodeVisit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(timestampSec:completionHandler:)")));
@end;

__attribute__((swift_name("GetRiskMatchesForDayUseCase")))
@protocol CommonCodeGetRiskMatchesForDayUseCase
@required

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (void)invokeTimestampSec:(int64_t)timestampSec completionHandler:(void (^)(NSArray<CommonCodeRiskMatch *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(timestampSec:completionHandler:)")));
@end;

__attribute__((swift_name("GetRiskMatchesForPeriodUseCase")))
@protocol CommonCodeGetRiskMatchesForPeriodUseCase
@required

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (void)invokeDaysPeriod:(int32_t)daysPeriod completionHandler:(void (^)(NSArray<CommonCodeRiskMatch *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(daysPeriod:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetRiskMatchesForPeriodUseCaseImpl")))
@interface CommonCodeGetRiskMatchesForPeriodUseCaseImpl : CommonCodeBase <CommonCodeGetRiskMatchesForPeriodUseCase>
- (instancetype)initWithGetRiskMatchesForDayUseCase:(id<CommonCodeGetRiskMatchesForDayUseCase>)getRiskMatchesForDayUseCase __attribute__((swift_name("init(getRiskMatchesForDayUseCase:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (void)invokeDaysPeriod:(int32_t)daysPeriod completionHandler:(void (^)(NSArray<CommonCodeRiskMatch *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(daysPeriod:completionHandler:)")));
@end;

__attribute__((swift_name("MarkAsNotifiedRiskMatchesUseCase")))
@protocol CommonCodeMarkAsNotifiedRiskMatchesUseCase
@required

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (void)invokeRiskMatches:(NSArray<CommonCodeRiskMatch *> *)riskMatches completionHandler:(void (^)(CommonCodeKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(riskMatches:completionHandler:)")));
@end;

__attribute__((swift_name("ObserveNotNotifiedRiskMatchesUseCase")))
@protocol CommonCodeObserveNotNotifiedRiskMatchesUseCase
@required
- (id<CommonCodeKotlinx_coroutines_coreFlow>)invoke __attribute__((swift_name("invoke()")));
- (void)observeOnUpdate:(void (^)(NSArray<CommonCodeRiskMatch *> *))onUpdate __attribute__((swift_name("observe(onUpdate:)")));
@end;

__attribute__((swift_name("ObserveRiskDatesOffsetsFromCurrentDateForPeriod")))
@protocol CommonCodeObserveRiskDatesOffsetsFromCurrentDateForPeriod
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeDaysPeriod:(int32_t)daysPeriod completionHandler:(void (^)(id<CommonCodeKotlinx_coroutines_coreFlow> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(daysPeriod:completionHandler:)")));
- (id<CommonCodeKotlinx_coroutines_coreJob>)observeDays:(int32_t)days onUpdate:(void (^)(CommonCodeInt *))onUpdate __attribute__((swift_name("observe(days:onUpdate:)")));
@end;

__attribute__((swift_name("ObserveRiskMatchForPeriodUseCase")))
@protocol CommonCodeObserveRiskMatchForPeriodUseCase
@required
- (id<CommonCodeKotlinx_coroutines_coreFlow>)invokeDaysPeriod:(int32_t)daysPeriod __attribute__((swift_name("invoke(daysPeriod:)")));
- (id<CommonCodeKotlinx_coroutines_coreJob>)observeDays:(int32_t)days onUpdate_:(void (^)(NSArray<CommonCodeRiskMatch *> *))onUpdate __attribute__((swift_name("observe(days:onUpdate_:)")));
@end;

__attribute__((swift_name("ObserveRiskMatchesForTodayUseCase")))
@protocol CommonCodeObserveRiskMatchesForTodayUseCase
@required
- (id<CommonCodeKotlinx_coroutines_coreFlow>)invoke __attribute__((swift_name("invoke()")));
@end;

__attribute__((swift_name("PerformRiskMatchingForDayUseCase")))
@protocol CommonCodePerformRiskMatchingForDayUseCase
@required

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (void)invokeTimestampSec:(int64_t)timestampSec completionHandler:(void (^)(CommonCodeBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(timestampSec:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PerformRiskMatchingForDayUseCaseImpl")))
@interface CommonCodePerformRiskMatchingForDayUseCaseImpl : CommonCodeBase <CommonCodePerformRiskMatchingForDayUseCase>
- (instancetype)initWithRiskMatchDbApi:(id<CommonCodeRiskMatchDbApi>)riskMatchDbApi getVisitsBetweenTimestampsUseCase:(id<CommonCodeGetVisitsBetweenTimestampsUseCase>)getVisitsBetweenTimestampsUseCase getMapRegionIdByPositionUseCase:(id<CommonCodeGetMapRegionIdByPositionUseCase>)getMapRegionIdByPositionUseCase getMapRegionInfoUseCase:(id<CommonCodeGetMapRegionInfoUseCase>)getMapRegionInfoUseCase cleanRiskMatchesCacheUseCase:(id<CommonCodeCleanRiskMatchesCacheUseCase>)cleanRiskMatchesCacheUseCase createRiskMatchNotificationUseCase:(id<CommonCodeCreateRiskMatchNotificationUseCase>)createRiskMatchNotificationUseCase __attribute__((swift_name("init(riskMatchDbApi:getVisitsBetweenTimestampsUseCase:getMapRegionIdByPositionUseCase:getMapRegionInfoUseCase:cleanRiskMatchesCacheUseCase:createRiskMatchNotificationUseCase:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (void)invokeTimestampSec:(int64_t)timestampSec completionHandler:(void (^)(CommonCodeBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(timestampSec:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RiskMatchType")))
@interface CommonCodeRiskMatchType : CommonCodeKotlinEnum<CommonCodeRiskMatchType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CommonCodeRiskMatchType *regionChange __attribute__((swift_name("regionChange")));
@property (class, readonly) CommonCodeRiskMatchType *severityIncrease __attribute__((swift_name("severityIncrease")));
@property (class, readonly) CommonCodeRiskMatchType *remain __attribute__((swift_name("remain")));
+ (CommonCodeKotlinArray<CommonCodeRiskMatchType *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MapRegionsUseCaseFactory")))
@interface CommonCodeMapRegionsUseCaseFactory : CommonCodeBase
- (instancetype)initWithDatabaseWrapper:(CommonCodeDatabaseWrapper *)databaseWrapper endpoints:(CommonCodeEndpoints *)endpoints __attribute__((swift_name("init(databaseWrapper:endpoints:)"))) __attribute__((objc_designated_initializer));
- (id<CommonCodeCreateMapRegionsUseCase>)createCreateMapRegionsUseCaseStatesFileReader:(id<CommonCodeJsonFileReader>)statesFileReader districtFileReader:(id<CommonCodeJsonFileReader>)districtFileReader __attribute__((swift_name("createCreateMapRegionsUseCase(statesFileReader:districtFileReader:)")));
- (id<CommonCodeGetMapRegionIdByPositionUseCase>)createGetMapRegionByPositionUseCase __attribute__((swift_name("createGetMapRegionByPositionUseCase()")));
- (id<CommonCodeGetMapRegionInfoUseCase>)createGetMapRegionInfoUseCase __attribute__((swift_name("createGetMapRegionInfoUseCase()")));
- (id<CommonCodeGetMapRegionsUseCase>)createGetMapRegionsUseCase __attribute__((swift_name("createGetMapRegionsUseCase()")));
- (id<CommonCodeGetMapRegionsWithGeometryUseCase>)createGetMapRegionsWithGeometryUseCase __attribute__((swift_name("createGetMapRegionsWithGeometryUseCase()")));
@end;

__attribute__((swift_name("RegionsDbApi")))
@protocol CommonCodeRegionsDbApi
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)countChildMapRegionsWithCompletionHandler:(void (^)(CommonCodeLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("countChildMapRegions(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)countParentMapRegionsWithCompletionHandler:(void (^)(CommonCodeLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("countParentMapRegions(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteMapRegionsWithCompletionHandler:(void (^)(CommonCodeKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("deleteMapRegions(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getMapRegionRegionId:(NSString *)regionId completionHandler:(void (^)(CommonCodeMapRegionTable * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getMapRegion(regionId:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getMapRegionByPositionPosition:(CommonCodePosition *)position completionHandler:(void (^)(NSArray<CommonCodeMapRegionTable *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getMapRegionByPosition(position:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getMapRegionChildrenParentId:(NSString *)parentId completionHandler:(void (^)(NSArray<CommonCodeMapRegionTable *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getMapRegionChildren(parentId:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getMapRegionGeometryRegionId:(NSString *)regionId completionHandler:(void (^)(NSArray<NSArray<CommonCodePosition *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getMapRegionGeometry(regionId:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getMapRegionsRegionBox:(CommonCodeMapRegionBox *)regionBox statesOnly:(BOOL)statesOnly completionHandler:(void (^)(NSArray<CommonCodeMapRegionTable *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getMapRegions(regionBox:statesOnly:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)insertChildMapRegionChildMapRegions:(NSDictionary<CommonCodeDistrictRegion *, CommonCodeMapRegionBox *> *)childMapRegions completionHandler:(void (^)(CommonCodeKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("insertChildMapRegion(childMapRegions:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)insertParentMapRegionParentMapRegions:(NSDictionary<CommonCodeStateRegion *, CommonCodeMapRegionBox *> *)parentMapRegions completionHandler:(void (^)(CommonCodeKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("insertParentMapRegion(parentMapRegions:completionHandler:)")));
@end;

__attribute__((swift_name("JsonFileReader")))
@protocol CommonCodeJsonFileReader
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getWithCompletionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("get(completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MapRegion")))
@interface CommonCodeMapRegion : CommonCodeBase
- (instancetype)initWithId:(NSString *)id parentId:(NSString * _Nullable)parentId severity:(int32_t)severity color:(NSString *)color __attribute__((swift_name("init(id:parentId:severity:color:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (CommonCodeMapRegion *)doCopyId:(NSString *)id parentId:(NSString * _Nullable)parentId severity:(int32_t)severity color:(NSString *)color __attribute__((swift_name("doCopy(id:parentId:severity:color:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *color __attribute__((swift_name("color")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable parentId __attribute__((swift_name("parentId")));
@property (readonly) int32_t severity __attribute__((swift_name("severity")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MapRegionBox")))
@interface CommonCodeMapRegionBox : CommonCodeBase
- (instancetype)initWithTopLeft:(CommonCodePosition *)topLeft bottomRight:(CommonCodePosition *)bottomRight __attribute__((swift_name("init(topLeft:bottomRight:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CommonCodePosition *bottomRight __attribute__((swift_name("bottomRight")));
@property (readonly) CommonCodePosition *topLeft __attribute__((swift_name("topLeft")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MapRegionInfo")))
@interface CommonCodeMapRegionInfo : CommonCodeBase
- (instancetype)initWithId:(NSString *)id name:(NSString *)name severity:(int32_t)severity maxSeverity:(int32_t)maxSeverity isRisky:(BOOL)isRisky severityInfo:(NSString *)severityInfo color:(NSString *)color casesNumber:(float)casesNumber casesNumberInfo:(NSString *)casesNumberInfo disease:(NSString *)disease informationUrl:(NSString * _Nullable)informationUrl __attribute__((swift_name("init(id:name:severity:maxSeverity:isRisky:severityInfo:color:casesNumber:casesNumberInfo:disease:informationUrl:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component10 __attribute__((swift_name("component10()")));
- (NSString * _Nullable)component11 __attribute__((swift_name("component11()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (int32_t)component4 __attribute__((swift_name("component4()")));
- (BOOL)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (float)component8 __attribute__((swift_name("component8()")));
- (NSString *)component9 __attribute__((swift_name("component9()")));
- (CommonCodeMapRegionInfo *)doCopyId:(NSString *)id name:(NSString *)name severity:(int32_t)severity maxSeverity:(int32_t)maxSeverity isRisky:(BOOL)isRisky severityInfo:(NSString *)severityInfo color:(NSString *)color casesNumber:(float)casesNumber casesNumberInfo:(NSString *)casesNumberInfo disease:(NSString *)disease informationUrl:(NSString * _Nullable)informationUrl __attribute__((swift_name("doCopy(id:name:severity:maxSeverity:isRisky:severityInfo:color:casesNumber:casesNumberInfo:disease:informationUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float casesNumber __attribute__((swift_name("casesNumber")));
@property (readonly) NSString *casesNumberInfo __attribute__((swift_name("casesNumberInfo")));
@property (readonly) NSString *color __attribute__((swift_name("color")));
@property (readonly) NSString *disease __attribute__((swift_name("disease")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable informationUrl __attribute__((swift_name("informationUrl")));
@property (readonly) BOOL isRisky __attribute__((swift_name("isRisky")));
@property (readonly) int32_t maxSeverity __attribute__((swift_name("maxSeverity")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t severity __attribute__((swift_name("severity")));
@property (readonly) NSString *severityInfo __attribute__((swift_name("severityInfo")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MapRegionWithGeometry")))
@interface CommonCodeMapRegionWithGeometry : CommonCodeBase
- (instancetype)initWithId:(NSString *)id parentId:(NSString * _Nullable)parentId severity:(int32_t)severity color:(NSString *)color geoRings:(NSArray<NSArray<CommonCodePosition *> *> *)geoRings __attribute__((swift_name("init(id:parentId:severity:color:geoRings:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSArray<NSArray<CommonCodePosition *> *> *)component5 __attribute__((swift_name("component5()")));
- (CommonCodeMapRegionWithGeometry *)doCopyId:(NSString *)id parentId:(NSString * _Nullable)parentId severity:(int32_t)severity color:(NSString *)color geoRings:(NSArray<NSArray<CommonCodePosition *> *> *)geoRings __attribute__((swift_name("doCopy(id:parentId:severity:color:geoRings:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *color __attribute__((swift_name("color")));
@property (readonly) NSArray<NSArray<CommonCodePosition *> *> *geoRings __attribute__((swift_name("geoRings")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable parentId __attribute__((swift_name("parentId")));
@property (readonly) int32_t severity __attribute__((swift_name("severity")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Position")))
@interface CommonCodePosition : CommonCodeBase
- (instancetype)initWithLat:(double)lat lon:(double)lon __attribute__((swift_name("init(lat:lon:)"))) __attribute__((objc_designated_initializer));
- (double)component1 __attribute__((swift_name("component1()")));
- (double)component2 __attribute__((swift_name("component2()")));
- (CommonCodePosition *)doCopyLat:(double)lat lon:(double)lon __attribute__((swift_name("doCopy(lat:lon:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (NSString *)toStringSeparator:(NSString *)separator __attribute__((swift_name("toString(separator:)")));
@property (readonly) double lat __attribute__((swift_name("lat")));
@property (readonly) double lon __attribute__((swift_name("lon")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Position.Companion")))
@interface CommonCodePositionCompanion : CommonCodeBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (CommonCodePosition * _Nullable)createValue:(NSString *)value separator:(NSString *)separator __attribute__((swift_name("create(value:separator:)")));
- (id<CommonCodeKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DistrictRegion")))
@interface CommonCodeDistrictRegion : CommonCodeBase
- (instancetype)initWithId:(NSString *)id stateId:(NSString *)stateId name:(NSString *)name geoRing:(NSArray<NSArray<CommonCodePosition *> *> *)geoRing __attribute__((swift_name("init(id:stateId:name:geoRing:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSArray<NSArray<CommonCodePosition *> *> *)component4 __attribute__((swift_name("component4()")));
- (CommonCodeDistrictRegion *)doCopyId:(NSString *)id stateId:(NSString *)stateId name:(NSString *)name geoRing:(NSArray<NSArray<CommonCodePosition *> *> *)geoRing __attribute__((swift_name("doCopy(id:stateId:name:geoRing:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSArray<CommonCodePosition *> *> *geoRing __attribute__((swift_name("geoRing")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *stateId __attribute__((swift_name("stateId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DistrictRegion.Companion")))
@interface CommonCodeDistrictRegionCompanion : CommonCodeBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<CommonCodeKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("JsonDistrictsParser")))
@protocol CommonCodeJsonDistrictsParser
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)parseDistrictsWithCompletionHandler:(void (^)(NSArray<CommonCodeDistrictRegion *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("parseDistricts(completionHandler:)")));
@end;

__attribute__((swift_name("JsonStatesParser")))
@protocol CommonCodeJsonStatesParser
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)parseStatesWithCompletionHandler:(void (^)(NSArray<CommonCodeStateRegion *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("parseStates(completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StateRegion")))
@interface CommonCodeStateRegion : CommonCodeBase
- (instancetype)initWithId:(NSString *)id name:(NSString *)name geoRing:(NSArray<NSArray<CommonCodePosition *> *> *)geoRing __attribute__((swift_name("init(id:name:geoRing:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSArray<NSArray<CommonCodePosition *> *> *)component3 __attribute__((swift_name("component3()")));
- (CommonCodeStateRegion *)doCopyId:(NSString *)id name:(NSString *)name geoRing:(NSArray<NSArray<CommonCodePosition *> *> *)geoRing __attribute__((swift_name("doCopy(id:name:geoRing:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSArray<CommonCodePosition *> *> *geoRing __attribute__((swift_name("geoRing")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StateRegion.Companion")))
@interface CommonCodeStateRegionCompanion : CommonCodeBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<CommonCodeKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("CreateMapRegionsUseCase")))
@protocol CommonCodeCreateMapRegionsUseCase
@required

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (void)invokeWithCompletionHandler:(void (^)(CommonCodeKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end;

__attribute__((swift_name("GetMapRegionIdByPositionUseCase")))
@protocol CommonCodeGetMapRegionIdByPositionUseCase
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokePosition:(CommonCodePosition *)position completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(position:completionHandler:)")));
@end;

__attribute__((swift_name("GetMapRegionInfoUseCase")))
@protocol CommonCodeGetMapRegionInfoUseCase
@required

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (void)invokeRegionId:(NSString *)regionId timestampSec:(int64_t)timestampSec completionHandler:(void (^)(CommonCodeMapRegionInfo * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(regionId:timestampSec:completionHandler:)")));
@end;

__attribute__((swift_name("GetMapRegionsUseCase")))
@protocol CommonCodeGetMapRegionsUseCase
@required

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (void)invokeMapRegionBox:(CommonCodeMapRegionBox *)mapRegionBox timestampSec:(int64_t)timestampSec completionHandler:(void (^)(NSArray<CommonCodeMapRegion *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(mapRegionBox:timestampSec:completionHandler:)")));
@end;

__attribute__((swift_name("GetMapRegionsWithGeometryUseCase")))
@protocol CommonCodeGetMapRegionsWithGeometryUseCase
@required
- (id<CommonCodeKotlinx_coroutines_coreJob>)getMapRegionsMapRegionBox:(CommonCodeMapRegionBox *)mapRegionBox timestampSec:(int64_t)timestampSec onResult:(void (^)(NSArray<CommonCodeMapRegionWithGeometry *> *))onResult onError:(void (^)(CommonCodeKotlinThrowable *))onError __attribute__((swift_name("getMapRegions(mapRegionBox:timestampSec:onResult:onError:)")));

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (void)invokeMapRegionBox:(CommonCodeMapRegionBox *)mapRegionBox timestampSec:(int64_t)timestampSec completionHandler:(void (^)(NSArray<CommonCodeMapRegionWithGeometry *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(mapRegionBox:timestampSec:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VisitsUseCaseFactory")))
@interface CommonCodeVisitsUseCaseFactory : CommonCodeBase
- (instancetype)initWithDatabaseWrapper:(CommonCodeDatabaseWrapper *)databaseWrapper __attribute__((swift_name("init(databaseWrapper:)"))) __attribute__((objc_designated_initializer));
- (id<CommonCodeGetLastUserLocationUseCase>)createGetLastUserLocation __attribute__((swift_name("createGetLastUserLocation()")));
- (id<CommonCodeGetUserLocationsForDayByTimestampUseCase>)createGetUserLocationsUseCase __attribute__((swift_name("createGetUserLocationsUseCase()")));
- (id<CommonCodeGetVisitsBetweenTimestampsUseCase>)createGetVisitsBetweenTimestampsUseCase __attribute__((swift_name("createGetVisitsBetweenTimestampsUseCase()")));
- (id<CommonCodeGetVisitsForDayUseCase>)createGetVisitsForDayUseCase __attribute__((swift_name("createGetVisitsForDayUseCase()")));
- (id<CommonCodeObserveVisitsUseCase>)createObserveVisitsUseCase __attribute__((swift_name("createObserveVisitsUseCase()")));
- (id<CommonCodeSaveUserLocationsUseCase>)createSaveUserLocationsUseCase __attribute__((swift_name("createSaveUserLocationsUseCase()")));
- (id<CommonCodeUpdateVisitsUseCase>)createUpdateVisitsUseCase __attribute__((swift_name("createUpdateVisitsUseCase()")));
- (id<CommonCodeDebugRecalculateVisitsUseCase>)debugCreateRecalculateVisitsUseCase __attribute__((swift_name("debugCreateRecalculateVisitsUseCase()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserLocation")))
@interface CommonCodeUserLocation : CommonCodeBase
- (instancetype)initWithPosition:(CommonCodePosition *)position timestampSec:(int64_t)timestampSec __attribute__((swift_name("init(position:timestampSec:)"))) __attribute__((objc_designated_initializer));
- (CommonCodePosition *)component1 __attribute__((swift_name("component1()")));
- (int64_t)component2 __attribute__((swift_name("component2()")));
- (CommonCodeUserLocation *)doCopyPosition:(CommonCodePosition *)position timestampSec:(int64_t)timestampSec __attribute__((swift_name("doCopy(position:timestampSec:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CommonCodePosition *position __attribute__((swift_name("position")));
@property (readonly) int64_t timestampSec __attribute__((swift_name("timestampSec")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Visit")))
@interface CommonCodeVisit : CommonCodeBase
- (instancetype)initWithId:(int64_t)id position:(CommonCodePosition *)position startTimestamp:(int64_t)startTimestamp endTimestamp:(int64_t)endTimestamp __attribute__((swift_name("init(id:position:startTimestamp:endTimestamp:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (CommonCodePosition *)component2 __attribute__((swift_name("component2()")));
- (int64_t)component3 __attribute__((swift_name("component3()")));
- (int64_t)component4 __attribute__((swift_name("component4()")));
- (CommonCodeVisit *)doCopyId:(int64_t)id position:(CommonCodePosition *)position startTimestamp:(int64_t)startTimestamp endTimestamp:(int64_t)endTimestamp __attribute__((swift_name("doCopy(id:position:startTimestamp:endTimestamp:)")));
- (int64_t)durationSec __attribute__((swift_name("durationSec()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t endTimestamp __attribute__((swift_name("endTimestamp")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) CommonCodePosition *position __attribute__((swift_name("position")));
@property (readonly) int64_t startTimestamp __attribute__((swift_name("startTimestamp")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Visit.Companion")))
@interface CommonCodeVisitCompanion : CommonCodeBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<CommonCodeKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) int64_t MIN_VISIT_DURATION_SEC __attribute__((swift_name("MIN_VISIT_DURATION_SEC")));
@end;

__attribute__((swift_name("DebugRecalculateVisitsUseCase")))
@protocol CommonCodeDebugRecalculateVisitsUseCase
@required

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (void)invokeWithCompletionHandler:(void (^)(CommonCodeKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DebugRecalculateVisitsUseCaseImpl")))
@interface CommonCodeDebugRecalculateVisitsUseCaseImpl : CommonCodeBase <CommonCodeDebugRecalculateVisitsUseCase>
- (instancetype)initWithGetUserLocationsForDayByTimestampUseCase:(id<CommonCodeGetUserLocationsForDayByTimestampUseCase>)getUserLocationsForDayByTimestampUseCase updateVisitsUseCase:(id<CommonCodeUpdateVisitsUseCase>)updateVisitsUseCase riskMatchDbApi:(id<CommonCodeRiskMatchDbApi>)riskMatchDbApi visitsDbApi:(id<CommonCodeVisitsDbApi>)visitsDbApi __attribute__((swift_name("init(getUserLocationsForDayByTimestampUseCase:updateVisitsUseCase:riskMatchDbApi:visitsDbApi:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (void)invokeWithCompletionHandler:(void (^)(CommonCodeKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end;

__attribute__((swift_name("GetVisitsBetweenTimestampsUseCase")))
@protocol CommonCodeGetVisitsBetweenTimestampsUseCase
@required

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (void)invokeStartTimestampSec:(int64_t)startTimestampSec endTimestampSec:(int64_t)endTimestampSec minimalVisitDuration:(int64_t)minimalVisitDuration completionHandler:(void (^)(NSArray<CommonCodeVisit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(startTimestampSec:endTimestampSec:minimalVisitDuration:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetVisitsBetweenTimestampsUseCaseImpl")))
@interface CommonCodeGetVisitsBetweenTimestampsUseCaseImpl : CommonCodeBase <CommonCodeGetVisitsBetweenTimestampsUseCase>
- (instancetype)initWithVisitsDbApi:(id<CommonCodeVisitsDbApi>)visitsDbApi __attribute__((swift_name("init(visitsDbApi:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (void)invokeStartTimestampSec:(int64_t)startTimestampSec endTimestampSec:(int64_t)endTimestampSec minimalVisitDuration:(int64_t)minimalVisitDuration completionHandler:(void (^)(NSArray<CommonCodeVisit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(startTimestampSec:endTimestampSec:minimalVisitDuration:completionHandler:)")));
@end;

__attribute__((swift_name("GetVisitsForDayUseCase")))
@protocol CommonCodeGetVisitsForDayUseCase
@required

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (void)invokeTimestampSec:(int64_t)timestampSec minimalVisitDuration:(int64_t)minimalVisitDuration completionHandler:(void (^)(NSArray<CommonCodeVisit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(timestampSec:minimalVisitDuration:completionHandler:)")));
@end;

__attribute__((swift_name("ObserveVisitsUseCase")))
@protocol CommonCodeObserveVisitsUseCase
@required
- (id<CommonCodeKotlinx_coroutines_coreFlow>)invokeFromTimestampSec:(int64_t)fromTimestampSec minimalVisitDuration:(int64_t)minimalVisitDuration __attribute__((swift_name("invoke(fromTimestampSec:minimalVisitDuration:)")));
@end;

__attribute__((swift_name("UpdateVisitsUseCase")))
@protocol CommonCodeUpdateVisitsUseCase
@required

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (void)invokeUserLocation:(CommonCodeUserLocation *)userLocation completionHandler:(void (^)(CommonCodeKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(userLocation:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpdateVisitsUseCaseImpl")))
@interface CommonCodeUpdateVisitsUseCaseImpl : CommonCodeBase <CommonCodeUpdateVisitsUseCase>
- (instancetype)initWithVisitsDbApi:(id<CommonCodeVisitsDbApi>)visitsDbApi __attribute__((swift_name("init(visitsDbApi:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (void)invokeUserLocation:(CommonCodeUserLocation *)userLocation completionHandler:(void (^)(CommonCodeKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(userLocation:completionHandler:)")));
@end;

__attribute__((swift_name("GetLastUserLocationUseCase")))
@protocol CommonCodeGetLastUserLocationUseCase
@required

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (void)invokeWithCompletionHandler:(void (^)(CommonCodeUserLocation * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetLastUserLocationUseCaseImpl")))
@interface CommonCodeGetLastUserLocationUseCaseImpl : CommonCodeBase <CommonCodeGetLastUserLocationUseCase>
- (instancetype)initWithUserLocationsDbApi:(id<CommonCodeUserLocationsDbApi>)userLocationsDbApi __attribute__((swift_name("init(userLocationsDbApi:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (void)invokeWithCompletionHandler:(void (^)(CommonCodeUserLocation * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end;

__attribute__((swift_name("GetUserLocationsForDayByTimestampUseCase")))
@protocol CommonCodeGetUserLocationsForDayByTimestampUseCase
@required

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (void)invokeByTimeStamp:(int64_t)byTimeStamp completionHandler:(void (^)(NSArray<CommonCodeUserLocation *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(byTimeStamp:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetUserLocationsForDayByTimestampUseCaseImpl")))
@interface CommonCodeGetUserLocationsForDayByTimestampUseCaseImpl : CommonCodeBase <CommonCodeGetUserLocationsForDayByTimestampUseCase>
- (instancetype)initWithUserLocationsDbApi:(id<CommonCodeUserLocationsDbApi>)userLocationsDbApi __attribute__((swift_name("init(userLocationsDbApi:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (void)invokeByTimeStamp:(int64_t)byTimeStamp completionHandler:(void (^)(NSArray<CommonCodeUserLocation *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(byTimeStamp:completionHandler:)")));
@end;

__attribute__((swift_name("SaveUserLocationsUseCase")))
@protocol CommonCodeSaveUserLocationsUseCase
@required

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (void)invokeLocations:(NSArray<CommonCodeUserLocation *> *)locations completionHandler:(void (^)(CommonCodeKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(locations:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SaveUserLocationsUseCaseImpl")))
@interface CommonCodeSaveUserLocationsUseCaseImpl : CommonCodeBase <CommonCodeSaveUserLocationsUseCase>
- (instancetype)initWithUserLocationsDbApi:(id<CommonCodeUserLocationsDbApi>)userLocationsDbApi updateVisitsUseCase:(id<CommonCodeUpdateVisitsUseCase>)updateVisitsUseCase __attribute__((swift_name("init(userLocationsDbApi:updateVisitsUseCase:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (void)invokeLocations:(NSArray<CommonCodeUserLocation *> *)locations completionHandler:(void (^)(CommonCodeKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(locations:completionHandler:)")));
@end;

__attribute__((swift_name("UserLocationsDbApi")))
@protocol CommonCodeUserLocationsDbApi
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)addUserLocationsUserLocations:(NSArray<CommonCodeUserLocation *> *)userLocations completionHandler:(void (^)(CommonCodeKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("addUserLocations(userLocations:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteUserLocationsBeforeTimestampTimestampSec:(int64_t)timestampSec completionHandler:(void (^)(CommonCodeKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("deleteUserLocationsBeforeTimestamp(timestampSec:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getLastUserLocationWithCompletionHandler:(void (^)(CommonCodeUserLocation * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getLastUserLocation(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUserLocationsBetweenTimestampStartTimestampSec:(int64_t)startTimestampSec endTimestampSec:(int64_t)endTimestampSec completionHandler:(void (^)(NSArray<CommonCodeUserLocation *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getUserLocationsBetweenTimestamp(startTimestampSec:endTimestampSec:completionHandler:)")));
- (id<CommonCodeKotlinx_coroutines_coreFlow>)observeUserLocationsForTodayTimestampSecNow:(int64_t)timestampSecNow __attribute__((swift_name("observeUserLocationsForToday(timestampSecNow:)")));
@end;

__attribute__((swift_name("VisitsDbApi")))
@protocol CommonCodeVisitsDbApi
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteVisitsBeforeTimestampTimestampSec:(int64_t)timestampSec completionHandler:(void (^)(CommonCodeKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("deleteVisitsBeforeTimestamp(timestampSec:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getLastVisitWithCompletionHandler:(void (^)(CommonCodeVisit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getLastVisit(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getVisitBeforeVisitWithIdId:(int64_t)id minDuration:(int64_t)minDuration completionHandler:(void (^)(CommonCodeVisit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getVisitBeforeVisitWithId(id:minDuration:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getVisitsAfterTimestampSec:(int64_t)timestampSec minVisitDurationSec:(int64_t)minVisitDurationSec completionHandler:(void (^)(NSArray<CommonCodeVisit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getVisitsAfter(timestampSec:minVisitDurationSec:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getVisitsBetweenStartTimestampSec:(int64_t)startTimestampSec endTimestampSec:(int64_t)endTimestampSec minVisitDurationSec:(int64_t)minVisitDurationSec completionHandler:(void (^)(NSArray<CommonCodeVisit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getVisitsBetween(startTimestampSec:endTimestampSec:minVisitDurationSec:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)insertVisitVisit:(CommonCodeVisit *)visit completionHandler:(void (^)(CommonCodeKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("insertVisit(visit:completionHandler:)")));
- (id<CommonCodeKotlinx_coroutines_coreFlow>)observeVisitsTimestampSecDayStart:(int64_t)timestampSecDayStart minVisitDurationSec:(int64_t)minVisitDurationSec __attribute__((swift_name("observeVisits(timestampSecDayStart:minVisitDurationSec:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateVisitVisit:(CommonCodeVisit *)visit completionHandler:(void (^)(CommonCodeKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("updateVisit(visit:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MapRegionsCasesUseCaseFactory")))
@interface CommonCodeMapRegionsCasesUseCaseFactory : CommonCodeBase
- (instancetype)initWithEndpoints:(CommonCodeEndpoints *)endpoints databaseWrapper:(CommonCodeDatabaseWrapper *)databaseWrapper __attribute__((swift_name("init(endpoints:databaseWrapper:)"))) __attribute__((objc_designated_initializer));
- (id<CommonCodeGetMapRegionCasesLegendUseCase>)createGetLegendUseCase __attribute__((swift_name("createGetLegendUseCase()")));
- (id<CommonCodeGetMapRegionCasesByTimestampUseCase>)createGetRegionCases __attribute__((swift_name("createGetRegionCases()")));
- (id<CommonCodeGetMapStatesCasesByTimestampUseCase>)createGetStatesCases __attribute__((swift_name("createGetStatesCases()")));
- (id<CommonCodeSaveMapRegionsCasesByTimestampSecUseCase>)createSaveCases __attribute__((swift_name("createSaveCases()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MapRegionCase")))
@interface CommonCodeMapRegionCase : CommonCodeBase
- (instancetype)initWithAreaId:(NSString *)areaId stateId:(CommonCodeInt * _Nullable)stateId severity:(int32_t)severity numberOfCases:(float)numberOfCases informationUrl:(NSString * _Nullable)informationUrl __attribute__((swift_name("init(areaId:stateId:severity:numberOfCases:informationUrl:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (CommonCodeInt * _Nullable)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (float)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (CommonCodeMapRegionCase *)doCopyAreaId:(NSString *)areaId stateId:(CommonCodeInt * _Nullable)stateId severity:(int32_t)severity numberOfCases:(float)numberOfCases informationUrl:(NSString * _Nullable)informationUrl __attribute__((swift_name("doCopy(areaId:stateId:severity:numberOfCases:informationUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *areaId __attribute__((swift_name("areaId")));
@property (readonly) NSString * _Nullable informationUrl __attribute__((swift_name("informationUrl")));
@property float numberOfCases __attribute__((swift_name("numberOfCases")));
@property (readonly) int32_t severity __attribute__((swift_name("severity")));
@property (readonly) CommonCodeInt * _Nullable stateId __attribute__((swift_name("stateId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MapRegionCase.Companion")))
@interface CommonCodeMapRegionCaseCompanion : CommonCodeBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<CommonCodeKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MapRegionCaseCacheKey")))
@interface CommonCodeMapRegionCaseCacheKey : CommonCodeBase
- (instancetype)initWithTimestampSec:(int64_t)timestampSec eTag:(NSString *)eTag __attribute__((swift_name("init(timestampSec:eTag:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (CommonCodeMapRegionCaseCacheKey *)doCopyTimestampSec:(int64_t)timestampSec eTag:(NSString *)eTag __attribute__((swift_name("doCopy(timestampSec:eTag:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *eTag __attribute__((swift_name("eTag")));
@property (readonly) int64_t timestampSec __attribute__((swift_name("timestampSec")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MapRegionLegend")))
@interface CommonCodeMapRegionLegend : CommonCodeBase
- (instancetype)initWithName:(NSString *)name items:(NSArray<CommonCodeMapRegionLegendItem *> *)items __attribute__((swift_name("init(name:items:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSArray<CommonCodeMapRegionLegendItem *> *)component2 __attribute__((swift_name("component2()")));
- (CommonCodeMapRegionLegend *)doCopyName:(NSString *)name items:(NSArray<CommonCodeMapRegionLegendItem *> *)items __attribute__((swift_name("doCopy(name:items:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<CommonCodeMapRegionLegendItem *> *items __attribute__((swift_name("items")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MapRegionLegend.Companion")))
@interface CommonCodeMapRegionLegendCompanion : CommonCodeBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<CommonCodeKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MapRegionLegendItem")))
@interface CommonCodeMapRegionLegendItem : CommonCodeBase
- (instancetype)initWithSeverity:(int32_t)severity info:(NSString *)info color:(NSString *)color isRisky:(BOOL)isRisky __attribute__((swift_name("init(severity:info:color:isRisky:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (BOOL)component4 __attribute__((swift_name("component4()")));
- (CommonCodeMapRegionLegendItem *)doCopySeverity:(int32_t)severity info:(NSString *)info color:(NSString *)color isRisky:(BOOL)isRisky __attribute__((swift_name("doCopy(severity:info:color:isRisky:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *color __attribute__((swift_name("color")));
@property (readonly) NSString *info __attribute__((swift_name("info")));
@property BOOL isRisky __attribute__((swift_name("isRisky")));
@property (readonly) int32_t severity __attribute__((swift_name("severity")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MapRegionLegendItem.Companion")))
@interface CommonCodeMapRegionLegendItemCompanion : CommonCodeBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<CommonCodeKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MapStateCase")))
@interface CommonCodeMapStateCase : CommonCodeBase
- (instancetype)initWithInformationUrl:(NSString * _Nullable)informationUrl stateId:(int32_t)stateId severity:(int32_t)severity numberOfCases:(float)numberOfCases __attribute__((swift_name("init(informationUrl:stateId:severity:numberOfCases:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (float)component4 __attribute__((swift_name("component4()")));
- (CommonCodeMapStateCase *)doCopyInformationUrl:(NSString * _Nullable)informationUrl stateId:(int32_t)stateId severity:(int32_t)severity numberOfCases:(float)numberOfCases __attribute__((swift_name("doCopy(informationUrl:stateId:severity:numberOfCases:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable informationUrl __attribute__((swift_name("informationUrl")));
@property float numberOfCases __attribute__((swift_name("numberOfCases")));
@property (readonly) int32_t severity __attribute__((swift_name("severity")));
@property (readonly) int32_t stateId __attribute__((swift_name("stateId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MapStateCase.Companion")))
@interface CommonCodeMapStateCaseCompanion : CommonCodeBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<CommonCodeKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("CasesDbApi")))
@protocol CommonCodeCasesDbApi
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteCasesCacheBeforeTimestampTimestampSec:(int64_t)timestampSec completionHandler:(void (^)(CommonCodeKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("deleteCasesCacheBeforeTimestamp(timestampSec:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteMapRegionLegendWithCompletionHandler:(void (^)(CommonCodeKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("deleteMapRegionLegend(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)loadMapRegionCasesBetweenTimestampsStartTimestampSec:(int64_t)startTimestampSec endTimestampSec:(int64_t)endTimestampSec completionHandler:(void (^)(NSArray<CommonCodeMapRegionCase *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("loadMapRegionCasesBetweenTimestamps(startTimestampSec:endTimestampSec:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)loadMapRegionCasesByTimestampTimestampSec:(int64_t)timestampSec completionHandler:(void (^)(NSArray<CommonCodeMapRegionCase *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("loadMapRegionCasesByTimestamp(timestampSec:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)loadMapRegionCasesCacheKeyDayStartTimestampSec:(int64_t)dayStartTimestampSec completionHandler:(void (^)(CommonCodeMapRegionCaseCacheKey * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("loadMapRegionCasesCacheKey(dayStartTimestampSec:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)loadMapRegionLegendWithCompletionHandler:(void (^)(CommonCodeMapRegionLegend * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("loadMapRegionLegend(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)loadMapStatesCasesBetweenTimestampsStartTimestampSec:(int64_t)startTimestampSec endTimestampSec:(int64_t)endTimestampSec completionHandler:(void (^)(NSArray<CommonCodeMapStateCase *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("loadMapStatesCasesBetweenTimestamps(startTimestampSec:endTimestampSec:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)loadMapStatesCasesByTimestampTimestampSec:(int64_t)timestampSec completionHandler:(void (^)(NSArray<CommonCodeMapStateCase *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("loadMapStatesCasesByTimestamp(timestampSec:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)saveMapRegionCasesMapRegionCases:(NSArray<CommonCodeMapRegionCase *> *)mapRegionCases timestampSec:(int64_t)timestampSec completionHandler:(void (^)(CommonCodeKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("saveMapRegionCases(mapRegionCases:timestampSec:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)saveMapRegionCasesCacheKeyCacheKey:(CommonCodeMapRegionCaseCacheKey *)cacheKey completionHandler:(void (^)(CommonCodeKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("saveMapRegionCasesCacheKey(cacheKey:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)saveMapRegionLegendLegend:(CommonCodeMapRegionLegend *)legend completionHandler:(void (^)(CommonCodeKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("saveMapRegionLegend(legend:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)saveMapStatesCasesMapRegionCases:(NSArray<CommonCodeMapStateCase *> *)mapRegionCases timestampSec:(int64_t)timestampSec completionHandler:(void (^)(CommonCodeKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("saveMapStatesCases(mapRegionCases:timestampSec:completionHandler:)")));
@end;

__attribute__((swift_name("CasesNetworkApi")))
@protocol CommonCodeCasesNetworkApi
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getMapRegionCasesByTimestampSecTimestampSec:(int64_t)timestampSec completionHandler:(void (^)(CommonCodeKotlinPair<NSArray<CommonCodeMapRegionCase *> *, CommonCodeMapRegionCaseCacheKey *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getMapRegionCasesByTimestampSec(timestampSec:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getMapRegionCasesCacheKeyTimestampSec:(int64_t)timestampSec completionHandler:(void (^)(CommonCodeMapRegionCaseCacheKey * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getMapRegionCasesCacheKey(timestampSec:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getMapRegionCasesLegendWithCompletionHandler:(void (^)(CommonCodeMapRegionLegend * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getMapRegionCasesLegend(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getMapStatesCasesByTimestampSecTimestampSec:(int64_t)timestampSec completionHandler:(void (^)(NSArray<CommonCodeMapStateCase *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getMapStatesCasesByTimestampSec(timestampSec:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Endpoints")))
@interface CommonCodeEndpoints : CommonCodeBase
- (instancetype)initWithMapStatesCases:(id<CommonCodeNetworkParametersSendStrategy>)mapStatesCases mapRegionCases:(id<CommonCodeNetworkParametersSendStrategy>)mapRegionCases mapRegionCasesLegend:(id<CommonCodeNetworkParametersSendStrategy>)mapRegionCasesLegend __attribute__((swift_name("init(mapStatesCases:mapRegionCases:mapRegionCasesLegend:)"))) __attribute__((objc_designated_initializer));
- (CommonCodeEndpoints *)doCopyMapStatesCases:(id<CommonCodeNetworkParametersSendStrategy>)mapStatesCases mapRegionCases:(id<CommonCodeNetworkParametersSendStrategy>)mapRegionCases mapRegionCasesLegend:(id<CommonCodeNetworkParametersSendStrategy>)mapRegionCasesLegend __attribute__((swift_name("doCopy(mapStatesCases:mapRegionCases:mapRegionCasesLegend:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)mapRegionCasesURLTimestampSec:(int64_t)timestampSec __attribute__((swift_name("mapRegionCasesURL(timestampSec:)")));
- (NSString *)mapStatesCasesURLTimestampSec:(int64_t)timestampSec __attribute__((swift_name("mapStatesCasesURL(timestampSec:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *mapRegionCasesLegendURL __attribute__((swift_name("mapRegionCasesLegendURL")));
@end;

__attribute__((swift_name("GetMapRegionCasesByTimestampUseCase")))
@protocol CommonCodeGetMapRegionCasesByTimestampUseCase
@required

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (void)invokeTimestampSec:(int64_t)timestampSec completionHandler:(void (^)(NSArray<CommonCodeMapRegionCase *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(timestampSec:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMapRegionCasesByTimestampUseCaseImpl")))
@interface CommonCodeGetMapRegionCasesByTimestampUseCaseImpl : CommonCodeBase <CommonCodeGetMapRegionCasesByTimestampUseCase>
- (instancetype)initWithCasesNetworkApi:(id<CommonCodeCasesNetworkApi>)casesNetworkApi casesDbApi:(id<CommonCodeCasesDbApi>)casesDbApi __attribute__((swift_name("init(casesNetworkApi:casesDbApi:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (void)invokeTimestampSec:(int64_t)timestampSec completionHandler:(void (^)(NSArray<CommonCodeMapRegionCase *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(timestampSec:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMapRegionCasesByTimestampUseCaseImpl.Companion")))
@interface CommonCodeGetMapRegionCasesByTimestampUseCaseImplCompanion : CommonCodeBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end;

__attribute__((swift_name("GetMapRegionCasesLegendUseCase")))
@protocol CommonCodeGetMapRegionCasesLegendUseCase
@required

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (void)invokeWithCompletionHandler:(void (^)(CommonCodeMapRegionLegend * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMapRegionCasesLegendUseCaseImpl")))
@interface CommonCodeGetMapRegionCasesLegendUseCaseImpl : CommonCodeBase <CommonCodeGetMapRegionCasesLegendUseCase>
- (instancetype)initWithCasesNetworkApi:(id<CommonCodeCasesNetworkApi>)casesNetworkApi casesDbApi:(id<CommonCodeCasesDbApi>)casesDbApi __attribute__((swift_name("init(casesNetworkApi:casesDbApi:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (void)invokeWithCompletionHandler:(void (^)(CommonCodeMapRegionLegend * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end;

__attribute__((swift_name("GetMapStatesCasesByTimestampUseCase")))
@protocol CommonCodeGetMapStatesCasesByTimestampUseCase
@required

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (void)invokeTimestampSec:(int64_t)timestampSec completionHandler:(void (^)(NSArray<CommonCodeMapStateCase *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(timestampSec:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMapStatesCasesByTimestampUseCaseImpl")))
@interface CommonCodeGetMapStatesCasesByTimestampUseCaseImpl : CommonCodeBase <CommonCodeGetMapStatesCasesByTimestampUseCase>
- (instancetype)initWithCasesNetworkApi:(id<CommonCodeCasesNetworkApi>)casesNetworkApi casesDbApi:(id<CommonCodeCasesDbApi>)casesDbApi __attribute__((swift_name("init(casesNetworkApi:casesDbApi:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (void)invokeTimestampSec:(int64_t)timestampSec completionHandler:(void (^)(NSArray<CommonCodeMapStateCase *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(timestampSec:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMapStatesCasesByTimestampUseCaseImpl.Companion")))
@interface CommonCodeGetMapStatesCasesByTimestampUseCaseImplCompanion : CommonCodeBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end;

__attribute__((swift_name("SaveMapRegionsCasesByTimestampSecUseCase")))
@protocol CommonCodeSaveMapRegionsCasesByTimestampSecUseCase
@required

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (void)invokeTimestampSec:(int64_t)timestampSec completionHandler:(void (^)(CommonCodeBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(timestampSec:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SaveMapRegionsCasesByTimestampSecUseCaseImpl")))
@interface CommonCodeSaveMapRegionsCasesByTimestampSecUseCaseImpl : CommonCodeBase <CommonCodeSaveMapRegionsCasesByTimestampSecUseCase>
- (instancetype)initWithGetMapRegionCasesByTimestampUseCase:(id<CommonCodeGetMapRegionCasesByTimestampUseCase>)getMapRegionCasesByTimestampUseCase __attribute__((swift_name("init(getMapRegionCasesByTimestampUseCase:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (void)invokeTimestampSec:(int64_t)timestampSec completionHandler:(void (^)(CommonCodeBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(timestampSec:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DebugUseCaseFactory")))
@interface CommonCodeDebugUseCaseFactory : CommonCodeBase
- (instancetype)initWithDatabaseWrapper:(CommonCodeDatabaseWrapper *)databaseWrapper __attribute__((swift_name("init(databaseWrapper:)"))) __attribute__((objc_designated_initializer));
- (id<CommonCodeGetMapRegionCasesDbgInfoUseCase>)createCasesDebugInfoUseCase __attribute__((swift_name("createCasesDebugInfoUseCase()")));
- (id<CommonCodeGetMapRegionLegendDbgInfoUseCase>)createCasesLegendDebugInfoUseCase __attribute__((swift_name("createCasesLegendDebugInfoUseCase()")));
- (id<CommonCodeGetMapRegionsDbgInfoUseCase>)createMapRegionsDebugInfoUseCase __attribute__((swift_name("createMapRegionsDebugInfoUseCase()")));
- (id<CommonCodeGetRiskMatchNotificationDbgInfoUseCase>)createRiskMatchNotificationsDebugInfoUseCase __attribute__((swift_name("createRiskMatchNotificationsDebugInfoUseCase()")));
- (id<CommonCodeGetRiskMatchDbgInfoUseCase>)createRiskMatchesDebugInfoUseCase __attribute__((swift_name("createRiskMatchesDebugInfoUseCase()")));
- (id<CommonCodeGetMapStatesCasesDbgInfoUseCase>)createStatesCasesDebugInfoUseCase __attribute__((swift_name("createStatesCasesDebugInfoUseCase()")));
- (id<CommonCodeGetUserLocationsDbgInfoUseCase>)createUserLocationsDebugInfoUseCase __attribute__((swift_name("createUserLocationsDebugInfoUseCase()")));
- (id<CommonCodeGetVisitsDbgInfoUseCase>)createVisitsDebugInfoUseCase __attribute__((swift_name("createVisitsDebugInfoUseCase()")));
@end;

__attribute__((swift_name("GetMapRegionCasesDbgInfoUseCase")))
@protocol CommonCodeGetMapRegionCasesDbgInfoUseCase
@required

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (void)invokeWithCompletionHandler:(void (^)(NSArray<CommonCodeMapRegionCaseTable *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMapRegionCasesDbgInfoUseCaseImpl")))
@interface CommonCodeGetMapRegionCasesDbgInfoUseCaseImpl : CommonCodeBase <CommonCodeGetMapRegionCasesDbgInfoUseCase>
- (instancetype)initWithDatabaseWrapper:(CommonCodeDatabaseWrapper *)databaseWrapper __attribute__((swift_name("init(databaseWrapper:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (void)invokeWithCompletionHandler:(void (^)(NSArray<CommonCodeMapRegionCaseTable *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end;

__attribute__((swift_name("GetMapRegionLegendDbgInfoUseCase")))
@protocol CommonCodeGetMapRegionLegendDbgInfoUseCase
@required

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (void)invokeWithCompletionHandler:(void (^)(NSArray<CommonCodeMapRegionCaseLegendTable *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end;

__attribute__((swift_name("GetMapRegionsDbgInfoUseCase")))
@protocol CommonCodeGetMapRegionsDbgInfoUseCase
@required

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (void)invokeWithCompletionHandler:(void (^)(NSArray<CommonCodeMapRegionTable *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end;

__attribute__((swift_name("GetMapStatesCasesDbgInfoUseCase")))
@protocol CommonCodeGetMapStatesCasesDbgInfoUseCase
@required

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (void)invokeWithCompletionHandler:(void (^)(NSArray<CommonCodeMapStatesCaseTable *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMapStatesCasesDbgInfoUseCaseImpl")))
@interface CommonCodeGetMapStatesCasesDbgInfoUseCaseImpl : CommonCodeBase <CommonCodeGetMapStatesCasesDbgInfoUseCase>
- (instancetype)initWithDatabaseWrapper:(CommonCodeDatabaseWrapper *)databaseWrapper __attribute__((swift_name("init(databaseWrapper:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (void)invokeWithCompletionHandler:(void (^)(NSArray<CommonCodeMapStatesCaseTable *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end;

__attribute__((swift_name("GetRiskMatchDbgInfoUseCase")))
@protocol CommonCodeGetRiskMatchDbgInfoUseCase
@required

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (void)invokeWithCompletionHandler:(void (^)(NSArray<CommonCodeRiskMatchTable *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end;

__attribute__((swift_name("GetRiskMatchNotificationDbgInfoUseCase")))
@protocol CommonCodeGetRiskMatchNotificationDbgInfoUseCase
@required

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (void)invokeWithCompletionHandler:(void (^)(NSArray<CommonCodeRiskMatchNotificationTable *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end;

__attribute__((swift_name("GetUserLocationsDbgInfoUseCase")))
@protocol CommonCodeGetUserLocationsDbgInfoUseCase
@required

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (void)invokeWithCompletionHandler:(void (^)(NSArray<CommonCodeUserLocationTable *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end;

__attribute__((swift_name("GetVisitsDbgInfoUseCase")))
@protocol CommonCodeGetVisitsDbgInfoUseCase
@required

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (void)invokeWithCompletionHandler:(void (^)(NSArray<CommonCodeVisitTable *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end;

__attribute__((swift_name("AppHttpClient")))
@protocol CommonCodeAppHttpClient
@required
- (CommonCodeKtor_client_coreHttpClient *)getClient __attribute__((swift_name("getClient()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkApiParameter")))
@interface CommonCodeNetworkApiParameter : CommonCodeBase
- (instancetype)initWithName:(CommonCodeNetworkApiParameterNames *)name value:(id)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
@property (readonly) CommonCodeNetworkApiParameterNames *name __attribute__((swift_name("name")));
@property (readonly) id value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkApiParameterNames")))
@interface CommonCodeNetworkApiParameterNames : CommonCodeKotlinEnum<CommonCodeNetworkApiParameterNames *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CommonCodeNetworkApiParameterNames *timestamp __attribute__((swift_name("timestamp")));
@property (class, readonly) CommonCodeNetworkApiParameterNames *language __attribute__((swift_name("language")));
+ (CommonCodeKotlinArray<CommonCodeNetworkApiParameterNames *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *parameter __attribute__((swift_name("parameter")));
@end;

__attribute__((swift_name("NetworkParametersSendStrategy")))
@protocol CommonCodeNetworkParametersSendStrategy
@required
- (NSString *)getURLParameters:(NSArray<CommonCodeNetworkApiParameter *> *)parameters __attribute__((swift_name("getURL(parameters:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NoParametersStrategy")))
@interface CommonCodeNoParametersStrategy : CommonCodeBase <CommonCodeNetworkParametersSendStrategy>
- (instancetype)initWithEndpoint:(NSString *)endpoint __attribute__((swift_name("init(endpoint:)"))) __attribute__((objc_designated_initializer));
- (NSString *)getURLParameters:(NSArray<CommonCodeNetworkApiParameter *> *)parameters __attribute__((swift_name("getURL(parameters:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TemplateParametersStrategy")))
@interface CommonCodeTemplateParametersStrategy : CommonCodeBase <CommonCodeNetworkParametersSendStrategy>
- (instancetype)initWithEndpoint:(NSString *)endpoint templates:(NSDictionary<CommonCodeNetworkApiParameterNames *, NSString *> *)templates __attribute__((swift_name("init(endpoint:templates:)"))) __attribute__((objc_designated_initializer));
- (NSString *)getURLParameters:(NSArray<CommonCodeNetworkApiParameter *> *)parameters __attribute__((swift_name("getURL(parameters:)")));
@end;

@interface CommonCodeDatabaseDriverFactory (Extensions)
- (NSString *)dbName __attribute__((swift_name("dbName()")));
@end;

@interface CommonCodeLanguage (Extensions)
@property (readonly) BOOL isEnglish __attribute__((swift_name("isEnglish")));
@property (readonly) BOOL isGerman __attribute__((swift_name("isGerman")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface CommonCodeKotlinThrowable : CommonCodeBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CommonCodeKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CommonCodeKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (CommonCodeKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CommonCodeKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end;

@interface CommonCodeKotlinThrowable (Extensions)
- (BOOL)isCanceled __attribute__((swift_name("isCanceled()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VisitAdapterKt")))
@interface CommonCodeVisitAdapterKt : CommonCodeBase
@property (class, readonly) id<CommonCodeRuntimeColumnAdapter> visitAdapter __attribute__((swift_name("visitAdapter")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DateUtilsKt")))
@interface CommonCodeDateUtilsKt : CommonCodeBase
+ (NSString *)format:(int64_t)receiver __attribute__((swift_name("format(_:)")));
@end;

__attribute__((swift_name("RuntimeTransactionCallbacks")))
@protocol CommonCodeRuntimeTransactionCallbacks
@required
- (void)afterCommitFunction:(void (^)(void))function __attribute__((swift_name("afterCommit(function:)")));
- (void)afterRollbackFunction:(void (^)(void))function __attribute__((swift_name("afterRollback(function:)")));
@end;

__attribute__((swift_name("RuntimeTransactionWithoutReturn")))
@protocol CommonCodeRuntimeTransactionWithoutReturn <CommonCodeRuntimeTransactionCallbacks>
@required
- (void)rollback __attribute__((swift_name("rollback()")));
- (void)transactionBody:(void (^)(id<CommonCodeRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(body:)")));
@end;

__attribute__((swift_name("RuntimeTransactionWithReturn")))
@protocol CommonCodeRuntimeTransactionWithReturn <CommonCodeRuntimeTransactionCallbacks>
@required
- (void)rollbackReturnValue:(id _Nullable)returnValue __attribute__((swift_name("rollback(returnValue:)")));
- (id _Nullable)transactionBody_:(id _Nullable (^)(id<CommonCodeRuntimeTransactionWithReturn>))body __attribute__((swift_name("transaction(body_:)")));
@end;

__attribute__((swift_name("RuntimeCloseable")))
@protocol CommonCodeRuntimeCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((swift_name("RuntimeSqlDriver")))
@protocol CommonCodeRuntimeSqlDriver <CommonCodeRuntimeCloseable>
@required
- (CommonCodeRuntimeTransacterTransaction * _Nullable)currentTransaction __attribute__((swift_name("currentTransaction()")));
- (void)executeIdentifier:(CommonCodeInt * _Nullable)identifier sql:(NSString *)sql parameters:(int32_t)parameters binders:(void (^ _Nullable)(id<CommonCodeRuntimeSqlPreparedStatement>))binders __attribute__((swift_name("execute(identifier:sql:parameters:binders:)")));
- (id<CommonCodeRuntimeSqlCursor>)executeQueryIdentifier:(CommonCodeInt * _Nullable)identifier sql:(NSString *)sql parameters:(int32_t)parameters binders:(void (^ _Nullable)(id<CommonCodeRuntimeSqlPreparedStatement>))binders __attribute__((swift_name("executeQuery(identifier:sql:parameters:binders:)")));
- (CommonCodeRuntimeTransacterTransaction *)doNewTransaction __attribute__((swift_name("doNewTransaction()")));
@end;

__attribute__((swift_name("RuntimeSqlDriverSchema")))
@protocol CommonCodeRuntimeSqlDriverSchema
@required
- (void)createDriver:(id<CommonCodeRuntimeSqlDriver>)driver __attribute__((swift_name("create(driver:)")));
- (void)migrateDriver:(id<CommonCodeRuntimeSqlDriver>)driver oldVersion:(int32_t)oldVersion newVersion:(int32_t)newVersion __attribute__((swift_name("migrate(driver:oldVersion:newVersion:)")));
@property (readonly) int32_t version __attribute__((swift_name("version")));
@end;

__attribute__((swift_name("RuntimeColumnAdapter")))
@protocol CommonCodeRuntimeColumnAdapter
@required
- (id)decodeDatabaseValue:(id _Nullable)databaseValue __attribute__((swift_name("decode(databaseValue:)")));
- (id _Nullable)encodeValue:(id)value __attribute__((swift_name("encode(value:)")));
@end;

__attribute__((swift_name("RuntimeQuery")))
@interface CommonCodeRuntimeQuery<__covariant RowType> : CommonCodeBase
- (instancetype)initWithQueries:(NSMutableArray<CommonCodeRuntimeQuery<id> *> *)queries mapper:(RowType (^)(id<CommonCodeRuntimeSqlCursor>))mapper __attribute__((swift_name("init(queries:mapper:)"))) __attribute__((objc_designated_initializer));
- (void)addListenerListener:(id<CommonCodeRuntimeQueryListener>)listener __attribute__((swift_name("addListener(listener:)")));
- (id<CommonCodeRuntimeSqlCursor>)execute __attribute__((swift_name("execute()")));
- (NSArray<RowType> *)executeAsList __attribute__((swift_name("executeAsList()")));
- (RowType)executeAsOne __attribute__((swift_name("executeAsOne()")));
- (RowType _Nullable)executeAsOneOrNull __attribute__((swift_name("executeAsOneOrNull()")));
- (void)notifyDataChanged __attribute__((swift_name("notifyDataChanged()")));
- (void)removeListenerListener:(id<CommonCodeRuntimeQueryListener>)listener __attribute__((swift_name("removeListener(listener:)")));
@property (readonly) RowType (^mapper)(id<CommonCodeRuntimeSqlCursor>) __attribute__((swift_name("mapper")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface CommonCodeKotlinArray<T> : CommonCodeBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(CommonCodeInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<CommonCodeKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("KotlinException")))
@interface CommonCodeKotlinException : CommonCodeKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CommonCodeKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CommonCodeKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface CommonCodeKotlinRuntimeException : CommonCodeKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CommonCodeKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CommonCodeKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinIllegalStateException")))
@interface CommonCodeKotlinIllegalStateException : CommonCodeKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CommonCodeKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CommonCodeKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinCancellationException")))
@interface CommonCodeKotlinCancellationException : CommonCodeKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CommonCodeKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CommonCodeKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface CommonCodeKotlinUnit : CommonCodeBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol CommonCodeKotlinx_coroutines_coreFlow
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<CommonCodeKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(CommonCodeKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end;

__attribute__((swift_name("KotlinCoroutineContext")))
@protocol CommonCodeKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<CommonCodeKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<CommonCodeKotlinCoroutineContextElement> _Nullable)getKey:(id<CommonCodeKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<CommonCodeKotlinCoroutineContext>)minusKeyKey:(id<CommonCodeKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<CommonCodeKotlinCoroutineContext>)plusContext:(id<CommonCodeKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end;

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol CommonCodeKotlinCoroutineContextElement <CommonCodeKotlinCoroutineContext>
@required
@property (readonly) id<CommonCodeKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol CommonCodeKotlinx_coroutines_coreJob <CommonCodeKotlinCoroutineContextElement>
@required
- (id<CommonCodeKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<CommonCodeKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause:(CommonCodeKotlinx_coroutines_coreCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (CommonCodeKotlinx_coroutines_coreCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<CommonCodeKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(CommonCodeKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));
- (id<CommonCodeKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(CommonCodeKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(CommonCodeKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<CommonCodeKotlinx_coroutines_coreJob>)plusOther:(id<CommonCodeKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<CommonCodeKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<CommonCodeKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol CommonCodeKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<CommonCodeKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<CommonCodeKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol CommonCodeKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<CommonCodeKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<CommonCodeKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol CommonCodeKotlinx_serialization_coreKSerializer <CommonCodeKotlinx_serialization_coreSerializationStrategy, CommonCodeKotlinx_serialization_coreDeserializationStrategy>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinPair")))
@interface CommonCodeKotlinPair<__covariant A, __covariant B> : CommonCodeBase
- (instancetype)initWithFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("init(first:second:)"))) __attribute__((objc_designated_initializer));
- (A _Nullable)component1 __attribute__((swift_name("component1()")));
- (B _Nullable)component2 __attribute__((swift_name("component2()")));
- (CommonCodeKotlinPair<A, B> *)doCopyFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("doCopy(first:second:)")));
- (BOOL)equalsOther:(id _Nullable)other __attribute__((swift_name("equals(other:)")));
- (int32_t)hashCode __attribute__((swift_name("hashCode()")));
- (NSString *)toString __attribute__((swift_name("toString()")));
@property (readonly) A _Nullable first __attribute__((swift_name("first")));
@property (readonly) B _Nullable second __attribute__((swift_name("second")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol CommonCodeKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<CommonCodeKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol CommonCodeKtor_ioCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface CommonCodeKtor_client_coreHttpClient : CommonCodeBase <CommonCodeKotlinx_coroutines_coreCoroutineScope, CommonCodeKtor_ioCloseable>
- (instancetype)initWithEngine:(id<CommonCodeKtor_client_coreHttpClientEngine>)engine userConfig:(CommonCodeKtor_client_coreHttpClientConfig<CommonCodeKtor_client_coreHttpClientEngineConfig *> *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (CommonCodeKtor_client_coreHttpClient *)configBlock:(void (^)(CommonCodeKtor_client_coreHttpClientConfig<id> *))block __attribute__((swift_name("config(block:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeBuilder:(CommonCodeKtor_client_coreHttpRequestBuilder *)builder completionHandler:(void (^)(CommonCodeKtor_client_coreHttpClientCall * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(builder:completionHandler:)"))) __attribute__((unavailable("Unbound [HttpClientCall] is deprecated. Consider using [request<HttpResponse>(builder)] instead.")));
- (BOOL)isSupportedCapability:(id<CommonCodeKtor_client_coreHttpClientEngineCapability>)capability __attribute__((swift_name("isSupported(capability:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<CommonCodeKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<CommonCodeKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) CommonCodeKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher"))) __attribute__((unavailable("[dispatcher] is deprecated. Use coroutineContext instead.")));
@property (readonly) id<CommonCodeKtor_client_coreHttpClientEngine> engine __attribute__((swift_name("engine")));
@property (readonly) CommonCodeKtor_client_coreHttpClientEngineConfig *engineConfig __attribute__((swift_name("engineConfig")));
@property (readonly) CommonCodeKtor_client_coreHttpReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));
@property (readonly) CommonCodeKtor_client_coreHttpRequestPipeline *requestPipeline __attribute__((swift_name("requestPipeline")));
@property (readonly) CommonCodeKtor_client_coreHttpResponsePipeline *responsePipeline __attribute__((swift_name("responsePipeline")));
@property (readonly) CommonCodeKtor_client_coreHttpSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
@end;

__attribute__((swift_name("RuntimeTransacterTransaction")))
@interface CommonCodeRuntimeTransacterTransaction : CommonCodeBase <CommonCodeRuntimeTransactionCallbacks>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)afterCommitFunction:(void (^)(void))function __attribute__((swift_name("afterCommit(function:)")));
- (void)afterRollbackFunction:(void (^)(void))function __attribute__((swift_name("afterRollback(function:)")));
- (void)endTransactionSuccessful:(BOOL)successful __attribute__((swift_name("endTransaction(successful:)")));
@property (readonly) CommonCodeRuntimeTransacterTransaction * _Nullable enclosingTransaction __attribute__((swift_name("enclosingTransaction")));
@end;

__attribute__((swift_name("RuntimeSqlPreparedStatement")))
@protocol CommonCodeRuntimeSqlPreparedStatement
@required
- (void)bindBytesIndex:(int32_t)index bytes:(CommonCodeKotlinByteArray * _Nullable)bytes __attribute__((swift_name("bindBytes(index:bytes:)")));
- (void)bindDoubleIndex:(int32_t)index double:(CommonCodeDouble * _Nullable)double_ __attribute__((swift_name("bindDouble(index:double:)")));
- (void)bindLongIndex:(int32_t)index long:(CommonCodeLong * _Nullable)long_ __attribute__((swift_name("bindLong(index:long:)")));
- (void)bindStringIndex:(int32_t)index string:(NSString * _Nullable)string __attribute__((swift_name("bindString(index:string:)")));
@end;

__attribute__((swift_name("RuntimeSqlCursor")))
@protocol CommonCodeRuntimeSqlCursor <CommonCodeRuntimeCloseable>
@required
- (CommonCodeKotlinByteArray * _Nullable)getBytesIndex:(int32_t)index __attribute__((swift_name("getBytes(index:)")));
- (CommonCodeDouble * _Nullable)getDoubleIndex:(int32_t)index __attribute__((swift_name("getDouble(index:)")));
- (CommonCodeLong * _Nullable)getLongIndex:(int32_t)index __attribute__((swift_name("getLong(index:)")));
- (NSString * _Nullable)getStringIndex:(int32_t)index __attribute__((swift_name("getString(index:)")));
- (BOOL)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("RuntimeQueryListener")))
@protocol CommonCodeRuntimeQueryListener
@required
- (void)queryResultsChanged __attribute__((swift_name("queryResultsChanged()")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol CommonCodeKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next_ __attribute__((swift_name("next_()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol CommonCodeKotlinx_coroutines_coreFlowCollector
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(CommonCodeKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol CommonCodeKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol CommonCodeKotlinx_coroutines_coreChildHandle <CommonCodeKotlinx_coroutines_coreDisposableHandle>
@required
- (BOOL)childCancelledCause:(CommonCodeKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol CommonCodeKotlinx_coroutines_coreChildJob <CommonCodeKotlinx_coroutines_coreJob>
@required
- (void)parentCancelledParentJob:(id<CommonCodeKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCancellationException")))
@interface CommonCodeKotlinx_coroutines_coreCancellationException : CommonCodeKotlinIllegalStateException
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CommonCodeKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithCause:(CommonCodeKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinSequence")))
@protocol CommonCodeKotlinSequence
@required
- (id<CommonCodeKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol CommonCodeKotlinx_coroutines_coreSelectClause0
@required
- (void)registerSelectClause0Select:(id<CommonCodeKotlinx_coroutines_coreSelectInstance>)select block:(id<CommonCodeKotlinSuspendFunction0>)block __attribute__((swift_name("registerSelectClause0(select:block:)")));
@end;

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol CommonCodeKotlinCoroutineContextKey
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol CommonCodeKotlinx_serialization_coreEncoder
@required
- (id<CommonCodeKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<CommonCodeKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<CommonCodeKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<CommonCodeKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<CommonCodeKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<CommonCodeKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<CommonCodeKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) CommonCodeKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol CommonCodeKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<CommonCodeKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<CommonCodeKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<CommonCodeKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) CommonCodeKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol CommonCodeKotlinx_serialization_coreDecoder
@required
- (id<CommonCodeKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<CommonCodeKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<CommonCodeKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (CommonCodeKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<CommonCodeKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<CommonCodeKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) CommonCodeKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol CommonCodeKtor_client_coreHttpClientEngine <CommonCodeKotlinx_coroutines_coreCoroutineScope, CommonCodeKtor_ioCloseable>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeData:(CommonCodeKtor_client_coreHttpRequestData *)data completionHandler:(void (^)(CommonCodeKtor_client_coreHttpResponseData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(data:completionHandler:)")));
- (void)installClient:(CommonCodeKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
@property (readonly) CommonCodeKtor_client_coreHttpClientEngineConfig *config __attribute__((swift_name("config")));
@property (readonly) CommonCodeKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@property (readonly) NSSet<id<CommonCodeKtor_client_coreHttpClientEngineCapability>> *supportedCapabilities __attribute__((swift_name("supportedCapabilities")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface CommonCodeKtor_client_coreHttpClientEngineConfig : CommonCodeBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property BOOL pipelining __attribute__((swift_name("pipelining")));
@property CommonCodeKtor_client_coreProxyConfig * _Nullable proxy __attribute__((swift_name("proxy")));
@property (readonly) CommonCodeKotlinNothing *response __attribute__((swift_name("response"))) __attribute__((unavailable("Response config is deprecated. See [HttpPlainText] feature for charset configuration")));
@property int32_t threadsCount __attribute__((swift_name("threadsCount")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface CommonCodeKtor_client_coreHttpClientConfig<T> : CommonCodeBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (CommonCodeKtor_client_coreHttpClientConfig<T> *)clone __attribute__((swift_name("clone()")));
- (void)engineBlock:(void (^)(T))block __attribute__((swift_name("engine(block:)")));
- (void)installClient:(CommonCodeKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
- (void)installFeature:(id<CommonCodeKtor_client_coreHttpClientFeature>)feature configure:(void (^)(id))configure __attribute__((swift_name("install(feature:configure:)")));
- (void)installKey:(NSString *)key block:(void (^)(CommonCodeKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));
- (void)plusAssignOther:(CommonCodeKtor_client_coreHttpClientConfig<T> *)other __attribute__((swift_name("plusAssign(other:)")));
@property BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property BOOL expectSuccess __attribute__((swift_name("expectSuccess")));
@property BOOL followRedirects __attribute__((swift_name("followRedirects")));
@property BOOL useDefaultTransformers __attribute__((swift_name("useDefaultTransformers")));
@end;

__attribute__((swift_name("Ktor_httpHttpMessageBuilder")))
@protocol CommonCodeKtor_httpHttpMessageBuilder
@required
@property (readonly) CommonCodeKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder")))
@interface CommonCodeKtor_client_coreHttpRequestBuilder : CommonCodeBase <CommonCodeKtor_httpHttpMessageBuilder>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (CommonCodeKtor_client_coreHttpRequestData *)build __attribute__((swift_name("build()")));
- (id _Nullable)getCapabilityOrNullKey:(id<CommonCodeKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (void)setAttributesBlock:(void (^)(id<CommonCodeKtor_utilsAttributes>))block __attribute__((swift_name("setAttributes(block:)")));
- (void)setCapabilityKey:(id<CommonCodeKtor_client_coreHttpClientEngineCapability>)key capability:(id)capability __attribute__((swift_name("setCapability(key:capability:)")));
- (CommonCodeKtor_client_coreHttpRequestBuilder *)takeFromBuilder:(CommonCodeKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFrom(builder:)")));
- (CommonCodeKtor_client_coreHttpRequestBuilder *)takeFromWithExecutionContextBuilder:(CommonCodeKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFromWithExecutionContext(builder:)")));
- (void)urlBlock:(void (^)(CommonCodeKtor_httpURLBuilder *, CommonCodeKtor_httpURLBuilder *))block __attribute__((swift_name("url(block:)")));
@property (readonly) id<CommonCodeKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property id body __attribute__((swift_name("body")));
@property (readonly) id<CommonCodeKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) CommonCodeKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@property CommonCodeKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) CommonCodeKtor_httpURLBuilder *url __attribute__((swift_name("url")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientCall")))
@interface CommonCodeKtor_client_coreHttpClientCall : CommonCodeBase <CommonCodeKotlinx_coroutines_coreCoroutineScope>

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getResponseContentWithCompletionHandler:(void (^)(id<CommonCodeKtor_ioByteReadChannel> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getResponseContent(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)receiveInfo:(CommonCodeKtor_client_coreTypeInfo *)info completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("receive(info:completionHandler:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL allowDoubleReceive __attribute__((swift_name("allowDoubleReceive")));
@property (readonly) id<CommonCodeKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) CommonCodeKtor_client_coreHttpClient * _Nullable client __attribute__((swift_name("client")));
@property (readonly) id<CommonCodeKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<CommonCodeKtor_client_coreHttpRequest> request __attribute__((swift_name("request")));
@property (readonly) CommonCodeKtor_client_coreHttpResponse *response __attribute__((swift_name("response")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngineCapability")))
@protocol CommonCodeKtor_client_coreHttpClientEngineCapability
@required
@end;

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol CommonCodeKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(CommonCodeKtor_utilsAttributeKey<id> *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(CommonCodeKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey_:(CommonCodeKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("get(key_:)")));
- (id _Nullable)getOrNullKey:(CommonCodeKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(CommonCodeKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey:(CommonCodeKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("remove(key:)")));
- (id)takeKey:(CommonCodeKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(CommonCodeKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<CommonCodeKtor_utilsAttributeKey<id> *> *allKeys __attribute__((swift_name("allKeys")));
@end;

__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface CommonCodeKotlinAbstractCoroutineContextElement : CommonCodeBase <CommonCodeKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<CommonCodeKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<CommonCodeKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol CommonCodeKotlinContinuationInterceptor <CommonCodeKotlinCoroutineContextElement>
@required
- (id<CommonCodeKotlinContinuation>)interceptContinuationContinuation:(id<CommonCodeKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<CommonCodeKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface CommonCodeKotlinx_coroutines_coreCoroutineDispatcher : CommonCodeKotlinAbstractCoroutineContextElement <CommonCodeKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<CommonCodeKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)dispatchContext:(id<CommonCodeKotlinCoroutineContext>)context block:(id<CommonCodeKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<CommonCodeKotlinCoroutineContext>)context block:(id<CommonCodeKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<CommonCodeKotlinContinuation>)interceptContinuationContinuation:(id<CommonCodeKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<CommonCodeKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));
- (CommonCodeKotlinx_coroutines_coreCoroutineDispatcher *)plusOther_:(CommonCodeKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<CommonCodeKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Ktor_utilsPipeline")))
@interface CommonCodeKtor_utilsPipeline<TSubject, TContext> : CommonCodeBase
- (instancetype)initWithPhase:(CommonCodeKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<CommonCodeKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(CommonCodeKotlinArray<CommonCodeKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(CommonCodeKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(TContext)context subject:(TSubject)subject completionHandler:(void (^)(TSubject _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:subject:completionHandler:)")));
- (void)insertPhaseAfterReference:(CommonCodeKtor_utilsPipelinePhase *)reference phase:(CommonCodeKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(CommonCodeKtor_utilsPipelinePhase *)reference phase:(CommonCodeKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(CommonCodeKtor_utilsPipelinePhase *)phase block:(id<CommonCodeKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (void)mergeFrom:(CommonCodeKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("merge(from:)")));
@property (readonly) id<CommonCodeKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) NSArray<CommonCodeKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface CommonCodeKtor_client_coreHttpReceivePipeline : CommonCodeKtor_utilsPipeline<CommonCodeKtor_client_coreHttpResponse *, CommonCodeKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(CommonCodeKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<CommonCodeKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(CommonCodeKotlinArray<CommonCodeKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface CommonCodeKtor_client_coreHttpRequestPipeline : CommonCodeKtor_utilsPipeline<id, CommonCodeKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(CommonCodeKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<CommonCodeKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(CommonCodeKotlinArray<CommonCodeKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface CommonCodeKtor_client_coreHttpResponsePipeline : CommonCodeKtor_utilsPipeline<CommonCodeKtor_client_coreHttpResponseContainer *, CommonCodeKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(CommonCodeKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<CommonCodeKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(CommonCodeKotlinArray<CommonCodeKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface CommonCodeKtor_client_coreHttpSendPipeline : CommonCodeKtor_utilsPipeline<id, CommonCodeKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(CommonCodeKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<CommonCodeKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(CommonCodeKotlinArray<CommonCodeKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface CommonCodeKotlinByteArray : CommonCodeBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(CommonCodeByte *(^)(CommonCodeInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (CommonCodeKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol CommonCodeKotlinx_coroutines_coreParentJob <CommonCodeKotlinx_coroutines_coreJob>
@required
- (CommonCodeKotlinx_coroutines_coreCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol CommonCodeKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnSelectHandle:(id<CommonCodeKotlinx_coroutines_coreDisposableHandle>)handle __attribute__((swift_name("disposeOnSelect(handle:)")));
- (id _Nullable)performAtomicTrySelectDesc:(CommonCodeKotlinx_coroutines_coreAtomicDesc *)desc __attribute__((swift_name("performAtomicTrySelect(desc:)")));
- (void)resumeSelectWithExceptionException:(CommonCodeKotlinThrowable *)exception __attribute__((swift_name("resumeSelectWithException(exception:)")));
- (BOOL)trySelect __attribute__((swift_name("trySelect()")));
- (id _Nullable)trySelectOtherOtherOp:(CommonCodeKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp * _Nullable)otherOp __attribute__((swift_name("trySelectOther(otherOp:)")));
@property (readonly) id<CommonCodeKotlinContinuation> completion __attribute__((swift_name("completion")));
@property (readonly) BOOL isSelected __attribute__((swift_name("isSelected")));
@end;

__attribute__((swift_name("KotlinFunction")))
@protocol CommonCodeKotlinFunction
@required
@end;

__attribute__((swift_name("KotlinSuspendFunction0")))
@protocol CommonCodeKotlinSuspendFunction0 <CommonCodeKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol CommonCodeKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<CommonCodeKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<CommonCodeKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<CommonCodeKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<CommonCodeKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<CommonCodeKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (void)encodeIntElementDescriptor:(id<CommonCodeKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<CommonCodeKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNullableSerializableElementDescriptor:(id<CommonCodeKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<CommonCodeKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<CommonCodeKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<CommonCodeKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<CommonCodeKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<CommonCodeKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<CommonCodeKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<CommonCodeKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) CommonCodeKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface CommonCodeKotlinx_serialization_coreSerializersModule : CommonCodeBase
- (void)dumpToCollector:(id<CommonCodeKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<CommonCodeKotlinx_serialization_coreKSerializer> _Nullable)getContextualKclass:(id<CommonCodeKotlinKClass>)kclass __attribute__((swift_name("getContextual(kclass:)")));
- (id<CommonCodeKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<CommonCodeKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<CommonCodeKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<CommonCodeKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol CommonCodeKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface CommonCodeKotlinx_serialization_coreSerialKind : CommonCodeBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol CommonCodeKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<CommonCodeKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<CommonCodeKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<CommonCodeKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<CommonCodeKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<CommonCodeKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<CommonCodeKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<CommonCodeKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<CommonCodeKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<CommonCodeKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<CommonCodeKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<CommonCodeKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<CommonCodeKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<CommonCodeKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<CommonCodeKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<CommonCodeKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<CommonCodeKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) CommonCodeKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface CommonCodeKotlinNothing : CommonCodeBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestData")))
@interface CommonCodeKtor_client_coreHttpRequestData : CommonCodeBase
- (instancetype)initWithUrl:(CommonCodeKtor_httpUrl *)url method:(CommonCodeKtor_httpHttpMethod *)method headers:(id<CommonCodeKtor_httpHeaders>)headers body:(CommonCodeKtor_httpOutgoingContent *)body executionContext:(id<CommonCodeKotlinx_coroutines_coreJob>)executionContext attributes:(id<CommonCodeKtor_utilsAttributes>)attributes __attribute__((swift_name("init(url:method:headers:body:executionContext:attributes:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)getCapabilityOrNullKey:(id<CommonCodeKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<CommonCodeKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) CommonCodeKtor_httpOutgoingContent *body __attribute__((swift_name("body")));
@property (readonly) id<CommonCodeKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) id<CommonCodeKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) CommonCodeKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) CommonCodeKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseData")))
@interface CommonCodeKtor_client_coreHttpResponseData : CommonCodeBase
- (instancetype)initWithStatusCode:(CommonCodeKtor_httpHttpStatusCode *)statusCode requestTime:(CommonCodeKtor_utilsGMTDate *)requestTime headers:(id<CommonCodeKtor_httpHeaders>)headers version:(CommonCodeKtor_httpHttpProtocolVersion *)version body:(id)body callContext:(id<CommonCodeKotlinCoroutineContext>)callContext __attribute__((swift_name("init(statusCode:requestTime:headers:version:body:callContext:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id body __attribute__((swift_name("body")));
@property (readonly) id<CommonCodeKotlinCoroutineContext> callContext __attribute__((swift_name("callContext")));
@property (readonly) id<CommonCodeKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) CommonCodeKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) CommonCodeKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) CommonCodeKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@property (readonly) CommonCodeKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreProxyConfig")))
@interface CommonCodeKtor_client_coreProxyConfig : CommonCodeBase
- (instancetype)initWithUrl:(CommonCodeKtor_httpUrl *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CommonCodeKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientFeature")))
@protocol CommonCodeKtor_client_coreHttpClientFeature
@required
- (void)installFeature:(id)feature scope:(CommonCodeKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(feature:scope:)")));
- (id)prepareBlock:(void (^)(id))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) CommonCodeKtor_utilsAttributeKey<id> *key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("Ktor_utilsStringValuesBuilder")))
@interface CommonCodeKtor_utilsStringValuesBuilder : CommonCodeBase
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer));
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<CommonCodeKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<CommonCodeKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<CommonCodeKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<CommonCodeKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@property BOOL built __attribute__((swift_name("built")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@property (readonly) CommonCodeMutableDictionary<NSString *, NSMutableArray<NSString *> *> *values __attribute__((swift_name("values")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeadersBuilder")))
@interface CommonCodeKtor_httpHeadersBuilder : CommonCodeKtor_utilsStringValuesBuilder
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<CommonCodeKtor_httpHeaders>)build __attribute__((swift_name("build()")));
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder")))
@interface CommonCodeKtor_httpURLBuilder : CommonCodeBase
- (instancetype)initWithProtocol:(CommonCodeKtor_httpURLProtocol *)protocol host:(NSString *)host port:(int32_t)port user:(NSString * _Nullable)user password:(NSString * _Nullable)password encodedPath:(NSString *)encodedPath parameters:(CommonCodeKtor_httpParametersBuilder *)parameters fragment:(NSString *)fragment trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:port:user:password:encodedPath:parameters:fragment:trailingQuery:)"))) __attribute__((objc_designated_initializer));
- (CommonCodeKtor_httpUrl *)build __attribute__((swift_name("build()")));
- (NSString *)buildString __attribute__((swift_name("buildString()")));
- (CommonCodeKtor_httpURLBuilder *)pathComponents:(CommonCodeKotlinArray<NSString *> *)components __attribute__((swift_name("path(components:)")));
- (CommonCodeKtor_httpURLBuilder *)pathComponents_:(NSArray<NSString *> *)components __attribute__((swift_name("path(components_:)")));
@property NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property NSString *fragment __attribute__((swift_name("fragment")));
@property NSString *host __attribute__((swift_name("host")));
@property (readonly) CommonCodeKtor_httpParametersBuilder *parameters __attribute__((swift_name("parameters")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property int32_t port __attribute__((swift_name("port")));
@property CommonCodeKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface CommonCodeKtor_httpHttpMethod : CommonCodeBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (CommonCodeKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("Ktor_ioByteReadChannel")))
@protocol CommonCodeKtor_ioByteReadChannel
@required
- (BOOL)cancelCause_:(CommonCodeKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)discardMax:(int64_t)max completionHandler:(void (^)(CommonCodeLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("discard(max:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)peekToDestination:(CommonCodeKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max completionHandler:(void (^)(CommonCodeLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(CommonCodeKtor_ioIoBuffer *)dst completionHandler:(void (^)(CommonCodeInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(CommonCodeKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(CommonCodeInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(CommonCodeInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(CommonCodeInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler__:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readBooleanWithCompletionHandler:(void (^)(CommonCodeBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readBoolean(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readByteWithCompletionHandler:(void (^)(CommonCodeByte * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readByte(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readDoubleWithCompletionHandler:(void (^)(CommonCodeDouble * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readDouble(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFloatWithCompletionHandler:(void (^)(CommonCodeFloat * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFloat(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(CommonCodeKtor_ioIoBuffer *)dst n:(int32_t)n completionHandler:(void (^)(CommonCodeKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:n:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(CommonCodeKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(CommonCodeKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(CommonCodeKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(CommonCodeKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler__:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readIntWithCompletionHandler:(void (^)(CommonCodeInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readInt(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readLongWithCompletionHandler:(void (^)(CommonCodeLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readLong(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readPacketSize:(int32_t)size headerSizeHint:(int32_t)headerSizeHint completionHandler:(void (^)(CommonCodeKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readPacket(size:headerSizeHint:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readRemainingLimit:(int64_t)limit headerSizeHint:(int32_t)headerSizeHint completionHandler:(void (^)(CommonCodeKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readRemaining(limit:headerSizeHint:completionHandler:)")));
- (void)readSessionConsumer:(void (^)(id<CommonCodeKtor_ioReadSession>))consumer __attribute__((swift_name("readSession(consumer:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readShortWithCompletionHandler:(void (^)(CommonCodeShort * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readShort(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readSuspendableSessionConsumer:(id<CommonCodeKotlinSuspendFunction1>)consumer completionHandler:(void (^)(CommonCodeKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readSuspendableSession(consumer:completionHandler:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineLimit:(int32_t)limit completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8Line(limit:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineToOut:(id<CommonCodeKotlinAppendable>)out limit:(int32_t)limit completionHandler:(void (^)(CommonCodeBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8LineTo(out:limit:completionHandler:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@property (readonly) BOOL isClosedForRead __attribute__((swift_name("isClosedForRead")));
@property (readonly) BOOL isClosedForWrite __attribute__((swift_name("isClosedForWrite")));
@property CommonCodeKtor_ioByteOrder *readByteOrder __attribute__((swift_name("readByteOrder"))) __attribute__((unavailable("Setting byte order is no longer supported. Read/write in big endian and use reverseByteOrder() extensions.")));
@property (readonly) int64_t totalBytesRead __attribute__((swift_name("totalBytesRead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreTypeInfo")))
@interface CommonCodeKtor_client_coreTypeInfo : CommonCodeBase
- (instancetype)initWithType:(id<CommonCodeKotlinKClass>)type reifiedType:(id<CommonCodeKotlinKType>)reifiedType kotlinType:(id<CommonCodeKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:reifiedType:kotlinType:)"))) __attribute__((objc_designated_initializer));
- (id<CommonCodeKotlinKClass>)component1 __attribute__((swift_name("component1()")));
- (id<CommonCodeKotlinKType>)component2 __attribute__((swift_name("component2()")));
- (id<CommonCodeKotlinKType> _Nullable)component3 __attribute__((swift_name("component3()")));
- (CommonCodeKtor_client_coreTypeInfo *)doCopyType:(id<CommonCodeKotlinKClass>)type reifiedType:(id<CommonCodeKotlinKType>)reifiedType kotlinType:(id<CommonCodeKotlinKType> _Nullable)kotlinType __attribute__((swift_name("doCopy(type:reifiedType:kotlinType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<CommonCodeKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<CommonCodeKotlinKType> reifiedType __attribute__((swift_name("reifiedType")));
@property (readonly) id<CommonCodeKotlinKClass> type __attribute__((swift_name("type")));
@end;

__attribute__((swift_name("Ktor_httpHttpMessage")))
@protocol CommonCodeKtor_httpHttpMessage
@required
@property (readonly) id<CommonCodeKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpRequest")))
@protocol CommonCodeKtor_client_coreHttpRequest <CommonCodeKtor_httpHttpMessage, CommonCodeKotlinx_coroutines_coreCoroutineScope>
@required
@property (readonly) id<CommonCodeKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) CommonCodeKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) CommonCodeKtor_httpOutgoingContent *content __attribute__((swift_name("content")));
@property (readonly) CommonCodeKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) CommonCodeKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpResponse")))
@interface CommonCodeKtor_client_coreHttpResponse : CommonCodeBase <CommonCodeKtor_httpHttpMessage, CommonCodeKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CommonCodeKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) id<CommonCodeKtor_ioByteReadChannel> content __attribute__((swift_name("content")));
@property (readonly) CommonCodeKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) CommonCodeKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) CommonCodeKtor_httpHttpStatusCode *status __attribute__((swift_name("status")));
@property (readonly) CommonCodeKtor_httpHttpProtocolVersion *version_ __attribute__((swift_name("version_")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface CommonCodeKtor_utilsAttributeKey<T> : CommonCodeBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("KotlinContinuation")))
@protocol CommonCodeKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<CommonCodeKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol CommonCodeKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface CommonCodeKtor_utilsPipelinePhase : CommonCodeBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol CommonCodeKotlinSuspendFunction2 <CommonCodeKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseContainer")))
@interface CommonCodeKtor_client_coreHttpResponseContainer : CommonCodeBase
- (instancetype)initWithExpectedType:(CommonCodeKtor_client_coreTypeInfo *)expectedType response:(id)response __attribute__((swift_name("init(expectedType:response:)"))) __attribute__((objc_designated_initializer));
- (CommonCodeKtor_client_coreTypeInfo *)component1 __attribute__((swift_name("component1()")));
- (id)component2 __attribute__((swift_name("component2()")));
- (CommonCodeKtor_client_coreHttpResponseContainer *)doCopyExpectedType:(CommonCodeKtor_client_coreTypeInfo *)expectedType response:(id)response __attribute__((swift_name("doCopy(expectedType:response:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CommonCodeKtor_client_coreTypeInfo *expectedType __attribute__((swift_name("expectedType")));
@property (readonly) id response __attribute__((swift_name("response")));
@end;

__attribute__((swift_name("KotlinByteIterator")))
@interface CommonCodeKotlinByteIterator : CommonCodeBase <CommonCodeKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (CommonCodeByte *)next_ __attribute__((swift_name("next_()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicDesc")))
@interface CommonCodeKotlinx_coroutines_coreAtomicDesc : CommonCodeBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(CommonCodeKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)prepareOp:(CommonCodeKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));
@property CommonCodeKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreOpDescriptor")))
@interface CommonCodeKotlinx_coroutines_coreOpDescriptor : CommonCodeBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)isEarlierThanThat:(CommonCodeKotlinx_coroutines_coreOpDescriptor *)that __attribute__((swift_name("isEarlierThan(that:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CommonCodeKotlinx_coroutines_coreAtomicOp<id> * _Nullable atomicOp __attribute__((swift_name("atomicOp")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.PrepareOp")))
@interface CommonCodeKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp : CommonCodeKotlinx_coroutines_coreOpDescriptor
- (instancetype)initWithAffected:(CommonCodeKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(CommonCodeKotlinx_coroutines_coreLockFreeLinkedListNode *)next desc:(CommonCodeKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *)desc __attribute__((swift_name("init(affected:next:desc:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)finishPrepare __attribute__((swift_name("finishPrepare()")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CommonCodeKotlinx_coroutines_coreLockFreeLinkedListNode *affected __attribute__((swift_name("affected")));
@property (readonly) CommonCodeKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) CommonCodeKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *desc __attribute__((swift_name("desc")));
@property (readonly) CommonCodeKotlinx_coroutines_coreLockFreeLinkedListNode *next __attribute__((swift_name("next")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol CommonCodeKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<CommonCodeKotlinKClass>)kClass serializer:(id<CommonCodeKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<CommonCodeKotlinKClass>)baseClass actualClass:(id<CommonCodeKotlinKClass>)actualClass actualSerializer:(id<CommonCodeKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<CommonCodeKotlinKClass>)baseClass defaultSerializerProvider:(id<CommonCodeKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultSerializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultSerializerProvider:)")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol CommonCodeKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol CommonCodeKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol CommonCodeKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol CommonCodeKotlinKClass <CommonCodeKotlinKDeclarationContainer, CommonCodeKotlinKAnnotatedElement, CommonCodeKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface CommonCodeKtor_httpUrl : CommonCodeBase
- (instancetype)initWithProtocol:(CommonCodeKtor_httpURLProtocol *)protocol host:(NSString *)host specifiedPort:(int32_t)specifiedPort encodedPath:(NSString *)encodedPath parameters:(id<CommonCodeKtor_httpParameters>)parameters fragment:(NSString *)fragment user:(NSString * _Nullable)user password:(NSString * _Nullable)password trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:specifiedPort:encodedPath:parameters:fragment:user:password:trailingQuery:)"))) __attribute__((objc_designated_initializer));
- (CommonCodeKtor_httpURLProtocol *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (id<CommonCodeKtor_httpParameters>)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (BOOL)component9 __attribute__((swift_name("component9()")));
- (CommonCodeKtor_httpUrl *)doCopyProtocol:(CommonCodeKtor_httpURLProtocol *)protocol host:(NSString *)host specifiedPort:(int32_t)specifiedPort encodedPath:(NSString *)encodedPath parameters:(id<CommonCodeKtor_httpParameters>)parameters fragment:(NSString *)fragment user:(NSString * _Nullable)user password:(NSString * _Nullable)password trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("doCopy(protocol:host:specifiedPort:encodedPath:parameters:fragment:user:password:trailingQuery:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property (readonly) NSString *fragment __attribute__((swift_name("fragment")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) id<CommonCodeKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) CommonCodeKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end;

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol CommonCodeKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<CommonCodeKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end;

__attribute__((swift_name("Ktor_httpHeaders")))
@protocol CommonCodeKtor_httpHeaders <CommonCodeKtor_utilsStringValues>
@required
@end;

__attribute__((swift_name("Ktor_httpOutgoingContent")))
@interface CommonCodeKtor_httpOutgoingContent : CommonCodeBase
- (id _Nullable)getPropertyKey:(CommonCodeKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getProperty(key:)")));
- (void)setPropertyKey:(CommonCodeKtor_utilsAttributeKey<id> *)key value:(id _Nullable)value __attribute__((swift_name("setProperty(key:value:)")));
@property (readonly) CommonCodeLong * _Nullable contentLength __attribute__((swift_name("contentLength")));
@property (readonly) CommonCodeKtor_httpContentType * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) id<CommonCodeKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) CommonCodeKtor_httpHttpStatusCode * _Nullable status __attribute__((swift_name("status")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface CommonCodeKtor_httpHttpStatusCode : CommonCodeBase
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (CommonCodeKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));
- (CommonCodeKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate")))
@interface CommonCodeKtor_utilsGMTDate : CommonCodeBase <CommonCodeKotlinComparable>
- (int32_t)compareToOther:(CommonCodeKtor_utilsGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (CommonCodeKtor_utilsWeekDay *)component4 __attribute__((swift_name("component4()")));
- (int32_t)component5 __attribute__((swift_name("component5()")));
- (int32_t)component6 __attribute__((swift_name("component6()")));
- (CommonCodeKtor_utilsMonth *)component7 __attribute__((swift_name("component7()")));
- (int32_t)component8 __attribute__((swift_name("component8()")));
- (int64_t)component9 __attribute__((swift_name("component9()")));
- (CommonCodeKtor_utilsGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(CommonCodeKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(CommonCodeKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) CommonCodeKtor_utilsWeekDay *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hours __attribute__((swift_name("hours")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) CommonCodeKtor_utilsMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion")))
@interface CommonCodeKtor_httpHttpProtocolVersion : CommonCodeBase
- (instancetype)initWithName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("init(name:major:minor:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (CommonCodeKtor_httpHttpProtocolVersion *)doCopyName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("doCopy(name:major:minor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t major __attribute__((swift_name("major")));
@property (readonly) int32_t minor __attribute__((swift_name("minor")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("KotlinMapEntry")))
@protocol CommonCodeKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface CommonCodeKtor_httpURLProtocol : CommonCodeBase
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (CommonCodeKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpParametersBuilder")))
@interface CommonCodeKtor_httpParametersBuilder : CommonCodeKtor_utilsStringValuesBuilder
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<CommonCodeKtor_httpParameters>)build __attribute__((swift_name("build()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory")))
@interface CommonCodeKtor_ioMemory : CommonCodeBase
- (instancetype)initWithPointer:(void *)pointer size:(int64_t)size __attribute__((swift_name("init(pointer:size:)"))) __attribute__((objc_designated_initializer));
- (void)doCopyToDestination:(CommonCodeKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length destinationOffset:(int32_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset:)")));
- (void)doCopyToDestination:(CommonCodeKtor_ioMemory *)destination offset:(int64_t)offset length:(int64_t)length destinationOffset_:(int64_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset_:)")));
- (int8_t)loadAtIndex:(int32_t)index __attribute__((swift_name("loadAt(index:)")));
- (int8_t)loadAtIndex_:(int64_t)index __attribute__((swift_name("loadAt(index_:)")));
- (CommonCodeKtor_ioMemory *)sliceOffset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("slice(offset:length:)")));
- (CommonCodeKtor_ioMemory *)sliceOffset:(int64_t)offset length_:(int64_t)length __attribute__((swift_name("slice(offset:length_:)")));
- (void)storeAtIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("storeAt(index:value:)")));
- (void)storeAtIndex:(int64_t)index value_:(int8_t)value __attribute__((swift_name("storeAt(index:value_:)")));
@property (readonly) void *pointer __attribute__((swift_name("pointer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@property (readonly) int32_t size32 __attribute__((swift_name("size32")));
@end;

__attribute__((swift_name("Ktor_ioBuffer")))
@interface CommonCodeKtor_ioBuffer : CommonCodeBase
- (instancetype)initWithMemory:(CommonCodeKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer));
- (void)commitWrittenCount:(int32_t)count __attribute__((swift_name("commitWritten(count:)")));
- (int32_t)discardCount:(int32_t)count __attribute__((swift_name("discard(count:)"))) __attribute__((unavailable("Use discardExact instead.")));
- (int64_t)discardCount_:(int64_t)count __attribute__((swift_name("discard(count_:)"))) __attribute__((unavailable("Use discardExact instead.")));
- (void)discardExactCount:(int32_t)count __attribute__((swift_name("discardExact(count:)")));
- (CommonCodeKtor_ioBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)duplicateToCopy:(CommonCodeKtor_ioBuffer *)copy __attribute__((swift_name("duplicateTo(copy:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (void)reserveEndGapEndGap:(int32_t)endGap __attribute__((swift_name("reserveEndGap(endGap:)")));
- (void)reserveStartGapStartGap:(int32_t)startGap __attribute__((swift_name("reserveStartGap(startGap:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)resetForRead __attribute__((swift_name("resetForRead()")));
- (void)resetForWrite __attribute__((swift_name("resetForWrite()")));
- (void)resetForWriteLimit:(int32_t)limit __attribute__((swift_name("resetForWrite(limit:)")));
- (void)rewindCount:(int32_t)count __attribute__((swift_name("rewind(count:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int32_t)tryPeekByte __attribute__((swift_name("tryPeekByte()")));
- (int32_t)tryReadByte __attribute__((swift_name("tryReadByte()")));
- (void)writeByteValue:(int8_t)value __attribute__((swift_name("writeByte(value:)")));
@property id _Nullable attachment __attribute__((swift_name("attachment"))) __attribute__((deprecated("Will be removed. Inherit Buffer and add required fields instead.")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@property (readonly) int32_t endGap __attribute__((swift_name("endGap")));
@property (readonly) int32_t limit __attribute__((swift_name("limit")));
@property (readonly) CommonCodeKtor_ioMemory *memory __attribute__((swift_name("memory")));
@property (readonly) int32_t readPosition __attribute__((swift_name("readPosition")));
@property (readonly) int32_t readRemaining __attribute__((swift_name("readRemaining")));
@property (readonly) int32_t startGap __attribute__((swift_name("startGap")));
@property (readonly) int32_t writePosition __attribute__((swift_name("writePosition")));
@property (readonly) int32_t writeRemaining __attribute__((swift_name("writeRemaining")));
@end;

__attribute__((swift_name("Ktor_ioChunkBuffer")))
@interface CommonCodeKtor_ioChunkBuffer : CommonCodeKtor_ioBuffer
- (instancetype)initWithMemory:(CommonCodeKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (CommonCodeKtor_ioChunkBuffer * _Nullable)cleanNext __attribute__((swift_name("cleanNext()")));
- (CommonCodeKtor_ioChunkBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)releasePool:(id<CommonCodeKtor_ioObjectPool>)pool __attribute__((swift_name("release(pool:)")));
- (void)reset __attribute__((swift_name("reset()")));
@property (getter=next__) CommonCodeKtor_ioChunkBuffer * _Nullable next __attribute__((swift_name("next")));
@property (readonly) CommonCodeKtor_ioChunkBuffer * _Nullable origin __attribute__((swift_name("origin")));
@property (readonly) int32_t referenceCount __attribute__((swift_name("referenceCount")));
@end;

__attribute__((swift_name("Ktor_ioInput")))
@protocol CommonCodeKtor_ioInput <CommonCodeKtor_ioCloseable>
@required
- (int64_t)discardN:(int64_t)n __attribute__((swift_name("discard(n:)")));
- (int64_t)peekToDestination:(CommonCodeKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
@property CommonCodeKtor_ioByteOrder *byteOrder __attribute__((swift_name("byteOrder"))) __attribute__((unavailable("Not supported anymore. All operations are big endian by default. Use readXXXLittleEndian or readXXX then X.reverseByteOrder() instead.")));
@property (readonly) BOOL endOfInput __attribute__((swift_name("endOfInput")));
@end;

__attribute__((swift_name("KotlinAppendable")))
@protocol CommonCodeKotlinAppendable
@required
- (id<CommonCodeKotlinAppendable>)appendValue:(unichar)value __attribute__((swift_name("append(value:)")));
- (id<CommonCodeKotlinAppendable>)appendValue_:(id _Nullable)value __attribute__((swift_name("append(value_:)")));
- (id<CommonCodeKotlinAppendable>)appendValue:(id _Nullable)value startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("append(value:startIndex:endIndex:)")));
@end;

__attribute__((swift_name("Ktor_ioOutput")))
@protocol CommonCodeKtor_ioOutput <CommonCodeKotlinAppendable, CommonCodeKtor_ioCloseable>
@required
- (id<CommonCodeKotlinAppendable>)appendCsq:(CommonCodeKotlinCharArray *)csq start:(int32_t)start end:(int32_t)end __attribute__((swift_name("append(csq:start:end:)")));
- (void)flush __attribute__((swift_name("flush()")));
- (void)writeByteV:(int8_t)v __attribute__((swift_name("writeByte(v:)")));
@property CommonCodeKtor_ioByteOrder *byteOrder __attribute__((swift_name("byteOrder"))) __attribute__((deprecated("Write with writeXXXLittleEndian or do X.reverseByteOrder() and then writeXXX instead.")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioIoBuffer")))
@interface CommonCodeKtor_ioIoBuffer : CommonCodeKtor_ioChunkBuffer <CommonCodeKtor_ioInput, CommonCodeKtor_ioOutput>
- (instancetype)initWithContent:(void *)content contentCapacity:(int32_t)contentCapacity __attribute__((swift_name("init(content:contentCapacity:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Use Buffer instead.")));
- (instancetype)initWithMemory:(CommonCodeKtor_ioMemory *)memory origin:(CommonCodeKtor_ioChunkBuffer * _Nullable)origin __attribute__((swift_name("init(memory:origin:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Use Buffer instead.")));
- (id<CommonCodeKotlinAppendable>)appendValue:(unichar)c __attribute__((swift_name("append(value:)")));
- (id<CommonCodeKotlinAppendable>)appendCsq:(CommonCodeKotlinCharArray *)csq start:(int32_t)start end:(int32_t)end __attribute__((swift_name("append(csq:start:end:)")));
- (id<CommonCodeKotlinAppendable>)appendValue_:(id _Nullable)csq __attribute__((swift_name("append(value_:)")));
- (id<CommonCodeKotlinAppendable>)appendValue:(id _Nullable)csq startIndex:(int32_t)start endIndex:(int32_t)end __attribute__((swift_name("append(value:startIndex:endIndex:)")));
- (int32_t)appendCharsCsq:(CommonCodeKotlinCharArray *)csq start:(int32_t)start end:(int32_t)end __attribute__((swift_name("appendChars(csq:start:end:)")));
- (int32_t)appendCharsCsq:(id)csq start:(int32_t)start end_:(int32_t)end __attribute__((swift_name("appendChars(csq:start:end_:)")));
- (void)close __attribute__((swift_name("close()")));
- (CommonCodeKtor_ioIoBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)flush __attribute__((swift_name("flush()")));
- (CommonCodeKtor_ioIoBuffer *)makeView __attribute__((swift_name("makeView()")));
- (int64_t)peekToDestination:(CommonCodeKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:)")));
- (int32_t)readDirectBlock:(CommonCodeInt *(^)(id))block __attribute__((swift_name("readDirect(block:)")));
- (void)releasePool_:(id<CommonCodeKtor_ioObjectPool>)pool __attribute__((swift_name("release(pool_:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
- (int32_t)writeDirectBlock:(CommonCodeInt *(^)(id))block __attribute__((swift_name("writeDirect(block:)")));
@property CommonCodeKtor_ioByteOrder *byteOrder __attribute__((swift_name("byteOrder"))) __attribute__((unavailable("Not supported anymore. All operations are big endian by default.")));
@property (readonly) BOOL endOfInput __attribute__((swift_name("endOfInput")));
@end;

__attribute__((swift_name("Ktor_ioAbstractInput")))
@interface CommonCodeKtor_ioAbstractInput : CommonCodeBase <CommonCodeKtor_ioInput>
- (instancetype)initWithHead:(CommonCodeKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<CommonCodeKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer));
- (BOOL)canRead __attribute__((swift_name("canRead()")));
- (void)close __attribute__((swift_name("close()")));
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (int32_t)discardN_:(int32_t)n __attribute__((swift_name("discard(n_:)")));
- (int64_t)discardN:(int64_t)n __attribute__((swift_name("discard(n:)")));
- (void)discardExactN:(int32_t)n __attribute__((swift_name("discardExact(n:)")));
- (CommonCodeKtor_ioChunkBuffer * _Nullable)ensureNextHeadCurrent:(CommonCodeKtor_ioChunkBuffer *)current __attribute__((swift_name("ensureNextHead(current:)")));
- (CommonCodeKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));
- (int32_t)fillDestination:(CommonCodeKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (void)fixGapAfterReadCurrent:(CommonCodeKtor_ioChunkBuffer *)current __attribute__((swift_name("fixGapAfterRead(current:)")));
- (BOOL)hasBytesN:(int32_t)n __attribute__((swift_name("hasBytes(n:)")));
- (void)markNoMoreChunksAvailable __attribute__((swift_name("markNoMoreChunksAvailable()")));
- (int64_t)peekToDestination:(CommonCodeKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:)")));
- (CommonCodeKtor_ioChunkBuffer * _Nullable)prepareReadHeadMinSize:(int32_t)minSize __attribute__((swift_name("prepareReadHead(minSize:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (NSString *)readTextMin:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(min:max:)")));
- (int32_t)readTextOut:(id<CommonCodeKotlinAppendable>)out min:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(out:min:max:)")));
- (NSString *)readTextExactExactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(exactCharacters:)")));
- (void)readTextExactOut:(id<CommonCodeKotlinAppendable>)out exactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(out:exactCharacters:)")));
- (void)release_ __attribute__((swift_name("release()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
- (void)updateHeadRemainingRemaining:(int32_t)remaining __attribute__((swift_name("updateHeadRemaining(remaining:)"))) __attribute__((unavailable("Not supported anymore.")));
@property CommonCodeKtor_ioByteOrder *byteOrder __attribute__((swift_name("byteOrder"))) __attribute__((unavailable("Not supported anymore. All operations are big endian by default.")));
@property (readonly) BOOL endOfInput __attribute__((swift_name("endOfInput")));
@property (readonly) id<CommonCodeKtor_ioObjectPool> pool __attribute__((swift_name("pool")));
@property (readonly) int64_t remaining __attribute__((swift_name("remaining")));
@end;

__attribute__((swift_name("Ktor_ioByteReadPacketBase")))
@interface CommonCodeKtor_ioByteReadPacketBase : CommonCodeKtor_ioAbstractInput
- (instancetype)initWithHead:(CommonCodeKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<CommonCodeKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Will be removed in the future releases. Use Input or AbstractInput instead.")));
@end;

__attribute__((swift_name("Ktor_ioByteReadPacketPlatformBase")))
@interface CommonCodeKtor_ioByteReadPacketPlatformBase : CommonCodeKtor_ioByteReadPacketBase
- (instancetype)initWithHead:(CommonCodeKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<CommonCodeKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable("Will be removed in future releases.")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket")))
@interface CommonCodeKtor_ioByteReadPacket : CommonCodeKtor_ioByteReadPacketPlatformBase <CommonCodeKtor_ioInput>
- (instancetype)initWithHead:(CommonCodeKtor_ioChunkBuffer *)head pool:(id<CommonCodeKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:pool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithHead:(CommonCodeKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<CommonCodeKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (CommonCodeKtor_ioByteReadPacket *)doCopy __attribute__((swift_name("doCopy()")));
- (CommonCodeKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));
- (int32_t)fillDestination:(CommonCodeKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Ktor_ioReadSession")))
@protocol CommonCodeKtor_ioReadSession
@required
- (int32_t)discardN_:(int32_t)n __attribute__((swift_name("discard(n_:)")));
- (CommonCodeKtor_ioIoBuffer * _Nullable)requestAtLeast:(int32_t)atLeast __attribute__((swift_name("request(atLeast:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@end;

__attribute__((swift_name("KotlinSuspendFunction1")))
@protocol CommonCodeKotlinSuspendFunction1 <CommonCodeKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteOrder")))
@interface CommonCodeKtor_ioByteOrder : CommonCodeKotlinEnum<CommonCodeKtor_ioByteOrder *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CommonCodeKtor_ioByteOrder *bigEndian __attribute__((swift_name("bigEndian")));
@property (class, readonly) CommonCodeKtor_ioByteOrder *littleEndian __attribute__((swift_name("littleEndian")));
+ (CommonCodeKotlinArray<CommonCodeKtor_ioByteOrder *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("KotlinKType")))
@protocol CommonCodeKotlinKType
@required
@property (readonly) NSArray<CommonCodeKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));
@property (readonly) id<CommonCodeKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicOp")))
@interface CommonCodeKotlinx_coroutines_coreAtomicOp<__contravariant T> : CommonCodeKotlinx_coroutines_coreOpDescriptor
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeAffected:(T _Nullable)affected failure:(id _Nullable)failure __attribute__((swift_name("complete(affected:failure:)")));
- (id _Nullable)decideDecision:(id _Nullable)decision __attribute__((swift_name("decide(decision:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (id _Nullable)prepareAffected:(T _Nullable)affected __attribute__((swift_name("prepare(affected:)")));
@property (readonly) CommonCodeKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) id _Nullable consensus __attribute__((swift_name("consensus")));
@property (readonly) BOOL isDecided __attribute__((swift_name("isDecided")));
@property (readonly) int64_t opSequence __attribute__((swift_name("opSequence")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode")))
@interface CommonCodeKotlinx_coroutines_coreLockFreeLinkedListNode : CommonCodeBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addLastNode:(CommonCodeKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addLast(node:)")));
- (BOOL)addLastIfNode:(CommonCodeKotlinx_coroutines_coreLockFreeLinkedListNode *)node condition:(CommonCodeBoolean *(^)(void))condition __attribute__((swift_name("addLastIf(node:condition:)")));
- (BOOL)addLastIfPrevNode:(CommonCodeKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(CommonCodeBoolean *(^)(CommonCodeKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate __attribute__((swift_name("addLastIfPrev(node:predicate:)")));
- (BOOL)addLastIfPrevAndIfNode:(CommonCodeKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(CommonCodeBoolean *(^)(CommonCodeKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate condition:(CommonCodeBoolean *(^)(void))condition __attribute__((swift_name("addLastIfPrevAndIf(node:predicate:condition:)")));
- (BOOL)addOneIfEmptyNode:(CommonCodeKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addOneIfEmpty(node:)")));
- (CommonCodeKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<CommonCodeKotlinx_coroutines_coreLockFreeLinkedListNode *> *)describeAddLastNode:(CommonCodeKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("describeAddLast(node:)")));
- (CommonCodeKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<CommonCodeKotlinx_coroutines_coreLockFreeLinkedListNode *> *)describeRemoveFirst __attribute__((swift_name("describeRemoveFirst()")));
- (void)helpRemove __attribute__((swift_name("helpRemove()")));
- (CommonCodeKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)nextIfRemoved __attribute__((swift_name("nextIfRemoved()")));
- (BOOL)remove __attribute__((swift_name("remove()")));
- (id _Nullable)removeFirstIfIsInstanceOfOrPeekIfPredicate:(CommonCodeBoolean *(^)(id _Nullable))predicate __attribute__((swift_name("removeFirstIfIsInstanceOfOrPeekIf(predicate:)")));
- (CommonCodeKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)removeFirstOrNull __attribute__((swift_name("removeFirstOrNull()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isRemoved __attribute__((swift_name("isRemoved")));
@property (readonly, getter=next__) id _Nullable next __attribute__((swift_name("next")));
@property (readonly) CommonCodeKotlinx_coroutines_coreLockFreeLinkedListNode *nextNode __attribute__((swift_name("nextNode")));
@property (readonly) CommonCodeKotlinx_coroutines_coreLockFreeLinkedListNode *prevNode __attribute__((swift_name("prevNode")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.AbstractAtomicDesc")))
@interface CommonCodeKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc : CommonCodeKotlinx_coroutines_coreAtomicDesc
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(CommonCodeKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)failureAffected:(CommonCodeKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)affected __attribute__((swift_name("failure(affected:)")));
- (void)finishOnSuccessAffected:(CommonCodeKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(CommonCodeKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(CommonCodeKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (id _Nullable)onPreparePrepareOp:(CommonCodeKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("onPrepare(prepareOp:)")));
- (void)onRemovedAffected:(CommonCodeKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("onRemoved(affected:)")));
- (id _Nullable)prepareOp:(CommonCodeKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));
- (BOOL)retryAffected:(CommonCodeKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (CommonCodeKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(CommonCodeKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(CommonCodeKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(CommonCodeKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) CommonCodeKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) CommonCodeKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@end;

__attribute__((swift_name("Ktor_httpParameters")))
@protocol CommonCodeKtor_httpParameters <CommonCodeKtor_utilsStringValues>
@required
@end;

__attribute__((swift_name("Ktor_httpHeaderValueWithParameters")))
@interface CommonCodeKtor_httpHeaderValueWithParameters : CommonCodeBase
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<CommonCodeKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)parameterName:(NSString *)name __attribute__((swift_name("parameter(name:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSArray<CommonCodeKtor_httpHeaderValueParam *> *parameters __attribute__((swift_name("parameters")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType")))
@interface CommonCodeKtor_httpContentType : CommonCodeKtor_httpHeaderValueWithParameters
- (instancetype)initWithContentType:(NSString *)contentType contentSubtype:(NSString *)contentSubtype parameters:(NSArray<CommonCodeKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(contentType:contentSubtype:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<CommonCodeKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchPattern:(CommonCodeKtor_httpContentType *)pattern __attribute__((swift_name("match(pattern:)")));
- (BOOL)matchPattern_:(NSString *)pattern __attribute__((swift_name("match(pattern_:)")));
- (CommonCodeKtor_httpContentType *)withParameterName:(NSString *)name value:(NSString *)value __attribute__((swift_name("withParameter(name:value:)")));
- (CommonCodeKtor_httpContentType *)withoutParameters __attribute__((swift_name("withoutParameters()")));
@property (readonly) NSString *contentSubtype __attribute__((swift_name("contentSubtype")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface CommonCodeKtor_utilsWeekDay : CommonCodeKotlinEnum<CommonCodeKtor_utilsWeekDay *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CommonCodeKtor_utilsWeekDay *monday __attribute__((swift_name("monday")));
@property (class, readonly) CommonCodeKtor_utilsWeekDay *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) CommonCodeKtor_utilsWeekDay *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) CommonCodeKtor_utilsWeekDay *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) CommonCodeKtor_utilsWeekDay *friday __attribute__((swift_name("friday")));
@property (class, readonly) CommonCodeKtor_utilsWeekDay *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) CommonCodeKtor_utilsWeekDay *sunday __attribute__((swift_name("sunday")));
+ (CommonCodeKotlinArray<CommonCodeKtor_utilsWeekDay *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface CommonCodeKtor_utilsMonth : CommonCodeKotlinEnum<CommonCodeKtor_utilsMonth *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CommonCodeKtor_utilsMonth *january __attribute__((swift_name("january")));
@property (class, readonly) CommonCodeKtor_utilsMonth *february __attribute__((swift_name("february")));
@property (class, readonly) CommonCodeKtor_utilsMonth *march __attribute__((swift_name("march")));
@property (class, readonly) CommonCodeKtor_utilsMonth *april __attribute__((swift_name("april")));
@property (class, readonly) CommonCodeKtor_utilsMonth *may __attribute__((swift_name("may")));
@property (class, readonly) CommonCodeKtor_utilsMonth *june __attribute__((swift_name("june")));
@property (class, readonly) CommonCodeKtor_utilsMonth *july __attribute__((swift_name("july")));
@property (class, readonly) CommonCodeKtor_utilsMonth *august __attribute__((swift_name("august")));
@property (class, readonly) CommonCodeKtor_utilsMonth *september __attribute__((swift_name("september")));
@property (class, readonly) CommonCodeKtor_utilsMonth *october __attribute__((swift_name("october")));
@property (class, readonly) CommonCodeKtor_utilsMonth *november __attribute__((swift_name("november")));
@property (class, readonly) CommonCodeKtor_utilsMonth *december __attribute__((swift_name("december")));
+ (CommonCodeKotlinArray<CommonCodeKtor_utilsMonth *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("Ktor_ioObjectPool")))
@protocol CommonCodeKtor_ioObjectPool <CommonCodeKtor_ioCloseable>
@required
- (id)borrow __attribute__((swift_name("borrow()")));
- (void)dispose __attribute__((swift_name("dispose()")));
- (void)recycleInstance:(id)instance __attribute__((swift_name("recycle(instance:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinCharArray")))
@interface CommonCodeKotlinCharArray : CommonCodeBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(id (^)(CommonCodeInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (unichar)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (CommonCodeKotlinCharIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(unichar)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface CommonCodeKotlinKTypeProjection : CommonCodeBase
- (instancetype)initWithVariance:(CommonCodeKotlinKVariance * _Nullable)variance type:(id<CommonCodeKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
- (CommonCodeKotlinKVariance * _Nullable)component1 __attribute__((swift_name("component1()")));
- (id<CommonCodeKotlinKType> _Nullable)component2 __attribute__((swift_name("component2()")));
- (CommonCodeKotlinKTypeProjection *)doCopyVariance:(CommonCodeKotlinKVariance * _Nullable)variance type:(id<CommonCodeKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<CommonCodeKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) CommonCodeKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc")))
@interface CommonCodeKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<T> : CommonCodeKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(CommonCodeKotlinx_coroutines_coreLockFreeLinkedListNode *)queue node:(T)node __attribute__((swift_name("init(queue:node:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)finishOnSuccessAffected:(CommonCodeKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(CommonCodeKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(CommonCodeKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (BOOL)retryAffected:(CommonCodeKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (CommonCodeKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(CommonCodeKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(CommonCodeKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(CommonCodeKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) CommonCodeKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) T node __attribute__((swift_name("node")));
@property (readonly) CommonCodeKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@property (readonly) CommonCodeKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc")))
@interface CommonCodeKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<T> : CommonCodeKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(CommonCodeKotlinx_coroutines_coreLockFreeLinkedListNode *)queue __attribute__((swift_name("init(queue:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (id _Nullable)failureAffected:(CommonCodeKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)affected __attribute__((swift_name("failure(affected:)")));
- (void)finishOnSuccessAffected:(CommonCodeKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(CommonCodeKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(CommonCodeKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (BOOL)retryAffected:(CommonCodeKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (CommonCodeKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(CommonCodeKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(CommonCodeKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(CommonCodeKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) CommonCodeKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) CommonCodeKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@property (readonly) CommonCodeKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@property (readonly) T _Nullable result __attribute__((swift_name("result")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueParam")))
@interface CommonCodeKtor_httpHeaderValueParam : CommonCodeBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (CommonCodeKtor_httpHeaderValueParam *)doCopyName:(NSString *)name value:(NSString *)value __attribute__((swift_name("doCopy(name:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("KotlinCharIterator")))
@interface CommonCodeKotlinCharIterator : CommonCodeBase <CommonCodeKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id)next_ __attribute__((swift_name("next_()")));
- (unichar)nextChar __attribute__((swift_name("nextChar()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface CommonCodeKotlinKVariance : CommonCodeKotlinEnum<CommonCodeKotlinKVariance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CommonCodeKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) CommonCodeKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) CommonCodeKotlinKVariance *out __attribute__((swift_name("out")));
+ (CommonCodeKotlinArray<CommonCodeKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@end;

#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
