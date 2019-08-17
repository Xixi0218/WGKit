//
//  WG_VIEW+wg_AutoLayout.h
//
//  Created by mac on 2019/8/16.
//  Copyright © 2019 zixuan. All rights reserved.
//

#import "WG_AutoLayoutUtilities.h"

typedef WG_CLASS_VIEW * (^IsSafe)(BOOL);

typedef WG_CLASS_VIEW * (^LessOrEqual)(void);
typedef WG_CLASS_VIEW * (^GreaterOrEqual)(void);
typedef WG_CLASS_VIEW * (^ResetConstraintAttribute)(void);
typedef WG_CLASS_VIEW * (^ClearConstraintAttribute)(void);
typedef WG_CLASS_VIEW * (^RemoveConstraintAttribute)(NSLayoutAttribute attributes, ...);
typedef WG_CLASS_VIEW * (^RemoveConstraintFromViewAttribute)(WG_CLASS_VIEW * view, NSLayoutAttribute attributes, ...);
typedef WG_CLASS_VIEW * (^RemoveConstraintToViewAttribute)(WG_VIEW * toView, NSLayoutAttribute attributes, ...);

typedef WG_CLASS_VIEW * (^PriorityLow)(void);
typedef WG_CLASS_VIEW * (^PriorityHigh)(void);
typedef WG_CLASS_VIEW * (^PriorityRequired)(void);
typedef WG_CLASS_VIEW * (^PriorityFitting)(void);
typedef WG_CLASS_VIEW * (^PriorityValue)(CGFloat value);

typedef WG_CLASS_VIEW * (^ContentHuggingPriority)(WG_LayoutPriority, WG_ConstraintAxis);
typedef WG_CLASS_VIEW * (^ContentCompressionResistancePriority)(WG_LayoutPriority, WG_ConstraintAxis);

typedef WG_CLASS_VIEW * (^LeftSpace)(CGFloat value);
typedef WG_CLASS_VIEW * (^LeftSpaceToView)(CGFloat value , WG_VIEW * toView);
typedef WG_CLASS_VIEW * (^LeftSpaceEqualView)(WG_VIEW * view);
typedef WG_CLASS_VIEW * (^LeftSpaceEqualViewOffset)(WG_VIEW * view, CGFloat offset);

typedef WG_CLASS_VIEW * (^LeadingSpace)(CGFloat value);
typedef WG_CLASS_VIEW * (^LeadingSpaceToView)(CGFloat value , WG_VIEW * toView);
typedef WG_CLASS_VIEW * (^LeadingSpaceEqualView)(WG_VIEW * view);
typedef WG_CLASS_VIEW * (^LeadingSpaceEqualViewOffset)(WG_VIEW * view, CGFloat offset);

typedef WG_CLASS_VIEW * (^TrailingSpace)(CGFloat value);
typedef WG_CLASS_VIEW * (^TrailingSpaceToView)(CGFloat value , WG_VIEW * toView);
typedef WG_CLASS_VIEW * (^TrailingSpaceEqualView)(WG_VIEW * view);
typedef WG_CLASS_VIEW * (^TrailingSpaceEqualViewOffset)(WG_VIEW * view, CGFloat offset);

typedef WG_CLASS_VIEW * (^BaseLineSpace)(CGFloat value);
typedef WG_CLASS_VIEW * (^BaseLineSpaceToView)(CGFloat value , WG_VIEW * toView);
typedef WG_CLASS_VIEW * (^BaseLineSpaceEqualView)(WG_VIEW * view);
typedef WG_CLASS_VIEW * (^BaseLineSpaceEqualViewOffset)(WG_VIEW * view, CGFloat offset);

typedef WG_CLASS_VIEW * (^RightSpace)(CGFloat value);
typedef WG_CLASS_VIEW * (^RightSpaceToView)(CGFloat value , WG_VIEW * toView);
typedef WG_CLASS_VIEW * (^RightSpaceEqualView)(WG_VIEW * view);
typedef WG_CLASS_VIEW * (^RightSpaceEqualViewOffset)(WG_VIEW * view, CGFloat offset);

typedef WG_CLASS_VIEW * (^TopSpace)(CGFloat value);
typedef WG_CLASS_VIEW * (^TopSpaceToView)(CGFloat value , WG_VIEW * toView);
typedef WG_CLASS_VIEW * (^TopSpaceEqualView)(WG_VIEW * view);
typedef WG_CLASS_VIEW * (^TopSpaceEqualViewOffset)(WG_VIEW * view, CGFloat offset);

typedef WG_CLASS_VIEW * (^BottomSpace)(CGFloat value);
typedef WG_CLASS_VIEW * (^BottomSpaceToView)(CGFloat value , WG_VIEW * toView);
typedef WG_CLASS_VIEW * (^BottomSpaceEqualView)(WG_VIEW * view);
typedef WG_CLASS_VIEW * (^BottomSpaceEqualViewOffset)(WG_VIEW * view, CGFloat offset);

