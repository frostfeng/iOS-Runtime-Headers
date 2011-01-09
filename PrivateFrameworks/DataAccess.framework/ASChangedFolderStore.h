/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSMutableArray, NSNumber, NSString;



@interface ASChangedFolderStore : ASItem 
{
    NSMutableArray *_updatedFolders;
    NSNumber *_status;
    NSString *_syncKey;
}


- (void)dealloc;
- (id)syncKey;
- (void)setSyncKey:(id)arg1;
- (id)description;
- (id)asParseRules;
- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5;
- (id)updatedFolders;
- (void)setUpdatedFolders:(id)arg1;
- (id)status;
- (void)setStatus:(id)arg1;

@end