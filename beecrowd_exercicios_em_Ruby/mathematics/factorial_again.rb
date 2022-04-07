def fat(x)
  rslt = 1
  (2..x).each { |z| rslt *= z }
  rslt
end

n = gets.to_i

while n != 0

  rslt = 0

  (0...(Math.log(n)/Math.log(10) + 1).to_i).each do |i|
    rslt += n%10*fat(i + 1)
    n /= 10

  end

  puts rslt

  n = gets.to_i

end

