n = int(input())
L = list(map(int,input().split()))
L.sort()
remove_max = L[n-2] - L[0]
remove_min = L[n-1] - L[1]
ans = min(remove_max,remove_min)
print(ans)
