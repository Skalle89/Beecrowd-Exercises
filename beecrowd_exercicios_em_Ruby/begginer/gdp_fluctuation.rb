a, b = gets.split.map(&:to_f)

puts format('%.6f', (a + (a * b) / 100 + b))
