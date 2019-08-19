//
//  UITextField+WG.m
//  WGKit
//
//  Created by YeKeyon on 2019/8/19.
//  Copyright © 2019 zixuan. All rights reserved.
//

#import "UITextField+WG.h"

@implementation UITextField (WG)

+ (UITextField *(^)(void))wg_init
{
    return ^() {
        UITextField *textField = [[UITextField alloc] init];
        return textField;
    };
}

- (UITextField *(^)(NSString* placeholder))wg_placeholder
{
    return ^(NSString* placeholder) {
        self.placeholder = placeholder;
        return self;
    };
}

- (UITextField *(^)(id <UITextFieldDelegate> delegate))wg_delegate
{
    return ^(id <UITextFieldDelegate> delegate) {
        self.delegate = delegate;
        return self;
    };
}

- (UITextField *(^)(UIReturnKeyType type))wg_returnKeyType;
{
    return ^(UIReturnKeyType type) {
        self.returnKeyType = type;
        return self;
    };
}

- (UITextField *(^)(UITextFieldViewMode mode))wg_clearButtonMode
{
    return ^(UITextFieldViewMode mode) {
        self.clearButtonMode = mode;
        return self;
    };
}

- (UITextField* (^)(UIFont* font))wg_font
{
    return ^(UIFont* font) {
        self.font = font;
        return self;
    };
}

- (UITextField* (^)(UIColor* textColor))wg_textColor
{
    return ^(UIColor* textColor) {
        self.textColor = textColor;
        return self;
    };
}

- (UITextField* (^)(NSString* text))wg_text
{
    return ^(NSString* text) {
        self.text = text;
        return self;
    };
}

- (UITextField* (^)(id target,SEL action,UIControlEvents controlEvents))wg_addAction
{
    return ^(id target,SEL action,UIControlEvents controlEvents) {
        [self addTarget:target action:action forControlEvents:controlEvents];
        return self;
    };
}

@end
