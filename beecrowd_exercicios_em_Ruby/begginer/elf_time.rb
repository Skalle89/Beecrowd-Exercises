n = gets.to_i

a, b = gets.split.map(&:to_i)

if a + b > n
  puts 'Deixa para amanha!'
else
  puts 'Farei hoje!'
end
