n = gets.to_i
m = gets.to_i
cards = [0] * (n + 1)

puts cards

(0..m).each do
  x = gets.to_i
  cards[x] += 1 if x <= n
end

puts cards

missing = 0

cards[1..n].each do |i|
  missing += 1 if i.zero?
end

puts missing
