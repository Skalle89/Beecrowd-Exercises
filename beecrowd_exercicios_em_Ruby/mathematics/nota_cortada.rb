b = gets.to_i
t = gets.to_i

felix = (b+t)*70/2
marzia = (160 - b + 160 - t)*70/2

if felix > marzia
  puts 1
elsif marzia > felix
  puts 2
else
  puts 0
end

puts (Math.log(100)/Math.log(10) + 1).to_i