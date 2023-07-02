/*
An element is called a peak element if its value is not smaller than the value of its adjacent elements(if they exists).
Given an array arr[] of size N, Return the index of any one of its peak elements
*/

#include <iostream>
using namespace std;;

int peakElement(int arr[],int n){
	int s=0;
	int e=n-1;
	int mid=s+(e-s)/2;

	while(s<e){
		if(arr[mid]<=arr[mid+1]){
			s=mid+1;
		}
		else{
			e=mid;
		}
		mid=s+(e-s)/2;
	}
	return s;
}

int main(){
	int arr[] = {3,4,2};
	cout<<peakElement(arr,3);

}