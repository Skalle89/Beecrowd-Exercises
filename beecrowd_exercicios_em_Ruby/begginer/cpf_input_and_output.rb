n = gets.chomp

(0...n.length).each do |i|
  if n[i] == '.' || n[i] == '-'
    puts
  else
    print n[i]
  end
end
puts
