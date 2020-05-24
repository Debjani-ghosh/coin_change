#include<bits/stdc++.h>
using namespace std;
int coin_chng(int coins[],int m,int n)
{
	int i,j,table[m][n+1],x,y;
	for(i=0;i<m;i++)
	{
		table[i][0]=1;
	}
	for(i=0;i<m;i++)
    {
        for(j=1;j<=n;j++)
        {
            x=(j-coins[i]>=0)?table[i][j-coins[i]]:0;
            y=(i>=1)?table[i-1][j]:0;
            table[i][j]=x+y;

        }
    }
    return table[m-1][n];
	
}
int main()
{
	int m,n,i;
	cout<<"Enter number of units and coins:\n";
	cin>>n;
	cin>>m;
	int coins[m];
	for(i=0;i<m;i++)
	{
		cout<<"Enter the coins";
		cin>>coins[i];
	}
	int res=coin_chng(coins,m,n);
	cout<<"The number of ways we make a chnage is:"<<"\n"<<res;
	return 0;
}
