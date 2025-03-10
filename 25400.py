# https://www.acmicpc.net/problem/25400 

counter = 0
N = int(input())
A = [0] + list(map(int, input().split()))

for i in range(1, N+1, 1) : 
    if (A[i] == i-counter) : 
        continue 
    counter += 1 

print(counter)