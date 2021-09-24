#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t,i,j,k,n,f=0;
    cin>>t;
    for(k=0;k<t;k++)
    {
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];

        sort(a,a+n);
        for(i=0;i<n-1;i++)
            if(a[i]==a[i+1])
        {
            f=1;
            break;
        }
        if(f==1)
            cout<<"YES"<<endl;
        if(f==0)
            cout<<"NO"<<endl;

        f=0;
    }
}
