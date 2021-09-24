#include<iostream>
using namespace std;
int f=0;

int main()
{
    int t,n,i,j,k,l;
    cin>>t;
    for(i=0; i<t;i++)
    {
        cin>>n;
        int a[n];
        for(j=0;j<n;j++)
            cin>>a[j];

        for(j=0;j<n-2;j++)
        {  if(f==1)
              break;
            for(k=j+1;k<n-1;k++)
            {
              if(f==1)
                break;
                for(l=k+1;l<n;l++)
                     if(a[j]+a[k]==a[l])
                    {
                       cout<<j+1<<" "<<k+1<<" "<<l+1<<endl;
                        f=1;
                        break;
                      }
            }
        }
        if(f==0)
            cout<<"No Sequence Found"<<endl;
        f=0;

    }

}
