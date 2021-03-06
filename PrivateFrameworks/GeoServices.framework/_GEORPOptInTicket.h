/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEORPOptInTicket : NSObject <GEOMapServiceFixNotificationTicket> {
    BOOL _canceled;
    GEORPProblemOptInRequest *_request;
    GEOMapServiceTraits *_traits;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) GEOMapServiceTraits *traits;

- (void)cancel;
- (void)dealloc;
- (id)initWithSubmissionID:(id)arg1 allowNotificationsAtPushToken:(id)arg2 allowContactBackAtEmailAddress:(id)arg3 traits:(id)arg4;
- (void)submitWithHandler:(id /* block */)arg1 networkActivity:(id /* block */)arg2;
- (id)traits;

@end
