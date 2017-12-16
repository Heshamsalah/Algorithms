#!/bin/ruby

def lowestTriangle(base, area)
    # Complete this function
    h = area / (0.5*base)
    h.ceil
end

base, area = gets.strip.split(' ')
base = base.to_i
area = area.to_i
height = lowestTriangle(base, area)
puts height;
