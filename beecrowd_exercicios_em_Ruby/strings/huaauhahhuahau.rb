risada = gets.chomp.scan(/[aeiou]/).join('')

if risada == risada.reverse
  puts 'S'
else
  puts 'N'
end
