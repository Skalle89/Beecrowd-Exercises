n = gets.to_i

def first_planet(p)
  menor = 2114 + 1001
  p.each do |k, v|
    if menor > k
      menor = k
    end
  end
  puts p[menor]
end

while n != 0

  planet = {}

  n.times do
    p, a, t = gets.split(' ').map(&:to_s)
    planet[a.to_i - t.to_i] = p
  end

  first_planet(planet)
  n = gets.to_i
end
