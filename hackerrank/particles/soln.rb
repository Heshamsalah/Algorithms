speed = [6,6,1,6,3,4,6,8]
pos = 2

def collision(speed, pos)
    i = 0
    colid = 0
    puts speed.size
    puts speed[pos]
    while i < speed.size
        if i < pos && speed[i] > speed[pos]
            colid += 1
        elsif i > pos && speed[pos] > speed[i]
            colid +=1
        end
        i += 1
    end
    colid
end

puts collision(speed, pos)
