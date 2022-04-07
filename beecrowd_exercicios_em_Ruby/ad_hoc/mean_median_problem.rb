a, b = gets.split.map(&:to_i)

while a != 0 && b != 0
  puts 2 * a - b
  a, b = gets.split.map(&:to_i)
end
