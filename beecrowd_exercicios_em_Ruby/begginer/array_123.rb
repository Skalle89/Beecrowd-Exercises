while (n = gets)

  n = n.to_i

  mtz = Array.new(n) { Array.new(n, 3) }

  (0..n - 1).each do |i|
      mtz[i][i] = 1
      mtz[i][n-i-1] = 2
  end

  puts mtz.map { |x| x.join('') }

end



# (0..n - 1).each do |i|
#   line = [0 * n]
#   (0..n - 1).each do |j|
#     line[j] = if i == j
#                 1
#               elsif j == n - i - 1
#                 2
#               else
#                 3
#               end
#   end
#   mtz.push(line)
# end

