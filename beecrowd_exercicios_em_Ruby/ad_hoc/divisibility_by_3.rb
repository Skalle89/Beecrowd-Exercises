while z = gets

  n,m = z.split(' ').map(&:to_s)

  sum = m.split('').map{|x| x.to_i}.reduce {|x, y| x + y}

  puts "#{sum} #{sum%3 == 0 ? 'sim': 'nao'}"

end
