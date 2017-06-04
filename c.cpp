#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string a,b;
		int c=0;
		cin>>a>>b;
		sort(a.begin(), a.end());
		sort(b.begin(), b.end());
		for(int i=0;i<a.size();i++)
		{
			for(int j=0;j<b.size();j++)
			{
				if(a[i]==b[j])
					{
						a.erase(i,i+1);
						b.erase(j,j+1);
						c++;
						i--,j--;
					}
			}
		}
		cout<<c<<endl;
	}
}