#include <iostream>
using namespace std;


void reverse(int arr[],int n){

	int start=0;
	int end=n-1;
	while(start<end){
		swap(arr[start],arr[end]);
		start++;
		end--;
	}
}

void SwapAlter(int arr[],int n){
	for(int i=0;i<n;i+=2){
		if((i+1)<n){
			swap(arr[i],arr[i+1]);
		}
	}	

}

void swapOddIndex(int arr[],int size){

	for(int i=0;i<size;i+=4){
		if((i+2)<size){
			swap(arr[i],arr[i+2]);
		}
	}
}

void swapEvenIndex(int arr[],int n){
	for(int i=1;i<n;i+=4){
		if((i+2)<n){
			swap(arr[i],arr[i+2]);
		}
	}

}

void print(int arr[],int size){

	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	
	}

}
int main(){

	int n;
	cin>>n;

	int odd[5]={1,2,3,4,5};
	int even[9]={1,2,3,4,5,6,7,8,9};
//	reverse(odd,n);
//	SwapAlter(even,n);
	cout<<"Swapping skip one"<<endl;
	//swapOddIndex(even,n);
	swapEvenIndex(even,n);
	print(even,n);
	
}