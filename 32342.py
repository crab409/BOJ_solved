N = int(input())
score = [0, 0]
for rnd in range(N) :
    a, b = map(int, input().split())
    if (a == b) :
        continue
    score[0 if a > b else 1] += 1 

print(score[0], score[1])