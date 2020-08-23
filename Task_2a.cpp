#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	int t;
	cin>>t;
	
	for(int i=0;i<t;i++)
	{
		string s;
		cin>>s;
		
		int x,ans;
		x=ans=0;
		
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='<')
			{
				x+=1;
			}
			else
			{
				x-=1;
				
				if(x>=0)
				ans+=2;
				else
				break;
			}
		}
		
		cout<<ans<<"\n";
	}
	
	return 0;
}

/* This is based on the given conditions in the question 
 if a "<" comes before ">" we add 2 to the ans(initially equal to zero) 
 for every "<" comes we add 1 to x(initially equal to 0) and 
 subtract 1 from x . Either if the for loop ends or if x<0 
 we print ans. */
