#include<iostream>
using namespace std;
int linearsearch(int arr[],int n,int x)
{
	for(int i=0;i<=n;i++)
	{
		if(arr[i]==x)
		{
		return i;
	    }
    }
    	return -1;
}
int main()
{
	int arr[]={2,3,4,5,6,7,8};
	int n = sizeof(arr)/sizeof(arr[0]);
	int x=4;
	int result = linearsearch(arr,n,x);
	if(result==-1)
	{
		cout<<"element not found"<<endl;		
	}else
	    cout<<"element found on index: "<<result;
	
	return 0;
}
