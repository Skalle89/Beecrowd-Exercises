def chk(n)
  for i in (0..n.length-1)
    if n[i] == '1' && n[i+1] == '3'
      puts "#{n} es de Mala Suerte"
      return
    end
  end

  puts "#{n} NO es de Mala Suerte"

end

number = gets.chomp.to_s

chk(number)
