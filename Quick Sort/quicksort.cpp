#include<bits/stdc++.h>
using namespace std;

int part(int low, int high, int arr[])
{
	int i = low;
	int j = high;
	int pivot = arr[i];
	while(i<j)
	{
		do{
			i++;
		}while(arr[i]<=pivot);
		do{
			j--;
		}while(arr[j]>pivot);
		if(i<j)
		{
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}
	int temp = arr[low];
	arr[low] = arr[j];
	arr[j] = temp;
	
	return j;
}

void quicksort(int high, int low, int arr[])
{
	if(low<high)
	{
		int j = part(low, high,arr);
		
		quicksort(j,low,arr);
		quicksort(high, j+1,arr);
	}

}

int main()
{
	int n;
	cout<<"Enter the number of elements in the array : ";
	cin>>n;
	int arr[n];
	int i;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	quicksort(n,0,arr);
		i =0;
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
//	cout<<endl;
}
