n = gets.to_i
result = 0
(0..9).reverse_each do |i|
	kekka = n/10**i
	if kekka >= 1
		result += (i*10**(i-1))*kekka
		if kekka > 1
			result += 10**i
		else
			result += n%10**i+1
		end
	end
	n = n%10**i
end
puts result.to_i