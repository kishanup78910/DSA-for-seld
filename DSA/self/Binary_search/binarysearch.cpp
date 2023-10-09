#include<iostream>
using namespace std;


bool BinarySearch(int arr[],int n,int x){
	
	bool flag=false;
	
	int low=0;
	int mid=0;
	int high=n-1;
	
	while(low<=high){
		mid=(low+high)/2;
		if(arr[mid]==x){
			return true;
		}else if(arr[mid]>x){
				high=mid-1;
		}else{
		
			low=mid+1;
		}
	}
	return flag;
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
	
	cout<<"\nEnter the element to search\n  ";
	int x;
	cin>>x;
	
	
	bool isfound = BinarySearch(a,n,x);
	
	if(isfound){
		cout<<" -------------------------Found------------------------------------------------------"<<endl;
	}else{
		cout<<"not found"<<endl;
	}
}

