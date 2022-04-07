x, y = gets.split(' ').map(&:to_i)

if 0 <= x  && x <= 432 && 0 <= y && y <= 468
  puts 'dentro'
else
  puts 'fora'
end

