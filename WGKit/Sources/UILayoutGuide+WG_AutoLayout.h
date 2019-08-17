//
//  WG_VIEW+WG_AutoLayout.h
//
//  Github <https://github.com/netyouli/WG_AutoLayoutKit>
//
//  Created by 吴海超 on 16/2/17.
//  Copyright © 2016年 吴海超. All rights reserved.
//

//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import "WG_AutoLayoutUtilities.h"

typedef WG_CLASS_LGUIDE * (^LGLessOrEqual)(void) NS_AVAILABLE(10_11, 9_0);
typedef WG_CLASS_LGUIDE * (^LGGreaterOrEqual)(void) NS_AVAILABLE(10_11, 9_0);
typedef WG_CLASS_LGUIDE * (^LGResetConstraintAttribute)(void) NS_AVAILABLE(10_11, 9_0);
typedef WG_CLASS_LGUIDE * (^LGClearConstraintAttribute)(void) NS_AVAILABLE(10_11, 9_0);
typedef WG_CLASS_LGUIDE * (^LGRemoveConstraintAttribute)(NSLayoutAttribute attributes, ...) NS_AVAILABLE(10_11, 9_0);
typedef WG_CLASS_LGUIDE * (^LGRemoveConstraintFromViewAttribute)(WG_CLASS_VIEW * view, NSLayoutAttribute attributes, ...) NS_AVAILABLE(10_11, 9_0);
typedef WG_CLASS_LGUIDE * (^LGRemoveConstraintToViewAttribute)(WG_VIEW * toView, NSLayoutAttribute attributes, ...) NS_AVAILABLE(10_11, 9_0);

typedef WG_CLASS_LGUIDE * (^LGPriorityLow)(void) NS_AVAILABLE(10_11, 9_0);
typedef WG_CLASS_LGUIDE * (^LGPriorityHigh)(void) NS_AVAILABLE(10_11, 9_0);
typedef WG_CLASS_LGUIDE * (^LGPriorityRequired)(void) NS_AVAILABLE(10_11, 9_0);
typedef WG_CLASS_LGUIDE * (^LGPriorityFitting)(void) NS_AVAILABLE(10_11, 9_0);
typedef WG_CLASS_LGUIDE * (^LGPriorityValue)(CGFloat value) NS_AVAILABLE(10_11, 9_0);

typedef WG_CLASS_LGUIDE * (^LGLeftSpace)(CGFloat value) NS_AVAILABLE(10_11, 9_0);
typedef WG_CLASS_LGUIDE * (^LGLeftSpaceToView)(CGFloat value , WG_VIEW * toView) NS_AVAILABLE(10_11, 9_0);
typedef WG_CLASS_LGUIDE * (^LGLeftSpaceEqualView)(WG_VIEW * view) NS_AVAILABLE(10_11, 9_0);
typedef WG_CLASS_LGUIDE * (^LGLeftSpaceEqualViewOffset)(WG_VIEW * view, CGFloat offset) NS_AVAILABLE(10_11, 9_0);

typedef WG_CLASS_LGUIDE * (^LGLeadingSpace)(CGFloat value) NS_AVAILABLE(10_11, 9_0);
typedef WG_CLASS_LGUIDE * (^LGLeadingSpaceToView)(CGFloat value , WG_VIEW * toView) NS_AVAILABLE(10_11, 9_0);
typedef WG_CLASS_LGUIDE * (^LGLeadingSpaceEqualView)(WG_VIEW * view) NS_AVAILABLE(10_11, 9_0);
typedef WG_CLASS_LGUIDE * (^LGLeadingSpaceEqualViewOffset)(WG_VIEW * view, CGFloat offset) NS_AVAILABLE(10_11, 9_0);

typedef WG_CLASS_LGUIDE * (^LGTrailingSpace)(CGFloat value) NS_AVAILABLE(10_11, 9_0);
typedef WG_CLASS_LGUIDE * (^LGTrailingSpaceToView)(CGFloat value , WG_VIEW * toView) NS_AVAILABLE(10_11, 9_0);
typedef WG_CLASS_LGUIDE * (^LGTrailingSpaceEqualView)(WG_VIEW * view) NS_AVAILABLE(10_11, 9_0);
typedef WG_CLASS_LGUIDE * (^LGTrailingSpaceEqualViewOffset)(WG_VIEW * view, CGFloat offset) NS_AVAILABLE(10_11, 9_0);

typedef WG_CLASS_LGUIDE * (^LGBaseLineSpace)(CGFloat value) NS_AVAILABLE(10_11, 9_0);
typedef WG_CLASS_LGUIDE * (^LGBaseLineSpaceToView)(CGFloat value , WG_VIEW * toView) NS_AVAILABLE(10_11, 9_0);
typedef WG_CLASS_LGUIDE * (^LGBaseLineSpaceEqualView)(WG_VIEW * view) NS_AVAILABLE(10_11, 9_0);
typedef WG_CLASS_LGUIDE * (^LGBaseLineSpaceEqualViewOffset)(WG_VIEW * view, CGFloat offset) NS_AVAILABLE(10_11, 9_0);

