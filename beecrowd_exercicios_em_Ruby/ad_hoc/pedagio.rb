l, d = gets.split.map(&:to_i)
k, p = gets.split.map(&:to_i)

custo_pedagio = 0

(d..l).step(d) do
  custo_pedagio += 1
end


puts k * l + custo_pedagio * p
