def caesar_cipher(w, j)
  (0...w.length).each do |i|
    w[i] = (w[i].ord + j % 26).chr

    w[i] = (w[i].ord - 26).chr if w[i].ord > 'Z'.ord
  end

  w
end

n = gets.to_i

n.times do
  word = gets.chomp

  jump = gets.to_i

  puts caesar_cipher(word, -1 * jump)
end
