n = gets.to_i
ans = []

(0..17).reverse_each do |i|
	bekijou = 2**i
	result = n/bekijou
	amari = n%2**i
	if result >= 1
		print "? ", amari, " ", n, "\n"
		STDOUT.flush
		ans.push(gets.to_i)
		if amari == 0
			break
		end
		n = amari
	end
end
print '!', " ", ans.inject {|sum, n| sum + n }, "\n"
