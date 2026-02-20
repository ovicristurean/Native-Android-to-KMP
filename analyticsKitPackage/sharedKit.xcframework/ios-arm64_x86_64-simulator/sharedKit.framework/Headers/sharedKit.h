#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class SharedKitAnalyticsDatabase, SharedKitAnalyticsDatabaseConstructor, SharedKitKoin_coreBeanDefinition<T>, SharedKitKoin_coreCallbacks<T>, SharedKitKoin_coreCoreResolver, SharedKitKoin_coreExtensionManager, SharedKitKoin_coreInstanceFactory<T>, SharedKitKoin_coreInstanceFactoryCompanion, SharedKitKoin_coreInstanceRegistry, SharedKitKoin_coreKind, SharedKitKoin_coreKoin, SharedKitKoin_coreKoinApplication, SharedKitKoin_coreKoinApplicationCompanion, SharedKitKoin_coreKoinDefinition<R>, SharedKitKoin_coreKoinOption, SharedKitKoin_coreLevel, SharedKitKoin_coreLockable, SharedKitKoin_coreLogger, SharedKitKoin_coreModule, SharedKitKoin_coreOptionRegistry, SharedKitKoin_coreParametersHolder, SharedKitKoin_corePropertyRegistry, SharedKitKoin_coreResolutionContext, SharedKitKoin_coreScope, SharedKitKoin_coreScopeDSL, SharedKitKoin_coreScopeRegistry, SharedKitKoin_coreScopeRegistryCompanion, SharedKitKoin_coreSingleInstanceFactory<T>, SharedKitKoin_coreTypeQualifier, SharedKitKotlinArray<T>, SharedKitKotlinByteArray, SharedKitKotlinByteIterator, SharedKitKotlinEnum<E>, SharedKitKotlinEnumCompanion, SharedKitKotlinException, SharedKitKotlinIllegalStateException, SharedKitKotlinIntArray, SharedKitKotlinIntIterator, SharedKitKotlinLazyThreadSafetyMode, SharedKitKotlinNothing, SharedKitKotlinPair<__covariant A, __covariant B>, SharedKitKotlinRuntimeException, SharedKitKotlinThrowable, SharedKitKotlinx_datetimeDayOfWeek, SharedKitKotlinx_datetimeDayOfWeekNames, SharedKitKotlinx_datetimeDayOfWeekNamesCompanion, SharedKitKotlinx_datetimeFixedOffsetTimeZone, SharedKitKotlinx_datetimeFixedOffsetTimeZoneCompanion, SharedKitKotlinx_datetimeInstant, SharedKitKotlinx_datetimeInstantCompanion, SharedKitKotlinx_datetimeLocalDate, SharedKitKotlinx_datetimeLocalDateCompanion, SharedKitKotlinx_datetimeLocalDateTime, SharedKitKotlinx_datetimeLocalDateTimeCompanion, SharedKitKotlinx_datetimeLocalTime, SharedKitKotlinx_datetimeLocalTimeCompanion, SharedKitKotlinx_datetimeMonth, SharedKitKotlinx_datetimeMonthNames, SharedKitKotlinx_datetimeMonthNamesCompanion, SharedKitKotlinx_datetimePadding, SharedKitKotlinx_datetimeTimeZone, SharedKitKotlinx_datetimeTimeZoneCompanion, SharedKitKotlinx_datetimeUtcOffset, SharedKitKotlinx_datetimeUtcOffsetCompanion, SharedKitKotlinx_serialization_coreSerialKind, SharedKitKotlinx_serialization_coreSerializersModule, SharedKitRecordVisitUseCase, SharedKitRoom_runtimeInvalidationTracker, SharedKitRoom_runtimeMigration, SharedKitRoom_runtimeRoomDatabase, SharedKitRoom_runtimeRoomDatabaseBuilder<T>, SharedKitRoom_runtimeRoomDatabaseCallback, SharedKitRoom_runtimeRoomDatabaseJournalMode, SharedKitRoom_runtimeRoomOpenDelegate, SharedKitRoom_runtimeRoomOpenDelegateValidationResult, SharedKitShopStatistics, SharedKitVisitEvent, SharedKitVisitEventDao_ImplCompanion, SharedKitVisitEventEntity, SharedKitWeeklyTrend;

