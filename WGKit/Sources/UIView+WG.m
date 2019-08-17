//
//  UIView+WG.m
//  WGKit
//
//  Created by mac on 2019/8/16.
//  Copyright © 2019 zixuan. All rights reserved.
//

#import "UIView+WG.h"

@implementation UIView (WG)

+ (UIView* (^)(void))wg_init
{
    return ^() {
        UIView *view = [[UIView alloc] init];
        return view;
    };
}

- (UIView* (^)(CGRect frame))wg_frame
{
    return ^(CGRect frame) {
        self.frame = frame;
        return self;
    };
}

- (UIView* (^)(UIColor* backgroundColor))wg_backgroundColor
{
    return ^(UIColor* backgroundColor) {
        self.backgroundColor = backgroundColor;
        return self;
    };
}

- (UIView* (^)(UIView* view))wg_joinView;
{
    return ^(UIView* view) {
        [view addSubview:self];
        return self;
    };
}

@end
