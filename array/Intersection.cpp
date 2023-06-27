#include <iostream>
using namespace std;

// When  Elements are stored in a non decresing order
void Intersection(int arr1[],int arr2[],int n){
	int i=0; int j=0;
	while(i<n){
		if(arr1[i]<arr2[j]){
			i++;
		}
		else if(arr1[i]>arr2[j]){
			j++;
		}
		else if(arr1[i]==arr2[j]){
			cout<<arr2[j]<<" ";
			i++;
			j++;
		}
	}
	
}

int main(){
	int n;
	cin>>n;

	int num1 [6]={1,2,3,4,5,2};
	int num2 [6]={2,3,4,5,7};

	Intersection(num1,num2,n);

	
	
}