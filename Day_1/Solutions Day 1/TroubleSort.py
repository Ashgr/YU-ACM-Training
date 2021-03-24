T = int(input())
List_of_answers = []
for _ in range(T):
    n = int(input())
    A = list(map(int,input().split()))
    B = list(map(int,input().split()))
    zeros, ones = 0, 0
    for i in B:
        if i:
            ones += 1
        else:
            zeros += 1

    is_sorted = True
    for i in range(0,n-1):
        if A[i] > A[i+1]:
            is_sorted = False
            break

    if (ones>0 and zeros>0) or is_sorted:
        List_of_answers.append("YES")
    else:
        List_of_answers.append("NO")

for ans in List_of_answers:
    print(ans)
