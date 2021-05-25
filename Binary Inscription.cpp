#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main()
{
	ll n;
	cin>>n;
	while(n--)
	{
		string s;
		cin>>s;
		ll len=s.length(),i,ans=0;
		
			if(s[0]=='0')
			cout<<"0"<<endl;
			else
			{
				for(i=1;i<len;i++)
		       {
		       	  if(s[i]=='1'&&s[i-1]=='1')
		       	  continue;
		       	  else if(s[i]=='1'&&s[i-1]=='0')
		       	  break;
		       	  else
		       	  ans++;
		       }
		       cout<<ans<<endl;
			}
		
	}
    return 0;
}