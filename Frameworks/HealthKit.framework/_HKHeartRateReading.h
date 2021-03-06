/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKHeartRateReading : NSObject <NSSecureCoding> {
    int _confidence;
    HKQuantity *_heartRate;
}

@property (nonatomic) int confidence;
@property (nonatomic, retain) HKQuantity *heartRate;

+ (id)readingWithHeartRate:(id)arg1 confidence:(int)arg2;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (int)confidence;
- (void)encodeWithCoder:(id)arg1;
- (id)heartRate;
- (id)initWithCoder:(id)arg1;
- (void)setConfidence:(int)arg1;
- (void)setHeartRate:(id)arg1;

@end
