#include<iostream>
using namespace std;
int search(int arr[] ,int n, int x)
{
	int low = 0;
	
	int high = n-1;
	
	while(low <= high)
	{
	
		int mid = low + ( high - low) / 2;
	
		if (arr [mid] == x)
		{
			return mid;
		}
		if (arr [mid] < x)
		{
			low = mid + 1;
		}
		    else
				high = mid -1;
	}

	return -1;
}
int main()
{
	int arr[]={2,3,4,5,6,8,9,10};
	int n = sizeof(arr)/sizeof(arr[0]);
	int x = 9;
	int result = search(arr,n,x);
	if(result==-1)
	{
	cout<<"element not found"<<endl;
    }
	else
    {
	 cout<<"element found at index:"<<result;
    }
	
	
	return 0;
}
