n = gets.to_i

n.times do
    operacao = gets.split.map(&:to_s)

    rslt = 0

    case operacao[1]
    when '+'
      rslt = operacao[0].to_i + operacao[2].to_i
    when 'x'
      rslt = operacao[0].to_i * operacao[2].to_i
    when '-'
      rslt = operacao[0].to_i - operacao[2].to_i

    else
    end


    print 'E'

    (operacao[4].to_i - rslt).abs.times { print 'r' }

    puts 'ou!'
  end