typedef WG_CLASS_VIEW * (^Width)(CGFloat value);
typedef WG_CLASS_VIEW * (^WidthAuto)(void);
typedef WG_CLASS_VIEW * (^WidthEqualView)(WG_VIEW * view);
typedef WG_CLASS_VIEW * (^WidthEqualViewRatio)(WG_VIEW * view, CGFloat ratio);
typedef WG_CLASS_VIEW * (^WidthHeightRatio)(CGFloat ratio);

typedef WG_CLASS_VIEW * (^Height)(CGFloat value);
typedef WG_CLASS_VIEW * (^HeightAuto)(void);
typedef WG_CLASS_VIEW * (^HeightEqualView)(WG_VIEW * view);
typedef WG_CLASS_VIEW * (^HeightEqualViewRatio)(WG_VIEW * view, CGFloat ratio);
typedef WG_CLASS_VIEW * (^HeightWidthRatio)(CGFloat ratio);

typedef WG_CLASS_VIEW * (^CenterX)(CGFloat value);
typedef WG_CLASS_VIEW * (^CenterXToView)(CGFloat value, WG_VIEW * toView);

typedef WG_CLASS_VIEW * (^CenterY)(CGFloat value);
typedef WG_CLASS_VIEW * (^CenterYToView)(CGFloat value, WG_VIEW * toView);

typedef WG_CLASS_VIEW * (^Center)(CGFloat x, CGFloat y);
typedef WG_CLASS_VIEW * (^CenterToView)(CGPoint center, WG_VIEW * toView);

typedef WG_CLASS_VIEW * (^size)(CGFloat width, CGFloat height);
typedef WG_CLASS_VIEW * (^SizeEqual)(WG_VIEW * view);

typedef WG_CLASS_VIEW * (^FrameEqual)(WG_VIEW * view);

#pragma mark - UI自动布局 -

@interface WG_CLASS_VIEW (wg_AutoLayout)

#pragma mark - api version ~ 2.0 -

/// 是否安全布局
@property (nonatomic ,copy , readonly)IsSafe wg_IsSafe;

/// 当前约束小于等于
@property (nonatomic ,copy , readonly)LessOrEqual wg_LessOrEqual;
/// 当前约束大于等于
@property (nonatomic ,copy , readonly)GreaterOrEqual wg_GreaterOrEqual;
/// 重置缓存约束
@property (nonatomic ,copy , readonly)ResetConstraintAttribute wg_ResetConstraint;
/// 清除所有约束
@property (nonatomic ,copy , readonly)ClearConstraintAttribute wg_ClearLayoutAttr;
/// 移除约束(NSLayoutAttribute attributes, ...)
@property (nonatomic ,copy , readonly)RemoveConstraintAttribute wg_RemoveLayoutAttrs;
/// 移除约束从指定视图上(WG_VIEW * view, NSLayoutAttribute attributes, ...)
@property (nonatomic ,copy , readonly)RemoveConstraintFromViewAttribute wg_RemoveFromLayoutAttrs;
/// 移除约束从关联视图上(WG_VIEW * toView, NSLayoutAttribute attributes, ...)
@property (nonatomic ,copy , readonly)RemoveConstraintToViewAttribute wg_RemoveToLayoutAttrs;

/// 设置当前约束的低优先级
@property (nonatomic ,copy , readonly)PriorityLow wg_PriorityLow;
/// 设置当前约束的高优先级
@property (nonatomic ,copy , readonly)PriorityHigh wg_PriorityHigh;
/// 设置当前约束的默认优先级
@property (nonatomic ,copy , readonly)PriorityRequired wg_PriorityRequired;
/// 设置当前约束的合适优先级
@property (nonatomic ,copy , readonly)PriorityFitting wg_PriorityFitting;
/// 设置当前约束的优先级 (CGFloat value): 优先级大小(0-1000)
@property (nonatomic ,copy , readonly)PriorityValue wg_Priority;

/// 设置视图抗拉伸优先级,优先级越高越不容易被拉伸(UILayoutPriority, UILayoutConstraintAxis)
@property (nonatomic ,copy, readonly)ContentHuggingPriority wg_ContentHuggingPriority;
/// 设置视图抗压缩优先级,优先级越高越不容易被压缩(UILayoutPriority, UILayoutConstraintAxis)
@property (nonatomic ,copy, readonly)ContentCompressionResistancePriority wg_ContentCompressionResistancePriority;

/// 与父视图左边间距(CGFloat value)
@property (nonatomic ,copy , readonly)LeftSpace wg_LeftSpace;
/// 与相对视图toView左边间距(CGFloat value,WG_VIEW * toView)
@property (nonatomic ,copy , readonly)LeftSpaceToView wg_LeftSpaceToView;
/// 与视图view左边间距相等(WG_VIEW * view)
@property (nonatomic ,copy , readonly)LeftSpaceEqualView wg_LeftSpaceEqualView;
/// 与视图view左边间距相等并偏移offset(WG_VIEW * view, CGFloat offset)
@property (nonatomic ,copy , readonly)LeftSpaceEqualViewOffset wg_LeftSpaceEqualViewOffset;

