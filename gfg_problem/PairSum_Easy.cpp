//You are given an array Arr of size N. You need to find all pairs in the array //that sum to a number K. If no such pair exists then output will be -1. The //elements of the array are distinct and are in sorted order.

#include <iostream>
using namespace std;

int  pairSum(int arr[],int  n,int k){
		int count =0;
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(arr[i]+arr[j]==k){
					count++;
				}
			}
		}
		if(count>0){
			return count;
		}
		else{
			return -1;
		}
}


int main(){
	int arr[] = {1, 2, 3, 4, 5, 6, 7};
	cout<<pairSum(arr,7,98);

}