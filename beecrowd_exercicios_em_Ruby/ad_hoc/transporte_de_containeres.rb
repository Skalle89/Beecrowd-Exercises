a, b, c = gets.split.map(&:to_i)

x, y, z = gets.split.map(&:to_i)


if (x / a).zero? || (y / b).zero? || (z / c).zero?
  puts 0
else
  puts (x / a) * (y / b) * (z / c)
end
