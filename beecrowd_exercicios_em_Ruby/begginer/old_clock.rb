while (time = gets)

  time = time.split(' ').map(&:to_i)

  time[0] = (time[0] / 30).to_s
  time[0] = "0#{time[0]}" if time[0].length < 2
  time[1] = (time[1] / 6).to_s
  time[1] = "0#{time[1]}" if time[1].length < 2

  puts "#{time[0]}:#{time[1]}"

end

