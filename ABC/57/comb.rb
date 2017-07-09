result = 0
for i in 1..50
	result += (50-i+1..50).inject(:*) / (1..i).inject(:*)
end
p result