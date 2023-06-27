#include <iostream>
using namespace std;

void PairSum(int arr[],int n,int k){
	for(int i=0;i<n;i++){
		for(int j=i+1; j<n ;j++){
			if(arr[i]+arr[j]==k){
			
				cout<<arr[i]<<" "<<arr[j]<<endl;
			}	
		}
	}
}

void TripletSum(int arr[],int n,int key){
	for(int i=0;i<n;i++){
		for(int j=i+1; j<n ;j++){
			for(int k=j+1;k<n;k++){
				if(arr[i]+arr[j]+arr[k]==key){
					cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
				}
			}

	}	}
}

int main(){

	int n;
	cin>>n;

	int num [5]={1,2,3,4,5};
	int num2[6]={10,6,6,6,3,5};
	TripletSum(num2,n,18);


	return 0;
}