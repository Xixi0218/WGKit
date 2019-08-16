//
//  UILabel+WG.m
//  Test
//
//  Created by mac on 2019/8/16.
//  Copyright © 2019 zixuan. All rights reserved.
//

#import "UILabel+WG.h"

@implementation UILabel (WG)

+ (UILabel *(^)(void))wg_init
{
    return ^() {
        UILabel *label = [UILabel new];
        return label;
    };
}

- (UILabel* (^)(UIFont* font))wg_font
{
    return ^(UIFont* font) {
        self.font = font;
        return self;
    };
}

- (UILabel* (^)(UIColor* textColor))wg_textColor
{
    return ^(UIColor* textColor) {
        self.textColor = textColor;
        return self;
    };
}
- (UILabel* (^)(NSString* text))wg_text
{
    return ^(NSString* text) {
        self.text = text;
        return self;
    };
}

- (UILabel* (^)(NSTextAlignment textAlignment))wg_textAlignment
{
    return ^(NSTextAlignment textAlignment) {
        self.textAlignment = textAlignment;
        return self;
    };
}

- (UILabel* (^)(NSInteger numberOfLines))wg_numberOfLines
{
    return ^(NSInteger numberOfLines) {
        self.numberOfLines = numberOfLines;
        return self;
    };
}

- (UILabel* (^)(NSAttributedString* attributedText))wg_attributedText
{
    return ^(NSAttributedString* attributedText) {
        self.attributedText = attributedText;
        return self;
    };
}

- (UILabel* (^)(CGRect frame))wg_frame
{
    return ^(CGRect frame) {
        self.frame = frame;
        return self;
    };
}

- (UILabel* (^)(UIColor* backgroundColor))wg_backgroundColor
{
    return ^(UIColor* backgroundColor) {
        self.backgroundColor = backgroundColor;
        return self;
    };
}

- (UILabel* (^)(void))wg_sizeToFit
{
    return ^() {
        [self sizeToFit];
        return self;
    };
}

@end
