t = gets.to_i

t.times do
  n,m = gets.split(' ').map(&:to_i)
  puts (n/3) * (m/3)
end
