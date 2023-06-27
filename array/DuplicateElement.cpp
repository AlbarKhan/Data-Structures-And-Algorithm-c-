#include <iostream>
using namespace std;


int Duplicate(int arr[],int n){
	int ans=0;
	for(int i=0;i<n-1;i++){
		ans=ans^arr[i];
	}

	for(int i=1;i<n-1;i++){
		ans=ans^i;
	}

	return ans;
}



void print(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
}

int main(){
	int n;
	cin>>n;

	int num[]={1,2,3,4,5,1};

	cout<<Duplicate(num,n);
}