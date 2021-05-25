// By Chandramani Kumar
// Keep moving and must be simple bro!!!!!
// Espérons le meilleur mais préparez-vous au pire 😎


Cpp code :

#include<bits/stdc++.h>
#include <iostream>

using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i,j,k=1;
        cin>>n;
        ll a[n][n];


        if(n%2!=0)
        {
            for(i=0;i<n;i++)
            {
            for(j=0;j<n;j++)
                {
                a[i][j]=k;
                k++;
                }
            }
        }

        else
        {
            for(i=0;i<n;i++)
            {
        	if(i%2==0){
                for(j=0;j<n;j++)
                { if(i==0)
                	{a[i][j]=k;
                	k++;}
                	else{
                            if(j==0)
                        {a[i][j]=k+2;
                        k+=2;
                        k++;}
                        else{
                            a[i][j]=k;
                        k++;

                        }
                	}

                }
        	}
            else{
                	for(j=0;j<n;j++){
                	if(j==0)
                	{
                		k=k+1;

                	}
                	else
                	{
                		if(j%2==0)
                		{
                			k=k+3;
                		}
                		else
                		k=k-1;
                	}
                	a[i][j]=k;
                	}
                }

            }
        }


        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
