n = gets.chomp.split("").map(&:to_i)
if n.include?(9)
	puts "Yes"
else
	puts "No"
end

