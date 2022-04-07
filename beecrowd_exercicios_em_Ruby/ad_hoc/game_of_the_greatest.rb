n = gets.to_i

until n.zero?

  p1 = 0
  p2 = 0

  n.times do
    a, b = gets.split.map(&:to_i)

    if a > b
      p1 += 1
    elsif b > a
      p2 += 1
    end

  end

  puts "#{p1} #{p2}"

  n = gets.to_i

end