typedef WG_CLASS_LGUIDE * (^LGRightSpace)(CGFloat value) NS_AVAILABLE(10_11, 9_0);
typedef WG_CLASS_LGUIDE * (^LGRightSpaceToView)(CGFloat value , WG_VIEW * toView) NS_AVAILABLE(10_11, 9_0);
typedef WG_CLASS_LGUIDE * (^LGRightSpaceEqualView)(WG_VIEW * view) NS_AVAILABLE(10_11, 9_0);
typedef WG_CLASS_LGUIDE * (^LGRightSpaceEqualViewOffset)(WG_VIEW * view, CGFloat offset) NS_AVAILABLE(10_11, 9_0);

typedef WG_CLASS_LGUIDE * (^LGTopSpace)(CGFloat value) NS_AVAILABLE(10_11, 9_0);
typedef WG_CLASS_LGUIDE * (^LGTopSpaceToView)(CGFloat value , WG_VIEW * toView) NS_AVAILABLE(10_11, 9_0);
typedef WG_CLASS_LGUIDE * (^LGTopSpaceEqualView)(WG_VIEW * view) NS_AVAILABLE(10_11, 9_0);
typedef WG_CLASS_LGUIDE * (^LGTopSpaceEqualViewOffset)(WG_VIEW * view, CGFloat offset) NS_AVAILABLE(10_11, 9_0);

typedef WG_CLASS_LGUIDE * (^LGBottomSpace)(CGFloat value) NS_AVAILABLE(10_11, 9_0);
typedef WG_CLASS_LGUIDE * (^LGBottomSpaceToView)(CGFloat value , WG_VIEW * toView) NS_AVAILABLE(10_11, 9_0);
typedef WG_CLASS_LGUIDE * (^LGBottomSpaceEqualView)(WG_VIEW * view) NS_AVAILABLE(10_11, 9_0);
typedef WG_CLASS_LGUIDE * (^LGBottomSpaceEqualViewOffset)(WG_VIEW * view, CGFloat offset) NS_AVAILABLE(10_11, 9_0);

typedef WG_CLASS_LGUIDE * (^LGWidth)(CGFloat value) NS_AVAILABLE(10_11, 9_0);
typedef WG_CLASS_LGUIDE * (^LGWidthAuto)(void) NS_AVAILABLE(10_11, 9_0);
typedef WG_CLASS_LGUIDE * (^LGWidthEqualView)(WG_VIEW * view) NS_AVAILABLE(10_11, 9_0);
typedef WG_CLASS_LGUIDE * (^LGWidthEqualViewRatio)(WG_VIEW * view, CGFloat ratio) NS_AVAILABLE(10_11, 9_0);
typedef WG_CLASS_LGUIDE * (^LGWidthHeightRatio)(CGFloat ratio) NS_AVAILABLE(10_11, 9_0);

typedef WG_CLASS_LGUIDE * (^LGHeight)(CGFloat value) NS_AVAILABLE(10_11, 9_0);
typedef WG_CLASS_LGUIDE * (^LGHeightAuto)(void) NS_AVAILABLE(10_11, 9_0);
typedef WG_CLASS_LGUIDE * (^LGHeightEqualView)(WG_VIEW * view) NS_AVAILABLE(10_11, 9_0);
typedef WG_CLASS_LGUIDE * (^LGHeightEqualViewRatio)(WG_VIEW * view, CGFloat ratio) NS_AVAILABLE(10_11, 9_0);
typedef WG_CLASS_LGUIDE * (^LGHeightWidthRatio)(CGFloat ratio);

typedef WG_CLASS_LGUIDE * (^LGCenterX)(CGFloat value) NS_AVAILABLE(10_11, 9_0);
typedef WG_CLASS_LGUIDE * (^LGCenterXToView)(CGFloat value, WG_VIEW * toView) NS_AVAILABLE(10_11, 9_0);

typedef WG_CLASS_LGUIDE * (^LGCenterY)(CGFloat value) NS_AVAILABLE(10_11, 9_0);
typedef WG_CLASS_LGUIDE * (^LGCenterYToView)(CGFloat value, WG_VIEW * toView) NS_AVAILABLE(10_11, 9_0);

typedef WG_CLASS_LGUIDE * (^LGCenter)(CGFloat x, CGFloat y) NS_AVAILABLE(10_11, 9_0);
typedef WG_CLASS_LGUIDE * (^LGCenterToView)(CGPoint center, WG_VIEW * toView) NS_AVAILABLE(10_11, 9_0);

typedef WG_CLASS_LGUIDE * (^LGsize)(CGFloat width, CGFloat height) NS_AVAILABLE(10_11, 9_0);
typedef WG_CLASS_LGUIDE * (^LGSizeEqual)(WG_VIEW * view) NS_AVAILABLE(10_11, 9_0);

typedef WG_CLASS_LGUIDE * (^LGFrameEqual)(WG_VIEW * view) NS_AVAILABLE(10_11, 9_0);

#pragma mark - UI自动布局 -

