#include <Iostream>
#include <math.h>
using namespace std;

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
		return arr[s];
		
}


int main(){
//	int n;
//	cin>>n;

	int num[7]={1,12,6,5,4,3,2};
	cout<<peakElement(num,7);

}