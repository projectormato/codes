a, b, c = gets.chomp.split(" ").map(&:to_i)
d = b + c

if a % d < c
	puts (a/d)-1
else
	puts a/d
end