NS_AVAILABLE(10_11, 9_0)
@interface WG_CLASS_LGUIDE (WG_AutoLayout)

#pragma mark - api version ~ 2.0 -

/// 当前约束小于等于
@property (nonatomic ,copy , readonly)LGLessOrEqual WG_LessOrEqual;
/// 当前约束大于等于
@property (nonatomic ,copy , readonly)LGGreaterOrEqual WG_GreaterOrEqual;
/// 重置缓存约束
@property (nonatomic ,copy , readonly)LGResetConstraintAttribute WG_ResetConstraint;
/// 清除所有约束
@property (nonatomic ,copy , readonly)LGClearConstraintAttribute WG_ClearLayoutAttr;
/// 移除约束(NSLayoutAttribute attributes, ...)
@property (nonatomic ,copy , readonly)LGRemoveConstraintAttribute WG_RemoveLayoutAttrs;
/// 移除约束从指定视图上(WG_VIEW * view, NSLayoutAttribute attributes, ...)
@property (nonatomic ,copy , readonly)LGRemoveConstraintFromViewAttribute WG_RemoveFromLayoutAttrs;
/// 移除约束从关联视图上(WG_VIEW * toView, NSLayoutAttribute attributes, ...)
@property (nonatomic ,copy , readonly)LGRemoveConstraintToViewAttribute WG_RemoveToLayoutAttrs;

/// 设置当前约束的低优先级
@property (nonatomic ,copy , readonly)LGPriorityLow WG_PriorityLow;
/// 设置当前约束的高优先级
@property (nonatomic ,copy , readonly)LGPriorityHigh WG_PriorityHigh;
/// 设置当前约束的默认优先级
@property (nonatomic ,copy , readonly)LGPriorityRequired WG_PriorityRequired;
/// 设置当前约束的合适优先级
@property (nonatomic ,copy , readonly)LGPriorityFitting WG_PriorityFitting;
/// 设置当前约束的优先级 (CGFloat value): 优先级大小(0-1000)
@property (nonatomic ,copy , readonly)LGPriorityValue WG_Priority;

/// 与父视图左边间距(CGFloat value)
@property (nonatomic ,copy , readonly)LGLeftSpace WG_LeftSpace;
/// 与相对视图toView左边间距(CGFloat value,WG_VIEW * toView)
@property (nonatomic ,copy , readonly)LGLeftSpaceToView WG_LeftSpaceToView;
/// 与视图view左边间距相等(WG_VIEW * view)
@property (nonatomic ,copy , readonly)LGLeftSpaceEqualView WG_LeftSpaceEqualView;
/// 与视图view左边间距相等并偏移offset(WG_VIEW * view, CGFloat offset)
@property (nonatomic ,copy , readonly)LGLeftSpaceEqualViewOffset WG_LeftSpaceEqualViewOffset;

/// 与父视图左边间距(CGFloat value)
@property (nonatomic ,copy , readonly)LGLeadingSpace WG_LeadingSpace;
/// 与相对视图toView左边间距(CGFloat value,WG_VIEW * toView)
@property (nonatomic ,copy , readonly)LGLeadingSpaceToView WG_LeadingSpaceToView;
/// 与视图view左边间距相等(WG_VIEW * view)
@property (nonatomic ,copy , readonly)LGLeadingSpaceEqualView WG_LeadingSpaceEqualView;
/// 与视图view左边间距相等并偏移offset (WG_VIEW * view, CGFloat offset)
@property (nonatomic ,copy , readonly)LGLeadingSpaceEqualViewOffset WG_LeadingSpaceEqualViewOffset;

/// 与父视图右边间距(CGFloat value)
@property (nonatomic ,copy , readonly)LGTrailingSpace WG_TrailingSpace;
/// 与相对视图toView右边间距(CGFloat value,WG_VIEW * toView)
@property (nonatomic ,copy , readonly)LGTrailingSpaceToView WG_TrailingSpaceToView;
/// 与视图view右边间距相等(WG_VIEW * view)
@property (nonatomic ,copy , readonly)LGTrailingSpaceEqualView WG_TrailingSpaceEqualView;
/// 与视图view右边间距相等并偏移offset(WG_VIEW * view, CGFloat offset)
@property (nonatomic ,copy , readonly)LGTrailingSpaceEqualViewOffset WG_TrailingSpaceEqualViewOffset;

#if (__IPHONE_OS_VERSION_MIN_REQUIRED >= 80000) || (__TV_OS_VERSION_MIN_REQUIRED >= 9000) || (__MAC_OS_X_VERSION_MIN_REQUIRED >= 101100)
/// 与父视图底边间距Y(CGFloat value)
@property (nonatomic ,copy , readonly)LGBaseLineSpace WG_FirstBaseLine;
/// 与相对视图toView底边间距Y(CGFloat value,WG_VIEW * toView)
@property (nonatomic ,copy , readonly)LGBaseLineSpaceToView WG_FirstBaseLineToView;
/// 与视图view底边间距Y相等(WG_VIEW * view)
@property (nonatomic ,copy , readonly)LGBaseLineSpaceEqualView WG_FirstBaseLineEqualView;
/// 与视图view底边间距Y相等并偏移offset(WG_VIEW * view, CGFloat offset)
@property (nonatomic ,copy , readonly)LGBaseLineSpaceEqualViewOffset WG_FirstBaseLineEqualViewOffset;
#endif

