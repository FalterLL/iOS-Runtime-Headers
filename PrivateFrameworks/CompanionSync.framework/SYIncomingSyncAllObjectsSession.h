/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface SYIncomingSyncAllObjectsSession : SYIncomingFullSyncSession {
    NSMutableArray * _allObjectsAsData;
    id /* block */  _completion;
    BOOL  canRestart;
    BOOL  canRollback;
}

- (void).cxx_destruct;
- (void)_continueProcessing;
- (void)_sendEndSessionResponse:(id)arg1;
- (BOOL)canRestart;
- (BOOL)canRollback;
- (id)initWithService:(id)arg1 message:(id)arg2 completion:(id /* block */)arg3;
- (void)setCanRestart:(BOOL)arg1;
- (void)setCanRollback:(BOOL)arg1;

@end