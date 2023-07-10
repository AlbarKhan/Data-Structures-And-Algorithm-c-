#include <iostream>
using namespace std;

int first(int arr[], int n,int x){
	int s=0;
	int e=n-1;
	int mid=s+(e-s)/2;
	int ans=0;
	while(s<=e){
		if(arr[mid]==x){
			ans=mid;
			e=mid-1;
		}
		else if(arr[mid]<x){
			s=mid+1;
		}
		else if(arr[mid]>x){
			e=mid-1;
		}
		mid=s+(e-s)/2;
	}
	return ans;

}

int last(int arr[], int n,int x){
	int s=0;
	int e=n-1;
	int mid=s+(e-s)/2;
	int ans=0;
	while(s<=e){
		if(arr[mid]==x){
			ans=mid;
			s=mid+1;
		}
		else if(arr[mid]<x){
			s=mid+1;
		}
		else if(arr[mid]>x){
			e=mid-1;
		}
		mid=s+(e-s)/2;
	}
	return ans;

}



int main(){
	
	int num[6]={1,3,3,3,4,5};
	int numberOfOccurance=last(num,6,3)-first(num,6,3)+1;
	cout<<numberOfOccurance;
}
