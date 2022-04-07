n = gets.to_i

n.times do
  m = gets.chomp

  (0..m.length/2-1).reverse_each {|right| print m[right]}
  (m.length/2..m.length).reverse_each {|left| print m[left]}
  puts

end
