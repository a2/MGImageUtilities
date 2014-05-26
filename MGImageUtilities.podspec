Pod::Spec.new do |s|
  s.name         = "MGImageUtilities"
  s.version      = "2.0.0"
  s.summary      = "Useful UIImage categories for iPhone/iPad developers."
  s.homepage     = "http://mattgemmell.com/2010/07/05/mgimageutilities/"
  s.license      = { :type => 'BSD', :file => 'Source Code License.rtf' }
  s.authors      = { "Matt Gemmell" => "matt@mattgemmell.com",
                     "Alexsander Akers" => "a2@pnd.mn" }
  s.source       = { :git => "https://github.com/a2/MGImageUtilities.git", :tag => "2.0.0" }
  s.platform     = :ios, '4.0'
  s.source_files = 'Classes/UIImage*.{h,m}'
  s.requires_arc = true
end
