h,e,a,o,w,x = gets.split.map(&:to_i)

if h + e + a > o + w || h + e + a + x > o + w
    puts "Middle-earth is safe."

else
    puts "Sauron has returned."

end
