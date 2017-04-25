str = gets.chomp.reverse
n = str.size/5
for i in 0..n
	target = str[0..6]
	if target.include?("resare")
		str.slice!("resare")
	elsif target == "remaerd"
		str.slice!("remaerd")
	elsif target.include?("esare")
		str.slice!("esare")
	elsif target.include?("maerd")
		str.slice!("maerd")
	end
end
if str == ""
	puts "YES"
else
	puts "NO"
end

