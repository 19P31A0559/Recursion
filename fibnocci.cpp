#include<bits/stdc++.h>
using namespace std;

int fibonacci(int i)
{
	if(i==1)
	   return 0;
	else if(i==2)
	   return 1;
	else
	   return (fibonacci(i-1)+fibonacci(i-2));
}

int main()
{
	int n;
	cin>>n;
	cout<<n<<"th fibanocci number is "<<fibonacci(n);
	return 0;
}
