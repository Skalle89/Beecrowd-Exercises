n = gets.to_i

while n != 0
  total = 10

  m = gets.chomp

  if n > 1

    m =  m.split(' ').map(&:to_i)

    (0...(m.length - 1)).each do |x|

      total += if m[x + 1] - m[x] < 10
                 m[x + 1] - m[x]
               else
                 10
               end

    end

  end

  puts total

  n = gets.to_i

end