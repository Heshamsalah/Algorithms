# Enter your code here. Read input from STDIN. Print output to STDOUT
arr = []

n, q = gets.strip.split(' ')
n = n.to_i
q = q.to_i
lastAnswer = 0
for i in (0...n)
    seq = []
    arr.push(seq)
end

for i in (0...q)
    op, x, y = gets.strip.split(' ')
    op = op.to_i
    x = x.to_i
    y = y.to_i
    seqNum = (x ^ lastAnswer) % n
    if op == 1
        arr[seqNum].push(y)
    else
        lastAnswer = arr[seqNum][y % arr[seqNum].size]
        puts lastAnswer
    end
end
