#include<bits/stdc++.h>
using namespace std;
int main()
{
    int dau,cuoi,dem,tongluythua,  i,j,n,k,x,tich;
    cout<<"nhap n:";
    cin>>n;
    //xđ phạm vi tìm
    dau=1;dem=0;
    for(i=1;i<=k;i++)
        dau*=10;
        cuoi=dau*10-1;
    for(i=dau;i<=cuoi;i++)
    {
        tongluythua=0;x=i;
        while(x!=0)
        {
            tich=1;
            for(j=1;j<=k;j++)
                tich*=x%10;
            tongluythua+=tich;
            x/=10;
        }
        if(tongluythua==i)
        {
            cout<<i;
            dem++;
        }
    }
    cout<<"\n";
    cout<<dem;
}
