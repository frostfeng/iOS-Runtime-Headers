/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@class <HMMessageTransport>, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface HMMessageDispatcher : NSObject {
    NSMutableDictionary *_notificationHandlers;
    BOOL _remoteSource;
    <HMMessageTransport> *_transport;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property(retain) NSMutableDictionary * notificationHandlers;
@property(getter=isRemoteSource) BOOL remoteSource;
@property <HMMessageTransport> * transport;
@property(retain) NSObject<OS_dispatch_queue> * workQueue;

- (void).cxx_destruct;
- (void)_sendMessage:(id)arg1 target:(id)arg2 responseQueue:(id)arg3 responseHandler:(id)arg4;
- (void)dispatchMessage:(id)arg1 target:(id)arg2;
- (id)initWithTransport:(id)arg1;
- (BOOL)isRemoteSource;
- (id)notificationHandlers;
- (void)registerForMessage:(id)arg1 receiver:(id)arg2 messageHandler:(id)arg3;
- (void)sendMessage:(id)arg1 target:(id)arg2;
- (void)sendMessage:(id)arg1 target:(id)arg2 andInvokeCompletionHandler:(id)arg3;
- (void)sendMessage:(id)arg1 target:(id)arg2 responseQueue:(id)arg3 responseHandler:(id)arg4;
- (void)setNotificationHandlers:(id)arg1;
- (void)setRemoteSource:(BOOL)arg1;
- (void)setTransport:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)transport;
- (void)unregisterForForMessage:(id)arg1 receiver:(id)arg2;
- (id)workQueue;

@end