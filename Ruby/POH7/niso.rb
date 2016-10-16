one = gets.to_i
max = gets.to_i
r = ''
w = ''
result = ''
for i in 0..one-1
	r = r + 'R'
	w = w + 'W'
end
for j in 0..max/one/2
	result += r + w
end
puts result[0..max-1]