//
//  UIView+WG.h
//  WGKit
//
//  Created by mac on 2019/8/16.
//  Copyright © 2019 zixuan. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIView (WG)
+ (UIView* (^)(void))wg_init;
- (UIView* (^)(CGRect frame))wg_frame;
- (UIView* (^)(UIColor* backgroundColor))wg_backgroundColor;
@end

NS_ASSUME_NONNULL_END
