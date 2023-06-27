#include <iostream>
using namespace std;

void SwapAlternate(int arr[],int n){
	for(int i=0;i<n;i+=2){
		if((i+1)<n){
			int temp=arr[i+1];
			arr[i+1]=arr[i];
			arr[i]=temp;
		}
	}

}

void SwapOdd(int arr[],int n){
	for(int i=0;i<n;i+=4){
		if((i+2)<n){
			swap(arr[i],arr[i+2]);
		}
	}

}
void MaxMin(int arr[],int n){
	int max=arr[0];
	int min=arr[0];

	for(int i=0;i<n;i++){
		if(arr[i]<min){
			min=arr[i];
		}
		else if(arr[i]>max){
			max=arr[i];
		}
	}	
	cout<<"Largest element in array is: "<<max<<endl;
	cout<<"Smallest element in the array is: "<<min<<endl;
}
void reverse(int arr[],int n){
	int start=0;
	int end=n-1;
	while(start<end){
		int temp=arr[end];
		arr[end]=arr[start];
		arr[start]=temp;
		start++;
		end--;
	}
}

void Sum(int arr[],int n){
	int sum=0;
	for(int i=0;i<n;i++){
		sum=sum+arr[i];
	}
	cout<<"Sum of the given array is: "<<sum;
}

void SwapEven(int arr[],int n){
	for(int i=1;i<n;i+=4){
		if(i+2<n){
			swap(arr[i],arr[i+2]);
		}
	}
}

void print(int arr[], int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){

	int n;
	cin>>n;

	int num[10]={1,2,3,4,5,6,7,8,9,10};
	//MaxMin(num,n) ;
	//reverse(num,n);
	//Sum(num,n);
	//SwapAlternate(num,n);
	//SwapOdd(num,n);
	SwapEven(num,n);
	print(num,n);

	
	return 0;

}