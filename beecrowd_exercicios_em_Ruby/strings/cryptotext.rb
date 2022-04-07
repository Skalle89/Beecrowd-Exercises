n = gets.to_i

n.times do
  m = gets.chomp
  rslt = ''
  m.each_char do |x|
    if x.downcase && x.ord >= 97 && x.ord <= 122
      rslt += x
    end
  end

  rslt.reverse!

  puts rslt

end
