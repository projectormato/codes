n = gets.to_i
arr1 = []
n.times { arr1 << gets.to_s.chomp }
arr1.map! { |a| a.split(' ') }

m = gets.to_i
arr2 = []
m.times { arr2 << gets.to_s.chomp }
arr2.map! { |a| a.split(' ') }

i = n - m + 1
yx = []
flag = true
i.times do |j|
  i.times do |k|
    flag1 = true
    flag2 = true
    m.times do |l|
      flag1 &= arr1[j + l][k..k + m - 1] == arr2[l]
      if flag1 && flag2
        yx = [j, k]
        flag2 = false
      end
    end
    if flag && flag1 && !flag2
      flag = false
      print yx.join(' ')
    end
  end
end