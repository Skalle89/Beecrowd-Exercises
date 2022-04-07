chk = false

while (n = gets.to_s)

  if !chk && (n.include? '<body>')
    chk = true

  elsif n.include? '</body>'
    chk = false

  end

  puts n if chk && !(n.include? '<body>')

end

# TODO
