// By Chandramani Kumar
// Keep moving and must be simple bro!!!!!
// Espérons le meilleur mais préparez-vous au pire 😎


Cpp code :

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
   ll t,i;
   cin>>t;
   while(t--)
   {
   	 ll n,k;
   	 cin>>n>>k;
   	 ll a[n];
   	 if(k==n)
   	 {
   	 	for(i=0;i<n;i++)
   	 	a[i]=i+1;
   	 }
   	 else
   	 {
   	 	if(n%2==0)
   	 	{
   	 		for(i=0;i<n;i++)
   	 		{
   	 			a[i]=(i+1)*pow(-1,i+1);
   	 		}
   	 	}
   	 	else
   	 	{
   	 		for(i=0;i<n;i++)
   	 		{
   	 			a[i]=(i+1)*pow(-1,i+2);
   	 		}
   	 	}
   	 	ll cnt=ceil((float)n/2);
   	 	ll diff=k-cnt;
   	 	if(diff>0)
   	 	{
   	 			for(i=n-1;i>0;i--)
   	 			{
   	 				if(diff>0&&a[i]<0)
   	 			{
   	 				a[i]=-a[i];
   	 				diff--;
   	 			}
   	 				if(diff==0)
   	 				break;
   	 			}
   	 	}
   	 	else
   	 	{
   	 		for(i=n-1;i>0;i--)
   	 			{
   	 				if(diff<0&&a[i]>0)
   	 			{
   	 				a[i]=-a[i];
   	 				diff++;
   	 			}
   	 				if(diff==0)
   	 				break;
   	 			}
   	 	}
   	 }
   	 
   	 for(i=0;i<n;i++)
   	 {
   	 	cout<<a[i]<<" ";
   	 }
   	 cout<<endl;
   }
   
	return 0;
}
