import sys

t = int(input().strip())
for i in range(0,t):
    contestnats = []
    qualified = 0
    n, top = input().strip().split()
    n = int(n)
    top = int(top) -1
    for j in range(0,n):
        contestnats.append(int(input().strip()))

    contestnats.sort()
    contestnats.reverse()
    while contestnats[top] == 0:
        top -= 1

    for m in range(0,len(contestnats)):
        if contestnats[m] >= contestnats[top]:
            qualified += 1

    print("\n")
    print(qualified)
