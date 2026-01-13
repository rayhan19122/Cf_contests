t=int(input())
while t>0:
    fst=str(input())
    snd=str(input())
    l1=len(fst)
    l2=len(snd)
    cnt=0
    for x in range(min(l1,l2)):
        if fst[x]!=snd[x]:
            break
        else: cnt+=1
    if cnt==0:
        print(l1+l2)
    else:
        print(l1+l2+1-cnt)
    t-=1


