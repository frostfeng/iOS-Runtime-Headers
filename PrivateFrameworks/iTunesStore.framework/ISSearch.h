/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSMutableArray, NSURL;

@interface ISSearch : ISStorePage {
    NSUInteger _entityType;
    NSURL *_nextSearchURL;
    NSMutableArray *_predicates;
}

+ (id)searchForAlbumsOfArtist:(id)arg1;
+ (id)searchForQueryString:(id)arg1;
+ (id)searchForTrackWithID:(NSUInteger)arg1;
+ (id)searchForTracksOfAlbum:(id)arg1;

- (id)_argumentsFromPredicates;
- (BOOL)_reallyFetchIfNecessary;
- (void)_urlBagDidLoadNotification:(id)arg1;
- (void)addPredicate:(id)arg1;
- (void)dealloc;
- (NSUInteger)entityType;
- (BOOL)fetchIfNecessary;
- (void)invalidate;
- (void)searchUsingURL:(id)arg1;
- (void)setEntityType:(NSUInteger)arg1;
- (void)setPredicates:(id)arg1;

@end