def to_32(x)
  rslt = ''

  return 0 if x == 0

  while x != 0
    if x % 32 > 9
      rslt += (x%32 + 55).chr
    else
      rslt += (x % 32).to_s
    end
    x /= 32
  end

  rslt.reverse!

end



loop do

  n = gets.to_i
  puts to_32(n)
  break if n == 0

end
