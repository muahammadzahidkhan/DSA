#include<iostream>
using namespace std;
void printarry( int arry[] , int size)
{
	for(int i=0; i<size; i++)
	{
		cout<<arry[i]<<" ";
	}
}
//funtion to merge two  subarry
void merge(int arry[],int left,int middle,int right)
{
	int i,j,k;
	
	int n1 =middle - left + 1;
		
	int n2 = right-middle;

	//create temprary arry
	int l[n1],r[n2];
	//copy data to temprary arry 
	for (int i =0;i<n1;i++)
	{
		l[i]=arry[left+i];
	}
	for(int j=0;j<n2;j++)
	{
		r[j]= arry[middle+1+j];
	}
	//merge the temprary arry back to the arry[left and right ]
	i=0;
	
	j=0;
	
	k=left;
	
	while(i<n1&&j<n2){
	
		if(l[i]<=r[j]){
		
		arry[k]=l[i];
		i++;
			
		}else{
		  
		  arry[k]=r[j];
		  
		  j++;	
		}
		k++;
	}
	//copying the remening elements if there are any
	
	while(i<n1)
	{
		arry[k]=l[i];
		
		i++;

		k++;
	}
	//copying the remenaing elements if there are any 
	 
	 while(j<n2)
	 {
	 	arry[k]=r[j];
	 	j++;
	 	k++;
	 }
}
//mergesort function
void mergesort(int arry[],int left,int right)
{
	if(left<right)
	{
		int middle = left +(right-left)/2;
	
		mergesort(arry,left,middle);
		
		mergesort(arry,middle+1,right);
		
		merge(arry,left,middle,right);
	}
}

int main()
{
	int arry[] = {5,4,6,3,7,2,8,1,9};

	int size = sizeof (arry)/sizeof(arry[0]);

	printarry(arry, size);
    
    cout<<endl;
    
    mergesort(arry,0,size-1);
    
    cout<<"the elemets of arry after sorting "<<endl;
    
    printarry(arry,size);




	return 0;
}
