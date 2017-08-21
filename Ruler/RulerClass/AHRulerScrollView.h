//
//  AHRulerScrollView.h
//  Ruler
//
//  Created by 呜拉巴哈 on 16/2/1.
//  Copyright © 2016年 http://www.swiftnews.cn . All rights reserved.
//

#import <UIKit/UIKit.h>

#define DISTANCELEFTANDRIGHT 8.f // 标尺左右距离
#define DISTANCEVALUE 8.f // 每隔刻度实际长度8个点(间距)
#define DISTANCETOPANDBOTTOM 2.f // 标尺上下距离(每一条的高度)

@interface AHRulerScrollView : UIScrollView

@property (nonatomic) NSUInteger rulerCount;

@property (nonatomic) NSNumber * rulerAverage;
//整个标尺的高
@property (nonatomic) NSUInteger rulerHeight;

@property (nonatomic) NSUInteger rulerWidth;

@property (nonatomic) CGFloat rulerValue;

@property (nonatomic) BOOL mode;

- (void)drawRuler;


-(void)updateRuleUI;
-(void)updateCurrentValueUI;
@end
