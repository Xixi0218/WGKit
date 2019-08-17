//
//  WG_AutoLayoutUtilities.h
//  WG_AutoLayoutKit
//
//  Created by mac on 2019/8/16.
//  Copyright © 2019 zixuan. All rights reserved.
//

#import <Foundation/Foundation.h>
#if TARGET_OS_IPHONE || TARGET_OS_TV

#define WG_CLASS_VIEW UIView
#define WG_CLASS_LGUIDE UILayoutGuide

#define WG_VIEW NSObject
#define WG_LayoutPriority UILayoutPriority
#define WG_ConstraintAxis UILayoutConstraintAxis
#define WG_COLOR UIColor
#import <UIKit/UIKit.h>

#elif TARGET_OS_MAC
#define WG_CLASS_VIEW NSView
#define WG_CLASS_LGUIDE NSLayoutGuide

#define WG_VIEW NSObject
#define WG_LayoutPriority NSLayoutPriority
#define WG_ConstraintAxis NSLayoutConstraintOrientation
#define WG_COLOR NSColor
#import <AppKit/AppKit.h>

#endif
