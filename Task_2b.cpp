#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	long long int n,q;
	cin>>n>>q;
	
	vector<long long int> v(n+1);
	
	for(int i=0;i<n;i++)
	{
		v[i]+=1;
		v[n]-=1;
	}
	
	for(int i=0;i<q;i++)
	{
		long long int x,y,val;
		
		cin>>x>>y>>val;
		
		v[x-1]+=val;
		v[y]-=val;
	}
	
	long long int ans=0,ans2=0;
	
	for(int i=0;i<n;i++)
	{
		ans+=v[i];
		
		if(ans>=ans2)
		{
			ans2=ans;
		}
	}
	
	cout<<ans2;
	
	return 0;
}

/* This logic is based on a fact that 
" In an array (which contains n+1 elements) with all elements equal to zero ,if
 we want to add a number (val) to all the elements of the array of index range 
 x to y (where index ranges from 0 to n-1) ,we can add val to index x and subtract 
 val from index y+1 .We add each element of the array til index n-1 in order to 
 encounter the maximum sum and the maximum sum gives us the answer." */
