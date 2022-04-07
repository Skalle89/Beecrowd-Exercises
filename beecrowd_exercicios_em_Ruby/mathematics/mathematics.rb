def prime?(x)
  (3...(x**0.5).to_i + 1).each do |i|
    return false if (x % i).zero?
  end
  true
end

def twins(y)
  while y > 4
    return [y - 2, y] if prime?(y - 2) && prime?(y)

    y -= 2
  end
end

n = gets.to_i

n -= 1 if n.even?

puts twins(n).join(' ')

