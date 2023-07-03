/*Given an array of size N consisting of only 0's and 1's. The array is sorted in such a manner that all the 1's are placed first and then they are followed by all the 0's. Find the count of all the 0's.
*/


#include <iostream>
using namespace std;

int first(int arr[],int n){
	int s=0;
	int e=n-1;
	int mid=s+(e-s)/2;
	int ans=-1;
	while(s<=e){
		if(arr[mid]==0){
			ans=mid;
			e=mid-1;
		}
		else{
			s=mid+1;
		}
		mid=s+(e-s)/2;
	}
	return ans;
}

int last(int arr[],int n){
	int s=0;
	int e=n-1;
	int mid=s+(e-s)/2;
	int ans=-1;
	while(s<=e){
		if(arr[mid]==0){
			ans=mid;
			s=mid+1;
		}
		else{
			s=mid+1;
		}
		mid=s+(e-s)/2;
	}
	return ans;
}

int main(){
	int Arr[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0};
	
	int ans=(last(Arr,12)-first(Arr,12))+1;
	cout<<ans;
}