/// 与父视图底边间距Y(CGFloat value)
@property (nonatomic ,copy , readonly)LGBaseLineSpace WG_LastBaseLine;
/// 与相对视图toView底边间距Y(CGFloat value,WG_VIEW * toView)
@property (nonatomic ,copy , readonly)LGBaseLineSpaceToView WG_LastBaseLineToView;
/// 与视图view底边间距Y相等(WG_VIEW * view)
@property (nonatomic ,copy , readonly)LGBaseLineSpaceEqualView WG_LastBaseLineEqualView;
/// 与视图view底边间距Y相等并偏移offset(WG_VIEW * view, CGFloat offset)
@property (nonatomic ,copy , readonly)LGBaseLineSpaceEqualViewOffset WG_LastBaseLineEqualViewOffset;
/// 与父视图右边间距(CGFloat value)
@property (nonatomic ,copy , readonly)LGRightSpace WG_RightSpace;
/// 与相对视图toView右边间距(CGFloat value,WG_VIEW * toView)
@property (nonatomic ,copy , readonly)LGRightSpaceToView WG_RightSpaceToView;
/// 与相对视图toView右边间距相等(WG_VIEW toView)
@property (nonatomic ,copy , readonly)LGRightSpaceEqualView WG_RightSpaceEqualView;
/// 与相对视图toView右边间距相等并偏移offset(WG_VIEW toView, CGFloat offset)
@property (nonatomic ,copy , readonly)LGRightSpaceEqualViewOffset WG_RightSpaceEqualViewOffset;

/// 与父视图顶边间距(CGFloat value)
@property (nonatomic ,copy , readonly)LGTopSpace WG_TopSpace;
/// 与相对视图toView顶边间距(CGFloat value,WG_VIEW * toView)
@property (nonatomic ,copy , readonly)LGTopSpaceToView WG_TopSpaceToView;
/// 与视图view顶边间距相等(WG_VIEW * view)
@property (nonatomic ,copy , readonly)LGTopSpaceEqualView WG_TopSpaceEqualView;
/// 与视图view顶边间距相等并偏移offset(WG_VIEW * view, CGFloat offset)
@property (nonatomic ,copy , readonly)LGTopSpaceEqualViewOffset WG_TopSpaceEqualViewOffset;

/// 与父视图底边间距(CGFloat value)
@property (nonatomic ,copy , readonly)LGBottomSpace WG_BottomSpace;
/// 与相对视图toView底边间距(CGFloat value,WG_VIEW * toView)
@property (nonatomic ,copy , readonly)LGBottomSpaceToView WG_BottomSpaceToView;
/// 与相对视图toView底边间距相等(WG_VIEW * toView)
@property (nonatomic ,copy , readonly)LGBottomSpaceEqualView WG_BottomSpaceEqualView;
/// 与相对视图toView底边间距相等并偏移offset(WG_VIEW * toView, CGFloat offset)
@property (nonatomic ,copy , readonly)LGBottomSpaceEqualViewOffset WG_BottomSpaceEqualViewOffset;

/// 宽度(CGFloat value)
@property (nonatomic ,copy , readonly)LGWidth WG_Width;
/// 宽度自动()
@property (nonatomic ,copy , readonly)LGWidthAuto WG_WidthAuto;
/// 宽度等于视图view(WG_VIEW * view)
@property (nonatomic ,copy , readonly)LGWidthEqualView WG_WidthEqualView;
/// 宽度等于视图view 参照比例Ratio(WG_VIEW * view ,CGFloat ratio)
@property (nonatomic ,copy , readonly)LGWidthEqualViewRatio WG_WidthEqualViewRatio;
/// 视图自身宽度与高度的比(CGFloat Ratio)
@property (nonatomic ,copy , readonly)LGWidthHeightRatio WG_WidthHeightRatio;

/// 高度(CGFloat value)
@property (nonatomic ,copy , readonly)LGHeight WG_Height;
/// 高度自动()
@property (nonatomic ,copy , readonly)LGHeightAuto WG_HeightAuto;
/// 高度等于视图view(WG_VIEW * view)
@property (nonatomic ,copy , readonly)LGHeightEqualView WG_HeightEqualView;
/// 高度等于视图view 参照比例Ratio(WG_VIEW * view ,CGFloat ratio)
@property (nonatomic ,copy , readonly)LGHeightEqualViewRatio WG_HeightEqualViewRatio;
/// 视图自身高度与宽度的比(CGFloat Ratio)
@property (nonatomic ,copy , readonly)LGHeightWidthRatio WG_HeightWidthRatio;

/// 中心X与父视图偏移(CGFloat value)
@property (nonatomic ,copy , readonly)LGCenterX WG_CenterX;
/// 中心X与视图view偏移(CGFloat value , WG_VIEW * toView)
@property (nonatomic ,copy , readonly)LGCenterXToView WG_CenterXToView;

