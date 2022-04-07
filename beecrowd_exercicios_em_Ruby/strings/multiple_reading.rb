while (n = gets.chomp)
  p = gets.to_i
  t = 0
  chk = 0
  (0...n.length).each do |i|
    if n[i] == 'W'
      t += 1

      if (chk % p).zero?
        t += chk / p
      elsif chk != 0
        t += chk / p + 1
      end

      chk = 0

    end

    if n[i] == 'R'
      chk += 1
    end

  end

  if (chk % p).zero?
    t += chk / p
  elsif chk != 0
    t += chk / p + 1
  end

  puts t
end
