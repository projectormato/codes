n = gets.to_i
input = []
pattern = []
indexi = 0
indexp = 0
for i in 1..n
	input.push(gets.chomp.split(" ").map { |input| input.to_i })
end
p = gets.to_i
for j in 1..p
	pattern.push(gets.chomp.split(" ").map { |input| input.to_i })
end
for k in 0..p-1
	if pattern[k][indexp] == input[k][indexi]
		
	end
end