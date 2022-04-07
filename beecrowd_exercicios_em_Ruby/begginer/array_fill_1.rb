n = gets.to_i

arr = Array.new((0...10).each { |i| n * 2**i })

(0...10).each { |i| puts "N[#{i}] = #{arr[i]}" }
