n = gets.to_i
r = []
r[0] = 2; r[1] = 1
for i in 2..n
	r[i] = r[i-1] + r[i-2]
end

p r[-1]
