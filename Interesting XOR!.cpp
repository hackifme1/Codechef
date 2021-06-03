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
		ll c;
		cin>>c;
		ll cnt=floor(log2(c))+1;
	    ll a[cnt],b[cnt];
	    a[0]=1;b[0]=0;
	    //ll l=1;
	    string str="";
	    while(c)
	    {
	    	if(c%2==0)
	    	str=str+'0';
	    	else
	    	str=str+'1';
	    	
	    	c=c/2;
	    }
	    reverse(str.begin(),str.end());
	    for(ll i=1;i<str.size();i++)
	    {
	    	if(str[i]=='0')
	    	{
	    		a[i]=1;b[i]=1;
	    	}
	    	else
	    	{
	    		a[i]=0;b[i]=1;
	    	}
	    }
	    ll A=0,B=0;
	    for(ll i=0;i<str.size();i++)
	    {
	    		A=A+pow(2,cnt-i-1)*a[i];
	    		B=B+pow(2,cnt-i-1)*b[i];
	    }
	    cout<<A*B<<endl;
	}
	return 0;
}
