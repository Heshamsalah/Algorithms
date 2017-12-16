#!/bin/ruby

def timeConversion(s)
    # Complete this function
    hh = s.split(":").first.to_i
    if s.match(/(P|p)(M|m)$/) && hh != 12
        s.gsub!(/^0[0-9]|1[0-9]/, (12 + hh).to_s)
    elsif s.match(/(A|a)(M|m)$/) && hh == 12
        s.gsub!(/^0[0-9]|1[0-9]/, '00')
    end
    if s.match(/[(A|a)|(P|p)](M|m)$/)
        s.gsub!(/[(A|a)|(P|p)](M|m)$/, ' ')
    end
    s
end

s = gets.strip
result = timeConversion(s)
puts result;
