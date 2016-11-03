t = Time.local(2000,12,25,01,00,00)
zangyo = []
for i in 0..gets.to_i-1
	zangyo[i] = gets.chomp.to_i * 60/3
end
for i in 0..zangyo.size-1
	puts (t - zangyo[i]).strftime("%H:%M")
end
