# WGKit
轻量级UIKit函数式编程库

# 用法
UILabel *label = UILabel.wg_init().wg_font([UIFont systemFontOfSize:14]).wg_textColor([UIColor blackColor]).wg_text(@"1234").wg_text(@"2312312");
label.wg_backgroundColor([UIColor blueColor]).wg_joinView(self.view).wg_CenterToView(CGPointMake(0, 0),self.view);
