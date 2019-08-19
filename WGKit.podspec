Pod::Spec.new do |spec|
  spec.name         = "WGKit"
  spec.version      = "0.0.5"
  spec.summary      = "WGKIt"
  spec.description  = <<-DESC
                       轻量级的UIKit的库
                   DESC

  spec.homepage     = "https://github.com/616115891/WGKit"
  spec.license      = "LICENSE"

  spec.author       = { "YeKeyon" => "616115891@qq.com" }
  spec.platform     = :ios, "8.0"

  spec.source       = { :git => "https://github.com/616115891/WGKit.git", :tag => "#{spec.version}" }

  spec.source_files  = "WGKit/Sources/*.{h,m}"
end
