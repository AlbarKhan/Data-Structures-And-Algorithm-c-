#include <iostream>
using namespace std;

int firstOccurance(int arr[],int n,int key){
	int s=0;
	int e=n-1;
	int mid=s+(e-s)/2;
	int  ans=-1;
	while(s<=e){
		if(arr[mid]==key){
			ans=mid;
			e=mid-1;
		}
		else if(key>arr[mid]){
			s=mid+1;
		}

		else if(key<arr[mid]){
			e=mid-1;
		}
		mid=s+(e-s)/2;
	}
	return ans;
}
int LastOccurance(int arr[],int n,int key){
	int s=0;
	int e=n-1;
	int mid=s+(e-s)/2;
	int  ans=-1;
	while(s<=e){
		if(arr[mid]==key){
			ans=mid;
			s=mid+1;
		}
		else if(key>arr[mid]){
			s=mid+1;
		}

		else if(key<arr[mid]){
			e=mid-1;
		}
		mid=s+(e-s)/2;
	}
	return ans;
}

int main(){

	int num[]={1,2,3,3,3,5};
	cout<<firstOccurance(num,6,3)<<endl;
	cout<<LastOccurance(num,6,3)<<endl;
	int numberOfocccurance=(LastOccurance(num,6,3)-firstOccurance(num,6,3))+1;
	cout<<numberOfocccurance;
}