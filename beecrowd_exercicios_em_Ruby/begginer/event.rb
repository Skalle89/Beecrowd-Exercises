x, m = gets.split(' ').map(&:to_i)

while x != 0 && m != 0

  puts x * m

  x, m = gets.split(' ').map(&:to_i)

end
