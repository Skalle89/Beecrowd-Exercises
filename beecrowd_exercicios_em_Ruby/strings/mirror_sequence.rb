n = gets.to_i

n.times do
  p, q = gets.split.map(&:to_i)

  m = ''

  (q - p + 1).times do |i|
    m.concat((i + p).to_s)
  end

  m.length.times do |j|
    print m[j]
  end

  m.reverse!

  m.length.times do |j|
    print m[j]
  end

  puts

end
