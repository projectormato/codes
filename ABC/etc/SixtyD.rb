class SixtyD
	n, w = gets.chomp.split(" ").map { |n| n.to_i }
	input = []
	result = 0
	for i in 0..n-1
		input.push(gets.chomp.split(" ").map { |input| input.to_i })
	end

	p input
# input[i][0] 重さ w[i]
# input[i][1] 価値 v[i]
# j = w
public
def rec(i, j)
	if i == n
		p result = 0
	elsif input[i][0] > j
		p result = rec(i + 1, j)
	else
		p result = [rec(i +1, j), rec(i + 1, j-input[i][0]) + input[i][1] ].max
	end
end

rec(0, w)
end