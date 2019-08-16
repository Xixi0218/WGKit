//
//  ViewController.m
//  WGKit
//
//  Created by mac on 2019/8/16.
//  Copyright © 2019 zixuan. All rights reserved.
//

#import "ViewController.h"
#import "UILabel+WG.h"
#import "UIButton+WG.h"
#import "UIView+WG.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    UILabel *label = UILabel.wg_init().wg_font([UIFont systemFontOfSize:14]).wg_textColor([UIColor blackColor]).wg_text(@"1234").wg_text(@"2312312").wg_frame(CGRectMake(100, 100, 30, 40)).wg_backgroundColor([UIColor blueColor]).wg_sizeToFit();
    label.center = self.view.center;
    [self.view addSubview:label];
}


@end
