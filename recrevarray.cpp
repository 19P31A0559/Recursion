#include<bits/stdc++.h>
using namespace std;

int revArray(int l,int r,int arr[])
{
	if(l>=r)
	   return 0;
	swap(arr[l],arr[r]);
	return revArray(l+1,r-1,arr);
}

int main()
{
	int n;
	cout<<"Enter the array size : ";
	cin>>n;
	cout<<"Enter the array elements"<<endl;
	int arr[n],l=0,r=n-1;
	for(int i=0;i<n;i++)
	   cin>>arr[i];
	cout<<"Reversed array is "<<endl;
	revArray(l,r,arr);
	for(auto it:arr)
	   cout<<it<<"\t";
}
