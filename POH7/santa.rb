data = gets.chomp.split(" ").map { |data| data.to_i }
x = []
y = []
x.push(data[0])
y.push(data[1])
z = data[2]
n = data[3]
for k in 0..n -1
	cut = gets.chomp.split(" ").map { |cut| cut.to_i }
	if cut[0] == 0
		x.push(cut[1])
	else
		y.push(cut[1])
	end
end
x.sort!
y.sort!
resultx = x[0]
resulty = y[0]
for i in 0..x.length
	if x[i+1] - x[i] <= resultx
		resultx = x[i+1] -x[i]
	end
end
for j in 0..y.length
	if y[j+1] -y[j] <= resulty
		resulty = y[j+1] -y[j]
	end
end

puts resultx * resulty * z
