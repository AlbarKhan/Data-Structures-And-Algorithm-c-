#include <iostream>
using namespace std;

int findExtra(int a[],int b[],int n){
	int s=0;
	int e=n-1;
	int mid=s+(e-s)/2;
	int ans=0;

	while(s<=e){
		if(a[mid]==b[mid]){
			s=mid+1;
		}
		else{
			ans=mid;
			e=mid-1;
		}
		mid=s+(e-s)/2;
	}
	return ans;
}



int main(){

	int A[7]={2,4,6,8,9,10,12};
	int B[7]={2,4,6,8,10,12};


	cout<<findExtra(A,B,7);
}