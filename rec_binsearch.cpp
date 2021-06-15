#include<bits/stdc++.h>
using namespace std;

int binSearch(int a[],int low,int high,int ele)
{
	if(low<=high)
	{
		int mid=(low+high)/2;
		if(a[mid]==ele)
			return mid;
		else if(a[mid]>ele)
			return binSearch(a,low,mid-1,ele);
		else
			return binSearch(a,mid+1,high,ele);
	}
	return -1;
}

int main()
{
	int n,ele;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	cout<<"Enter number:";
	cin>>ele;
	int res=binSearch(a,0,n-1,ele);
	if(res==-1)
	   cout<<"Element not found";
	else
	   cout<<"Element found at index "<<res;
}
