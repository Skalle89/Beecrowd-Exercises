s = gets.chomp

n = s.count('1')

if n.even?
  puts s.concat('0')
else
  puts s.concat('1')
end
