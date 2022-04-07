# def show(x)
#   show(x/10) if x > 1
#   print x%10 if x % 10 != 0
# end

loop do
  c,m = gets.split(' ').map(&:to_i)
  break if c == 0 && m == 0

  # puts (c+m).to_s.scan(/[1-9]/).join('')

  s = (c+m).to_s

  (0..s.length).each do |x|
    print s[x] if s[x] != '0'
  end
  puts

  show(c+m)
  puts

end
