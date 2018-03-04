n = gets.chomp.split(" ").map { |n| n.to_i }
if n[1]/n[0].to_f < n[3]/n[2].to_f
	puts 'AOKI'
elsif n[1]/n[0].to_f > n[3]/n[2].to_f
	puts 'TAKAHASHI'
else
	puts 'DRAW'
end