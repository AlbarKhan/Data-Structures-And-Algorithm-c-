#include <iostream>
using namespace std;

int getmax(int arr[],int n){

	int max=arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	return max;
}

int getmin(int arr[],int n){
	int min=arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]<min){
			min=arr[i];
		}
	}
	return min;
}
int main(){
	int n;
	cin>>n;
	
	int fir[10];

	for(int i=0;i<n;i++){
		cin>>fir[i];
	}

	cout<<"The maximum elemnt in the array is: "<<getmax(fir,n)<<endl;
	cout<<"The minimum elemnt in the array is: "<<getmin(fir,n);
}