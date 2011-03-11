/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

@class NSMutableDictionary;

@interface SCROBrailleDisplayAutoDetector : NSObject  {
    BOOL _isDetectingDisplays;
    struct IONotificationPort { } *_notificationPort;
    NSMutableDictionary *_iteratorDict;
}

+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)sharedDetector;

- (void)release;
- (id)init;
- (id)retain;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)retainCount;
- (id)autorelease;
- (BOOL)isAutoDetectEnabled;
- (void)detectDisplays;
- (void)stopDetectingDisplays;

@end