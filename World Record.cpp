// By Chandramani Kumar
// Keep moving and must be simple bro!!!!!
// Espérons le meilleur mais préparez-vous au pire 😎


Cpp code :

#include <bits/stdc++.h>
using namespace std;
typedef double ll;

int main() {
	ll t;
	cin>>t;
	while(t--){
	ll k1,k2,k3,v;
	cin>>k1>>k2>>k3>>v;
	ll speed=v*k1*k2*k3;
	ll time=100/speed;
	ll value = (long long int)(time * 100 + .5);
    ll v1= (ll)value / 100;
    // cout<<v1<<endl;
    if(v1<9.58)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
	}
	return 0;
}
