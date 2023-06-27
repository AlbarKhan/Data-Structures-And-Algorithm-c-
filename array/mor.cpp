#include <iostream>
using namespace std;

void Intersection(int arr[],int arr2[],int n,int m){
	int i=0;
	int j=0;

	while(i<n){
		if(arr[i]<arr2[j]){
			i++;
		}
		else if(arr[i]>arr2[j]){
			j++;
		}
		else if(arr[i]==arr2[j]){
			cout<<arr2[j]<<" ";
			i++;
			j++;
		}
	}
}

void print(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

int main(){
	int n;
	cin>>n;

	int num[5]={1,2,2,2,3};
	int num2[4]={2,2,4,5};

	Intersection(num,num2,n,4);
	
}