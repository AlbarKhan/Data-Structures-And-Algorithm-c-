#include <iostream>
using namespace std;

void unique(int arr[],int n){
	int ans=0;
	for(int i=0;i<n;i++){
		ans=ans^arr[i];
	}
	cout<<ans;
}

void print(int arr[],int n){

	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
}

int main(){

	int n;
	cin>>n;


	int num[7]={1,2,3,4,1,2,3};

	unique(num,7);
	// print(num,7);
}
