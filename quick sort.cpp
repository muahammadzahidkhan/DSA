#include<iostream>
using namespace std;
int swap ( int *first , int *second )

{

	int temp = *first ;
	*first = *second ;

	*second = temp ;

}

void  printarry( int arry[] , int size )

{
    for (int i=0; i<size; i++)

    {
	      cout<<arry[i]<<",";	
	
	}	
	
}

int partition ( int arry[] , int low , int high )

{

	int povit = arry[high] ;

	int i = low -1 ;

	for ( int j = low; j<high; j++)

	{

		if (arry[j]>=povit){
			i++;
			
			swap( &arry[i] , &arry[j]);
}
		
}
        
		swap( &arry[i+1] , &arry [high]);
	
		return i+1;
}

void quicksort ( int arry[] , int low , int high )
{
	if ( low<high)
	{
	 int pi = partition ( arry , low ,high);
	 quicksort ( arry , low , pi-1);
	 
	 quicksort ( arry , pi+1 ,high);
	
	}
 } 

int main()
{
	int arry[] = {1,2,3,4,5,6,7,8};

	int size = sizeof (arry) / sizeof (arry[0]);
	
	cout<<"the element of array before sorting"<<endl;
	 printarry ( arry ,size );

	int low = 0;

	int high = size-1;
	
    quicksort( arry , low ,high );
    
	cout<<endl;
    
    cout<<"the elements of arry after sorting :"<<endl;
    
    printarry ( arry ,size );
  	
	return 0;
}
