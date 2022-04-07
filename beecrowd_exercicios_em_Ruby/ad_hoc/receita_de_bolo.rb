def chk(x, y, z)

  return x if x < y && x < z

  return y if y < z

  z
end


a, b, c = gets.split.map(&:to_i)

puts chk(a / 2, b / 3, c / 5)
