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
		string str;
		cin>>str;
		ll n=str.size();
		ll p=-2,cnt=0;
		for(int i=0;i<n;i++)
		{
			if(str[i]=='1')
			{
				if(i!=(p+1))
				{
					cnt++;
					p=i;
				}
				else
				p=i;
			}
			else
			continue;
		}
		cout<<cnt<<endl;
	}
	return 0;
}
