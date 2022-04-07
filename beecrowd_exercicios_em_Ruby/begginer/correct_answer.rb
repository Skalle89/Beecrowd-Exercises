n = gets.to_i
answers = Array.new(3,0)

(0...n).each do |i|
  answers[i] = gets.to_i
end

(0...n).each {|i| puts "resposta #{i+1}: #{answers[i]}"}

puts
