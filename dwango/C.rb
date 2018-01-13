def combi(n,k)
  k=n-k if 2*k > n
  return 1 if k == 0
  ((n-k+1)..n).reduce(&:*)/((1..k).reduce(&:*))
end

n, m = gets.chomp.split(" ").map(&:to_i)
ni = gets.chomp.split(" ").map(&:to_i)
mi = gets.chomp.split(" ").map(&:to_i)

nisum = ni.inject(:+)
misum = mi.inject(:+)

p deA = combi(n+misum-1, n-1)
p deB = combi(m+nisum-1, m-1)

result = deA * deB % (10**9+7)

puts result

