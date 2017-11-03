//
//  WaterRipple.h
//  WaterRippleDemo
//
//  Created by 沈增光 on 2017/11/3.
//  Copyright © 2017年 沈增光. All rights reserved.
//

#import <UIKit/UIKit.h>

#define ZHColor(r, g, b, a) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:(a)]

typedef void(^WaterRippleBlock)(CGFloat currentY);

@interface WaterRipple : UIView

/**
 *  浪弯曲度
 */
@property (nonatomic, assign) CGFloat waveCurvature;
/**
 *  浪速
 */
@property (nonatomic, assign) CGFloat waveSpeed;
/**
 *  浪高
 */
@property (nonatomic, assign) CGFloat waveHeight;
/**
 *  浪色
 */
@property (nonatomic, strong) UIColor *wavecolor;

@property (nonatomic, copy) WaterRippleBlock rippleBlock;


- (void)stopWaveAnimation;

- (void)startWaveAnimation;



@end
