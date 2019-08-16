//
//  UILabel+WG.h
//  Test
//
//  Created by mac on 2019/8/16.
//  Copyright © 2019 zixuan. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UILabel (WG)
+ (UILabel *(^)(void))wg_init;
- (UILabel* (^)(UIFont* font))wg_font;
- (UILabel* (^)(UIColor* textColor))wg_textColor;
- (UILabel* (^)(NSString* text))wg_text;
- (UILabel* (^)(CGRect frame))wg_frame;
- (UILabel* (^)(NSTextAlignment textAlignment))wg_textAlignment;
- (UILabel* (^)(NSInteger numberOfLines))wg_numberOfLines;
- (UILabel* (^)(NSAttributedString *attributedText))wg_attributedText;
@end

NS_ASSUME_NONNULL_END
