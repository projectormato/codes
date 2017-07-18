a,b = gets.chomp.split(" ").map(&:to_i)

if a%3 == 0 or b%3 == 0 or (a+b)%3 == 0
	puts 'Possible'
else
	puts 'Impossible' 
end