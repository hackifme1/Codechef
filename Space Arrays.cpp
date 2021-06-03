// By Chandramani Kumar
// Keep moving and must be simple bro!!!!!
// Espérons le meilleur mais préparez-vous au pire 😎


Cpp code :

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
	ll t;
	cin>>t;
	
	while(t--)
	{
		ll n;
		cin>>n;
		ll a[n];
		for(ll i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		
		ll cnt=0,f=0;
		
		for(ll i=0;i<n;i++)
		{
			if(a[i]>(i+1))
			{
				cout<<"Second"<<endl;
				f=1;
				break;
			}
			else
			cnt=cnt+((i+1)-a[i]);
		}
		
		if(f==0){
		if(cnt%2==0)
		cout<<"Second"<<endl;
		else
		cout<<"First"<<endl;
		}
	}
	return 0;
}
