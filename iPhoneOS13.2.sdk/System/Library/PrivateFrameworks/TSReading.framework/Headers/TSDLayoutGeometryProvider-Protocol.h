//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class TSDLayout, TSDLayoutGeometry;

@protocol TSDLayoutGeometryProvider 
- (TSDLayoutGeometry *)layoutGeometryForLayout:(TSDLayout *)arg1;

@optional
- (TSDLayoutGeometry *)adjustImageGeometry:(TSDLayoutGeometry *)arg1 withLayoutGeometry:(TSDLayoutGeometry *)arg2 forLayout:(TSDLayout *)arg3;
- (TSDLayoutGeometry *)adjustLayoutGeometry:(TSDLayoutGeometry *)arg1 forLayout:(TSDLayout *)arg2;
@end
