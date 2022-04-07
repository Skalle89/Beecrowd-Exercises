n, k = gets.split.map(&:to_i)

nomes = []

n.times do
  nome = gets.to_s
  nomes.push(nome)
end

ok = false

until ok

  ok = true

  (0...nomes.length - 1).each do |i|
    if nomes[i] > nomes[i + 1]
      temp = nomes[i]
      nomes[i] = nomes[i+1]
      nomes[i + 1] = temp
      ok = false
    end

  end

end

puts nomes[k - 1]
