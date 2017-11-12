n, x, y = gets.chomp.split(" ").map(&:to_i)
a = gets.chomp.split(" ").map(&:to_i)
yy = (a[-1]-y).abs
if n == 1
	puts yy
	exit
end
nn = (a[-2]-a[-1]).abs
puts [yy,nn].max