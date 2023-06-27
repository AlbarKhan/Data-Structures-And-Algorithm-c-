#include <iostream>
using namespace std;

int binarySearch(int arr[],int n,int k){
	int start=0;
	int end=n-1;
	int mid=start+(end-start)/2;

	while(start<=end){
		if(arr[mid]==k){
			return mid;
		}
		if(k<arr[mid]){
			end=mid-1;
		}
		else{
			start=mid+1;
		}
		mid=start+(end-start)/2;
	}
	return -1;
}

int main(){
	int odd[5]={1,3,5,7,9};
	int even[6]={2,4,6,8,12,16};

	cout<<binarySearch(odd,5,5)<<endl;
	cout<<binarySearch(even,6,16);
	

}