t = gets.strip.to_i
for i in (0...t)
    contestnats = []
    qualified = 0
    n, top = gets.strip.split(' ')
    n = n.to_i
    top = top.to_i - 1
    for j in (0...n)
        contestnats << gets.strip.to_i
    end
    contestnats.sort!.reverse!
    while contestnats[top] == 0
        top -= 1
    end
    for m in (0...contestnats.length)
        if contestnats[m] >= contestnats[top]
            qualified += 1
        end
    end
    puts qualified
end
