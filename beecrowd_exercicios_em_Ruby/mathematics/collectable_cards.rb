def gdc(x,y)
  return x if y == 0
  gdc(y,x % y)
end

n = gets.to_i

n.times do
  f,g = gets.split(' ').map(&:to_i)
  puts gdc(f,g)
end