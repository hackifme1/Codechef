// By Chandramani Kumar
// Keep moving and must be simple bro!!!!!
// Espérons le meilleur mais préparez-vous au pire 😎


Cpp code : 

#include <iostream>
using namespace std;
typedef long long int ll;
int main() {
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,k,d,x,i;
		cin>>n>>k>>d;
		ll s=0;
		for(i=0;i<n;i++)
		{
			cin>>x;
			s+=x;
		}
		if(s<k)
		cout<<"0"<<endl;
		else
		{
			ll q=s/k;
			if(q>=d)
			cout<<d<<endl;
			else
			cout<<q<<endl;
		}
	}

	return 0;
}