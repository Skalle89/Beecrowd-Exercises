t = gets.to_i

t.times do
  n, k = gets.split.map(&:to_i)
  puts(n / k + n % k)
end