/// 与父视图左边间距(CGFloat value)
@property (nonatomic ,copy , readonly)LeadingSpace wg_LeadingSpace;
/// 与相对视图toView左边间距(CGFloat value,WG_VIEW * toView)
@property (nonatomic ,copy , readonly)LeadingSpaceToView wg_LeadingSpaceToView;
/// 与视图view左边间距相等(WG_VIEW * view)
@property (nonatomic ,copy , readonly)LeadingSpaceEqualView wg_LeadingSpaceEqualView;
/// 与视图view左边间距相等并偏移offset (WG_VIEW * view, CGFloat offset)
@property (nonatomic ,copy , readonly)LeadingSpaceEqualViewOffset wg_LeadingSpaceEqualViewOffset;

/// 与父视图右边间距(CGFloat value)
@property (nonatomic ,copy , readonly)TrailingSpace wg_TrailingSpace;
/// 与相对视图toView右边间距(CGFloat value,WG_VIEW * toView)
@property (nonatomic ,copy , readonly)TrailingSpaceToView wg_TrailingSpaceToView;
/// 与视图view右边间距相等(WG_VIEW * view)
@property (nonatomic ,copy , readonly)TrailingSpaceEqualView wg_TrailingSpaceEqualView;
/// 与视图view右边间距相等并偏移offset(WG_VIEW * view, CGFloat offset)
@property (nonatomic ,copy , readonly)TrailingSpaceEqualViewOffset wg_TrailingSpaceEqualViewOffset;

#if (__IPHONE_OS_VERSION_MIN_REQUIRED >= 80000) || (__TV_OS_VERSION_MIN_REQUIRED >= 9000) || (__MAC_OS_X_VERSION_MIN_REQUIRED >= 101100)
/// 与父视图底边间距Y(CGFloat value)
@property (nonatomic ,copy , readonly)BaseLineSpace wg_FirstBaseLine;
/// 与相对视图toView底边间距Y(CGFloat value,WG_VIEW * toView)
@property (nonatomic ,copy , readonly)BaseLineSpaceToView wg_FirstBaseLineToView;
/// 与视图view底边间距Y相等(WG_VIEW * view)
@property (nonatomic ,copy , readonly)BaseLineSpaceEqualView wg_FirstBaseLineEqualView;
/// 与视图view底边间距Y相等并偏移offset(WG_VIEW * view, CGFloat offset)
@property (nonatomic ,copy , readonly)BaseLineSpaceEqualViewOffset wg_FirstBaseLineEqualViewOffset;
#endif

/// 与父视图底边间距Y(CGFloat value)
@property (nonatomic ,copy , readonly)BaseLineSpace wg_LastBaseLine;
/// 与相对视图toView底边间距Y(CGFloat value,WG_VIEW * toView)
@property (nonatomic ,copy , readonly)BaseLineSpaceToView wg_LastBaseLineToView;
/// 与视图view底边间距Y相等(WG_VIEW * view)
@property (nonatomic ,copy , readonly)BaseLineSpaceEqualView wg_LastBaseLineEqualView;
/// 与视图view底边间距Y相等并偏移offset(WG_VIEW * view, CGFloat offset)
@property (nonatomic ,copy , readonly)BaseLineSpaceEqualViewOffset wg_LastBaseLineEqualViewOffset;
/// 与父视图右边间距(CGFloat value)
@property (nonatomic ,copy , readonly)RightSpace wg_RightSpace;
/// 与相对视图toView右边间距(CGFloat value,WG_VIEW * toView)
@property (nonatomic ,copy , readonly)RightSpaceToView wg_RightSpaceToView;
/// 与相对视图toView右边间距相等(WG_VIEW toView)
@property (nonatomic ,copy , readonly)RightSpaceEqualView wg_RightSpaceEqualView;
/// 与相对视图toView右边间距相等并偏移offset(WG_VIEW toView, CGFloat offset)
@property (nonatomic ,copy , readonly)RightSpaceEqualViewOffset wg_RightSpaceEqualViewOffset;

/// 与父视图顶边间距(CGFloat value)
@property (nonatomic ,copy , readonly)TopSpace wg_TopSpace;
/// 与相对视图toView顶边间距(CGFloat value,WG_VIEW * toView)
@property (nonatomic ,copy , readonly)TopSpaceToView wg_TopSpaceToView;
/// 与视图view顶边间距相等(WG_VIEW * view)
@property (nonatomic ,copy , readonly)TopSpaceEqualView wg_TopSpaceEqualView;
/// 与视图view顶边间距相等并偏移offset(WG_VIEW * view, CGFloat offset)
@property (nonatomic ,copy , readonly)TopSpaceEqualViewOffset wg_TopSpaceEqualViewOffset;

