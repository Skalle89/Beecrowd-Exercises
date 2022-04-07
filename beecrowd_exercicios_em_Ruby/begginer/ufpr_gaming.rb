while (n = gets)

  i, j = n.split(' ').map(&:to_i)

  vzs = 0

  i.times do

    k, l = gets.split.map(&:to_i)
    vzs += 1 if k == j && l.zero?

  end

  puts vzs

end
