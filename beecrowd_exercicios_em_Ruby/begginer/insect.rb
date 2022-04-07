c = gets.to_i

for i in (0...c) do
  n = gets.to_i
  if n > 8000
    puts 'Mais de 8000!'
  else
    puts 'Inseto!'
  end
end

c.times do
  n = gets.to_i
  if n > 8000
    puts 'Mais de 8000!'
  else
    puts 'Inseto!'
  end
end


# (0...c).each do
#   n = gets.to_i
#   if n > 8000
#     puts 'Mais de 8000!'
#   else
#     puts 'Inseto!'
#   end
# end
