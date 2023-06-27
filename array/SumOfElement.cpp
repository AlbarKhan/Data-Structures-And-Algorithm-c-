#include <iostream>
using namespace std;

int SumOfArray(int arr[],int n){
	int sum=0;
	for(int i=0;i<n;i++){
		sum=sum+arr[i];
	}
	return sum;
}

int main(){
	int n;
	cout<<"Enter the Size of the array"<<endl;
	cin>>n;

	int sum[7];
	for(int i=0;i<n;i++){
		cin>>sum[i];
	}

	cout<<"Sum of the Elemnt in array is: "<<SumOfArray(sum,n);
}