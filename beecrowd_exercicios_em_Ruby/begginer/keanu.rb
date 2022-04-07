n = gets.to_i

n *= n

if n.even?
  puts "#{n / 2} casas brancas e #{n / 2} casas pretas"
else
  puts "#{n / 2 + 1} casas brancas e #{n / 2} casas pretas"
end
