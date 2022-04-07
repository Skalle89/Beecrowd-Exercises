n = gets.to_i

case n
when (1...2)
  puts 'Top 1'
when (2..3)
  puts 'Top 3'
when (4..5)
  puts 'Top 5'
when (6..10)
  puts 'Top 10'
when (11..25)
  puts 'Top 25'
when (26..50)
  puts 'Top 50'
else
  puts 'Top 100'
end
