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
		ll n,k,x,y;
		cin>>n>>k>>x>>y;
		if(x==y)
		{
			cout<<n<<" "<<n<<endl;
		}
	   else	if((x-y)>0)
		{
			ll x1=n,y1=(n+y-x),x2=y1,y2=x1,x3=0,y3=y2-x2,x4=y3,y4=x3;
			ll r=k%4;
			if(r==0)
			cout<<x4<<" "<<y4<<endl;
			else if(r==1)
			cout<<x1<<" "<<y1<<endl;
				else if(r==2)
			cout<<x2<<" "<<y2<<endl;
				else
			cout<<x3<<" "<<y3<<endl;
		}
		else
		{
			ll y1=n,x1=(n+x-y),x2=y1,y2=x1,x3=x2-y2,y3=0,x4=y3,y4=x3;
			ll r=k%4;
			if(r==0)
			cout<<x4<<" "<<y4<<endl;
			else if(r==1)
			cout<<x1<<" "<<y1<<endl;
				else if(r==2)
			cout<<x2<<" "<<y2<<endl;
				else
			cout<<x3<<" "<<y3<<endl;
		}
	}
	return 0;
}