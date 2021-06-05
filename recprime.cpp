#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n,int i)
{
	while(i>1)
	{
		if(n%i==0)
		{
			return false;
			break;
		}
		i--;
		return isPrime(n,i);
	}
	return true;
}
int main()
{
	int n;
	cin>>n;
	cout<<isPrime(n,sqrt(n));
}
