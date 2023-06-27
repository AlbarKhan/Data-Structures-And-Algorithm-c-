#include <iostream>
using namespace std;

void reverse(int arr[],int n){
	int start=0;
	int end=n-1;
	for(int i=0;i<n;i++){
		if(start<end){
			swap(arr[start],arr[end]);		
			start++;
			end--;
		}
	}
}

void alter(int arr[],int n){
	for(int i=0;i<n;i+=2){
		if(i+1<n){
			swap(arr[i],arr[i+1]);
		}
	}
}

void SwapOdd(int arr[],int n){
	for(int i=0;i<n;i+=4){
		if(i+2<n){
		swap(arr[i],arr[i+2]);
		}
	}
}

void SwapEven(int arr[],int n){
	for(int i=1;i<n;i+=4){
		if(i+2<n){
			swap(arr[i],arr[i+2]);
		}
	}
}

void 


void print(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

int main(){

	int n;
	cin>>n;

	int num[8]={1,2,3,4,5,6,7,8};

	//reverse(num,n);
	//alter(num,n);
	//SwapOdd(num,n);
	SwapEven(num,n);
	print(num,n);

}