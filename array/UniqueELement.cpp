#include <iostream>
using namespace std;

int unique(int arr[],int n){
	int ans=0;
	for(int i=0;i<n;i++){
		ans=ans^arr[i];
	}
	return ans;
}

void print(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
}

int main(){
	int n;
	cin>>n;

	int num[8]={1,2,1,2,4,4,7};

	cout<<unique(num,n);
//	print(num,n);
}