@protocol SharedKitAnalyticsRepository, SharedKitAnalyticsTracker, SharedKitKoin_coreKoinComponent, SharedKitKoin_coreKoinExtension, SharedKitKoin_coreKoinScopeComponent, SharedKitKoin_coreQualifier, SharedKitKoin_coreResolutionExtension, SharedKitKoin_coreScopeCallback, SharedKitKotlinAnnotation, SharedKitKotlinAppendable, SharedKitKotlinAutoCloseable, SharedKitKotlinComparable, SharedKitKotlinCoroutineContext, SharedKitKotlinCoroutineContextElement, SharedKitKotlinCoroutineContextKey, SharedKitKotlinIterator, SharedKitKotlinKAnnotatedElement, SharedKitKotlinKClass, SharedKitKotlinKClassifier, SharedKitKotlinKDeclarationContainer, SharedKitKotlinLazy, SharedKitKotlinx_coroutines_coreCoroutineScope, SharedKitKotlinx_coroutines_coreFlow, SharedKitKotlinx_coroutines_coreFlowCollector, SharedKitKotlinx_datetimeClock, SharedKitKotlinx_datetimeDateTimeFormat, SharedKitKotlinx_datetimeDateTimeFormatBuilder, SharedKitKotlinx_datetimeDateTimeFormatBuilderWithDate, SharedKitKotlinx_datetimeDateTimeFormatBuilderWithDateTime, SharedKitKotlinx_datetimeDateTimeFormatBuilderWithTime, SharedKitKotlinx_datetimeDateTimeFormatBuilderWithUtcOffset, SharedKitKotlinx_serialization_coreCompositeDecoder, SharedKitKotlinx_serialization_coreCompositeEncoder, SharedKitKotlinx_serialization_coreDecoder, SharedKitKotlinx_serialization_coreDeserializationStrategy, SharedKitKotlinx_serialization_coreEncoder, SharedKitKotlinx_serialization_coreKSerializer, SharedKitKotlinx_serialization_coreSerialDescriptor, SharedKitKotlinx_serialization_coreSerializationStrategy, SharedKitKotlinx_serialization_coreSerializersModuleCollector, SharedKitRoom_runtimeAutoMigrationSpec, SharedKitRoom_runtimeRoomDatabaseConstructor, SharedKitRoom_runtimeRoomOpenDelegateMarker, SharedKitSqliteSQLiteConnection, SharedKitSqliteSQLiteDriver, SharedKitSqliteSQLiteStatement, SharedKitVisitEventDao;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface SharedKitBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface SharedKitBase (SharedKitBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface SharedKitMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface SharedKitMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorSharedKitKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface SharedKitNumber : NSNumber
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
@end

__attribute__((swift_name("KotlinByte")))
@interface SharedKitByte : SharedKitNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface SharedKitUByte : SharedKitNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface SharedKitShort : SharedKitNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface SharedKitUShort : SharedKitNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface SharedKitInt : SharedKitNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface SharedKitUInt : SharedKitNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface SharedKitLong : SharedKitNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface SharedKitULong : SharedKitNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface SharedKitFloat : SharedKitNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface SharedKitDouble : SharedKitNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface SharedKitBoolean : SharedKitNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((swift_name("VisitEventDao")))
@protocol SharedKitVisitEventDao
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getVisitsShopId:(NSString *)shopId from:(int64_t)from to:(int64_t)to completionHandler:(void (^)(NSArray<SharedKitVisitEventEntity *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getVisits(shopId:from:to:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)insertEvent:(SharedKitVisitEventEntity *)event completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("insert(event:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VisitEventDao_Impl")))
@interface SharedKitVisitEventDao_Impl : SharedKitBase <SharedKitVisitEventDao>
- (instancetype)initWith__db:(SharedKitRoom_runtimeRoomDatabase *)__db __attribute__((swift_name("init(__db:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKitVisitEventDao_ImplCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getVisitsShopId:(NSString *)shopId from:(int64_t)from to:(int64_t)to completionHandler:(void (^)(NSArray<SharedKitVisitEventEntity *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getVisits(shopId:from:to:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)insertEvent:(SharedKitVisitEventEntity *)event completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("insert(event:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VisitEventDao_Impl.Companion")))
@interface SharedKitVisitEventDao_ImplCompanion : SharedKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKitVisitEventDao_ImplCompanion *shared __attribute__((swift_name("shared")));
- (NSArray<id<SharedKitKotlinKClass>> *)getRequiredConverters __attribute__((swift_name("getRequiredConverters()")));
@end

__attribute__((swift_name("Room_runtimeRoomDatabase")))
@interface SharedKitRoom_runtimeRoomDatabase : SharedKitBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)close __attribute__((swift_name("close()")));

/**
 * @note annotations
 *   androidx.annotation.RestrictTo(value=[Scope.LIBRARY_GROUP_PREFIX])
*/
- (NSArray<SharedKitRoom_runtimeMigration *> *)createAutoMigrationsAutoMigrationSpecs:(NSDictionary<id<SharedKitKotlinKClass>, id<SharedKitRoom_runtimeAutoMigrationSpec>> *)autoMigrationSpecs __attribute__((swift_name("createAutoMigrations(autoMigrationSpecs:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (SharedKitRoom_runtimeInvalidationTracker *)createInvalidationTracker __attribute__((swift_name("createInvalidationTracker()")));

/**
 * @note annotations
 *   androidx.annotation.RestrictTo(value=[Scope.LIBRARY_GROUP_PREFIX])
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (id<SharedKitRoom_runtimeRoomOpenDelegateMarker>)createOpenDelegate __attribute__((swift_name("createOpenDelegate()")));

/**
 * @note annotations
 *   androidx.annotation.RestrictTo(value=[Scope.LIBRARY_GROUP])
*/
- (id<SharedKitKotlinx_coroutines_coreCoroutineScope>)getCoroutineScope __attribute__((swift_name("getCoroutineScope()")));

/**
 * @note annotations
 *   androidx.annotation.RestrictTo(value=[Scope.LIBRARY_GROUP_PREFIX])
*/
- (NSSet<id<SharedKitKotlinKClass>> *)getRequiredAutoMigrationSpecClasses __attribute__((swift_name("getRequiredAutoMigrationSpecClasses()")));

/**
 * @note annotations
 *   androidx.annotation.RestrictTo(value=[Scope.LIBRARY_GROUP_PREFIX])
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (NSDictionary<id<SharedKitKotlinKClass>, NSArray<id<SharedKitKotlinKClass>> *> *)getRequiredTypeConverterClasses __attribute__((swift_name("getRequiredTypeConverterClasses()")));

/**
 * @note annotations
 *   androidx.annotation.RestrictTo(value=[Scope.LIBRARY_GROUP_PREFIX])
*/
- (id)getTypeConverterKlass:(id<SharedKitKotlinKClass>)klass __attribute__((swift_name("getTypeConverter(klass:)")));

/**
 * @note annotations
 *   androidx.annotation.RestrictTo(value=[Scope.LIBRARY_GROUP_PREFIX])
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)internalInitInvalidationTrackerConnection:(id<SharedKitSqliteSQLiteConnection>)connection __attribute__((swift_name("internalInitInvalidationTracker(connection:)")));
@property (readonly) SharedKitRoom_runtimeInvalidationTracker *invalidationTracker __attribute__((swift_name("invalidationTracker")));
@end

__attribute__((swift_name("AnalyticsDatabase")))
@interface SharedKitAnalyticsDatabase : SharedKitRoom_runtimeRoomDatabase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<SharedKitVisitEventDao>)visitEventDao __attribute__((swift_name("visitEventDao()")));
@end

__attribute__((swift_name("Room_runtimeRoomDatabaseConstructor")))
@protocol SharedKitRoom_runtimeRoomDatabaseConstructor
@required
- (SharedKitRoom_runtimeRoomDatabase *)initialize __attribute__((swift_name("initialize()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AnalyticsDatabaseConstructor")))
@interface SharedKitAnalyticsDatabaseConstructor : SharedKitBase <SharedKitRoom_runtimeRoomDatabaseConstructor>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)analyticsDatabaseConstructor __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKitAnalyticsDatabaseConstructor *shared __attribute__((swift_name("shared")));
- (SharedKitAnalyticsDatabase *)initialize __attribute__((swift_name("initialize()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AnalyticsDatabase_Impl")))
@interface SharedKitAnalyticsDatabase_Impl : SharedKitAnalyticsDatabase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSArray<SharedKitRoom_runtimeMigration *> *)createAutoMigrationsAutoMigrationSpecs:(NSDictionary<id<SharedKitKotlinKClass>, id<SharedKitRoom_runtimeAutoMigrationSpec>> *)autoMigrationSpecs __attribute__((swift_name("createAutoMigrations(autoMigrationSpecs:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (SharedKitRoom_runtimeInvalidationTracker *)createInvalidationTracker __attribute__((swift_name("createInvalidationTracker()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (SharedKitRoom_runtimeRoomOpenDelegate *)createOpenDelegate __attribute__((swift_name("createOpenDelegate()")));
- (NSSet<id<SharedKitKotlinKClass>> *)getRequiredAutoMigrationSpecClasses __attribute__((swift_name("getRequiredAutoMigrationSpecClasses()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (NSDictionary<id<SharedKitKotlinKClass>, NSArray<id<SharedKitKotlinKClass>> *> *)getRequiredTypeConverterClasses __attribute__((swift_name("getRequiredTypeConverterClasses()")));
- (id<SharedKitVisitEventDao>)visitEventDao __attribute__((swift_name("visitEventDao()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VisitEventEntity")))
@interface SharedKitVisitEventEntity : SharedKitBase
- (instancetype)initWithId:(NSString *)id shopId:(NSString *)shopId timestampEpochMillis:(int64_t)timestampEpochMillis __attribute__((swift_name("init(id:shopId:timestampEpochMillis:)"))) __attribute__((objc_designated_initializer));
- (SharedKitVisitEventEntity *)doCopyId:(NSString *)id shopId:(NSString *)shopId timestampEpochMillis:(int64_t)timestampEpochMillis __attribute__((swift_name("doCopy(id:shopId:timestampEpochMillis:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *shopId __attribute__((swift_name("shopId")));
@property (readonly) int64_t timestampEpochMillis __attribute__((swift_name("timestampEpochMillis")));
@end

__attribute__((swift_name("AnalyticsRepository")))
@protocol SharedKitAnalyticsRepository
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getVisitsShopId:(NSString *)shopId from:(SharedKitKotlinx_datetimeInstant *)from to:(SharedKitKotlinx_datetimeInstant *)to completionHandler_:(void (^)(NSArray<SharedKitVisitEvent *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getVisits(shopId:from:to:completionHandler_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)recordVisitEvent:(SharedKitVisitEvent *)event completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("recordVisit(event:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InMemoryAnalyticsRepository")))
@interface SharedKitInMemoryAnalyticsRepository : SharedKitBase <SharedKitAnalyticsRepository>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getVisitsShopId:(NSString *)shopId from:(SharedKitKotlinx_datetimeInstant *)from to:(SharedKitKotlinx_datetimeInstant *)to completionHandler_:(void (^)(NSArray<SharedKitVisitEvent *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getVisits(shopId:from:to:completionHandler_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)recordVisitEvent:(SharedKitVisitEvent *)event completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("recordVisit(event:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RoomAnalyticsRepository")))
@interface SharedKitRoomAnalyticsRepository : SharedKitBase <SharedKitAnalyticsRepository>
- (instancetype)initWithDatabase:(SharedKitAnalyticsDatabase *)database __attribute__((swift_name("init(database:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getVisitsShopId:(NSString *)shopId from:(SharedKitKotlinx_datetimeInstant *)from to:(SharedKitKotlinx_datetimeInstant *)to completionHandler_:(void (^)(NSArray<SharedKitVisitEvent *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getVisits(shopId:from:to:completionHandler_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)recordVisitEvent:(SharedKitVisitEvent *)event completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("recordVisit(event:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ShopStatistics")))
@interface SharedKitShopStatistics : SharedKitBase
- (instancetype)initWithTotalVisits:(int32_t)totalVisits averagePerDay:(double)averagePerDay dailyBreakdown:(NSDictionary<SharedKitKotlinx_datetimeLocalDate *, SharedKitInt *> *)dailyBreakdown __attribute__((swift_name("init(totalVisits:averagePerDay:dailyBreakdown:)"))) __attribute__((objc_designated_initializer));
- (SharedKitShopStatistics *)doCopyTotalVisits:(int32_t)totalVisits averagePerDay:(double)averagePerDay dailyBreakdown:(NSDictionary<SharedKitKotlinx_datetimeLocalDate *, SharedKitInt *> *)dailyBreakdown __attribute__((swift_name("doCopy(totalVisits:averagePerDay:dailyBreakdown:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double averagePerDay __attribute__((swift_name("averagePerDay")));
@property (readonly) NSDictionary<SharedKitKotlinx_datetimeLocalDate *, SharedKitInt *> *dailyBreakdown __attribute__((swift_name("dailyBreakdown")));
@property (readonly) int32_t totalVisits __attribute__((swift_name("totalVisits")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VisitEvent")))
@interface SharedKitVisitEvent : SharedKitBase
- (instancetype)initWithShopId:(NSString *)shopId timestamp:(SharedKitKotlinx_datetimeInstant *)timestamp __attribute__((swift_name("init(shopId:timestamp:)"))) __attribute__((objc_designated_initializer));
- (SharedKitVisitEvent *)doCopyShopId:(NSString *)shopId timestamp:(SharedKitKotlinx_datetimeInstant *)timestamp __attribute__((swift_name("doCopy(shopId:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *shopId __attribute__((swift_name("shopId")));
@property (readonly) SharedKitKotlinx_datetimeInstant *timestamp __attribute__((swift_name("timestamp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WeeklyTrend")))
@interface SharedKitWeeklyTrend : SharedKitBase
- (instancetype)initWithCurrentWeek:(int32_t)currentWeek previousWeek:(int32_t)previousWeek percentageChange:(double)percentageChange __attribute__((swift_name("init(currentWeek:previousWeek:percentageChange:)"))) __attribute__((objc_designated_initializer));
- (SharedKitWeeklyTrend *)doCopyCurrentWeek:(int32_t)currentWeek previousWeek:(int32_t)previousWeek percentageChange:(double)percentageChange __attribute__((swift_name("doCopy(currentWeek:previousWeek:percentageChange:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t currentWeek __attribute__((swift_name("currentWeek")));
@property (readonly) double percentageChange __attribute__((swift_name("percentageChange")));
@property (readonly) int32_t previousWeek __attribute__((swift_name("previousWeek")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetShopStatisticsUseCase")))
@interface SharedKitGetShopStatisticsUseCase : SharedKitBase
- (instancetype)initWithRepository:(id<SharedKitAnalyticsRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeShopId:(NSString *)shopId from:(SharedKitKotlinx_datetimeInstant *)from to:(SharedKitKotlinx_datetimeInstant *)to timeZone:(SharedKitKotlinx_datetimeTimeZone *)timeZone completionHandler:(void (^)(SharedKitShopStatistics * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(shopId:from:to:timeZone:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetWeeklyTrendUseCase")))
@interface SharedKitGetWeeklyTrendUseCase : SharedKitBase
- (instancetype)initWithRepository:(id<SharedKitAnalyticsRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeShopId:(NSString *)shopId now:(SharedKitKotlinx_datetimeInstant *)now timeZone:(SharedKitKotlinx_datetimeTimeZone *)timeZone completionHandler:(void (^)(SharedKitWeeklyTrend * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(shopId:now:timeZone:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecordVisitUseCase")))
@interface SharedKitRecordVisitUseCase : SharedKitBase
- (instancetype)initWithRepository:(id<SharedKitAnalyticsRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeEvent:(SharedKitVisitEvent *)event completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(event:completionHandler:)")));
@end

__attribute__((swift_name("AnalyticsTracker")))
@protocol SharedKitAnalyticsTracker
@required
- (void)trackVisitShopId:(NSString *)shopId __attribute__((swift_name("trackVisit(shopId:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultAnalyticsTracker")))
@interface SharedKitDefaultAnalyticsTracker : SharedKitBase <SharedKitAnalyticsTracker>
- (instancetype)initWithRecordVisit:(SharedKitRecordVisitUseCase *)recordVisit scope:(id<SharedKitKotlinx_coroutines_coreCoroutineScope>)scope clock:(id<SharedKitKotlinx_datetimeClock>)clock __attribute__((swift_name("init(recordVisit:scope:clock:)"))) __attribute__((objc_designated_initializer));
- (void)trackVisitShopId:(NSString *)shopId __attribute__((swift_name("trackVisit(shopId:)")));
@end

__attribute__((swift_name("Koin_coreKoinComponent")))
@protocol SharedKitKoin_coreKoinComponent
@required
- (SharedKitKoin_coreKoin *)getKoin __attribute__((swift_name("getKoin()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KoinHelper")))
@interface SharedKitKoinHelper : SharedKitBase <SharedKitKoin_coreKoinComponent>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<SharedKitAnalyticsTracker>)getAnalyticsTracker __attribute__((swift_name("getAnalyticsTracker()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AnalyticsDatabaseBuilderKt")))
@interface SharedKitAnalyticsDatabaseBuilderKt : SharedKitBase
+ (SharedKitRoom_runtimeRoomDatabaseBuilder<SharedKitAnalyticsDatabase *> *)getAnalyticsDatabaseBuilder __attribute__((swift_name("getAnalyticsDatabaseBuilder()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppLogger_iosKt")))
@interface SharedKitAppLogger_iosKt : SharedKitBase
+ (void)logMessageMessage:(NSString *)message __attribute__((swift_name("logMessage(message:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KoinKt")))
@interface SharedKitKoinKt : SharedKitBase
+ (SharedKitKoin_coreModule *)commonModule __attribute__((swift_name("commonModule()")));
+ (SharedKitKoin_coreKoinApplication *)doInitKoinAppDeclaration:(void (^)(SharedKitKoin_coreKoinApplication *))appDeclaration __attribute__((swift_name("doInitKoin(appDeclaration:)")));
+ (SharedKitKoin_coreModule *)platformModule __attribute__((swift_name("platformModule()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KoinHelperKt")))
@interface SharedKitKoinHelperKt : SharedKitBase
+ (SharedKitKoin_coreKoinApplication *)doInitKoinIos __attribute__((swift_name("doInitKoinIos()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform_iosKt")))
@interface SharedKitPlatform_iosKt : SharedKitBase
+ (NSString *)platform __attribute__((swift_name("platform()")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface SharedKitKotlinThrowable : SharedKitBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKitKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKitKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (SharedKitKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKitKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface SharedKitKotlinException : SharedKitKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKitKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKitKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface SharedKitKotlinRuntimeException : SharedKitKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKitKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKitKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface SharedKitKotlinIllegalStateException : SharedKitKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKitKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKitKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface SharedKitKotlinCancellationException : SharedKitKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKitKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKitKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol SharedKitKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol SharedKitKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol SharedKitKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol SharedKitKotlinKClass <SharedKitKotlinKDeclarationContainer, SharedKitKotlinKAnnotatedElement, SharedKitKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

__attribute__((swift_name("Room_runtimeMigration")))
@interface SharedKitRoom_runtimeMigration : SharedKitBase
- (instancetype)initWithStartVersion:(int32_t)startVersion endVersion:(int32_t)endVersion __attribute__((swift_name("init(startVersion:endVersion:)"))) __attribute__((objc_designated_initializer));
- (void)migrateConnection:(id<SharedKitSqliteSQLiteConnection>)connection __attribute__((swift_name("migrate(connection:)")));
@property (readonly) int32_t endVersion __attribute__((swift_name("endVersion")));
@property (readonly) int32_t startVersion __attribute__((swift_name("startVersion")));
@end

__attribute__((swift_name("Room_runtimeAutoMigrationSpec")))
@protocol SharedKitRoom_runtimeAutoMigrationSpec
@required
- (void)onPostMigrateConnection:(id<SharedKitSqliteSQLiteConnection>)connection __attribute__((swift_name("onPostMigrate(connection:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Room_runtimeInvalidationTracker")))
@interface SharedKitRoom_runtimeInvalidationTracker : SharedKitBase

/**
 * @note annotations
 *   androidx.annotation.RestrictTo(value=[Scope.LIBRARY_GROUP_PREFIX])
*/
- (instancetype)initWithDatabase:(SharedKitRoom_runtimeRoomDatabase *)database shadowTablesMap:(NSDictionary<NSString *, NSString *> *)shadowTablesMap viewTables:(NSDictionary<NSString *, NSSet<NSString *> *> *)viewTables tableNames:(SharedKitKotlinArray<NSString *> *)tableNames __attribute__((swift_name("init(database:shadowTablesMap:viewTables:tableNames:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (id<SharedKitKotlinx_coroutines_coreFlow>)createFlowTables:(SharedKitKotlinArray<NSString *> *)tables emitInitialState:(BOOL)emitInitialState __attribute__((swift_name("createFlow(tables:emitInitialState:)")));

/**
 * @note annotations
 *   androidx.annotation.RestrictTo(value=[Scope.LIBRARY_GROUP])
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)refreshTables:(SharedKitKotlinArray<NSString *> *)tables completionHandler:(void (^)(SharedKitBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("refresh(tables:completionHandler:)")));
- (void)refreshAsync __attribute__((swift_name("refreshAsync()")));
@end

__attribute__((swift_name("Room_runtimeRoomOpenDelegateMarker")))
@protocol SharedKitRoom_runtimeRoomOpenDelegateMarker
@required
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol SharedKitKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<SharedKitKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="2.0")
*/
__attribute__((swift_name("KotlinAutoCloseable")))
@protocol SharedKitKotlinAutoCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end

__attribute__((swift_name("SqliteSQLiteConnection")))
@protocol SharedKitSqliteSQLiteConnection <SharedKitKotlinAutoCloseable>
@required
- (id<SharedKitSqliteSQLiteStatement>)prepareSql:(NSString *)sql __attribute__((swift_name("prepare(sql:)")));
@end


/**
 * @note annotations
 *   androidx.annotation.RestrictTo(value=[Scope.LIBRARY_GROUP_PREFIX])
*/
__attribute__((swift_name("Room_runtimeRoomOpenDelegate")))
@interface SharedKitRoom_runtimeRoomOpenDelegate : SharedKitBase <SharedKitRoom_runtimeRoomOpenDelegateMarker>
- (instancetype)initWithVersion:(int32_t)version identityHash:(NSString *)identityHash legacyIdentityHash:(NSString *)legacyIdentityHash __attribute__((swift_name("init(version:identityHash:legacyIdentityHash:)"))) __attribute__((objc_designated_initializer));
- (void)createAllTablesConnection:(id<SharedKitSqliteSQLiteConnection>)connection __attribute__((swift_name("createAllTables(connection:)")));
- (void)dropAllTablesConnection:(id<SharedKitSqliteSQLiteConnection>)connection __attribute__((swift_name("dropAllTables(connection:)")));
- (void)onCreateConnection:(id<SharedKitSqliteSQLiteConnection>)connection __attribute__((swift_name("onCreate(connection:)")));
- (void)onOpenConnection:(id<SharedKitSqliteSQLiteConnection>)connection __attribute__((swift_name("onOpen(connection:)")));
- (void)onPostMigrateConnection:(id<SharedKitSqliteSQLiteConnection>)connection __attribute__((swift_name("onPostMigrate(connection:)")));
- (void)onPreMigrateConnection:(id<SharedKitSqliteSQLiteConnection>)connection __attribute__((swift_name("onPreMigrate(connection:)")));
- (SharedKitRoom_runtimeRoomOpenDelegateValidationResult *)onValidateSchemaConnection:(id<SharedKitSqliteSQLiteConnection>)connection __attribute__((swift_name("onValidateSchema(connection:)")));
@property (readonly) NSString *identityHash __attribute__((swift_name("identityHash")));
@property (readonly) NSString *legacyIdentityHash __attribute__((swift_name("legacyIdentityHash")));
@property (readonly) int32_t version __attribute__((swift_name("version")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol SharedKitKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/datetime/serializers/InstantIso8601Serializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeInstant")))
@interface SharedKitKotlinx_datetimeInstant : SharedKitBase <SharedKitKotlinComparable>
@property (class, readonly, getter=companion) SharedKitKotlinx_datetimeInstantCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(SharedKitKotlinx_datetimeInstant *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKitKotlinx_datetimeInstant *)minusDuration:(int64_t)duration __attribute__((swift_name("minus(duration:)")));
- (int64_t)minusOther:(SharedKitKotlinx_datetimeInstant *)other __attribute__((swift_name("minus(other:)")));
- (SharedKitKotlinx_datetimeInstant *)plusDuration:(int64_t)duration __attribute__((swift_name("plus(duration:)")));
- (int64_t)toEpochMilliseconds __attribute__((swift_name("toEpochMilliseconds()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t epochSeconds __attribute__((swift_name("epochSeconds")));
@property (readonly) int32_t nanosecondsOfSecond __attribute__((swift_name("nanosecondsOfSecond")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/datetime/serializers/LocalDateIso8601Serializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeLocalDate")))
@interface SharedKitKotlinx_datetimeLocalDate : SharedKitBase <SharedKitKotlinComparable>
- (instancetype)initWithYear:(int32_t)year monthNumber:(int32_t)monthNumber dayOfMonth:(int32_t)dayOfMonth __attribute__((swift_name("init(year:monthNumber:dayOfMonth:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithYear:(int32_t)year month:(SharedKitKotlinx_datetimeMonth *)month dayOfMonth:(int32_t)dayOfMonth __attribute__((swift_name("init(year:month:dayOfMonth:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKitKotlinx_datetimeLocalDateCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(SharedKitKotlinx_datetimeLocalDate *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (int32_t)toEpochDays __attribute__((swift_name("toEpochDays()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) SharedKitKotlinx_datetimeDayOfWeek *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) SharedKitKotlinx_datetimeMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t monthNumber __attribute__((swift_name("monthNumber")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/datetime/serializers/TimeZoneSerializer))
*/
__attribute__((swift_name("Kotlinx_datetimeTimeZone")))
@interface SharedKitKotlinx_datetimeTimeZone : SharedKitBase
@property (class, readonly, getter=companion) SharedKitKotlinx_datetimeTimeZoneCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKitKotlinx_datetimeInstant *)toInstant:(SharedKitKotlinx_datetimeLocalDateTime *)receiver __attribute__((swift_name("toInstant(_:)")));
- (SharedKitKotlinx_datetimeLocalDateTime *)toLocalDateTime:(SharedKitKotlinx_datetimeInstant *)receiver __attribute__((swift_name("toLocalDateTime(_:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@end

__attribute__((swift_name("Kotlinx_datetimeClock")))
@protocol SharedKitKotlinx_datetimeClock
@required
- (SharedKitKotlinx_datetimeInstant *)now __attribute__((swift_name("now()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoin")))
@interface SharedKitKoin_coreKoin : SharedKitBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)close __attribute__((swift_name("close()")));
- (void)createEagerInstances __attribute__((swift_name("createEagerInstances()")));
- (SharedKitKoin_coreScope *)createScopeT:(id<SharedKitKoin_coreKoinScopeComponent>)t __attribute__((swift_name("createScope(t:)")));
- (SharedKitKoin_coreScope *)createScopeScopeId:(NSString *)scopeId __attribute__((swift_name("createScope(scopeId:)")));
- (SharedKitKoin_coreScope *)createScopeScopeId:(NSString *)scopeId source:(id _Nullable)source scopeArchetype:(SharedKitKoin_coreTypeQualifier * _Nullable)scopeArchetype __attribute__((swift_name("createScope(scopeId:source:scopeArchetype:)")));
- (SharedKitKoin_coreScope *)createScopeScopeId:(NSString *)scopeId qualifier:(id<SharedKitKoin_coreQualifier>)qualifier source:(id _Nullable)source scopeArchetype:(SharedKitKoin_coreTypeQualifier * _Nullable)scopeArchetype __attribute__((swift_name("createScope(scopeId:qualifier:source:scopeArchetype:)")));
- (void)declareInstance:(id _Nullable)instance qualifier:(id<SharedKitKoin_coreQualifier> _Nullable)qualifier secondaryTypes:(NSArray<id<SharedKitKotlinKClass>> *)secondaryTypes allowOverride:(BOOL)allowOverride __attribute__((swift_name("declare(instance:qualifier:secondaryTypes:allowOverride:)")));
- (void)deletePropertyKey:(NSString *)key __attribute__((swift_name("deleteProperty(key:)")));
- (void)deleteScopeScopeId:(NSString *)scopeId __attribute__((swift_name("deleteScope(scopeId:)")));
- (id)getQualifier:(id<SharedKitKoin_coreQualifier> _Nullable)qualifier parameters:(SharedKitKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(qualifier:parameters:)")));
- (id _Nullable)getClazz:(id<SharedKitKotlinKClass>)clazz qualifier:(id<SharedKitKoin_coreQualifier> _Nullable)qualifier parameters:(SharedKitKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(clazz:qualifier:parameters:)")));
- (NSArray<id> *)getAll __attribute__((swift_name("getAll()")));
- (SharedKitKoin_coreScope *)getOrCreateScopeScopeId:(NSString *)scopeId __attribute__((swift_name("getOrCreateScope(scopeId:)")));
- (SharedKitKoin_coreScope *)getOrCreateScopeScopeId:(NSString *)scopeId qualifier:(id<SharedKitKoin_coreQualifier>)qualifier source:(id _Nullable)source __attribute__((swift_name("getOrCreateScope(scopeId:qualifier:source:)")));
- (id _Nullable)getOrNullQualifier:(id<SharedKitKoin_coreQualifier> _Nullable)qualifier parameters:(SharedKitKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(qualifier:parameters:)")));
- (id _Nullable)getOrNullClazz:(id<SharedKitKotlinKClass>)clazz qualifier:(id<SharedKitKoin_coreQualifier> _Nullable)qualifier parameters:(SharedKitKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(clazz:qualifier:parameters:)")));
- (id _Nullable)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (id)getPropertyKey:(NSString *)key defaultValue:(id)defaultValue __attribute__((swift_name("getProperty(key:defaultValue:)")));
- (SharedKitKoin_coreScope *)getScopeScopeId:(NSString *)scopeId __attribute__((swift_name("getScope(scopeId:)")));
- (SharedKitKoin_coreScope * _Nullable)getScopeOrNullScopeId:(NSString *)scopeId __attribute__((swift_name("getScopeOrNull(scopeId:)")));
- (id<SharedKitKotlinLazy>)injectQualifier:(id<SharedKitKoin_coreQualifier> _Nullable)qualifier mode:(SharedKitKotlinLazyThreadSafetyMode *)mode parameters:(SharedKitKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("inject(qualifier:mode:parameters:)")));
- (id<SharedKitKotlinLazy>)injectOrNullQualifier:(id<SharedKitKoin_coreQualifier> _Nullable)qualifier mode:(SharedKitKotlinLazyThreadSafetyMode *)mode parameters:(SharedKitKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("injectOrNull(qualifier:mode:parameters:)")));
- (void)loadModulesModules:(NSArray<SharedKitKoin_coreModule *> *)modules allowOverride:(BOOL)allowOverride createEagerInstances:(BOOL)createEagerInstances __attribute__((swift_name("loadModules(modules:allowOverride:createEagerInstances:)")));
- (void)setPropertyKey:(NSString *)key value:(id)value __attribute__((swift_name("setProperty(key:value:)")));
- (void)setupLoggerLogger:(SharedKitKoin_coreLogger *)logger __attribute__((swift_name("setupLogger(logger:)")));
- (void)unloadModulesModules:(NSArray<SharedKitKoin_coreModule *> *)modules __attribute__((swift_name("unloadModules(modules:)")));
@property (readonly) SharedKitKoin_coreExtensionManager *extensionManager __attribute__((swift_name("extensionManager")));
@property (readonly) SharedKitKoin_coreInstanceRegistry *instanceRegistry __attribute__((swift_name("instanceRegistry")));
@property (readonly) SharedKitKoin_coreLogger *logger __attribute__((swift_name("logger")));
@property (readonly) SharedKitKoin_coreOptionRegistry *optionRegistry __attribute__((swift_name("optionRegistry")));
@property (readonly) SharedKitKoin_corePropertyRegistry *propertyRegistry __attribute__((swift_name("propertyRegistry")));
@property (readonly) SharedKitKoin_coreCoreResolver *resolver __attribute__((swift_name("resolver")));
@property (readonly) SharedKitKoin_coreScopeRegistry *scopeRegistry __attribute__((swift_name("scopeRegistry")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Room_runtimeRoomDatabaseBuilder")))
@interface SharedKitRoom_runtimeRoomDatabaseBuilder<T> : SharedKitBase
- (SharedKitRoom_runtimeRoomDatabaseBuilder<T> *)addAutoMigrationSpecAutoMigrationSpec:(id<SharedKitRoom_runtimeAutoMigrationSpec>)autoMigrationSpec __attribute__((swift_name("addAutoMigrationSpec(autoMigrationSpec:)")));
- (SharedKitRoom_runtimeRoomDatabaseBuilder<T> *)addCallbackCallback:(SharedKitRoom_runtimeRoomDatabaseCallback *)callback __attribute__((swift_name("addCallback(callback:)")));
- (SharedKitRoom_runtimeRoomDatabaseBuilder<T> *)addMigrationsMigrations:(SharedKitKotlinArray<SharedKitRoom_runtimeMigration *> *)migrations __attribute__((swift_name("addMigrations(migrations:)")));
- (SharedKitRoom_runtimeRoomDatabaseBuilder<T> *)addTypeConverterTypeConverter:(id)typeConverter __attribute__((swift_name("addTypeConverter(typeConverter:)")));
- (T)build __attribute__((swift_name("build()")));
- (SharedKitRoom_runtimeRoomDatabaseBuilder<T> *)fallbackToDestructiveMigrationDropAllTables:(BOOL)dropAllTables __attribute__((swift_name("fallbackToDestructiveMigration(dropAllTables:)")));
- (SharedKitRoom_runtimeRoomDatabaseBuilder<T> *)fallbackToDestructiveMigrationFromDropAllTables:(BOOL)dropAllTables startVersions:(SharedKitKotlinIntArray *)startVersions __attribute__((swift_name("fallbackToDestructiveMigrationFrom(dropAllTables:startVersions:)")));
- (SharedKitRoom_runtimeRoomDatabaseBuilder<T> *)fallbackToDestructiveMigrationOnDowngradeDropAllTables:(BOOL)dropAllTables __attribute__((swift_name("fallbackToDestructiveMigrationOnDowngrade(dropAllTables:)")));
- (SharedKitRoom_runtimeRoomDatabaseBuilder<T> *)setDriverDriver:(id<SharedKitSqliteSQLiteDriver>)driver __attribute__((swift_name("setDriver(driver:)")));
- (SharedKitRoom_runtimeRoomDatabaseBuilder<T> *)setJournalModeJournalMode:(SharedKitRoom_runtimeRoomDatabaseJournalMode *)journalMode __attribute__((swift_name("setJournalMode(journalMode:)")));
- (SharedKitRoom_runtimeRoomDatabaseBuilder<T> *)setQueryCoroutineContextContext:(id<SharedKitKotlinCoroutineContext>)context __attribute__((swift_name("setQueryCoroutineContext(context:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreModule")))
@interface SharedKitKoin_coreModule : SharedKitBase
- (instancetype)initWith_createdAtStart:(BOOL)_createdAtStart __attribute__((swift_name("init(_createdAtStart:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (SharedKitKoin_coreKoinDefinition<id> *)factoryQualifier:(id<SharedKitKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(SharedKitKoin_coreScope *, SharedKitKoin_coreParametersHolder *))definition __attribute__((swift_name("factory(qualifier:definition:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (void)includesModule:(SharedKitKotlinArray<SharedKitKoin_coreModule *> *)module __attribute__((swift_name("includes(module:)")));
- (void)includesModule_:(id)module __attribute__((swift_name("includes(module_:)")));
- (void)indexPrimaryTypeInstanceFactory:(SharedKitKoin_coreInstanceFactory<id> *)instanceFactory __attribute__((swift_name("indexPrimaryType(instanceFactory:)")));
- (void)indexSecondaryTypesInstanceFactory:(SharedKitKoin_coreInstanceFactory<id> *)instanceFactory __attribute__((swift_name("indexSecondaryTypes(instanceFactory:)")));
- (NSArray<SharedKitKoin_coreModule *> *)plusModules:(NSArray<SharedKitKoin_coreModule *> *)modules __attribute__((swift_name("plus(modules:)")));
- (NSArray<SharedKitKoin_coreModule *> *)plusModule:(SharedKitKoin_coreModule *)module __attribute__((swift_name("plus(module:)")));
- (void)prepareForCreationAtStartInstanceFactory:(SharedKitKoin_coreSingleInstanceFactory<id> *)instanceFactory __attribute__((swift_name("prepareForCreationAtStart(instanceFactory:)")));
- (void)scopeScopeSet:(void (^)(SharedKitKoin_coreScopeDSL *))scopeSet __attribute__((swift_name("scope(scopeSet:)")));
- (void)scopeQualifier:(id<SharedKitKoin_coreQualifier>)qualifier scopeSet:(void (^)(SharedKitKoin_coreScopeDSL *))scopeSet __attribute__((swift_name("scope(qualifier:scopeSet:)")));
- (SharedKitKoin_coreKoinDefinition<id> *)singleQualifier:(id<SharedKitKoin_coreQualifier> _Nullable)qualifier createdAtStart:(BOOL)createdAtStart definition:(id _Nullable (^)(SharedKitKoin_coreScope *, SharedKitKoin_coreParametersHolder *))definition __attribute__((swift_name("single(qualifier:createdAtStart:definition:)")));
@property (readonly) SharedKitMutableSet<SharedKitKoin_coreSingleInstanceFactory<id> *> *eagerInstances __attribute__((swift_name("eagerInstances")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSMutableArray<SharedKitKoin_coreModule *> *includedModules __attribute__((swift_name("includedModules")));
@property (readonly) BOOL isLoaded __attribute__((swift_name("isLoaded")));
@property (readonly) SharedKitMutableDictionary<NSString *, SharedKitKoin_coreInstanceFactory<id> *> *mappings __attribute__((swift_name("mappings")));
@property (readonly) SharedKitMutableSet<id<SharedKitKoin_coreQualifier>> *scopes __attribute__((swift_name("scopes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoinApplication")))
@interface SharedKitKoin_coreKoinApplication : SharedKitBase
@property (class, readonly, getter=companion) SharedKitKoin_coreKoinApplicationCompanion *companion __attribute__((swift_name("companion")));
- (void)allowOverrideOverride:(BOOL)override __attribute__((swift_name("allowOverride(override:)")));
- (void)close __attribute__((swift_name("close()")));
- (void)createEagerInstances __attribute__((swift_name("createEagerInstances()")));
- (SharedKitKoin_coreKoinApplication *)loggerLogger:(SharedKitKoin_coreLogger *)logger __attribute__((swift_name("logger(logger:)")));
- (SharedKitKoin_coreKoinApplication *)modulesModules:(SharedKitKotlinArray<SharedKitKoin_coreModule *> *)modules __attribute__((swift_name("modules(modules:)")));
- (SharedKitKoin_coreKoinApplication *)modulesModules_:(NSArray<SharedKitKoin_coreModule *> *)modules __attribute__((swift_name("modules(modules_:)")));
- (SharedKitKoin_coreKoinApplication *)modulesModules__:(SharedKitKoin_coreModule *)modules __attribute__((swift_name("modules(modules__:)")));
- (SharedKitKoin_coreKoinApplication *)optionsOptionValue:(SharedKitKotlinArray<SharedKitKotlinPair<SharedKitKoin_coreKoinOption *, id> *> *)optionValue __attribute__((swift_name("options(optionValue:)")));
- (SharedKitKoin_coreKoinApplication *)printLoggerLevel:(SharedKitKoin_coreLevel *)level __attribute__((swift_name("printLogger(level:)")));
- (SharedKitKoin_coreKoinApplication *)propertiesValues:(NSDictionary<NSString *, id> *)values __attribute__((swift_name("properties(values:)")));
@property (readonly) SharedKitKoin_coreKoin *koin __attribute__((swift_name("koin")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface SharedKitKotlinArray<T> : SharedKitBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(SharedKitInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<SharedKitKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol SharedKitKotlinx_coroutines_coreFlow
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<SharedKitKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol SharedKitKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<SharedKitKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<SharedKitKotlinCoroutineContextElement> _Nullable)getKey:(id<SharedKitKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<SharedKitKotlinCoroutineContext>)minusKeyKey:(id<SharedKitKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<SharedKitKotlinCoroutineContext>)plusContext:(id<SharedKitKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end

__attribute__((swift_name("SqliteSQLiteStatement")))
@protocol SharedKitSqliteSQLiteStatement <SharedKitKotlinAutoCloseable>
@required

/**
 * @param index annotations androidx.annotation.IntRange(from=1.toLong())
*/
- (void)bindBlobIndex:(int32_t)index value:(SharedKitKotlinByteArray *)value __attribute__((swift_name("bindBlob(index:value:)")));

/**
 * @param index annotations androidx.annotation.IntRange(from=1.toLong())
*/
- (void)bindBooleanIndex:(int32_t)index value:(BOOL)value __attribute__((swift_name("bindBoolean(index:value:)")));

/**
 * @param index annotations androidx.annotation.IntRange(from=1.toLong())
*/
- (void)bindDoubleIndex:(int32_t)index value:(double)value __attribute__((swift_name("bindDouble(index:value:)")));

/**
 * @param index annotations androidx.annotation.IntRange(from=1.toLong())
*/
- (void)bindFloatIndex:(int32_t)index value:(float)value __attribute__((swift_name("bindFloat(index:value:)")));

/**
 * @param index annotations androidx.annotation.IntRange(from=1.toLong())
*/
- (void)bindIntIndex:(int32_t)index value:(int32_t)value __attribute__((swift_name("bindInt(index:value:)")));

/**
 * @param index annotations androidx.annotation.IntRange(from=1.toLong())
*/
- (void)bindLongIndex:(int32_t)index value:(int64_t)value __attribute__((swift_name("bindLong(index:value:)")));

/**
 * @param index annotations androidx.annotation.IntRange(from=1.toLong())
*/
- (void)bindNullIndex:(int32_t)index __attribute__((swift_name("bindNull(index:)")));

/**
 * @param index annotations androidx.annotation.IntRange(from=1.toLong())
*/
- (void)bindTextIndex:(int32_t)index value:(NSString *)value __attribute__((swift_name("bindText(index:value:)")));
- (void)clearBindings __attribute__((swift_name("clearBindings()")));

/**
 * @param index annotations androidx.annotation.IntRange(from=0.toLong())
*/
- (SharedKitKotlinByteArray *)getBlobIndex:(int32_t)index __attribute__((swift_name("getBlob(index:)")));

/**
 * @param index annotations androidx.annotation.IntRange(from=0.toLong())
*/
- (BOOL)getBooleanIndex:(int32_t)index __attribute__((swift_name("getBoolean(index:)")));
- (int32_t)getColumnCount __attribute__((swift_name("getColumnCount()")));

/**
 * @param index annotations androidx.annotation.IntRange(from=0.toLong())
*/
- (NSString *)getColumnNameIndex:(int32_t)index __attribute__((swift_name("getColumnName(index:)")));
- (NSArray<NSString *> *)getColumnNames __attribute__((swift_name("getColumnNames()")));

/**
 * @param index annotations androidx.annotation.IntRange(from=0.toLong())
*/
- (int32_t)getColumnTypeIndex:(int32_t)index __attribute__((swift_name("getColumnType(index:)")));

/**
 * @param index annotations androidx.annotation.IntRange(from=0.toLong())
*/
- (double)getDoubleIndex:(int32_t)index __attribute__((swift_name("getDouble(index:)")));

/**
 * @param index annotations androidx.annotation.IntRange(from=0.toLong())
*/
- (float)getFloatIndex:(int32_t)index __attribute__((swift_name("getFloat(index:)")));

/**
 * @param index annotations androidx.annotation.IntRange(from=0.toLong())
*/
- (int32_t)getIntIndex:(int32_t)index __attribute__((swift_name("getInt(index:)")));

/**
 * @param index annotations androidx.annotation.IntRange(from=0.toLong())
*/
- (int64_t)getLongIndex:(int32_t)index __attribute__((swift_name("getLong(index:)")));

/**
 * @param index annotations androidx.annotation.IntRange(from=0.toLong())
*/
- (NSString *)getTextIndex:(int32_t)index __attribute__((swift_name("getText(index:)")));

/**
 * @param index annotations androidx.annotation.IntRange(from=0.toLong())
*/
- (BOOL)isNullIndex:(int32_t)index __attribute__((swift_name("isNull(index:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (BOOL)step __attribute__((swift_name("step()")));
@end


/**
 * @note annotations
 *   androidx.annotation.RestrictTo(value=[Scope.LIBRARY_GROUP_PREFIX])
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Room_runtimeRoomOpenDelegate.ValidationResult")))
@interface SharedKitRoom_runtimeRoomOpenDelegateValidationResult : SharedKitBase
- (instancetype)initWithIsValid:(BOOL)isValid expectedFoundMsg:(NSString * _Nullable)expectedFoundMsg __attribute__((swift_name("init(isValid:expectedFoundMsg:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString * _Nullable expectedFoundMsg __attribute__((swift_name("expectedFoundMsg")));
@property (readonly) BOOL isValid __attribute__((swift_name("isValid")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeInstant.Companion")))
@interface SharedKitKotlinx_datetimeInstantCompanion : SharedKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKitKotlinx_datetimeInstantCompanion *shared __attribute__((swift_name("shared")));
- (SharedKitKotlinx_datetimeInstant *)fromEpochMillisecondsEpochMilliseconds:(int64_t)epochMilliseconds __attribute__((swift_name("fromEpochMilliseconds(epochMilliseconds:)")));
- (SharedKitKotlinx_datetimeInstant *)fromEpochSecondsEpochSeconds:(int64_t)epochSeconds nanosecondAdjustment:(int32_t)nanosecondAdjustment __attribute__((swift_name("fromEpochSeconds(epochSeconds:nanosecondAdjustment:)")));
- (SharedKitKotlinx_datetimeInstant *)fromEpochSecondsEpochSeconds:(int64_t)epochSeconds nanosecondAdjustment_:(int64_t)nanosecondAdjustment __attribute__((swift_name("fromEpochSeconds(epochSeconds:nanosecondAdjustment_:)")));
- (SharedKitKotlinx_datetimeInstant *)now __attribute__((swift_name("now()"))) __attribute__((unavailable("Use Clock.System.now() instead")));
- (SharedKitKotlinx_datetimeInstant *)parseInput:(id)input format:(id<SharedKitKotlinx_datetimeDateTimeFormat>)format __attribute__((swift_name("parse(input:format:)")));
- (id<SharedKitKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) SharedKitKotlinx_datetimeInstant *DISTANT_FUTURE __attribute__((swift_name("DISTANT_FUTURE")));
@property (readonly) SharedKitKotlinx_datetimeInstant *DISTANT_PAST __attribute__((swift_name("DISTANT_PAST")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface SharedKitKotlinEnum<E> : SharedKitBase <SharedKitKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKitKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeMonth")))
@interface SharedKitKotlinx_datetimeMonth : SharedKitKotlinEnum<SharedKitKotlinx_datetimeMonth *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedKitKotlinx_datetimeMonth *january __attribute__((swift_name("january")));
@property (class, readonly) SharedKitKotlinx_datetimeMonth *february __attribute__((swift_name("february")));
@property (class, readonly) SharedKitKotlinx_datetimeMonth *march __attribute__((swift_name("march")));
@property (class, readonly) SharedKitKotlinx_datetimeMonth *april __attribute__((swift_name("april")));
@property (class, readonly) SharedKitKotlinx_datetimeMonth *may __attribute__((swift_name("may")));
@property (class, readonly) SharedKitKotlinx_datetimeMonth *june __attribute__((swift_name("june")));
@property (class, readonly) SharedKitKotlinx_datetimeMonth *july __attribute__((swift_name("july")));
@property (class, readonly) SharedKitKotlinx_datetimeMonth *august __attribute__((swift_name("august")));
@property (class, readonly) SharedKitKotlinx_datetimeMonth *september __attribute__((swift_name("september")));
@property (class, readonly) SharedKitKotlinx_datetimeMonth *october __attribute__((swift_name("october")));
@property (class, readonly) SharedKitKotlinx_datetimeMonth *november __attribute__((swift_name("november")));
@property (class, readonly) SharedKitKotlinx_datetimeMonth *december __attribute__((swift_name("december")));
+ (SharedKitKotlinArray<SharedKitKotlinx_datetimeMonth *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedKitKotlinx_datetimeMonth *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeLocalDate.Companion")))
@interface SharedKitKotlinx_datetimeLocalDateCompanion : SharedKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKitKotlinx_datetimeLocalDateCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKitKotlinx_datetimeDateTimeFormat>)FormatBlock:(void (^)(id<SharedKitKotlinx_datetimeDateTimeFormatBuilderWithDate>))block __attribute__((swift_name("Format(block:)")));
- (SharedKitKotlinx_datetimeLocalDate *)fromEpochDaysEpochDays:(int32_t)epochDays __attribute__((swift_name("fromEpochDays(epochDays:)")));
- (SharedKitKotlinx_datetimeLocalDate *)parseInput:(id)input format:(id<SharedKitKotlinx_datetimeDateTimeFormat>)format __attribute__((swift_name("parse(input:format:)")));
- (id<SharedKitKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeDayOfWeek")))
@interface SharedKitKotlinx_datetimeDayOfWeek : SharedKitKotlinEnum<SharedKitKotlinx_datetimeDayOfWeek *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedKitKotlinx_datetimeDayOfWeek *monday __attribute__((swift_name("monday")));
@property (class, readonly) SharedKitKotlinx_datetimeDayOfWeek *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) SharedKitKotlinx_datetimeDayOfWeek *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) SharedKitKotlinx_datetimeDayOfWeek *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) SharedKitKotlinx_datetimeDayOfWeek *friday __attribute__((swift_name("friday")));
@property (class, readonly) SharedKitKotlinx_datetimeDayOfWeek *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) SharedKitKotlinx_datetimeDayOfWeek *sunday __attribute__((swift_name("sunday")));
+ (SharedKitKotlinArray<SharedKitKotlinx_datetimeDayOfWeek *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedKitKotlinx_datetimeDayOfWeek *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeTimeZone.Companion")))
@interface SharedKitKotlinx_datetimeTimeZoneCompanion : SharedKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKitKotlinx_datetimeTimeZoneCompanion *shared __attribute__((swift_name("shared")));
- (SharedKitKotlinx_datetimeTimeZone *)currentSystemDefault __attribute__((swift_name("currentSystemDefault()")));
- (SharedKitKotlinx_datetimeTimeZone *)ofZoneId:(NSString *)zoneId __attribute__((swift_name("of(zoneId:)")));
- (id<SharedKitKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) SharedKitKotlinx_datetimeFixedOffsetTimeZone *UTC __attribute__((swift_name("UTC")));
@property (readonly) NSSet<NSString *> *availableZoneIds __attribute__((swift_name("availableZoneIds")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/datetime/serializers/LocalDateTimeIso8601Serializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeLocalDateTime")))
@interface SharedKitKotlinx_datetimeLocalDateTime : SharedKitBase <SharedKitKotlinComparable>
- (instancetype)initWithDate:(SharedKitKotlinx_datetimeLocalDate *)date time:(SharedKitKotlinx_datetimeLocalTime *)time __attribute__((swift_name("init(date:time:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithYear:(int32_t)year monthNumber:(int32_t)monthNumber dayOfMonth:(int32_t)dayOfMonth hour:(int32_t)hour minute:(int32_t)minute second:(int32_t)second nanosecond:(int32_t)nanosecond __attribute__((swift_name("init(year:monthNumber:dayOfMonth:hour:minute:second:nanosecond:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithYear:(int32_t)year month:(SharedKitKotlinx_datetimeMonth *)month dayOfMonth:(int32_t)dayOfMonth hour:(int32_t)hour minute:(int32_t)minute second:(int32_t)second nanosecond:(int32_t)nanosecond __attribute__((swift_name("init(year:month:dayOfMonth:hour:minute:second:nanosecond:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKitKotlinx_datetimeLocalDateTimeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(SharedKitKotlinx_datetimeLocalDateTime *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKitKotlinx_datetimeLocalDate *date __attribute__((swift_name("date")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) SharedKitKotlinx_datetimeDayOfWeek *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hour __attribute__((swift_name("hour")));
@property (readonly) int32_t minute __attribute__((swift_name("minute")));
@property (readonly) SharedKitKotlinx_datetimeMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t monthNumber __attribute__((swift_name("monthNumber")));
@property (readonly) int32_t nanosecond __attribute__((swift_name("nanosecond")));
@property (readonly) int32_t second __attribute__((swift_name("second")));
@property (readonly) SharedKitKotlinx_datetimeLocalTime *time __attribute__((swift_name("time")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end

__attribute__((swift_name("Koin_coreLockable")))
@interface SharedKitKoin_coreLockable : SharedKitBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScope")))
@interface SharedKitKoin_coreScope : SharedKitKoin_coreLockable
- (instancetype)initWithScopeQualifier:(id<SharedKitKoin_coreQualifier>)scopeQualifier id:(NSString *)id isRoot:(BOOL)isRoot scopeArchetype:(SharedKitKoin_coreTypeQualifier * _Nullable)scopeArchetype _koin:(SharedKitKoin_coreKoin *)_koin __attribute__((swift_name("init(scopeQualifier:id:isRoot:scopeArchetype:_koin:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)close __attribute__((swift_name("close()")));
- (void)declareInstance:(id _Nullable)instance qualifier:(id<SharedKitKoin_coreQualifier> _Nullable)qualifier secondaryTypes:(NSArray<id<SharedKitKotlinKClass>> *)secondaryTypes allowOverride:(BOOL)allowOverride holdInstance:(BOOL)holdInstance __attribute__((swift_name("declare(instance:qualifier:secondaryTypes:allowOverride:holdInstance:)")));
- (id)getQualifier:(id<SharedKitKoin_coreQualifier> _Nullable)qualifier parameters:(SharedKitKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(qualifier:parameters:)")));
- (id _Nullable)getClazz:(id<SharedKitKotlinKClass>)clazz qualifier:(id<SharedKitKoin_coreQualifier> _Nullable)qualifier parameters:(SharedKitKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(clazz:qualifier:parameters:)")));
- (NSArray<id> *)getAll __attribute__((swift_name("getAll()")));
- (NSArray<id> *)getAllClazz:(id<SharedKitKotlinKClass>)clazz __attribute__((swift_name("getAll(clazz:)")));
- (SharedKitKoin_coreKoin *)getKoin __attribute__((swift_name("getKoin()")));
- (NSArray<NSString *> *)getLinkedScopeIds __attribute__((swift_name("getLinkedScopeIds()")));
- (id _Nullable)getOrNullQualifier:(id<SharedKitKoin_coreQualifier> _Nullable)qualifier parameters:(SharedKitKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(qualifier:parameters:)")));
- (id _Nullable)getOrNullClazz:(id<SharedKitKotlinKClass>)clazz qualifier:(id<SharedKitKoin_coreQualifier> _Nullable)qualifier parameters:(SharedKitKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(clazz:qualifier:parameters:)")));
- (id)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (id)getPropertyKey:(NSString *)key defaultValue:(id)defaultValue __attribute__((swift_name("getProperty(key:defaultValue:)")));
- (id _Nullable)getPropertyOrNullKey:(NSString *)key __attribute__((swift_name("getPropertyOrNull(key:)")));
- (SharedKitKoin_coreScope *)getScopeScopeID:(NSString *)scopeID __attribute__((swift_name("getScope(scopeID:)")));
- (id _Nullable)getSource __attribute__((swift_name("getSource()")));
- (id _Nullable)getWithParametersClazz:(id<SharedKitKotlinKClass>)clazz qualifier:(id<SharedKitKoin_coreQualifier> _Nullable)qualifier parameters:(SharedKitKoin_coreParametersHolder * _Nullable)parameters __attribute__((swift_name("getWithParameters(clazz:qualifier:parameters:)")));
- (id<SharedKitKotlinLazy>)injectQualifier:(id<SharedKitKoin_coreQualifier> _Nullable)qualifier mode:(SharedKitKotlinLazyThreadSafetyMode *)mode parameters:(SharedKitKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("inject(qualifier:mode:parameters:)")));
- (id<SharedKitKotlinLazy>)injectOrNullQualifier:(id<SharedKitKoin_coreQualifier> _Nullable)qualifier mode:(SharedKitKotlinLazyThreadSafetyMode *)mode parameters:(SharedKitKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("injectOrNull(qualifier:mode:parameters:)")));
- (BOOL)isNotClosed __attribute__((swift_name("isNotClosed()")));
- (void)linkToScopes:(SharedKitKotlinArray<SharedKitKoin_coreScope *> *)scopes __attribute__((swift_name("linkTo(scopes:)")));
- (void)registerCallbackCallback:(id<SharedKitKoin_coreScopeCallback>)callback __attribute__((swift_name("registerCallback(callback:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (void)unlinkScopes:(SharedKitKotlinArray<SharedKitKoin_coreScope *> *)scopes __attribute__((swift_name("unlink(scopes:)")));
@property (readonly) BOOL closed __attribute__((swift_name("closed")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isRoot __attribute__((swift_name("isRoot")));
@property (readonly) SharedKitKoin_coreLogger *logger __attribute__((swift_name("logger")));
@property (readonly) SharedKitKoin_coreTypeQualifier * _Nullable scopeArchetype __attribute__((swift_name("scopeArchetype")));
@property (readonly) id<SharedKitKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@property id _Nullable sourceValue __attribute__((swift_name("sourceValue")));
@end

__attribute__((swift_name("Koin_coreKoinScopeComponent")))
@protocol SharedKitKoin_coreKoinScopeComponent <SharedKitKoin_coreKoinComponent>
@required
@property (readonly) SharedKitKoin_coreScope *scope __attribute__((swift_name("scope")));
@end

__attribute__((swift_name("Koin_coreQualifier")))
@protocol SharedKitKoin_coreQualifier
@required
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreTypeQualifier")))
@interface SharedKitKoin_coreTypeQualifier : SharedKitBase <SharedKitKoin_coreQualifier>
- (instancetype)initWithType:(id<SharedKitKotlinKClass>)type __attribute__((swift_name("init(type:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SharedKitKotlinKClass> type __attribute__((swift_name("type")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Koin_coreParametersHolder")))
@interface SharedKitKoin_coreParametersHolder : SharedKitBase
- (instancetype)initWith_values:(NSMutableArray<id> *)_values useIndexedValues:(SharedKitBoolean * _Nullable)useIndexedValues __attribute__((swift_name("init(_values:useIndexedValues:)"))) __attribute__((objc_designated_initializer));
- (SharedKitKoin_coreParametersHolder *)addValue:(id)value __attribute__((swift_name("add(value:)")));
- (id _Nullable)component1 __attribute__((swift_name("component1()")));
- (id _Nullable)component2 __attribute__((swift_name("component2()")));
- (id _Nullable)component3 __attribute__((swift_name("component3()")));
- (id _Nullable)component4 __attribute__((swift_name("component4()")));
- (id _Nullable)component5 __attribute__((swift_name("component5()")));
- (id _Nullable)elementAtI:(int32_t)i clazz:(id<SharedKitKotlinKClass>)clazz __attribute__((swift_name("elementAt(i:clazz:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (id)get __attribute__((swift_name("get()")));
- (id _Nullable)getI:(int32_t)i __attribute__((swift_name("get(i:)")));
- (id _Nullable)getOrNull __attribute__((swift_name("getOrNull()")));
- (id _Nullable)getOrNullClazz:(id<SharedKitKotlinKClass>)clazz __attribute__((swift_name("getOrNull(clazz:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedKitKoin_coreParametersHolder *)insertIndex:(int32_t)index value:(id)value __attribute__((swift_name("insert(index:value:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (BOOL)isNotEmpty __attribute__((swift_name("isNotEmpty()")));
- (void)setI:(int32_t)i t:(id _Nullable)t __attribute__((swift_name("set(i:t:)")));
- (int32_t)size __attribute__((swift_name("size()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property int32_t index __attribute__((swift_name("index")));
@property (readonly) SharedKitBoolean * _Nullable useIndexedValues __attribute__((swift_name("useIndexedValues")));
@property (readonly) NSArray<id> *values __attribute__((swift_name("values")));
@end

__attribute__((swift_name("KotlinLazy")))
@protocol SharedKitKotlinLazy
@required
- (BOOL)isInitialized __attribute__((swift_name("isInitialized()")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinLazyThreadSafetyMode")))
@interface SharedKitKotlinLazyThreadSafetyMode : SharedKitKotlinEnum<SharedKitKotlinLazyThreadSafetyMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedKitKotlinLazyThreadSafetyMode *synchronized __attribute__((swift_name("synchronized")));
@property (class, readonly) SharedKitKotlinLazyThreadSafetyMode *publication __attribute__((swift_name("publication")));
@property (class, readonly) SharedKitKotlinLazyThreadSafetyMode *none __attribute__((swift_name("none")));
+ (SharedKitKotlinArray<SharedKitKotlinLazyThreadSafetyMode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedKitKotlinLazyThreadSafetyMode *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("Koin_coreLogger")))
@interface SharedKitKoin_coreLogger : SharedKitBase
- (instancetype)initWithLevel:(SharedKitKoin_coreLevel *)level __attribute__((swift_name("init(level:)"))) __attribute__((objc_designated_initializer));
- (void)debugMsg:(NSString *)msg __attribute__((swift_name("debug(msg:)")));
- (void)displayLevel:(SharedKitKoin_coreLevel *)level msg:(NSString *)msg __attribute__((swift_name("display(level:msg:)")));
- (void)errorMsg:(NSString *)msg __attribute__((swift_name("error(msg:)")));
- (void)infoMsg:(NSString *)msg __attribute__((swift_name("info(msg:)")));
- (BOOL)isAtLvl:(SharedKitKoin_coreLevel *)lvl __attribute__((swift_name("isAt(lvl:)")));
- (void)logLvl:(SharedKitKoin_coreLevel *)lvl msg:(NSString *(^)(void))msg __attribute__((swift_name("log(lvl:msg:)")));
- (void)logLvl:(SharedKitKoin_coreLevel *)lvl msg_:(NSString *)msg __attribute__((swift_name("log(lvl:msg_:)")));
- (void)warnMsg:(NSString *)msg __attribute__((swift_name("warn(msg:)")));
@property SharedKitKoin_coreLevel *level __attribute__((swift_name("level")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreExtensionManager")))
@interface SharedKitKoin_coreExtensionManager : SharedKitBase
- (instancetype)initWith_koin:(SharedKitKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (id<SharedKitKoin_coreKoinExtension>)getExtensionId:(NSString *)id __attribute__((swift_name("getExtension(id:)")));
- (id<SharedKitKoin_coreKoinExtension> _Nullable)getExtensionOrNullId:(NSString *)id __attribute__((swift_name("getExtensionOrNull(id:)")));
- (void)registerExtensionId:(NSString *)id extension:(id<SharedKitKoin_coreKoinExtension>)extension __attribute__((swift_name("registerExtension(id:extension:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceRegistry")))
@interface SharedKitKoin_coreInstanceRegistry : SharedKitBase
- (instancetype)initWith_koin:(SharedKitKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)saveMappingAllowOverride:(BOOL)allowOverride mapping:(NSString *)mapping factory:(SharedKitKoin_coreInstanceFactory<id> *)factory logWarning:(BOOL)logWarning __attribute__((swift_name("saveMapping(allowOverride:mapping:factory:logWarning:)")));
- (int32_t)size __attribute__((swift_name("size()")));
@property (readonly) SharedKitKoin_coreKoin *_koin __attribute__((swift_name("_koin")));
@property (readonly) NSDictionary<NSString *, SharedKitKoin_coreInstanceFactory<id> *> *instances __attribute__((swift_name("instances")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreOptionRegistry")))
@interface SharedKitKoin_coreOptionRegistry : SharedKitBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_corePropertyRegistry")))
@interface SharedKitKoin_corePropertyRegistry : SharedKitBase
- (instancetype)initWith_koin:(SharedKitKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (void)deletePropertyKey:(NSString *)key __attribute__((swift_name("deleteProperty(key:)")));
- (id _Nullable)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (void)savePropertiesProperties:(NSDictionary<NSString *, id> *)properties __attribute__((swift_name("saveProperties(properties:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreCoreResolver")))
@interface SharedKitKoin_coreCoreResolver : SharedKitBase
- (instancetype)initWith_koin:(SharedKitKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)addResolutionExtensionResolutionExtension:(id<SharedKitKoin_coreResolutionExtension>)resolutionExtension __attribute__((swift_name("addResolutionExtension(resolutionExtension:)")));
- (id _Nullable)resolveFromContextScope:(SharedKitKoin_coreScope *)scope instanceContext:(SharedKitKoin_coreResolutionContext *)instanceContext __attribute__((swift_name("resolveFromContext(scope:instanceContext:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeRegistry")))
@interface SharedKitKoin_coreScopeRegistry : SharedKitBase
- (instancetype)initWith_koin:(SharedKitKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKitKoin_coreScopeRegistryCompanion *companion __attribute__((swift_name("companion")));
- (void)loadScopesModules:(NSSet<SharedKitKoin_coreModule *> *)modules __attribute__((swift_name("loadScopes(modules:)")));
@property (readonly) SharedKitKoin_coreScope *rootScope __attribute__((swift_name("rootScope")));
@property (readonly) NSSet<id<SharedKitKoin_coreQualifier>> *scopeDefinitions __attribute__((swift_name("scopeDefinitions")));
@end

__attribute__((swift_name("Room_runtimeRoomDatabase.Callback")))
@interface SharedKitRoom_runtimeRoomDatabaseCallback : SharedKitBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)onCreateConnection:(id<SharedKitSqliteSQLiteConnection>)connection __attribute__((swift_name("onCreate(connection:)")));
- (void)onDestructiveMigrationConnection:(id<SharedKitSqliteSQLiteConnection>)connection __attribute__((swift_name("onDestructiveMigration(connection:)")));
- (void)onOpenConnection:(id<SharedKitSqliteSQLiteConnection>)connection __attribute__((swift_name("onOpen(connection:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntArray")))
@interface SharedKitKotlinIntArray : SharedKitBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(SharedKitInt *(^)(SharedKitInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int32_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (SharedKitKotlinIntIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int32_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("SqliteSQLiteDriver")))
@protocol SharedKitSqliteSQLiteDriver
@required
- (id<SharedKitSqliteSQLiteConnection>)openFileName:(NSString *)fileName __attribute__((swift_name("open(fileName:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Room_runtimeRoomDatabase.JournalMode")))
@interface SharedKitRoom_runtimeRoomDatabaseJournalMode : SharedKitKotlinEnum<SharedKitRoom_runtimeRoomDatabaseJournalMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedKitRoom_runtimeRoomDatabaseJournalMode *truncate __attribute__((swift_name("truncate")));
@property (class, readonly) SharedKitRoom_runtimeRoomDatabaseJournalMode *writeAheadLogging __attribute__((swift_name("writeAheadLogging")));
+ (SharedKitKotlinArray<SharedKitRoom_runtimeRoomDatabaseJournalMode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedKitRoom_runtimeRoomDatabaseJournalMode *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoinDefinition")))
@interface SharedKitKoin_coreKoinDefinition<R> : SharedKitBase
- (instancetype)initWithModule:(SharedKitKoin_coreModule *)module factory:(SharedKitKoin_coreInstanceFactory<R> *)factory __attribute__((swift_name("init(module:factory:)"))) __attribute__((objc_designated_initializer));
- (SharedKitKoin_coreKoinDefinition<R> *)doCopyModule:(SharedKitKoin_coreModule *)module factory:(SharedKitKoin_coreInstanceFactory<R> *)factory __attribute__((swift_name("doCopy(module:factory:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKitKoin_coreInstanceFactory<R> *factory __attribute__((swift_name("factory")));
@property (readonly) SharedKitKoin_coreModule *module __attribute__((swift_name("module")));
@end

__attribute__((swift_name("Koin_coreInstanceFactory")))
@interface SharedKitKoin_coreInstanceFactory<T> : SharedKitKoin_coreLockable
- (instancetype)initWithBeanDefinition:(SharedKitKoin_coreBeanDefinition<T> *)beanDefinition __attribute__((swift_name("init(beanDefinition:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKitKoin_coreInstanceFactoryCompanion *companion __attribute__((swift_name("companion")));
- (T _Nullable)createContext:(SharedKitKoin_coreResolutionContext *)context __attribute__((swift_name("create(context:)")));
- (void)dropScope:(SharedKitKoin_coreScope * _Nullable)scope __attribute__((swift_name("drop(scope:)")));
- (void)dropAll __attribute__((swift_name("dropAll()")));
- (T _Nullable)getContext:(SharedKitKoin_coreResolutionContext *)context __attribute__((swift_name("get(context:)")));
- (BOOL)isCreatedContext:(SharedKitKoin_coreResolutionContext * _Nullable)context __attribute__((swift_name("isCreated(context:)")));
@property (readonly) SharedKitKoin_coreBeanDefinition<T> *beanDefinition __attribute__((swift_name("beanDefinition")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreSingleInstanceFactory")))
@interface SharedKitKoin_coreSingleInstanceFactory<T> : SharedKitKoin_coreInstanceFactory<T>
- (instancetype)initWithBeanDefinition:(SharedKitKoin_coreBeanDefinition<T> *)beanDefinition __attribute__((swift_name("init(beanDefinition:)"))) __attribute__((objc_designated_initializer));
- (T _Nullable)createContext:(SharedKitKoin_coreResolutionContext *)context __attribute__((swift_name("create(context:)")));
- (void)dropScope:(SharedKitKoin_coreScope * _Nullable)scope __attribute__((swift_name("drop(scope:)")));
- (void)dropAll __attribute__((swift_name("dropAll()")));
- (T _Nullable)getContext:(SharedKitKoin_coreResolutionContext *)context __attribute__((swift_name("get(context:)")));
- (BOOL)isCreatedContext:(SharedKitKoin_coreResolutionContext * _Nullable)context __attribute__((swift_name("isCreated(context:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeDSL")))
@interface SharedKitKoin_coreScopeDSL : SharedKitBase
- (instancetype)initWithScopeQualifier:(id<SharedKitKoin_coreQualifier>)scopeQualifier module:(SharedKitKoin_coreModule *)module __attribute__((swift_name("init(scopeQualifier:module:)"))) __attribute__((objc_designated_initializer));
- (SharedKitKoin_coreKoinDefinition<id> *)factoryQualifier:(id<SharedKitKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(SharedKitKoin_coreScope *, SharedKitKoin_coreParametersHolder *))definition __attribute__((swift_name("factory(qualifier:definition:)")));
- (SharedKitKoin_coreKoinDefinition<id> *)scopedQualifier:(id<SharedKitKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(SharedKitKoin_coreScope *, SharedKitKoin_coreParametersHolder *))definition __attribute__((swift_name("scoped(qualifier:definition:)")));
@property (readonly) SharedKitKoin_coreModule *module __attribute__((swift_name("module")));
@property (readonly) id<SharedKitKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoinApplication.Companion")))
@interface SharedKitKoin_coreKoinApplicationCompanion : SharedKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKitKoin_coreKoinApplicationCompanion *shared __attribute__((swift_name("shared")));
- (SharedKitKoin_coreKoinApplication *)doInit __attribute__((swift_name("doInit()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoinOption")))
@interface SharedKitKoin_coreKoinOption : SharedKitKotlinEnum<SharedKitKoin_coreKoinOption *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedKitKoin_coreKoinOption *viewmodelScopeFactory __attribute__((swift_name("viewmodelScopeFactory")));
+ (SharedKitKotlinArray<SharedKitKoin_coreKoinOption *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedKitKoin_coreKoinOption *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinPair")))
@interface SharedKitKotlinPair<__covariant A, __covariant B> : SharedKitBase
- (instancetype)initWithFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("init(first:second:)"))) __attribute__((objc_designated_initializer));
- (SharedKitKotlinPair<A, B> *)doCopyFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("doCopy(first:second:)")));
- (BOOL)equalsOther:(id _Nullable)other __attribute__((swift_name("equals(other:)")));
- (int32_t)hashCode __attribute__((swift_name("hashCode()")));
- (NSString *)toString __attribute__((swift_name("toString()")));
@property (readonly) A _Nullable first __attribute__((swift_name("first")));
@property (readonly) B _Nullable second __attribute__((swift_name("second")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreLevel")))
@interface SharedKitKoin_coreLevel : SharedKitKotlinEnum<SharedKitKoin_coreLevel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedKitKoin_coreLevel *debug __attribute__((swift_name("debug")));
@property (class, readonly) SharedKitKoin_coreLevel *info __attribute__((swift_name("info")));
@property (class, readonly) SharedKitKoin_coreLevel *warning __attribute__((swift_name("warning")));
@property (class, readonly) SharedKitKoin_coreLevel *error __attribute__((swift_name("error")));
@property (class, readonly) SharedKitKoin_coreLevel *none __attribute__((swift_name("none")));
+ (SharedKitKotlinArray<SharedKitKoin_coreLevel *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedKitKoin_coreLevel *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol SharedKitKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol SharedKitKotlinx_coroutines_coreFlowCollector
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol SharedKitKotlinCoroutineContextElement <SharedKitKotlinCoroutineContext>
@required
@property (readonly) id<SharedKitKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol SharedKitKotlinCoroutineContextKey
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface SharedKitKotlinByteArray : SharedKitBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(SharedKitByte *(^)(SharedKitInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (SharedKitKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Kotlinx_datetimeDateTimeFormat")))
@protocol SharedKitKotlinx_datetimeDateTimeFormat
@required
- (NSString *)formatValue:(id _Nullable)value __attribute__((swift_name("format(value:)")));
- (id<SharedKitKotlinAppendable>)formatToAppendable:(id<SharedKitKotlinAppendable>)appendable value:(id _Nullable)value __attribute__((swift_name("formatTo(appendable:value:)")));
- (id _Nullable)parseInput:(id)input __attribute__((swift_name("parse(input:)")));
- (id _Nullable)parseOrNullInput:(id)input __attribute__((swift_name("parseOrNull(input:)")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol SharedKitKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<SharedKitKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<SharedKitKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol SharedKitKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<SharedKitKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<SharedKitKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol SharedKitKotlinx_serialization_coreKSerializer <SharedKitKotlinx_serialization_coreSerializationStrategy, SharedKitKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface SharedKitKotlinEnumCompanion : SharedKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKitKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Kotlinx_datetimeDateTimeFormatBuilder")))
@protocol SharedKitKotlinx_datetimeDateTimeFormatBuilder
@required
- (void)charsValue:(NSString *)value __attribute__((swift_name("chars(value:)")));
@end

__attribute__((swift_name("Kotlinx_datetimeDateTimeFormatBuilderWithDate")))
@protocol SharedKitKotlinx_datetimeDateTimeFormatBuilderWithDate <SharedKitKotlinx_datetimeDateTimeFormatBuilder>
@required
- (void)dateFormat:(id<SharedKitKotlinx_datetimeDateTimeFormat>)format __attribute__((swift_name("date(format:)")));
- (void)dayOfMonthPadding:(SharedKitKotlinx_datetimePadding *)padding __attribute__((swift_name("dayOfMonth(padding:)")));
- (void)dayOfWeekNames:(SharedKitKotlinx_datetimeDayOfWeekNames *)names __attribute__((swift_name("dayOfWeek(names:)")));
- (void)monthNameNames:(SharedKitKotlinx_datetimeMonthNames *)names __attribute__((swift_name("monthName(names:)")));
- (void)monthNumberPadding:(SharedKitKotlinx_datetimePadding *)padding __attribute__((swift_name("monthNumber(padding:)")));
- (void)yearPadding:(SharedKitKotlinx_datetimePadding *)padding __attribute__((swift_name("year(padding:)")));
- (void)yearTwoDigitsBaseYear:(int32_t)baseYear __attribute__((swift_name("yearTwoDigits(baseYear:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/datetime/serializers/FixedOffsetTimeZoneSerializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeFixedOffsetTimeZone")))
@interface SharedKitKotlinx_datetimeFixedOffsetTimeZone : SharedKitKotlinx_datetimeTimeZone
- (instancetype)initWithOffset:(SharedKitKotlinx_datetimeUtcOffset *)offset __attribute__((swift_name("init(offset:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKitKotlinx_datetimeFixedOffsetTimeZoneCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) SharedKitKotlinx_datetimeUtcOffset *offset __attribute__((swift_name("offset")));
@property (readonly) int32_t totalSeconds __attribute__((swift_name("totalSeconds"))) __attribute__((deprecated("Use offset.totalSeconds")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/datetime/serializers/LocalTimeIso8601Serializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeLocalTime")))
@interface SharedKitKotlinx_datetimeLocalTime : SharedKitBase <SharedKitKotlinComparable>
- (instancetype)initWithHour:(int32_t)hour minute:(int32_t)minute second:(int32_t)second nanosecond:(int32_t)nanosecond __attribute__((swift_name("init(hour:minute:second:nanosecond:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKitKotlinx_datetimeLocalTimeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(SharedKitKotlinx_datetimeLocalTime *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (int32_t)toMillisecondOfDay __attribute__((swift_name("toMillisecondOfDay()")));
- (int64_t)toNanosecondOfDay __attribute__((swift_name("toNanosecondOfDay()")));
- (int32_t)toSecondOfDay __attribute__((swift_name("toSecondOfDay()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t hour __attribute__((swift_name("hour")));
@property (readonly) int32_t minute __attribute__((swift_name("minute")));
@property (readonly) int32_t nanosecond __attribute__((swift_name("nanosecond")));
@property (readonly) int32_t second __attribute__((swift_name("second")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeLocalDateTime.Companion")))
@interface SharedKitKotlinx_datetimeLocalDateTimeCompanion : SharedKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKitKotlinx_datetimeLocalDateTimeCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKitKotlinx_datetimeDateTimeFormat>)FormatBuilder:(void (^)(id<SharedKitKotlinx_datetimeDateTimeFormatBuilderWithDateTime>))builder __attribute__((swift_name("Format(builder:)")));
- (SharedKitKotlinx_datetimeLocalDateTime *)parseInput:(id)input format:(id<SharedKitKotlinx_datetimeDateTimeFormat>)format __attribute__((swift_name("parse(input:format:)")));
- (id<SharedKitKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("Koin_coreScopeCallback")))
@protocol SharedKitKoin_coreScopeCallback
@required
- (void)onScopeCloseScope:(SharedKitKoin_coreScope *)scope __attribute__((swift_name("onScopeClose(scope:)")));
@end

__attribute__((swift_name("Koin_coreKoinExtension")))
@protocol SharedKitKoin_coreKoinExtension
@required
- (void)onClose __attribute__((swift_name("onClose()")));
- (void)onRegisterKoin:(SharedKitKoin_coreKoin *)koin __attribute__((swift_name("onRegister(koin:)")));
@end

__attribute__((swift_name("Koin_coreResolutionExtension")))
@protocol SharedKitKoin_coreResolutionExtension
@required
- (id _Nullable)resolveScope:(SharedKitKoin_coreScope *)scope instanceContext:(SharedKitKoin_coreResolutionContext *)instanceContext __attribute__((swift_name("resolve(scope:instanceContext:)")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreResolutionContext")))
@interface SharedKitKoin_coreResolutionContext : SharedKitBase
- (instancetype)initWithLogger:(SharedKitKoin_coreLogger *)logger scope:(SharedKitKoin_coreScope *)scope clazz:(id<SharedKitKotlinKClass>)clazz qualifier:(id<SharedKitKoin_coreQualifier> _Nullable)qualifier parameters:(SharedKitKoin_coreParametersHolder * _Nullable)parameters __attribute__((swift_name("init(logger:scope:clazz:qualifier:parameters:)"))) __attribute__((objc_designated_initializer));
- (SharedKitKoin_coreResolutionContext *)doNewContextForScopeS:(SharedKitKoin_coreScope *)s __attribute__((swift_name("doNewContextForScope(s:)")));
@property (readonly) id<SharedKitKotlinKClass> clazz __attribute__((swift_name("clazz")));
@property (readonly) NSString *debugTag __attribute__((swift_name("debugTag")));
@property (readonly) SharedKitKoin_coreLogger *logger __attribute__((swift_name("logger")));
@property (readonly) SharedKitKoin_coreParametersHolder * _Nullable parameters __attribute__((swift_name("parameters")));
@property (readonly) id<SharedKitKoin_coreQualifier> _Nullable qualifier __attribute__((swift_name("qualifier")));
@property (readonly) SharedKitKoin_coreScope *scope __attribute__((swift_name("scope")));
@property SharedKitKoin_coreTypeQualifier * _Nullable scopeArchetype __attribute__((swift_name("scopeArchetype")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeRegistry.Companion")))
@interface SharedKitKoin_coreScopeRegistryCompanion : SharedKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKitKoin_coreScopeRegistryCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("KotlinIntIterator")))
@interface SharedKitKotlinIntIterator : SharedKitBase <SharedKitKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SharedKitInt *)next __attribute__((swift_name("next()")));
- (int32_t)nextInt __attribute__((swift_name("nextInt()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreBeanDefinition")))
@interface SharedKitKoin_coreBeanDefinition<T> : SharedKitBase
- (instancetype)initWithScopeQualifier:(id<SharedKitKoin_coreQualifier>)scopeQualifier primaryType:(id<SharedKitKotlinKClass>)primaryType qualifier:(id<SharedKitKoin_coreQualifier> _Nullable)qualifier definition:(T _Nullable (^)(SharedKitKoin_coreScope *, SharedKitKoin_coreParametersHolder *))definition kind:(SharedKitKoin_coreKind *)kind secondaryTypes:(NSArray<id<SharedKitKotlinKClass>> *)secondaryTypes __attribute__((swift_name("init(scopeQualifier:primaryType:qualifier:definition:kind:secondaryTypes:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (BOOL)hasTypeClazz:(id<SharedKitKotlinKClass>)clazz __attribute__((swift_name("hasType(clazz:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isClazz:(id<SharedKitKotlinKClass>)clazz qualifier:(id<SharedKitKoin_coreQualifier> _Nullable)qualifier scopeDefinition:(id<SharedKitKoin_coreQualifier>)scopeDefinition __attribute__((swift_name("is(clazz:qualifier:scopeDefinition:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property SharedKitKoin_coreCallbacks<T> *callbacks __attribute__((swift_name("callbacks")));
@property (readonly) T _Nullable (^definition)(SharedKitKoin_coreScope *, SharedKitKoin_coreParametersHolder *) __attribute__((swift_name("definition")));
@property (readonly) SharedKitKoin_coreKind *kind __attribute__((swift_name("kind")));
@property (readonly) id<SharedKitKotlinKClass> primaryType __attribute__((swift_name("primaryType")));
@property id<SharedKitKoin_coreQualifier> _Nullable qualifier __attribute__((swift_name("qualifier")));
@property (readonly) id<SharedKitKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@property NSArray<id<SharedKitKotlinKClass>> *secondaryTypes __attribute__((swift_name("secondaryTypes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceFactoryCompanion")))
@interface SharedKitKoin_coreInstanceFactoryCompanion : SharedKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKitKoin_coreInstanceFactoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *ERROR_SEPARATOR __attribute__((swift_name("ERROR_SEPARATOR")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface SharedKitKotlinByteIterator : SharedKitBase <SharedKitKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SharedKitByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end

__attribute__((swift_name("KotlinAppendable")))
@protocol SharedKitKotlinAppendable
@required
- (id<SharedKitKotlinAppendable>)appendValue:(unichar)value __attribute__((swift_name("append(value:)")));
- (id<SharedKitKotlinAppendable>)appendValue_:(id _Nullable)value __attribute__((swift_name("append(value_:)")));
- (id<SharedKitKotlinAppendable>)appendValue:(id _Nullable)value startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("append(value:startIndex:endIndex:)")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol SharedKitKotlinx_serialization_coreEncoder
@required
- (id<SharedKitKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<SharedKitKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<SharedKitKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<SharedKitKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<SharedKitKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<SharedKitKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<SharedKitKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<SharedKitKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<SharedKitKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) SharedKitKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol SharedKitKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<SharedKitKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<SharedKitKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<SharedKitKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) SharedKitKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol SharedKitKotlinx_serialization_coreDecoder
@required
- (id<SharedKitKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<SharedKitKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<SharedKitKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<SharedKitKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<SharedKitKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (SharedKitKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<SharedKitKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<SharedKitKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) SharedKitKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimePadding")))
@interface SharedKitKotlinx_datetimePadding : SharedKitKotlinEnum<SharedKitKotlinx_datetimePadding *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedKitKotlinx_datetimePadding *none __attribute__((swift_name("none")));
@property (class, readonly) SharedKitKotlinx_datetimePadding *zero __attribute__((swift_name("zero")));
@property (class, readonly) SharedKitKotlinx_datetimePadding *space __attribute__((swift_name("space")));
+ (SharedKitKotlinArray<SharedKitKotlinx_datetimePadding *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedKitKotlinx_datetimePadding *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeDayOfWeekNames")))
@interface SharedKitKotlinx_datetimeDayOfWeekNames : SharedKitBase
- (instancetype)initWithNames:(NSArray<NSString *> *)names __attribute__((swift_name("init(names:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMonday:(NSString *)monday tuesday:(NSString *)tuesday wednesday:(NSString *)wednesday thursday:(NSString *)thursday friday:(NSString *)friday saturday:(NSString *)saturday sunday:(NSString *)sunday __attribute__((swift_name("init(monday:tuesday:wednesday:thursday:friday:saturday:sunday:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKitKotlinx_datetimeDayOfWeekNamesCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> *names __attribute__((swift_name("names")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeMonthNames")))
@interface SharedKitKotlinx_datetimeMonthNames : SharedKitBase
- (instancetype)initWithNames:(NSArray<NSString *> *)names __attribute__((swift_name("init(names:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithJanuary:(NSString *)january february:(NSString *)february march:(NSString *)march april:(NSString *)april may:(NSString *)may june:(NSString *)june july:(NSString *)july august:(NSString *)august september:(NSString *)september october:(NSString *)october november:(NSString *)november december:(NSString *)december __attribute__((swift_name("init(january:february:march:april:may:june:july:august:september:october:november:december:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKitKotlinx_datetimeMonthNamesCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> *names __attribute__((swift_name("names")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/datetime/serializers/UtcOffsetSerializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeUtcOffset")))
@interface SharedKitKotlinx_datetimeUtcOffset : SharedKitBase
@property (class, readonly, getter=companion) SharedKitKotlinx_datetimeUtcOffsetCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t totalSeconds __attribute__((swift_name("totalSeconds")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeFixedOffsetTimeZone.Companion")))
@interface SharedKitKotlinx_datetimeFixedOffsetTimeZoneCompanion : SharedKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKitKotlinx_datetimeFixedOffsetTimeZoneCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKitKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeLocalTime.Companion")))
@interface SharedKitKotlinx_datetimeLocalTimeCompanion : SharedKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKitKotlinx_datetimeLocalTimeCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKitKotlinx_datetimeDateTimeFormat>)FormatBuilder:(void (^)(id<SharedKitKotlinx_datetimeDateTimeFormatBuilderWithTime>))builder __attribute__((swift_name("Format(builder:)")));
- (SharedKitKotlinx_datetimeLocalTime *)fromMillisecondOfDayMillisecondOfDay:(int32_t)millisecondOfDay __attribute__((swift_name("fromMillisecondOfDay(millisecondOfDay:)")));
- (SharedKitKotlinx_datetimeLocalTime *)fromNanosecondOfDayNanosecondOfDay:(int64_t)nanosecondOfDay __attribute__((swift_name("fromNanosecondOfDay(nanosecondOfDay:)")));
- (SharedKitKotlinx_datetimeLocalTime *)fromSecondOfDaySecondOfDay:(int32_t)secondOfDay __attribute__((swift_name("fromSecondOfDay(secondOfDay:)")));
- (SharedKitKotlinx_datetimeLocalTime *)parseInput:(id)input format:(id<SharedKitKotlinx_datetimeDateTimeFormat>)format __attribute__((swift_name("parse(input:format:)")));
- (id<SharedKitKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("Kotlinx_datetimeDateTimeFormatBuilderWithTime")))
@protocol SharedKitKotlinx_datetimeDateTimeFormatBuilderWithTime <SharedKitKotlinx_datetimeDateTimeFormatBuilder>
@required
- (void)amPmHourPadding:(SharedKitKotlinx_datetimePadding *)padding __attribute__((swift_name("amPmHour(padding:)")));
- (void)amPmMarkerAm:(NSString *)am pm:(NSString *)pm __attribute__((swift_name("amPmMarker(am:pm:)")));
- (void)hourPadding:(SharedKitKotlinx_datetimePadding *)padding __attribute__((swift_name("hour(padding:)")));
- (void)minutePadding:(SharedKitKotlinx_datetimePadding *)padding __attribute__((swift_name("minute(padding:)")));
- (void)secondPadding:(SharedKitKotlinx_datetimePadding *)padding __attribute__((swift_name("second(padding:)")));
- (void)secondFractionFixedLength:(int32_t)fixedLength __attribute__((swift_name("secondFraction(fixedLength:)")));
- (void)secondFractionMinLength:(int32_t)minLength maxLength:(int32_t)maxLength __attribute__((swift_name("secondFraction(minLength:maxLength:)")));
- (void)timeFormat:(id<SharedKitKotlinx_datetimeDateTimeFormat>)format __attribute__((swift_name("time(format:)")));
@end

__attribute__((swift_name("Kotlinx_datetimeDateTimeFormatBuilderWithDateTime")))
@protocol SharedKitKotlinx_datetimeDateTimeFormatBuilderWithDateTime <SharedKitKotlinx_datetimeDateTimeFormatBuilderWithDate, SharedKitKotlinx_datetimeDateTimeFormatBuilderWithTime>
@required
- (void)dateTimeFormat:(id<SharedKitKotlinx_datetimeDateTimeFormat>)format __attribute__((swift_name("dateTime(format:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKind")))
@interface SharedKitKoin_coreKind : SharedKitKotlinEnum<SharedKitKoin_coreKind *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedKitKoin_coreKind *singleton __attribute__((swift_name("singleton")));
@property (class, readonly) SharedKitKoin_coreKind *factory __attribute__((swift_name("factory")));
@property (class, readonly) SharedKitKoin_coreKind *scoped __attribute__((swift_name("scoped")));
+ (SharedKitKotlinArray<SharedKitKoin_coreKind *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedKitKoin_coreKind *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreCallbacks")))
@interface SharedKitKoin_coreCallbacks<T> : SharedKitBase
- (instancetype)initWithOnClose:(void (^ _Nullable)(T _Nullable))onClose __attribute__((swift_name("init(onClose:)"))) __attribute__((objc_designated_initializer));
- (SharedKitKoin_coreCallbacks<T> *)doCopyOnClose:(void (^ _Nullable)(T _Nullable))onClose __attribute__((swift_name("doCopy(onClose:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) void (^ _Nullable onClose)(T _Nullable) __attribute__((swift_name("onClose")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol SharedKitKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<SharedKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<SharedKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<SharedKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<SharedKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<SharedKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<SharedKitKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<SharedKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<SharedKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<SharedKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<SharedKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<SharedKitKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<SharedKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<SharedKitKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<SharedKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<SharedKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<SharedKitKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<SharedKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) SharedKitKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface SharedKitKotlinx_serialization_coreSerializersModule : SharedKitBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<SharedKitKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<SharedKitKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<SharedKitKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<SharedKitKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<SharedKitKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<SharedKitKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<SharedKitKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<SharedKitKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol SharedKitKotlinAnnotation
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface SharedKitKotlinx_serialization_coreSerialKind : SharedKitBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol SharedKitKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<SharedKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<SharedKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<SharedKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<SharedKitKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<SharedKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<SharedKitKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<SharedKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<SharedKitKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<SharedKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<SharedKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<SharedKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<SharedKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<SharedKitKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<SharedKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<SharedKitKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<SharedKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<SharedKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<SharedKitKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) SharedKitKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface SharedKitKotlinNothing : SharedKitBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeDayOfWeekNames.Companion")))
@interface SharedKitKotlinx_datetimeDayOfWeekNamesCompanion : SharedKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKitKotlinx_datetimeDayOfWeekNamesCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedKitKotlinx_datetimeDayOfWeekNames *ENGLISH_ABBREVIATED __attribute__((swift_name("ENGLISH_ABBREVIATED")));
@property (readonly) SharedKitKotlinx_datetimeDayOfWeekNames *ENGLISH_FULL __attribute__((swift_name("ENGLISH_FULL")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeMonthNames.Companion")))
@interface SharedKitKotlinx_datetimeMonthNamesCompanion : SharedKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKitKotlinx_datetimeMonthNamesCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedKitKotlinx_datetimeMonthNames *ENGLISH_ABBREVIATED __attribute__((swift_name("ENGLISH_ABBREVIATED")));
@property (readonly) SharedKitKotlinx_datetimeMonthNames *ENGLISH_FULL __attribute__((swift_name("ENGLISH_FULL")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeUtcOffset.Companion")))
@interface SharedKitKotlinx_datetimeUtcOffsetCompanion : SharedKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKitKotlinx_datetimeUtcOffsetCompanion *shared __attribute__((swift_name("shared")));
- (id<SharedKitKotlinx_datetimeDateTimeFormat>)FormatBlock:(void (^)(id<SharedKitKotlinx_datetimeDateTimeFormatBuilderWithUtcOffset>))block __attribute__((swift_name("Format(block:)")));
- (SharedKitKotlinx_datetimeUtcOffset *)parseInput:(id)input format:(id<SharedKitKotlinx_datetimeDateTimeFormat>)format __attribute__((swift_name("parse(input:format:)")));
- (id<SharedKitKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) SharedKitKotlinx_datetimeUtcOffset *ZERO __attribute__((swift_name("ZERO")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol SharedKitKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<SharedKitKotlinKClass>)kClass provider:(id<SharedKitKotlinx_serialization_coreKSerializer> (^)(NSArray<id<SharedKitKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<SharedKitKotlinKClass>)kClass serializer:(id<SharedKitKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<SharedKitKotlinKClass>)baseClass actualClass:(id<SharedKitKotlinKClass>)actualClass actualSerializer:(id<SharedKitKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<SharedKitKotlinKClass>)baseClass defaultDeserializerProvider:(id<SharedKitKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<SharedKitKotlinKClass>)baseClass defaultDeserializerProvider:(id<SharedKitKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<SharedKitKotlinKClass>)baseClass defaultSerializerProvider:(id<SharedKitKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("Kotlinx_datetimeDateTimeFormatBuilderWithUtcOffset")))
@protocol SharedKitKotlinx_datetimeDateTimeFormatBuilderWithUtcOffset <SharedKitKotlinx_datetimeDateTimeFormatBuilder>
@required
- (void)offsetFormat:(id<SharedKitKotlinx_datetimeDateTimeFormat>)format __attribute__((swift_name("offset(format:)")));
- (void)offsetHoursPadding:(SharedKitKotlinx_datetimePadding *)padding __attribute__((swift_name("offsetHours(padding:)")));
- (void)offsetMinutesOfHourPadding:(SharedKitKotlinx_datetimePadding *)padding __attribute__((swift_name("offsetMinutesOfHour(padding:)")));
- (void)offsetSecondsOfMinutePadding:(SharedKitKotlinx_datetimePadding *)padding __attribute__((swift_name("offsetSecondsOfMinute(padding:)")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
