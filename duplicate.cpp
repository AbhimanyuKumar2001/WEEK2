#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int duplicate(int a[],int n,int k){
      int*lb=lower_bound(a,a+n,k);

      if(lb==(a+n)||*lb!=k)
        return 0;


      int*ub=upper_bound(lb,a+n,k);

      return ub-lb;
}

 int main()
 {
     int t,n,i,j,k;
     cin>>t;
     for(i=0;i<t;i++)
     {
         cin>>n;
         int a[n];
         for(j=0;j<n;j++)
            cin>>a[j];
         cin>>k;

         int r=duplicate(a,n,k);
              if(r==0)
                cout<<"Key not present"<<endl;
              else
                cout<<k<<"-"<<r<<endl;
     }
     return 0;
 }
