marius = gets.chomp
doctor = gets.chomp

m = 0
d = 0

marius.each_char do |x|
  m += 1 if x == 'a'
end

doctor.each_char do |x|
  d += 1 if x == 'a'
end

if m >= d
  puts 'go'
else
  puts 'no'
end
