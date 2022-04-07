n = gets.to_i
la, lb = gets.split.map(&:to_i)
sa, sb = gets.split.map(&:to_i)

if  la <= n && n <= lb && sa <= n && n <= sb
  puts 'possivel'
else
  puts 'impossivel'
end