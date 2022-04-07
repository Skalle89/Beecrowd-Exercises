n = gets.to_i

n.times do
  p,q = gets.split(' ').map(&:to_s)

  x,y = p.length, q.length
  min = (x + y - (x-y).abs)/2

  (0..min).each { |x| print "#{p[x]}#{q[x]}"}

  if min == x
    (min+1..x+y-min).each {|x| print "#{q[x]}" }
  else
    (min+1..x+y-min).each {|x| print "#{p[x]}" }
  end

  puts

end
