//
//  UIButton+WG.m
//  Test
//
//  Created by mac on 2019/8/16.
//  Copyright © 2019 zixuan. All rights reserved.
//

#import "UIButton+WG.h"

@implementation UIButton (WG)

+ (UIButton* (^)(UIButtonType type))wg_init
{
    return ^(UIButtonType type) {
        UIButton *button = [UIButton buttonWithType:type];
        return button;
    };
}

- (UIButton* (^)(UIFont* font))wg_font
{
    return ^(UIFont* font) {
        self.titleLabel.font = font;
        return self;
    };
}

- (UIButton* (^)(NSString* title,UIControlState state))wg_title
{
    return ^(NSString* title,UIControlState state) {
        [self setTitle:title forState:state];
        return self;
    };
}

- (UIButton* (^)(UIColor* titleColor,UIControlState state))wg_titleColor;
{
    return ^(UIColor* titleColor,UIControlState state) {
        [self setTitleColor:titleColor forState:state];
        return self;
    };
}

- (UIButton* (^)(UIImage* image,UIControlState state))wg_image
{
    return ^(UIImage* image,UIControlState state) {
        [self setImage:image forState:state];
        return self;
    };
}

- (UIButton* (^)(UIImage* backgroundImage,UIControlState state))wg_backgroundImage
{
    return ^(UIImage* backgroundImage,UIControlState state) {
        [self setBackgroundImage:backgroundImage forState:state];
        return self;
    };
}

- (UIButton* (^)(NSAttributedString *attributedText,UIControlState state))wg_attributedText
{
    return ^(NSAttributedString *attributedText,UIControlState state) {
        [self setAttributedTitle:attributedText forState:state];
        return self;
    };
}

- (UIButton* (^)(id target,SEL action,UIControlEvents controlEvents))wg_addAction
{
    return ^(id target,SEL action,UIControlEvents controlEvents) {
        [self addTarget:target action:action forControlEvents:controlEvents];
        return self;
    };
}

@end
