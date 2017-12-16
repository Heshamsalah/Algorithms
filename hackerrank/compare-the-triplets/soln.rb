#!/bin/ruby

def solve(a0, a1, a2, b0, b1, b2)
    # Complete this function
    arr1 = [a0, a1, a2]
    arr2 = [b0, b1, b2]
    alice = 0
    bob = 0
    arr1.each_with_index do |element, i|
        if element > arr2[i]
            alice = alice + 1
        elsif element < arr2[i]
            bob = bob + 1
        end
    end
    [alice, bob]
end

a0, a1, a2 = gets.strip.split(' ')
a0 = a0.to_i
a1 = a1.to_i
a2 = a2.to_i
b0, b1, b2 = gets.strip.split(' ')
b0 = b0.to_i
b1 = b1.to_i
b2 = b2.to_i
result = solve(a0, a1, a2, b0, b1, b2)
print result.join(" ")
