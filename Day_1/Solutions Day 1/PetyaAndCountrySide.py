n = int(input())
A = list(map(int,input().split()))
ans = 0
for i in range(len(A)):
    # Check left Points
    Current = A[i]
    index = i
    counter = 0
    while (index>=1 and A[index] >= A[index-1]):
        index -= 1
        counter += 1

    # Check Right Points
    index = i
    while (index < n-1 and A[index] >= A[index+1]):
        index += 1
        counter += 1

    counter += 1
    if counter > ans:
        ans = counter

print(ans)
