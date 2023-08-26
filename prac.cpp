#include <Iostream>
#include <math.h>
using namespace std;

int peakElement(int arr[],int n,int x){
:w		int s=0;
		int e=n-1;
		int mid=s+(e-s)/2;
		int ans;
		while(s<=e){
			if(arr[mid]==x){
				ans=mid;
				e=mid-1;
			}
			else if(arr[mid]>x){
				e=mid-1;
			}
			else if(arr[mid]<x){
				s=mid+1;
			}
			mid=s+(e-s)/2;
		}
		return ans;
}


int main(){
//	int n;
//	cin>>n;

	int num[5]={1,2,3,4,5};
	cout<<peakElement(num,5,4);

}
