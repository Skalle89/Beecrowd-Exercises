def gangorra(a,b,c,d)
  if a*b == c*d
    return 0
  end

  if a*b > c*d
    return -1
  end

  1
end

a,b,c,d = gets.split(' ').map(&:to_i)

puts gangorra(a,b,c,d)