/// 中心Y与父视图偏移(CGFloat value)
@property (nonatomic ,copy , readonly)LGCenterY WG_CenterY;
/// 中心Y与视图view偏移(CGFloat value , WG_VIEW * toView)
@property (nonatomic ,copy , readonly)LGCenterYToView WG_CenterYToView;

/// 中心与父视图偏移(CGFloat value)
@property (nonatomic ,copy , readonly)LGCenter WG_Center;
/// 中心与视图view偏移(CGFloat value , WG_VIEW * toView)
@property (nonatomic ,copy , readonly)LGCenterToView WG_CenterToView;

/// size设置(CGFloat width, CGFloat height)
@property (nonatomic ,copy , readonly)LGsize WG_Size;
/// size设置(WG_VIEW * view)
@property (nonatomic ,copy , readonly)LGSizeEqual WG_SizeEqualView;

/// frame设置(WG_VIEW * view)
@property (nonatomic ,copy , readonly)LGFrameEqual WG_FrameEqualView;
#pragma mark - api version ~ 1.0 -


/**
 重置缓存的约束,该方法在当前视图对象移除从父视图上可能需要调用清除与父视图之前旧约束缓存对象
 
 @return 返回当前视图
 */
- (WG_CLASS_LGUIDE *)WG_ResetConstraints;

/**
 清除所有布局属性
 
 @return 返回当前视图
 */
- (WG_CLASS_LGUIDE *)WG_ClearLayoutAttrs;

/**
 移除一个或者一组约束
 
 @param attributes 约束类型（可变参数）
 @return 返回当前视图
 */
- (WG_CLASS_LGUIDE *)WG_RemoveLayoutAttr:(NSLayoutAttribute)attributes, ...;


/**
 移除一个单个属性
 
 @param attribute 约束类型
 @return 返回当前视图
 */
- (WG_CLASS_LGUIDE *)WG_RemoveLayoutOneAttr:(NSLayoutAttribute)attribute;

/**
 移除一个或者一组约束从指定的视图上
 
 @param view 指定视图
 @param attributes 约束类型（可变参数）
 @return 返回当前视图
 */
- (WG_CLASS_LGUIDE *)WG_RemoveFrom:(WG_CLASS_LGUIDE *)view layoutAttrs:(NSLayoutAttribute)attributes, ...;


/**
 移除一个约束从指定的视图上
 
 @param view 指定视图
 @param attribute 约束类型
 @return 返回当前视图
 */
- (WG_CLASS_LGUIDE *)WG_RemoveFrom:(WG_CLASS_LGUIDE *)view layoutAttr:(NSLayoutAttribute)attribute;


/**
 移除一个约束从关联的视图
 
 @param view 关联的视图
 @param attribute 移除的约束
 @return 当前视图
 */
- (WG_CLASS_LGUIDE *)WG_RemoveTo:(WG_VIEW *)view attr:(NSLayoutAttribute)attribute;

/**
 移除多个约束从关联的视图
 
 @param view 关联的视图
 @param attributes 移除的约束
 @return 当前视图
 */

- (WG_CLASS_LGUIDE *)WG_RemoveTo:(WG_VIEW *)view layoutAttrs:(NSLayoutAttribute)attributes, ... ;

/**
 设置当前约束的低优先级
 
 @return 返回当前视图
 */
- (WG_CLASS_LGUIDE *)WG_priorityLow;

/**
 设置当前约束的高优先级
 
 @return 返回当前视图
 */
- (WG_CLASS_LGUIDE *)WG_priorityHigh;

/**
 设置当前约束的默认优先级
 
 @return 返回当前视图
 */
- (WG_CLASS_LGUIDE *)WG_priorityRequired;

/**
 设置当前约束的合适优先级
 
 @return 返回当前视图
 */
- (WG_CLASS_LGUIDE *)WG_priorityFitting;

/**
 设置当前约束的优先级
 
 @param value 优先级大小(0-1000)
 @return 返回当前视图
 */
- (WG_CLASS_LGUIDE *)WG_priority:(CGFloat)value;

/**
 设置左边距(默认相对父视图)
 
 @param leftSpace 左边距
 @return 返回当前视图
 */
- (WG_CLASS_LGUIDE *)WG_LeftSpace:(CGFloat)leftSpace;


/**
 设置左边距
 
 @param leftSpace 左边距
 @param toView 相对视图
 @return 返回当前视图
 */
- (WG_CLASS_LGUIDE *)WG_LeftSpace:(CGFloat)leftSpace toView:(WG_VIEW *)toView;

/**
 设置左边距与视图view左边距相等
 
 @param view 相对视图
 @return 返回当前视图
 */
- (WG_CLASS_LGUIDE *)WG_LeftSpaceEqualView:(WG_VIEW *)view;

/**
 设置左边距与视图view左边距相等并偏移offset
 
 @param view 相对视图
 @param offset 偏移量
 @return 返回当前视图
 */
