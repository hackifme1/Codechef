#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
   ll d1,v1,d2,v2,p,i,j,res;
   cin>>d1>>v1>>d2>>v2>>p;
   ll minm=min(d1,d2);
   ll diff=abs(d1-d2);
   
   	res=minm-1;
   	
   if(d1==d2)
   {
	   	res=res+p/(v1+v2);
	   	if(p%(v1+v2)!=0)
	   	 res+=1;
   }
   else
	 {
	 	 if(d1<d2)
	 	   {
	 	   	 ll chk=ceil((float)p/v1);
	 	   	 
	 	   	 if(chk>diff)
	 	   	 {
	 	   	 	p=p-(diff*v1);
	 	   	 	res+=diff;
	 	   	 	res=res+ceil((float)p/(v1+v2));
	 	   	 }
	 	   	 else
	 	   	 {
	 	   	 	res+=chk;
	 	   	 }
	 	   }
	 	   else
	 	   {
	 	   	 ll chk=ceil((float)p/v2);
	 	   	 
	 	   	 if(chk>diff)
	 	   	 {
	 	   	 	p=p-(diff*v2);
	 	   	 	res+=diff;
	 	   	 	res=res+ceil((float)p/(v1+v2));
	 	   	 }
	 	   	 else
	 	   	 {
	 	   	 	res+=chk;
	 	   	 }
	 	   }
 
	 }
	 cout<<res;
	return 0;
}