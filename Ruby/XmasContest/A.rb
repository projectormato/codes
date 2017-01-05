n = gets.to_i
ans = []

(0..17).reverse_each do |i|
	bekijou = 2**i
	result = n/bekijou
	amari = n%2**i
	if result >= 1
		if i == 1
			bekijou = 1
		end
		print "? ", 0, " ", bekijou, "\n"
		STDOUT.flush
		dist = gets.to_i
		ans.push(dist)		
		print "? ", amari, " ", n, "\n"
		STDOUT.flush
		dist = gets.to_i
		ans.push(dist)
		if amari == 0
			break
		end
		n = amari
	end
end
p ans
re1 = ans[0]
if ans[1]
	re2 = ans[1]
	ans.delete_at(0)
	ans.delete_at(0)
end
if ans[0]
	re3 = ans.inject {|sum, n| sum + n }	
end
p ans
p re1
p re2
p re3
if re1&&re2&&re3
	print '!', " ", re2 + re1 -(re1 - re3), "\n"
else
	print '!', " ", re1, "\n"

end
