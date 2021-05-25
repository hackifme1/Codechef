#include<bits/stdc++.h>
#include <iostream>

using namespace std;
typedef long long ll;
int main()
{
    ll t,i,j,k,g,p;
    cin>>t;
    while(t--)
    {
       
        ll n,l;
        cin>>n;
        if(n==1)
        cout<<"0"<<endl;
         else if(n%2!=0)
        {
            j=n-1;
            j=j/2;
            cout<<j<<endl;
        }
       
       else
       {
           if(n && (!(n&(n-1))))
           cout<<"0"<<endl;
           
           else if((n/2)%2!=0)
           {
               cout<<(n/4)<<endl;
           }
        
           else
           {
               l=n;
               k=0;
               while(l%2==0)
               {
                   k++;
                   l=l/2;
               }
               k=k+1;
               p=pow(2,k);
               g=n/p;
               cout<<g<<endl;
           }
       }
        
    }

    return 0;
}