/// 与父视图底边间距(CGFloat value)
@property (nonatomic ,copy , readonly)BottomSpace wg_BottomSpace;
/// 与相对视图toView底边间距(CGFloat value,WG_VIEW * toView)
@property (nonatomic ,copy , readonly)BottomSpaceToView wg_BottomSpaceToView;
/// 与相对视图toView底边间距相等(WG_VIEW * toView)
@property (nonatomic ,copy , readonly)BottomSpaceEqualView wg_BottomSpaceEqualView;
/// 与相对视图toView底边间距相等并偏移offset(WG_VIEW * toView, CGFloat offset)
@property (nonatomic ,copy , readonly)BottomSpaceEqualViewOffset wg_BottomSpaceEqualViewOffset;

/// 宽度(CGFloat value)
@property (nonatomic ,copy , readonly)Width wg_Width;
/// 宽度自动()
@property (nonatomic ,copy , readonly)WidthAuto wg_WidthAuto;
/// 宽度等于视图view(WG_VIEW * view)
@property (nonatomic ,copy , readonly)WidthEqualView wg_WidthEqualView;
/// 宽度等于视图view 参照比例Ratio(WG_VIEW * view ,CGFloat ratio)
@property (nonatomic ,copy , readonly)WidthEqualViewRatio wg_WidthEqualViewRatio;
/// 视图自身宽度与高度的比(CGFloat Ratio)
@property (nonatomic ,copy , readonly)WidthHeightRatio wg_WidthHeightRatio;

/// 高度(CGFloat value)
@property (nonatomic ,copy , readonly)Height wg_Height;
/// 高度自动()
@property (nonatomic ,copy , readonly)HeightAuto wg_HeightAuto;
/// 高度等于视图view(WG_VIEW * view)
@property (nonatomic ,copy , readonly)HeightEqualView wg_HeightEqualView;
/// 高度等于视图view 参照比例Ratio(WG_VIEW * view ,CGFloat ratio)
@property (nonatomic ,copy , readonly)HeightEqualViewRatio wg_HeightEqualViewRatio;
/// 视图自身高度与宽度的比(CGFloat Ratio)
@property (nonatomic ,copy , readonly)HeightWidthRatio wg_HeightWidthRatio;

/// 中心X与父视图偏移(CGFloat value)
@property (nonatomic ,copy , readonly)CenterX wg_CenterX;
/// 中心X与视图view偏移(CGFloat value , WG_VIEW * toView)
@property (nonatomic ,copy , readonly)CenterXToView wg_CenterXToView;

/// 中心Y与父视图偏移(CGFloat value)
@property (nonatomic ,copy , readonly)CenterY wg_CenterY;
/// 中心Y与视图view偏移(CGFloat value , WG_VIEW * toView)
@property (nonatomic ,copy , readonly)CenterYToView wg_CenterYToView;

/// 中心与父视图偏移(CGFloat value)
@property (nonatomic ,copy , readonly)Center wg_Center;
/// 中心与视图view偏移(CGFloat value , WG_VIEW * toView)
@property (nonatomic ,copy , readonly)CenterToView wg_CenterToView;

/// size设置(CGFloat width, CGFloat height)
@property (nonatomic ,copy , readonly)size wg_Size;
/// size设置(WG_VIEW * view)
@property (nonatomic ,copy , readonly)SizeEqual wg_SizeEqualView;

/// frame设置(WG_VIEW * view)
@property (nonatomic ,copy , readonly)FrameEqual wg_FrameEqualView;
#pragma mark - api version ~ 1.0 -


/**
 是否进行安全布局

 @param safe 是否安全
 @return 返回当前视图
 */
- (WG_CLASS_VIEW *)wg_IsSafe:(BOOL)safe;


/**
 重置缓存的约束,该方法在当前视图对象移除从父视图上可能需要调用清除与父视图之前旧约束缓存对象
 
 @return 返回当前视图
 */
- (WG_CLASS_VIEW *)wg_ResetConstraints;

/**
 清除所有布局属性
 
 @return 返回当前视图
 */
- (WG_CLASS_VIEW *)wg_ClearLayoutAttrs;

/**
 移除一个或者一组约束
 
 @param attributes 约束类型（可变参数）
 @return 返回当前视图
 */
- (WG_CLASS_VIEW *)wg_RemoveLayoutAttr:(NSLayoutAttribute)attributes, ...;


/**
 移除一个单个属性

 @param attribute 约束类型
 @return 返回当前视图
 */
- (WG_CLASS_VIEW *)wg_RemoveLayoutOneAttr:(NSLayoutAttribute)attribute;

/**
 移除一个或者一组约束从指定的视图上

 @param view 指定视图
 @param attributes 约束类型（可变参数）
 @return 返回当前视图
 */
