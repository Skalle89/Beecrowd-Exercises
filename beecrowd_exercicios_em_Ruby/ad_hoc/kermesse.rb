def kermesse(lines)
  (0...lines.length).each do |x|
    return lines[x] if lines[x] == x + 1
  end
end

n = gets.to_i
i = 1
while n != 0

  lines = gets.split.map(&:to_i)

  puts "Teste #{i}\n#{kermesse(lines)}"
  puts ''
  i += 1

  n = gets.to_i

end
