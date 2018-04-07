a = gets.chomp.split(" ").map(&:to_i)
a.sort!
sa1 = a[-1] - a[0]
sa2 = a[-1] - a[1]
iti = [sa1, sa2].min
ni = ([sa1, sa2].max - iti)/2
result = ([sa1, sa2].max - iti)%2 == 0? iti+ni : iti+ni+2
puts result