- (WG_CLASS_LGUIDE *)WG_LeftSpaceEqualView:(WG_VIEW *)view offset:(CGFloat)offset;

/**
 设置右边距(默认相对父视图)
 
 @param rightSpace 右边距
 @return 返回当前视图
 */
- (WG_CLASS_LGUIDE *)WG_RightSpace:(CGFloat)rightSpace;

/**
 设置右边距
 
 @param rightSpace 右边距
 @param toView 相对视图
 @return 返回当前视图
 */
- (WG_CLASS_LGUIDE *)WG_RightSpace:(CGFloat)rightSpace toView:(WG_VIEW *)toView;

/**
 设置右边距与视图view左对齐边距相等
 
 @param view 相对视图
 @return 返回当前视图
 */
- (WG_CLASS_LGUIDE *)WG_RightSpaceEqualView:(WG_VIEW *)view;

/**
 设置右边距与视图view左对齐边距相等并偏移offset
 
 @param view 相对视图
 @param offset 偏移量
 @return 返回当前视图
 */
- (WG_CLASS_LGUIDE *)WG_RightSpaceEqualView:(WG_VIEW *)view offset:(CGFloat)offset;

/**
 设置左对齐(默认相对父视图)
 
 @param leadingSpace 左边距
 @return 返回当前视图
 */
- (WG_CLASS_LGUIDE *)WG_LeadingSpace:(CGFloat)leadingSpace;

/**
 设置左对齐
 
 @param leadingSpace 左边距
 @param toView 相对视图
 @return 返回当前视图
 */

- (WG_CLASS_LGUIDE *)WG_LeadingSpace:(CGFloat)leadingSpace toView:(WG_VIEW *)toView;

/**
 设置左对齐边距与某视图左对齐边距相等
 
 @param view 相对视图
 @return 返回当前视图
 */
- (WG_CLASS_LGUIDE *)WG_LeadingSpaceEqualView:(WG_VIEW *)view;

/**
 设置左对齐边距与某视图左对齐边距相等并偏移offset
 
 @param view 相对视图
 @param offset 偏移量
 @return 返回当前视图
 */
- (WG_CLASS_LGUIDE *)WG_LeadingSpaceEqualView:(WG_VIEW *)view offset:(CGFloat)offset;

/**
 设置右对齐(默认相对父视图)
 
 @param trailingSpace 右边距
 @return 返回当前视图
 */
- (WG_CLASS_LGUIDE *)WG_TrailingSpace:(CGFloat)trailingSpace;

/**
 设置右对齐
 
 @param trailingSpace 右边距
 @param toView 相对视图
 @return 返回当前视图
 */
- (WG_CLASS_LGUIDE *)WG_TrailingSpace:(CGFloat)trailingSpace toView:(WG_VIEW *)toView;

/**
 设置右对齐边距与某视图右对齐边距相等
 
 @param view 相对视图
 @return 返回当前视图
 */
- (WG_CLASS_LGUIDE *)WG_TrailingSpaceEqualView:(WG_VIEW *)view;

/**
 设置右对齐边距与某视图右对齐边距相等并偏移offset
 
 @param view 相对视图
 @param offset 偏移量
 @return 返回当前视图
 */
- (WG_CLASS_LGUIDE *)WG_TrailingSpaceEqualView:(WG_VIEW *)view offset:(CGFloat)offset;

/**
 设置顶边距(默认相对父视图)
 
 @param topSpace 顶边距
 @return 返回当前视图
 */
- (WG_CLASS_LGUIDE *)WG_TopSpace:(CGFloat)topSpace;

/**
 设置顶边距
 
 @param topSpace 顶边距
 @param toView 相对视图
 @return 返回当前视图
 */
- (WG_CLASS_LGUIDE *)WG_TopSpace:(CGFloat)topSpace toView:(WG_VIEW *)toView;

/**
 设置顶边距与视图view顶边距相等
 
 @param view 相对视图
 @return 返回当前视图
 */
- (WG_CLASS_LGUIDE *)WG_TopSpaceEqualView:(WG_VIEW *)view;

/**
 设置顶边距与视图view顶边距相等并偏移offset
 
 @param view 相对视图
 @param offset 偏移量
 @return 返回当前视图
 */
- (WG_CLASS_LGUIDE *)WG_TopSpaceEqualView:(WG_VIEW *)view offset:(CGFloat)offset;

/**
 设置底边距(默认相对父视图)
 
 @param bottomSpace 底边距
 @return 返回当前视图
 */
- (WG_CLASS_LGUIDE *)WG_BottomSpace:(CGFloat)bottomSpace;

/**
 设置底边距
 
 @param bottomSpace 底边距
 @param toView 相对视图
 @return 返回当前视图
 */
- (WG_CLASS_LGUIDE *)WG_BottomSpace:(CGFloat)bottomSpace toView:(WG_VIEW *)toView;

/**
 设置底边距与视图view底边距相等
 
 @param view 相对视图
 @return 返回当前视图
 */
- (WG_CLASS_LGUIDE *)WG_BottomSpaceEqualView:(WG_VIEW *)view;

