#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main()
{
    ll t,n,m,c;
    cin>>t;
    while(t--)
    {
        ll k=0,l=0;
        cin>>n>>m>>c;
        while(n--)
        {
            ll x,y;
            cin>>x>>y;
            ll j=y-m*x-c;
            if(j>0)
            k++;
            if(j<0)
            l++;
            
            
        }
        
        cout<<(k*l)<<endl;
    }
    return 0;
}