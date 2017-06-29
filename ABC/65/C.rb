dog, monkey = gets.chomp.split(" ").map(&:to_i)
sa = (dog - monkey).abs
a = 10 **9 + 7
dogs = (1..dog).inject{ |s,i| s * i % a}
monkeys  = (1..monkey).inject{ |s,i| s * i % a}

if  sa >= 2
	puts 0
elsif sa == 1
	puts dogs * monkeys % a
else
	puts (dogs * monkeys) * 2 % a
end