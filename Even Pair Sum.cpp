// By Chandramani Kumar
// Keep moving and must be simple bro!!!!!
// Espérons le meilleur mais préparez-vous au pire 😎

Cpp code :

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ll a,b,t,i;
    cin>>t;
    while(t--)
    {
    	cin>>a>>b;
    	ll even=a/2;
    	ll even1=b/2;
    	ll odd=a-even;
    	ll odd1=b-even1;
    	ll res=even*even1+odd*odd1;
    	cout<<res<<endl;
    }
	return 0;
}
