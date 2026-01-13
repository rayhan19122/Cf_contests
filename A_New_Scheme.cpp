/* #include<bits/stdc++.h>
using namespace std;

int main(){
    bool flag=true;
    int previous=0;
    for(int i=0;i<8;i++){
        int x;
        cin>>x;
        if((x<100 || x>675)||(x<previous)||(x%25!=0)) flag=false;
        previous=x;
    }
    if(flag) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
} */

#include <stdio.h>
int main()
{
    int arr[8];
    for (int i = 0; i < 8; i++)
    {

        scanf("%d", &arr[i]);
    }
    int cnt1 = 0;
    int cnt2 = 0;
    int cnt3 = 0;
    for (int i = 0; i < 8; i++)
    {
        if (arr[i] >= 100 && arr[i] <= 675)
        {
            cnt1++;
        }
    }

    for (int i = 0; i < 8; i++)
    {
        if (arr[i] % 25 == 0)
        {
            cnt2++;
        }
    }
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] <= arr[i + 1])
        {
            cnt3++;
        }
    }
    if ((cnt1 == 8) && (cnt2 == 8) && (cnt3 == 7))
    {
        printf("Yes");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}