//
//  UITextField+WG.h
//  WGKit
//
//  Created by YeKeyon on 2019/8/19.
//  Copyright © 2019 zixuan. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UITextField (WG)
+ (UITextField *(^)(void))wg_init;
- (UITextField *(^)(NSString* placeholder))wg_placeholder;
- (UITextField *(^)(id <UITextFieldDelegate>))wg_delegate;
- (UITextField *(^)(UIReturnKeyType type))wg_returnKeyType;
- (UITextField *(^)(UITextFieldViewMode mode))wg_clearButtonMode;
- (UITextField* (^)(UIFont* font))wg_font;
- (UITextField* (^)(UIColor* textColor))wg_textColor;
- (UITextField* (^)(NSString* text))wg_text;
- (UITextField* (^)(id target,SEL action,UIControlEvents controlEvents))wg_addAction;
@end

NS_ASSUME_NONNULL_END
