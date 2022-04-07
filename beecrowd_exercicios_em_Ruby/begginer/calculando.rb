j = 1
loop do
  n = gets.to_i

  break if n == 0

  arr = []
  m = gets.chomp
  num = ''
  sin = 1
  (0..(m.length-1)).each do |x|
    if m[x] == '+' || m[x] == '-'
      arr << num.to_i*sin
      num = ''
      sin = m[x] == '+' ? 1 : - 1

    elsif x == m.length-1
      num += m[x]
      arr << num.to_i*sin

    else
      num += m[x]
    end

  end


  puts "Teste #{j}\n#{arr.reduce{ |x,y| x + y}}\n\n"
  j += 1

end


