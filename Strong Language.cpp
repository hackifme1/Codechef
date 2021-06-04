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
	while(t--){
	ll n,k;
	cin>>n>>k;
	string str;
	cin>>str;
	ll sz=str.size();
	ll flag=0,cnt=0;
	for(ll i=0;i<sz;i++)
	{
	
		if(str[i]=='*')
		{
			cnt++;
		}
		else
		{
		if(cnt>=k)
		{
			flag=1;
			break;
		}
		cnt=0;
		}
	}
	if(cnt>=k)
	cout<<"YES"<<endl;
	else if(flag==1)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
	}
	return 0;
}
