# module Encryption
#
#   @n
#   @word
#
#   def shift_3
#     @word = (@word.split('').map{|x| x.match(/[a-zA-Z]/) ? (x.ord + 3).chr : x}).join('')
#   end
#
#   def rev
#     (0...@word.length/2).each do |x|
#       @word[x],@word[@word.length-1-x] = @word[@word.length-1-x], @word[x]
#     end
#   end
#
#   def half_right_shift
#     (@word.length/2...@word.length).each do |x|
#       @word[x] = (@word[x].ord - 1).chr
#     end
#   end
#
#   def solve
#     @n = gets.to_i
#     @n.times do
#       @word = gets.chomp
#       shift_3
#       rev
#       half_right_shift
#       puts @word
#     end
#   end
#
# end
#
# include Encryption
#
# solve


def shift_3(word)
  (word.split('').map{|x| x.match(/[a-zA-Z]/) ? (x.ord + 3).chr : x}).join('')
end

def rev(word)
  (0...word.length/2).each do |x|
    word[x],word[word.length-1-x] = word[word.length-1-x], word[x]
  end
  word
end

def half_right_shift(word)
  (word.length/2...word.length).each do |x|
    word[x] = (word[x].ord - 1).chr
  end
  word
end

n = gets.to_i

n.times do

  word = gets.chomp

  puts half_right_shift(rev(shift_3(word)))

end