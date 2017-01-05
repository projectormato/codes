from bottle import route, run, template, get, post, request, redirect
a = 1
# routeデコレーター
# これを使用してURLのPathと関数をマッピングする。
@route('/hello')
def hello():
  return "Hello World!" + str(a)
 
# http://localhost:8080/hello/name
@route('/hello/<name>')
def hello(name):
  return template('Hello {{name}}', name=name)

# @route('/resource', method='POST')と同じ意味
@get('/resource')
def post_resource():
  # 何か処理をする
  global a
  a += 1
  redirect("/hello")

# ビルトインの開発用サーバーの起動
# ここでは、debugとreloaderを有効にしている
run(host='localhost', port=8080, debug=True, reloader=True)