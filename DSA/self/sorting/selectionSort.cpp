#include<iostream>
using namespace std;


void selectipon_sort(int arr[],int n){
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				swap(arr[i],arr[j]);
			}
		}
	}
		for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	selectipon_sort(a,n);
}