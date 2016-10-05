a = gets.to_i
b = gets.to_i
if a >= 0
	if b >= 0
		puts [a , b].max*2
	else
		puts (a.abs + b.abs)*2
	end
else
	if b >= 0
		puts (a.abs + b.abs)*2
	else
		puts ([a , b].min*2).abs
	end
end