- (WG_CLASS_VIEW *)wg_RemoveFrom:(WG_CLASS_VIEW *)view layoutAttrs:(NSLayoutAttribute)attributes, ...;


/**
 移除一个约束从指定的视图上

 @param view 指定视图
 @param attribute 约束类型
 @return 返回当前视图
 */
- (WG_CLASS_VIEW *)wg_RemoveFrom:(WG_CLASS_VIEW *)view layoutAttr:(NSLayoutAttribute)attribute;


/**
 移除一个约束从关联的视图

 @param view 关联的视图
 @param attribute 移除的约束
 @return 当前视图
 */
- (WG_CLASS_VIEW *)wg_RemoveTo:(WG_VIEW *)view attr:(NSLayoutAttribute)attribute;

/**
 移除多个约束从关联的视图
 
 @param view 关联的视图
 @param attributes 移除的约束
 @return 当前视图
 */

- (WG_CLASS_VIEW *)wg_RemoveTo:(WG_VIEW *)view layoutAttrs:(NSLayoutAttribute)attributes, ... ;

/**
 设置当前约束的低优先级

 @return 返回当前视图
 */
- (WG_CLASS_VIEW *)wg_priorityLow;

/**
 设置当前约束的高优先级

 @return 返回当前视图
 */
- (WG_CLASS_VIEW *)wg_priorityHigh;

/**
 设置当前约束的默认优先级

 @return 返回当前视图
 */
- (WG_CLASS_VIEW *)wg_priorityRequired;

/**
 设置当前约束的合适优先级

 @return 返回当前视图
 */
- (WG_CLASS_VIEW *)wg_priorityFitting;

/**
 设置当前约束的优先级

 @param value 优先级大小(0-1000)
 @return 返回当前视图
 */
- (WG_CLASS_VIEW *)wg_priority:(CGFloat)value;

/**
 设置左边距(默认相对父视图)

 @param leftSpace 左边距
 @return 返回当前视图
 */
- (WG_CLASS_VIEW *)wg_LeftSpace:(CGFloat)leftSpace;


/**
 设置左边距

 @param leftSpace 左边距
 @param toView 相对视图
 @return 返回当前视图
 */
- (WG_CLASS_VIEW *)wg_LeftSpace:(CGFloat)leftSpace toView:(WG_VIEW *)toView;

/**
 设置左边距与视图view左边距相等

 @param view 相对视图
 @return 返回当前视图
 */
- (WG_CLASS_VIEW *)wg_LeftSpaceEqualView:(WG_VIEW *)view;

/**
 设置左边距与视图view左边距相等并偏移offset

 @param view 相对视图
 @param offset 偏移量
 @return 返回当前视图
 */
- (WG_CLASS_VIEW *)wg_LeftSpaceEqualView:(WG_VIEW *)view offset:(CGFloat)offset;

/**
 设置右边距(默认相对父视图)

 @param rightSpace 右边距
 @return 返回当前视图
 */
- (WG_CLASS_VIEW *)wg_RightSpace:(CGFloat)rightSpace;

/**
 设置右边距

 @param rightSpace 右边距
 @param toView 相对视图
 @return 返回当前视图
 */
- (WG_CLASS_VIEW *)wg_RightSpace:(CGFloat)rightSpace toView:(WG_VIEW *)toView;

/**
 设置右边距与视图view左对齐边距相等

 @param view 相对视图
 @return 返回当前视图
 */
- (WG_CLASS_VIEW *)wg_RightSpaceEqualView:(WG_VIEW *)view;

/**
 设置右边距与视图view左对齐边距相等并偏移offset

 @param view 相对视图
 @param offset 偏移量
 @return 返回当前视图
 */
- (WG_CLASS_VIEW *)wg_RightSpaceEqualView:(WG_VIEW *)view offset:(CGFloat)offset;

/**
 设置左对齐(默认相对父视图)

 @param leadingSpace 左边距
 @return 返回当前视图
 */
- (WG_CLASS_VIEW *)wg_LeadingSpace:(CGFloat)leadingSpace;

/**
 设置左对齐
 
 @param leadingSpace 左边距
 @param toView 相对视图
 @return 返回当前视图
 */

- (WG_CLASS_VIEW *)wg_LeadingSpace:(CGFloat)leadingSpace toView:(WG_VIEW *)toView;

/**
 设置左对齐边距与某视图左对齐边距相等

 @param view 相对视图
 @return 返回当前视图
 */
- (WG_CLASS_VIEW *)wg_LeadingSpaceEqualView:(WG_VIEW *)view;

/**
 设置左对齐边距与某视图左对齐边距相等并偏移offset

 @param view 相对视图
 @param offset 偏移量
 @return 返回当前视图
 */
- (WG_CLASS_VIEW *)wg_LeadingSpaceEqualView:(WG_VIEW *)view offset:(CGFloat)offset;

/**
 设置右对齐(默认相对父视图)

 @param trailingSpace 右边距
 @return 返回当前视图
 */
