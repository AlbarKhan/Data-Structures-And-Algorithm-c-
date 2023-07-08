/*
Given an array A[] of N elements. The task is to count number of even and odd elements in the array.
*/


#include <iostream>
using namespace std;


void countOddEven(int arr[],int n){
	int even=0;
	int odd=0;
	for(int i=0;i<n;i++){
		if(arr[i]%2==0){
			even++;
		}
		else{
			odd++;
		}
	}

	cout<<odd<<"  "<<even;

}

int main(){
	int arr[5]={1,2,3,4,5};

	countOddEven(arr,5);


}