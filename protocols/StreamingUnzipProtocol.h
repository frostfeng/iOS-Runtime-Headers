/* Generated by RuntimeBrowser.
 */

@protocol StreamingUnzipProtocol

@required

- (void)finishStreamWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setupUnzipperWithOutputPath:(void *)arg1 sandboxExtensionToken:(void *)arg2 options:(void *)arg3 withReply:(void *)arg4; // needs 4 arg types, found 10: NSString *, char *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, unsigned long long, void*
- (void)supplyBytes:(void *)arg1 withReply:(void *)arg2; // needs 2 arg types, found 8: NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, BOOL, void*
- (void)supplyDispatchData:(void *)arg1 withReply:(void *)arg2; // needs 2 arg types, found 8: NSObject<OS_dispatch_data> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, BOOL, void*
- (void)supplyRemappableData:(void *)arg1 withReply:(void *)arg2; // needs 2 arg types, found 8: SZRemappableData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, BOOL, void*
- (void)supplyXPCData:(void *)arg1 withReply:(void *)arg2; // needs 2 arg types, found 8: NSObject<OS_xpc_object> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, BOOL, void*
- (void)suspendStreamWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSError *, void*

@end
