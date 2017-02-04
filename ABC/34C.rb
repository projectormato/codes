class Integer
	def combination(k)
    	self.factorial/(k.factorial*(self-k).factorial)
  	end
	def permutation(k)
   		 self.factorial/(self-k).factorial
	end

	def factorial
    	return 1 if self == 0
    	(1..self).inject(:*)
  	end	
end

n = gets.chomp.split(" ").map { |n| n.to_i-1 }
nn = n[0]+n[1]
puts (nn.permutation(n.min) / n.min.factorial)%1000000007