//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSString, SRSensorWriter;

@protocol SRSensorWriterDelegate 

@optional
- (void)sensorWriterDidStopMonitoring:(SRSensorWriter *)arg1;
- (void)sensorWriterWillStartMonitoring:(SRSensorWriter *)arg1;
- (NSString *)exportingClassNameForSensor:(NSString *)arg1;
- (NSString *)classNameForSensorIdentifier:(NSString *)arg1;
- (Class)classForSensorIdentifier:(NSString *)arg1;
@end