/**
 设置底边距与视图view底边距相等并偏移offset
 
 @param view 相对视图
 @param offset 偏移量
 @return 返回当前视图
 */
- (WG_CLASS_LGUIDE *)WG_BottomSpaceEqualView:(WG_VIEW *)view offset:(CGFloat)offset;

/**
 设置宽度
 
 @param width 宽度
 @return 返回当前视图
 */
- (WG_CLASS_LGUIDE *)WG_Width:(CGFloat)width;

/**
 设置宽度与某个视图相等
 
 @param view 相对视图
 @return 返回当前视图
 */
- (WG_CLASS_LGUIDE *)WG_WidthEqualView:(WG_VIEW *)view;

/**
 设置宽度与视图view相等
 
 @param view 相对视图
 @param ratio 比例
 @return 返回当前视图
 */
- (WG_CLASS_LGUIDE *)WG_WidthEqualView:(WG_VIEW *)view ratio:(CGFloat)ratio;

/**
 设置自动宽度
 
 @return 返回当前视图
 */
- (WG_CLASS_LGUIDE *)WG_AutoWidth;

/**
 设置视图自身宽度与高度的比
 
 @param ratio 比例
 @return 返回当前视图
 */
- (WG_CLASS_LGUIDE *)WG_WidthHeightRatio:(CGFloat)ratio;

/**
 设置高度
 
 @param height 高度
 @return 返回当前视图
 */
- (WG_CLASS_LGUIDE *)WG_Height:(CGFloat)height;

/**
 设置高度与视图view相等
 
 @param view 相对视图
 @return 返回当前视图
 */
- (WG_CLASS_LGUIDE *)WG_HeightEqualView:(WG_VIEW *)view;

/**
 设置高度与视图view相等
 
 @param view 相对视图
 @param ratio 比例
 @return 返回当前视图
 */
- (WG_CLASS_LGUIDE *)WG_HeightEqualView:(WG_VIEW *)view ratio:(CGFloat)ratio;

/**
 设置自动高度
 
 @return 返回当前视图
 */
- (WG_CLASS_LGUIDE *)WG_AutoHeight;

/**
 设置视图自身高度与宽度的比
 
 @param ratio 比例
 @return 返回当前视图
 */
- (WG_CLASS_LGUIDE *)WG_HeightWidthRatio:(CGFloat)ratio;

/**
 设置中心x与父视图中心的偏移 centerX = 0 与父视图中心x重合
 
 @param centerX 中心x坐标偏移
 @return 返回当前视图
 */
- (WG_CLASS_LGUIDE *)WG_CenterX:(CGFloat)centerX;

/**
 设置中心x与相对视图中心的偏移 centerX = 0 与相对视图中心x重合
 
 @param centerX 中心x坐标偏移
 @param toView 相对视图
 @return 返回当前视图
 */
- (WG_CLASS_LGUIDE *)WG_CenterX:(CGFloat)centerX toView:(WG_VIEW *)toView;

/**
 设置中心y与父视图中心的偏移 centerY = 0 与父视图中心y重合
 
 @param centerY 中心y坐标偏移
 @return 返回当前视图
 */
- (WG_CLASS_LGUIDE *)WG_CenterY:(CGFloat)centerY;

/**
 设置中心y与相对视图中心的偏移 centerY = 0 与相对视图中心y重合
 
 @param centerY 中心y坐标偏移
 @param toView 相对视图
 @return 返回当前视图
 */
- (WG_CLASS_LGUIDE *)WG_CenterY:(CGFloat)centerY toView:(WG_VIEW *)toView;

#if (__IPHONE_OS_VERSION_MIN_REQUIRED >= 80000) || (__TV_OS_VERSION_MIN_REQUIRED >= 9000) || (__MAC_OS_X_VERSION_MIN_REQUIRED >= 101100)
/**
 设置顶部基线偏移(默认相对父视图)
 
 @param space 间隙
 @return 返回当前视图
 */
- (WG_CLASS_LGUIDE *)WG_FirstBaseLine:(CGFloat)space;

/**
 设置顶部基线与对象视图底部基线偏移
 
 @param space 间隙
 @param toView 相对视图
 @return 返回当前视图
 */
- (WG_CLASS_LGUIDE *)WG_FirstBaseLine:(CGFloat)space toView:(WG_VIEW *)toView;

/**
 设置顶部基线与相对视图顶部基线相等
 
 @param view 相对视图
 @return 返回当前视图
 */
- (WG_CLASS_LGUIDE *)WG_FirstBaseLineEqualView:(WG_VIEW *)view;

/**
 设置顶部基线与相对视图顶部基线相等并偏移offset
 
 @param view 相对视图
 @param offset 偏移量
 @return 返回当前视图
 */
- (WG_CLASS_LGUIDE *)WG_FirstBaseLineEqualView:(WG_VIEW *)view offset:(CGFloat)offset;

#endif

/**
 设置底部基线偏移(默认相对父视图)
 
 @param space 间隙
 @return 返回当前视图
 */
