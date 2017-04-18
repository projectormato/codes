* デフォルト以外のGemの削除		
gem uninstall -axI		

* bundlerのグローバルインストール 	
gem install bundler 		

* bundler での管理の開始		
bundle init

* gemをグローバルインストールしないで使う		
bundle install --path=vendor/bundle --binstubs=bundle_bin

