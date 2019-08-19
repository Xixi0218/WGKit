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
- (UIView* (^)(UIView* view))wg_joinView;
- (UIView* (^)(id target,SEL action))wg_addAction;
@end

NS_ASSUME_NONNULL_END
