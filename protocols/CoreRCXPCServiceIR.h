/* Generated by RuntimeBrowser.
 */

@protocol CoreRCXPCServiceIR

@required

- (void)addDeviceOnBusAsync:(void *)arg1 withType:(void *)arg2 matching:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: CoreIRBus *, unsigned int, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CoreIRDevice *, NSError *, void*
- (void)addDeviceOnBusAsync:(void *)arg1 withType:(void *)arg2 matching:(void *)arg3 withSessionOwningDevice:(void *)arg4 reply:(void *)arg5; // needs 5 arg types, found 11: CoreIRBus *, unsigned int, NSDictionary *, CoreIRDevice *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CoreIRDevice *, NSError *, void*
- (void)changeButtonCombinationAsync:(void *)arg1 delay:(void *)arg2 enabled:(void *)arg3 forDevice:(void *)arg4 reply:(void *)arg5; // needs 5 arg types, found 11: NSSet *, double, BOOL, CoreIRDevice *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSError *, void*
- (void)clearAllStoredCommandsFromDeviceAsync:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: CoreIRDevice *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSError *, void*
- (void)deleteDeviceAsync:(void *)arg1 fromBus:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: CoreIRDevice *, CoreIRBus *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSError *, void*
- (void)endLearningWithDeviceAsync:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: CoreIRDevice *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)sendCommandAsync:(void *)arg1 fromDevice:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: IRCommand *, CoreIRDevice *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setCommandAsync:(void *)arg1 target:(void *)arg2 source:(void *)arg3 forButtonCombination:(void *)arg4 delay:(void *)arg5 reply:(void *)arg6; // needs 6 arg types, found 12: unsigned int, CoreIRDevice *, CoreIRDevice *, NSSet *, double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSError *, void*
- (void)setOSDNameAsync:(void *)arg1 forDevice:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSString *, CoreIRDevice *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setPairStateAsync:(void *)arg1 forAppleRemote:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: BOOL, CoreIRDevice *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)startLearningCommandAsync:(void *)arg1 withDevice:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: unsigned int, CoreIRDevice *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSError *, void*
- (void)startLearningSessionWithDeviceAsync:(void *)arg1 forReason:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: CoreIRDevice *, NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CoreIRLearningSession *, NSError *, void*
- (void)updateMappingWithSessionOwningDeviceAsync:(void *)arg1 forTargetDevice:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: CoreIRDevice *, CoreIRDevice *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSError *, void*

@end