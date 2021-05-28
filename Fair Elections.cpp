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
		ll n,m,i;
		cin>>n>>m;
		ll a[n];
		ll b[m];
		ll s=0,s1=0;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			s+=a[i];
		}
		
		for(i=0;i<m;i++)
		{
			cin>>b[i];
			s1+=b[i];
		}
		
	//	cout<<s<<s1;
		if(s>s1)
		{
			cout<<"0"<<endl;
		    continue;
		}
		
		//ll diff=s1-s;
		sort(a,a+n);
		sort(b,b+m,greater<ll>());
		
		// for(i=0;i<n;i++)
		// {
			
		// }
		
	 //   for(i=0;i<m;i++)
		// {
			
		// }
		ll res=0;
		for(i=0;i<m;i++)
		{
			if(s<=s1)
			{
				if(i<n){
					s=s-a[i]+b[i];
					s1=s1-b[i]+a[i];
					res++;
				}
			}
			if(s>s1)
			{
				break;
			}
		}
		if(s>s1)
		cout<<res<<endl;
		else
		cout<<"-1"<<endl;
	}
	return 0;
}