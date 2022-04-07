n = gets.to_i

ceiling = gets.split.map(&:to_i)
floor = gets.split.map(&:to_i)

chg_floor = 0
chg_ceiling = 0

ok = true
path_1 = true
path_2 = true

path_1 = false if (floor[0]).zero?

path_2 = false if (ceiling[0]).zero?


if path_1
  (n - 1).times do |i|
    if ok
      if floor[i] < floor[i + 1] || (floor[i + 1]).zero?
        ok = false
        chg_floor += 1
      end
    elsif ceiling[i] < ceiling[i + 1] || (ceiling[i + 1]).zero?
      ok = true
      chg_floor += 1
    end
  end
end

ok = false

if path_2
  (n - 1).times do |i|
    if ok
      if floor[i] < floor[i + 1] || (floor[i + 1]).zero?
        ok = false
        chg_ceiling += 1
      end
    elsif ceiling[i] < ceiling[i + 1] || (ceiling[i + 1]).zero?
      ok = true
      chg_ceiling += 1
    end
  end
end

if path_1 && path_2
  if chg_floor < chg_ceiling
    puts chg_floor
  else
    puts chg_ceiling
  end
elsif chg_floor != 0
  puts chg_floor
else
  puts chg_ceiling
end

