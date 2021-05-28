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
	char arr[16];
	ll j;
	for(j=0;j<16;j++)
	{
		arr[j]=97+j;
	}
	
	while(t--)
	{
		ll n,i;
	   cin>>n;
	   string str;
	   cin>>str;
	   ll len=str.length();
	   
	   for(i=0;i<=(len-4);i=i+4)
	   {
	   	ll num=0;
	   	ll t,t1,t2,t3;
	   	t=8*(str[i]-'0');
	   	   t1=4*(str[i+1]-'0');
	   	   t2=2*(str[i+2]-'0');
	   	   t3=str[i+3]-'0';
	   	   num = t+t1+t2+t3;
	   	   //cout<<num;
	   	   cout<<arr[num];
	   }
	   
	   cout<<endl;
	}

	return 0;
}