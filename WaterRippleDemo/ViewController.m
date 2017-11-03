//
//  ViewController.m
//  WaterRippleDemo
//
//  Created by 沈增光 on 2017/11/3.
//  Copyright © 2017年 沈增光. All rights reserved.
//

#import "ViewController.h"
#import "WaterRipple.h"
@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    
    WaterRipple *waterView =[[WaterRipple alloc] initWithFrame:CGRectMake(0, 0, self.view.frame.size.width, 250)];
    waterView.waveHeight = 15;
    waterView.waveSpeed = .5;
    waterView.wavecolor = [UIColor blackColor];
    [waterView startWaveAnimation];
    [self.view addSubview:waterView];
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
