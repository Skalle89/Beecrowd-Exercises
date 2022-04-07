n = gets.to_i

grid = []

food_taken = []

(0..n-1).each do |x|
  if x % 2 == 0
    grid << gets.chomp
  else
    grid << gets.chomp.reverse
  end
end

grid = grid.join('')

cnt = 0

(0..n*n-1).each do |x|

  if grid[x] == 'A'
    food_taken << cnt
    cnt = 0
  elsif grid[x] == 'o'
    cnt += 1
  end

end

food_taken << cnt

puts food_taken.max