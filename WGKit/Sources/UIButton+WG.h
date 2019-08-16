//
//  UIButton+WG.h
//  Test
//
//  Created by mac on 2019/8/16.
//  Copyright © 2019 zixuan. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIButton (WG)
+ (UIButton* (^)(UIButtonType type))wg_init;
- (UIButton* (^)(UIFont* font))wg_font;
- (UIButton* (^)(NSString* title,UIControlState state))wg_title;
- (UIButton* (^)(UIColor* titleColor,UIControlState state))wg_titleColor;
- (UIButton* (^)(UIImage* image,UIControlState state))wg_image;
- (UIButton* (^)(UIImage* backgroundImage,UIControlState state))wg_backgroundImage;
- (UIButton* (^)(NSAttributedString *attributedText,UIControlState state))wg_attributedText;
- (UIButton* (^)(CGRect frame))wg_frame;
@end

NS_ASSUME_NONNULL_END
