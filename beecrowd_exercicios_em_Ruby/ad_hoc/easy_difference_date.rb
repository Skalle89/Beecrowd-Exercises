a, b = gets.split.map(&:to_i)
c, d = gets.split.map(&:to_i)

dias = 0

(b...d).each do |i|
  dias += case i
          when 2
            28
          when 4, 6, 9, 11
            30
          else
            31
          end
end

puts dias + (c - a)
