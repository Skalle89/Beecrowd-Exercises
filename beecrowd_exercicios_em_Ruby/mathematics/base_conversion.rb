def to_bin(x)
  rslt = ""

  while x != 0
    rslt += (x%2).to_s
    x /= 2
  end

  rslt.reverse!
end

def to_dec(x,b)
  rslt = 0
  base = { 'bin' => 2, 'hex' => 16 }

  (0..(x.length-1)).each do |i|
    if x[i].match(/^[a-f]/)
      rslt += (((x[i].ord - 'a'.ord) + 10).to_i*base[b]**(x.length - i - 1))
    else
      rslt += x[i].to_i*base[b]**(x.length - i - 1)
    end
  end

  rslt

end

def to_hex(x)
  rslt = ""

  while x != 0
    if x % 16 > 9
      rslt += (x%16 + '7'.ord).chr.downcase
    else
      rslt += (x%16).to_s
    end
    x /= 16
  end

  rslt.reverse!
end

def convert(n, number, base)

  if base != 'dec'
    number = to_dec(number,base)
  else
    number = number.to_i
  end

  puts "Case #{n+1}:"

  if base != 'dec'
    puts  "#{number} dec"
  end

  if base != 'hex'
    puts  "#{to_hex(number)} hex"
  end

  if base != 'bin'
    puts  "#{to_bin(number)} bin"
  end


end


n = gets.to_i

(0..n-1).each do |i|
  o, p = gets.split(' ').map(&:to_s)
  convert(i,o,p)
  puts
end