- (WG_CLASS_LGUIDE *)WG_LastBaseLine:(CGFloat)space;

/**
 设置底部基线与对象视图顶部基线偏移
 
 @param space 间隙
 @param toView 相对视图
 @return 返回当前视图
 */
- (WG_CLASS_LGUIDE *)WG_LastBaseLine:(CGFloat)space toView:(WG_VIEW *)toView;

/**
 设置底部基线与相对视图底部基线相等
 
 @param view 相对视图
 @return 返回当前视图
 */
- (WG_CLASS_LGUIDE *)WG_LastBaseLineEqualView:(WG_VIEW *)view;

/**
 设置底部基线与相对视图底部基线相等并偏移offset
 
 @param view 相对视图
 @param offset 偏移量
 @return 返回当前视图
 */
- (WG_CLASS_LGUIDE *)WG_LastBaseLineEqualView:(WG_VIEW *)view offset:(CGFloat)offset;


/**
 设置中心偏移(默认相对父视图)center = CGPointZero 与父视图中心重合
 
 @param center 中心偏移xy
 @return 返回当前视图
 */
- (WG_CLASS_LGUIDE *)WG_Center:(CGPoint)center;

/**
 设置中心偏移(默认相对父视图)center = CGPointZero 与父视图中心重合
 
 @param center 中心偏移xy
 @param toView 相对视图
 @return 返回当前视图
 */
- (WG_CLASS_LGUIDE *)WG_Center:(CGPoint)center toView:(WG_VIEW *)toView;


/**
 设置frame(默认相对父视图)
 
 @param left 左边距
 @param top 顶边距
 @param width 宽度
 @param height 高度
 @return 返回当前视图
 */
- (WG_CLASS_LGUIDE *)WG_Frame:(CGFloat)left top:(CGFloat)top width:(CGFloat)width height:(CGFloat)height;

/**
 设置frame (默认相对父视图)
 
 @param left 左边距
 @param top 顶边距
 @param right 右边距
 @param bottom 底边距
 @return 返回当前视图
 */

- (WG_CLASS_LGUIDE *)WG_AutoSize:(CGFloat)left top:(CGFloat)top right:(CGFloat)right bottom:(CGFloat)bottom;

/**
 设置frame
 
 @param left 左边距
 @param top 顶边距
 @param width 宽度
 @param height 高度
 @param toView 相对视图
 @return 返回当前视图
 */

- (WG_CLASS_LGUIDE *)WG_Frame:(CGFloat)left top:(CGFloat)top width:(CGFloat)width height:(CGFloat)height toView:(WG_VIEW *)toView;

/**
 设置frame (默认相对父视图)
 
 @param left 左边距
 @param top 顶边距
 @param right 右边距
 @param height 高度
 @return 返回当前视图
 */

- (WG_CLASS_LGUIDE *)WG_AutoWidth:(CGFloat)left top:(CGFloat)top right:(CGFloat)right height:(CGFloat)height;

/**
 设置frame (默认相对父视图)
 
 @param left 左边距
 @param top 顶边距
 @param width 宽度
 @param bottom 底边距
 @return 返回当前视图
 */

- (WG_CLASS_LGUIDE *)WG_AutoHeight:(CGFloat)left top:(CGFloat)top width:(CGFloat)width bottom:(CGFloat)bottom;

/**
 设置frame
 
 @param left 左边距
 @param top 顶边距
 @param right 右边距
 @param bottom 底边距
 @param toView 相对视图
 @return 返回当前视图
 */

- (WG_CLASS_LGUIDE *)WG_AutoSize:(CGFloat)left top:(CGFloat)top right:(CGFloat)right bottom:(CGFloat)bottom toView:(WG_VIEW *)toView;

/**
 设置frame
 
 @param left 左边距
 @param top 顶边距
 @param right 右边距
 @param height 高度
 @param toView 相对视图
 @return 返回当前视图
 */

- (WG_CLASS_LGUIDE *)WG_AutoWidth:(CGFloat)left top:(CGFloat)top right:(CGFloat)right height:(CGFloat)height toView:(WG_VIEW *)toView;

/**
 设置frame (默认相对父视图)
 
 @param left 左边距
 @param top 顶边距
 @param width 宽度
 @param bottom 底边距
 @return 返回当前视图
 */

- (WG_CLASS_LGUIDE *)WG_AutoHeight:(CGFloat)left top:(CGFloat)top width:(CGFloat)width bottom:(CGFloat)bottom toView:(WG_VIEW *)toView;

/**
 设置视图显示宽高
 
 @param size 视图宽高
 @return 返回当前视图
 */

- (WG_CLASS_LGUIDE *)WG_Size:(CGSize)size;

/**
 设置视图size等于view
 
 @param view 相对视图
 @return 返回当前视图
 */
- (WG_CLASS_LGUIDE *)WG_SizeEqualView:(WG_VIEW *)view;

/**
 设置视图frame等于view
 @param view 相对视图
 @return 返回当前视图
 */
- (WG_CLASS_LGUIDE *)WG_FrameEqualView:(WG_VIEW *)view;

@end
