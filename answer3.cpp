#include<iostream>
using namespace std;

int main()
{
    int t,n,k,i,j,l,s,c=0;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        int a[n];
        for(j=0;j<n;j++)
            cin>>a[j];

        cin>>k;
        for(j=0;j<n-1;j++)
            for(l=j+1;l<n;l++)
        {

            s=a[j]-a[l];
               if(s==k||-(s)==k)
                 c++;
        }

        if(c>0)
            cout<<c<<endl;
        else
            cout<<"no such pair exists"<<endl;
        c=0;
    }

}
