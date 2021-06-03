// By Chandramani Kumar
// Keep moving and must be simple bro!!!!!
// Espérons le meilleur mais préparez-vous au pire 😎


Cpp code :
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main() {
	ll n,h,x;
	cin>>n>>h>>x;
	ll a[n];
	for(ll i=0;i<n;i++)
	cin>>a[i];
	
	sort(a,a+n);
	
	if(a[n-1]+x>=h)
	cout<<"YES";
	else
	cout<<"NO";
	return 0;
}
