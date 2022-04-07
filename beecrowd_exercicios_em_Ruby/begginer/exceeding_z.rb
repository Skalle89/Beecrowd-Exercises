rslt = 1
x0 = x = gets.to_i
z = gets.to_i

while z <= x
  z = gets.to_i
end

while x <= z
  x0 += 1
  x += x0
  rslt += 1
end

puts rslt