- (WG_CLASS_VIEW *)wg_TrailingSpace:(CGFloat)trailingSpace;

/**
 设置右对齐

 @param trailingSpace 右边距
 @param toView 相对视图
 @return 返回当前视图
 */
- (WG_CLASS_VIEW *)wg_TrailingSpace:(CGFloat)trailingSpace toView:(WG_VIEW *)toView;

/**
 设置右对齐边距与某视图右对齐边距相等

 @param view 相对视图
 @return 返回当前视图
 */
- (WG_CLASS_VIEW *)wg_TrailingSpaceEqualView:(WG_VIEW *)view;

/**
 设置右对齐边距与某视图右对齐边距相等并偏移offset

 @param view 相对视图
 @param offset 偏移量
 @return 返回当前视图
 */
- (WG_CLASS_VIEW *)wg_TrailingSpaceEqualView:(WG_VIEW *)view offset:(CGFloat)offset;

/**
 设置顶边距(默认相对父视图)

 @param topSpace 顶边距
 @return 返回当前视图
 */
- (WG_CLASS_VIEW *)wg_TopSpace:(CGFloat)topSpace;

/**
 设置顶边距

 @param topSpace 顶边距
 @param toView 相对视图
 @return 返回当前视图
 */
- (WG_CLASS_VIEW *)wg_TopSpace:(CGFloat)topSpace toView:(WG_VIEW *)toView;

/**
 设置顶边距与视图view顶边距相等

 @param view 相对视图
 @return 返回当前视图
 */
- (WG_CLASS_VIEW *)wg_TopSpaceEqualView:(WG_VIEW *)view;

/**
 设置顶边距与视图view顶边距相等并偏移offset

 @param view 相对视图
 @param offset 偏移量
 @return 返回当前视图
 */
- (WG_CLASS_VIEW *)wg_TopSpaceEqualView:(WG_VIEW *)view offset:(CGFloat)offset;

/**
 设置底边距(默认相对父视图)

 @param bottomSpace 底边距
 @return 返回当前视图
 */
- (WG_CLASS_VIEW *)wg_BottomSpace:(CGFloat)bottomSpace;

/**
 设置底边距

 @param bottomSpace 底边距
 @param toView 相对视图
 @return 返回当前视图
 */
- (WG_CLASS_VIEW *)wg_BottomSpace:(CGFloat)bottomSpace toView:(WG_VIEW *)toView;

/**
 设置底边距与视图view底边距相等

 @param view 相对视图
 @return 返回当前视图
 */
- (WG_CLASS_VIEW *)wg_BottomSpaceEqualView:(WG_VIEW *)view;

/**
 设置底边距与视图view底边距相等并偏移offset

 @param view 相对视图
 @param offset 偏移量
 @return 返回当前视图
 */
- (WG_CLASS_VIEW *)wg_BottomSpaceEqualView:(WG_VIEW *)view offset:(CGFloat)offset;

/**
 设置宽度

 @param width 宽度
 @return 返回当前视图
 */
- (WG_CLASS_VIEW *)wg_Width:(CGFloat)width;

/**
 设置宽度与某个视图相等

 @param view 相对视图
 @return 返回当前视图
 */
- (WG_CLASS_VIEW *)wg_WidthEqualView:(WG_VIEW *)view;

/**
 设置宽度与视图view相等

 @param view 相对视图
 @param ratio 比例
 @return 返回当前视图
 */
- (WG_CLASS_VIEW *)wg_WidthEqualView:(WG_VIEW *)view ratio:(CGFloat)ratio;

/**
 设置自动宽度

 @return 返回当前视图
 */
- (WG_CLASS_VIEW *)wg_AutoWidth;

/**
 设置视图自身宽度与高度的比

 @param ratio 比例
 @return 返回当前视图
 */
- (WG_CLASS_VIEW *)wg_WidthHeightRatio:(CGFloat)ratio;

/**
 设置高度

 @param height 高度
 @return 返回当前视图
 */
- (WG_CLASS_VIEW *)wg_Height:(CGFloat)height;

/**
 设置高度与视图view相等

 @param view 相对视图
 @return 返回当前视图
 */
- (WG_CLASS_VIEW *)wg_HeightEqualView:(WG_VIEW *)view;

/**
 设置高度与视图view相等

 @param view 相对视图
 @param ratio 比例
 @return 返回当前视图
 */
- (WG_CLASS_VIEW *)wg_HeightEqualView:(WG_VIEW *)view ratio:(CGFloat)ratio;

/**
 设置自动高度

 @return 返回当前视图
 */
- (WG_CLASS_VIEW *)wg_AutoHeight;

/**
 设置视图自身高度与宽度的比

 @param ratio 比例
 @return 返回当前视图
 */
- (WG_CLASS_VIEW *)wg_HeightWidthRatio:(CGFloat)ratio;

