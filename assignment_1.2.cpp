/** Name: Jayjeet Chakraborty
	Roll No.: 17CS8036
	Assignment No.: 1.2
	Problem: Frog Jump Problem
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	std::vector<int> v(n);
	v[0]=0;
	v[1]=1;
	v[2]=2;
	v[3]=4;
	for(int i=4;i<=n;i++)
	{
		v[i]=v[i-1]+v[i-2]+v[i-3];
	}
	cout<<v[n];
}