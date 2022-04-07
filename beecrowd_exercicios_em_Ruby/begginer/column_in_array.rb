mtz = Array.new(12) { Array.new(12) }

column = gets.to_i

operation = gets.chomp

(0...12).each do |c|
  (0...12).each do |l|
    mtz[c][l] = gets.to_f
  end
end

rslt = 0


(0...12).each do |i|
  rslt += mtz[i][column]
end

if operation == 'S'
  puts format('%.1f', rslt)
else
  puts format('%.1f', rslt / 12)
end
