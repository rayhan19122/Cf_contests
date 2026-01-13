t=int(input())
l1=list(map(int,input().split()))
l2=list(map(int,input().split()))

for x in range(t):
    print(pow(2,l2[x],1000000007))

