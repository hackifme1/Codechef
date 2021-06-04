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
	ll hash[4];
	hash[0]=16;
	hash[1]=32;hash[2]=44;hash[3]=55;
	while(t--)
	{
		ll n;
		cin>>n;
		if(n==4)
		{
			cout<<"60"<<endl;
		}
		else if(n==3)
		cout<<"51"<<endl;
		else if(n==2)
		cout<<"36"<<endl;
		else if(n==1)
			cout<<"20"<<endl;
			else{
		ll q=n/4;
		ll r=n%4;
		ll s=44*q;
		s=s+hash[r];
		cout<<s<<endl;
			}
	}
	return 0;
}