/**
 设置中心x与父视图中心的偏移 centerX = 0 与父视图中心x重合

 @param centerX 中心x坐标偏移
 @return 返回当前视图
 */
- (WG_CLASS_VIEW *)wg_CenterX:(CGFloat)centerX;

/**
 设置中心x与相对视图中心的偏移 centerX = 0 与相对视图中心x重合

 @param centerX 中心x坐标偏移
 @param toView 相对视图
 @return 返回当前视图
 */
- (WG_CLASS_VIEW *)wg_CenterX:(CGFloat)centerX toView:(WG_VIEW *)toView;

/**
 设置中心y与父视图中心的偏移 centerY = 0 与父视图中心y重合

 @param centerY 中心y坐标偏移
 @return 返回当前视图
 */
- (WG_CLASS_VIEW *)wg_CenterY:(CGFloat)centerY;

/**
 设置中心y与相对视图中心的偏移 centerY = 0 与相对视图中心y重合

 @param centerY 中心y坐标偏移
 @param toView 相对视图
 @return 返回当前视图
 */
- (WG_CLASS_VIEW *)wg_CenterY:(CGFloat)centerY toView:(WG_VIEW *)toView;

#if (__IPHONE_OS_VERSION_MIN_REQUIRED >= 80000) || (__TV_OS_VERSION_MIN_REQUIRED >= 9000) || (__MAC_OS_X_VERSION_MIN_REQUIRED >= 101100)
/**
 设置顶部基线偏移(默认相对父视图)

 @param space 间隙
 @return 返回当前视图
 */
- (WG_CLASS_VIEW *)wg_FirstBaseLine:(CGFloat)space;

/**
 设置顶部基线与对象视图底部基线偏移

 @param space 间隙
 @param toView 相对视图
 @return 返回当前视图
 */
- (WG_CLASS_VIEW *)wg_FirstBaseLine:(CGFloat)space toView:(WG_VIEW *)toView;

/**
 设置顶部基线与相对视图顶部基线相等

 @param view 相对视图
 @return 返回当前视图
 */
- (WG_CLASS_VIEW *)wg_FirstBaseLineEqualView:(WG_VIEW *)view;

/**
 设置顶部基线与相对视图顶部基线相等并偏移offset

 @param view 相对视图
 @param offset 偏移量
 @return 返回当前视图
 */
- (WG_CLASS_VIEW *)wg_FirstBaseLineEqualView:(WG_VIEW *)view offset:(CGFloat)offset;

#endif

/**
 设置底部基线偏移(默认相对父视图)

 @param space 间隙
 @return 返回当前视图
 */
- (WG_CLASS_VIEW *)wg_LastBaseLine:(CGFloat)space;

/**
 设置底部基线与对象视图顶部基线偏移

 @param space 间隙
 @param toView 相对视图
 @return 返回当前视图
 */
- (WG_CLASS_VIEW *)wg_LastBaseLine:(CGFloat)space toView:(WG_VIEW *)toView;

/**
 设置底部基线与相对视图底部基线相等

 @param view 相对视图
 @return 返回当前视图
 */
- (WG_CLASS_VIEW *)wg_LastBaseLineEqualView:(WG_VIEW *)view;

/**
 设置底部基线与相对视图底部基线相等并偏移offset

 @param view 相对视图
 @param offset 偏移量
 @return 返回当前视图
 */
- (WG_CLASS_VIEW *)wg_LastBaseLineEqualView:(WG_VIEW *)view offset:(CGFloat)offset;


/**
 设置中心偏移(默认相对父视图)center = CGPointZero 与父视图中心重合

 @param center 中心偏移xy
 @return 返回当前视图
 */
- (WG_CLASS_VIEW *)wg_Center:(CGPoint)center;

/**
 设置中心偏移(默认相对父视图)center = CGPointZero 与父视图中心重合

 @param center 中心偏移xy
 @param toView 相对视图
 @return 返回当前视图
 */
- (WG_CLASS_VIEW *)wg_Center:(CGPoint)center toView:(WG_VIEW *)toView;


/**
 设置frame(默认相对父视图)

 @param left 左边距
 @param top 顶边距
 @param width 宽度
 @param height 高度
 @return 返回当前视图
 */
- (WG_CLASS_VIEW *)wg_Frame:(CGFloat)left top:(CGFloat)top width:(CGFloat)width height:(CGFloat)height;

/**
 设置frame (默认相对父视图)
 
 @param left 左边距
 @param top 顶边距
 @param right 右边距
 @param bottom 底边距
 @return 返回当前视图
 */

- (WG_CLASS_VIEW *)wg_AutoSize:(CGFloat)left top:(CGFloat)top right:(CGFloat)right bottom:(CGFloat)bottom;

/**
 设置frame
 
 @param left 左边距
 @param top 顶边距
 @param width 宽度
 @param height 高度
 @param toView 相对视图
 @return 返回当前视图
 */

