/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, SKUIClientContext;

@interface SKUIRedeemOperation : NSOperation {
    BOOL _cameraRecognized;
    SKUIClientContext *_clientContext;
    NSString *_code;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _resultBlock;

}

@property BOOL cameraRecognized;
@property(retain) SKUIClientContext * clientContext;
@property(copy) id resultBlock;

- (void).cxx_destruct;
- (void)_applyThankYouDictionary:(id)arg1 toRedeem:(id)arg2;
- (id)_itemsForItemIdentifiers:(id)arg1;
- (id)_performRequestWithProperties:(id)arg1 error:(id*)arg2;
- (id)_redeemForSuccessDictionary:(id)arg1;
- (id)_requestPropertiesForThankYouWithURL:(id)arg1;
- (BOOL)cameraRecognized;
- (id)clientContext;
- (id)initWithCode:(id)arg1;
- (void)main;
- (id)resultBlock;
- (void)setCameraRecognized:(BOOL)arg1;
- (void)setClientContext:(id)arg1;
- (void)setResultBlock:(id)arg1;

@end