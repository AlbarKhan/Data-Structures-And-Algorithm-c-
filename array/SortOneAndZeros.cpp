#include <iostream>
using namespace std;

void SortOnesZero(int arr[],int n){
	int i=0;
	int j=n-1;

	while(i<j){
		while(arr[i]==0 && i<j){
			i++;
		}
		while(arr[j]==1 && i<j){
			j--;
		}
		if(arr[i]==1 && arr[j]==0 && i<j){
			swap(arr[i],arr[j]);
			i++;
			j--;
		}
	//	cout<<arr[i]<<" ";
	}	

}
void print(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

int main(){
	int n;
	cin>>n;

	int num[10]={1,0,1,0,1,0,1,0,1,0};

	SortOnesZero(num,n);
	print(num,n);
}