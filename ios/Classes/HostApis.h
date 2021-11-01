// Autogenerated from Pigeon (v1.0.8), do not edit directly.
// See also: https://pub.dev/packages/pigeon
#import <Foundation/Foundation.h>
@protocol FlutterBinaryMessenger;
@protocol FlutterMessageCodec;
@class FlutterError;
@class FlutterStandardTypedData;

NS_ASSUME_NONNULL_BEGIN

@class CastMessage;

@interface CastMessage : NSObject
@property(nonatomic, copy, nullable) NSString * namespace;
@property(nonatomic, copy, nullable) NSString * message;
@end

/// The codec used by CastApi.
NSObject<FlutterMessageCodec> *CastApiGetCodec(void);

@protocol CastApi
- (void)sendMessageMessage:(CastMessage *)message error:(FlutterError *_Nullable *_Nonnull)error;
- (void)showCastDialogWithError:(FlutterError *_Nullable *_Nonnull)error;
@end

extern void CastApiSetup(id<FlutterBinaryMessenger> binaryMessenger, NSObject<CastApi> *_Nullable api);

/// The codec used by CastFlutterApi.
NSObject<FlutterMessageCodec> *CastFlutterApiGetCodec(void);

@interface CastFlutterApi : NSObject
- (instancetype)initWithBinaryMessenger:(id<FlutterBinaryMessenger>)binaryMessenger;
- (void)getSessionMessageNamespacesWithCompletion:(void(^)(NSArray<NSString *> *, NSError *_Nullable))completion;
- (void)onCastStateChangedCastState:(NSNumber *)castState completion:(void(^)(NSError *_Nullable))completion;
- (void)onSessionStartingWithCompletion:(void(^)(NSError *_Nullable))completion;
- (void)onSessionStartedWithCompletion:(void(^)(NSError *_Nullable))completion;
- (void)onSessionStartFailedWithCompletion:(void(^)(NSError *_Nullable))completion;
- (void)onSessionEndingWithCompletion:(void(^)(NSError *_Nullable))completion;
- (void)onSessionEndedWithCompletion:(void(^)(NSError *_Nullable))completion;
- (void)onSessionResumingWithCompletion:(void(^)(NSError *_Nullable))completion;
- (void)onSessionResumedWithCompletion:(void(^)(NSError *_Nullable))completion;
- (void)onSessionResumeFailedWithCompletion:(void(^)(NSError *_Nullable))completion;
- (void)onSessionSuspendedWithCompletion:(void(^)(NSError *_Nullable))completion;
- (void)onMessageReceivedMessage:(CastMessage *)message completion:(void(^)(NSError *_Nullable))completion;
@end
NS_ASSUME_NONNULL_END
