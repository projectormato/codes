n, m = gets.chomp.split(" ").map(&:to_i)
lands,one = [], []

for i in 0..m-1
	kouho = gets.chomp.split(" ").map(&:to_i)
	if kouho[0] == 1
		one.push(kouho[1])
	elsif kouho[1] == n
		lands.push(kouho[0])		
	end
end

puts one & lands != [] ? 'POSSIBLE' : 'IMPOSSIBLE'

