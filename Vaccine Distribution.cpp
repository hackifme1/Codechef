// By Chandramani Kumar
// Keep moving and must be simple bro!!!!!
// Espérons le meilleur mais préparez-vous au pire 😎


Cpp code :

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ll t,i;
    cin>>t;
    while(t--)
    {
    	ll n,d;
    	cin>>n>>d;
    	
    	ll a[n];
    	ll cnt=0;
    	for(i=0;i<n;i++)
    	{
    		cin>>a[i];
    		if(a[i]>=80||a[i]<=9)
    		cnt++;
    	}
    	ll rem=n-cnt;
    	ll res=0;
    	res=res+ceil((float)cnt/d);
    	res=res+ceil((float)rem/d);
    	cout<<res<<endl;
    }
	return 0;
}
