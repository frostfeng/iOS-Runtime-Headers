/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@class NSString;

@interface CTCall : NSObject  {
    NSString *_callState;
    NSString *_callID;
}

@property(copy) NSString * callID;
@property(copy) NSString * callState;

+ (id)callForCTCallRef:(struct __CTCall { }*)arg1;

- (void)setCallID:(id)arg1;
- (id)callID;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)setCallState:(id)arg1;
- (id)callState;

@end