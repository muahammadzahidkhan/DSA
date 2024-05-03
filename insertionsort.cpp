#include<iostream>
using namespace std;
void insertionsort(int array[] , int size)
{
	for(int i =1; i<size; i++)
	{
		int key = array[i];
		int j = i-1;
		
		while(key<array[j]&&j>=0)
		{
			array[j+1]=array[j];
				j--;
		}
		array[j+1]=key;
	}
//	return 0;
}
int main()
{
	int array[]= {3,5,2,4,1,6};
	int size = sizeof(array)/sizeof(array[0]);

	cout<<"the elements of array before sorting"<<endl;
	for(int i =0; i<size; i++)
	{
		cout<<array[i]<<" ";
	}
	cout<<endl;
    
	insertionsort(array,size);	
	
		cout<<"the elements of array after sorting"<<endl;
	for(int i =0; i<size; i++)
	{
		cout<<array[i]<<" ";
	}
    
	
	return 0;
}