- (WG_CLASS_VIEW *)wg_Frame:(CGFloat)left top:(CGFloat)top width:(CGFloat)width height:(CGFloat)height toView:(WG_VIEW *)toView;

/**
 设置frame (默认相对父视图)
 
 @param left 左边距
 @param top 顶边距
 @param right 右边距
 @param height 高度
 @return 返回当前视图
 */

- (WG_CLASS_VIEW *)wg_AutoWidth:(CGFloat)left top:(CGFloat)top right:(CGFloat)right height:(CGFloat)height;

/**
 设置frame (默认相对父视图)
 
 @param left 左边距
 @param top 顶边距
 @param width 宽度
 @param bottom 底边距
 @return 返回当前视图
 */

- (WG_CLASS_VIEW *)wg_AutoHeight:(CGFloat)left top:(CGFloat)top width:(CGFloat)width bottom:(CGFloat)bottom;

/**
 设置frame
 
 @param left 左边距
 @param top 顶边距
 @param right 右边距
 @param bottom 底边距
 @param toView 相对视图
 @return 返回当前视图
 */

- (WG_CLASS_VIEW *)wg_AutoSize:(CGFloat)left top:(CGFloat)top right:(CGFloat)right bottom:(CGFloat)bottom toView:(WG_VIEW *)toView;

/**
 设置frame
 
 @param left 左边距
 @param top 顶边距
 @param right 右边距
 @param height 高度
 @param toView 相对视图
 @return 返回当前视图
 */

- (WG_CLASS_VIEW *)wg_AutoWidth:(CGFloat)left top:(CGFloat)top right:(CGFloat)right height:(CGFloat)height toView:(WG_VIEW *)toView;

/**
 设置frame (默认相对父视图)
 
 @param left 左边距
 @param top 顶边距
 @param width 宽度
 @param bottom 底边距
 @return 返回当前视图
 */

- (WG_CLASS_VIEW *)wg_AutoHeight:(CGFloat)left top:(CGFloat)top width:(CGFloat)width bottom:(CGFloat)bottom toView:(WG_VIEW *)toView;

/**
 设置视图显示宽高
 
 @param size 视图宽高
 @return 返回当前视图
 */

- (WG_CLASS_VIEW *)wg_Size:(CGSize)size;

/**
 设置视图size等于view
 
 @param view 相对视图
 @return 返回当前视图
 */
- (WG_CLASS_VIEW *)wg_SizeEqualView:(WG_VIEW *)view;

/**
 设置视图frame等于view
 @param view 相对视图
 @return 返回当前视图
 */
- (WG_CLASS_VIEW *)wg_FrameEqualView:(WG_VIEW *)view;

#if TARGET_OS_IPHONE || TARGET_OS_TV

#pragma mark - 自动加边线模块 -

/**
 对视图底部加线
 
 @param value 线宽
 @param color 线的颜色
 @return 返回线视图
 */

- (WG_CLASS_VIEW *)wg_AddBottomLine:(CGFloat)value lineColor:(UIColor *)color;

/**
 对视图底部加线
 
 @param value 线宽
 @param color 线的颜色
 @param pading 内边距
 @return 返回线视图
 */

- (WG_CLASS_VIEW *)wg_AddBottomLine:(CGFloat)value lineColor:(UIColor *)color pading:(CGFloat)pading;

/**
 对视图顶部加线
 
 @param value 线宽
 @param color 线的颜色
 @return 返回线视图
 */

- (WG_CLASS_VIEW *)wg_AddTopLine:(CGFloat)value lineColor:(UIColor *)color;

/**
 对视图顶部加线
 
 @param value 线宽
 @param color 线的颜色
 @param pading 内边距
 @return 返回线视图
 */

- (WG_CLASS_VIEW *)wg_AddTopLine:(CGFloat)value lineColor:(UIColor *)color pading:(CGFloat)pading;

/**
 对视图左边加线
 
 @param value 线宽
 @param color 线的颜色
 @return 返回线视图
 */


- (WG_CLASS_VIEW *)wg_AddLeftLine:(CGFloat)value lineColor:(UIColor *)color;

/**
 对视图左边加线

 @param value   线宽
 @param color   线的颜色
 @param padding 边距
 @return 返回线视图
 */
- (WG_CLASS_VIEW *)wg_AddLeftLine:(CGFloat)value lineColor:(UIColor *)color padding:(CGFloat)padding;

/**
 对视图右边加线
 
 @param value 线宽
 @param color 线的颜色
 @return 返回线视图
 */

- (WG_CLASS_VIEW *)wg_AddRightLine:(CGFloat)value lineColor:(UIColor *)color;

/**
 对视图右边加线
 
 @param value 线宽
 @param color 线的颜色
 @param padding 边距
 @return 返回线视图
 */

- (WG_CLASS_VIEW *)wg_AddRightLine:(CGFloat)value lineColor:(UIColor *)color padding:(CGFloat)padding;
#endif
@end
