t = gets.strip.to_i
for i in (0...t)
    max_score = 0
    top_team = nil
    n = gets.strip.to_i
    for j in (0...n)
        team, score = gets.strip.split(' ')
        score = score.to_i
        if score > max_score
            max_score = score
            top_team = team
        end
    end
    puts "\n"
    puts top_team
end
