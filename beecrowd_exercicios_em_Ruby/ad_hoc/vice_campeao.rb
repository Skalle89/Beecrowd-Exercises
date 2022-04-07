podio = gets.split(' ').map(&:to_i)

pos = 0
maior = podio[0]

(0...podio.length).each do |x|
  if podio[x] > maior
    maior = podio[x]
    pos = x
  end
end

maior = podio[pos] = 0

(0...podio.length).each do |x|
  maior = podio[x] if podio[x] > maior
end

puts maior

# podio.delete(podio.max)
#
# puts podio.max
