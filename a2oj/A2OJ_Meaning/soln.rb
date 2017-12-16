t = gets.strip.to_i
for i in (0...t)
    n = gets.strip.to_i
    hash = {}
    words = gets.strip.split(' ')
    words.each do |word|
        if hash[word[0]]
            hash[word[0]] += 1
        else
            hash[word[0]] = 1
        end
    end
    hash.each do |k, v|
        print k + (v > 1 ? v.to_s : '')
    end
    puts
end
