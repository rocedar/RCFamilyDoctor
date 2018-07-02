Pod::Spec.new do |s|
  s.name             = 'RCFamilyDoctor'
  s.version          = '0.1.0'
  s.summary          = '瑰柏科技家庭医生组件'
  s.homepage         = 'https://github.com/rocedar/RCFamilyDoctor'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'wutengwei' => 'wutengwei@rocedar.com' }
  s.source           = { :git => 'https://github.com/rocedar/RCFamilyDoctor.git', :tag => s.version.to_s }
  
  s.ios.deployment_target = '8.0'
  s.resource = 'RCFamilyDoctor/Classes/RCFamilyDoctor.bundle'
  s.ios.vendored_frameworks = 'RCFamilyDoctor/Classes/RCFamilyDoctor.framework'
  
  s.dependency 'RCBaseComponent'
  s.dependency 'EasyUI','~> 0.3.4'
  
  s.dependency 'UPYUN', '~> 1.0.0'
  s.dependency 'IQKeyboardManager', '~> 4.0.7'
  s.dependency 'YZAppSDK'
  s.dependency 'Masonry', '~> 1.0.1'
  s.dependency 'SDWebImage','4.0.0'
  s.dependency 'MJRefresh', '3.1.0'
  s.dependency 'CYLTableViewPlaceHolder'
end
