h, w = gets.chomp.split("").map(&:to_i)
cost = [[]]
tocost = []
for i in 0..9
	cost[i] = gets.chomp.split(" ").map(&:to_i)
end

for i in 0..9
	tocost[i] = cost[i][1]
end

for k in 0..9
	for i in 0..9
		if cost[k][i] != 0 && cost[i][1] != 0
			mint = [tocost[k], cost[k][i] + cost[i][1]].min
			tocost[k] = mint > 0 ? mint: tocost[k]		
		end
		# p tocost[i], cost[i][k] + cost[k][1]
	end
end

p tocost

