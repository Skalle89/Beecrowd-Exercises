a,b,c = gets.split.map(&:to_i)

while a != 0 && b != 0 && c != 0
    
    puts ((a*b*c)**(1/3.0)).to_i
    
    a,b,c = gets.split.map(&:to_i)
    
end 

a.