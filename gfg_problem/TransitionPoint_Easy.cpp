//Given a sorted array containing only 0s and 1s, find the transition point.

#include <iostream>
using namespace std;

int transitionPoint(int arr[],int n){
	int s=0;
	int e=n-1;
	int mid=s+(e-s)/2;
	int ans=-1;
	while(s<=e){
		if(arr[mid]==1){
			ans=mid;
			e=mid-1;
		}
		else if(arr[mid]<1){
			s=mid+1;
		}
		mid=s+(e-s)/2;
	}
	return ans;
}

int main(){
	int arr[] = {0,0,0,0};
	cout<<transitionPoint(arr,5);
}