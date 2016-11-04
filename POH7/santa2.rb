x, y, z, n = gets.to_s.split(' ').map(&:to_i)

arr = []
n.times { arr << gets.to_s.split(' ') }

xs = [0]
ys = [0]

arr.length.times do |i|
  if arr[i][0] == '0'
    xs << arr[i][1].to_i
  else
    ys << arr[i][1].to_i
  end
end

xs << x
ys << y

xs = xs.sort
ys = ys.sort

dx = xs.last
xs.length.times do |i|
  break if i == xs.length - 1
  dx = xs[i + 1] - xs[i] if i == 0 || dx > xs[i + 1] - xs[i]
end

dy = ys.last
ys.length.times do |i|
  break if i == ys.length - 1
  dy = ys[i + 1] - ys[i] if i == 0 || dy > ys[i + 1] - ys[i]
end

print dx * dy * z