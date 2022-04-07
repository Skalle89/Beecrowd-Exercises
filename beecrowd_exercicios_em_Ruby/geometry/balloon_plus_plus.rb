r, l = gets.split.map(&:to_i)

v = (4 / 3.0) * (3.1415 * r**3)

puts format('%d', l / v)
