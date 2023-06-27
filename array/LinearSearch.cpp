#include <iostream>
using namespace std;

bool search(int arr[],int n,int key){
	for(int i=0;i<n;i++){
		if(arr[i] == key){
			return 1;
		}
	}
	return 0;
}

int main(){
	int n;
	cout<<"Enter the size of the array";
	cin>>n;
	int k;
	cout<<"Enter the key";
	cin>>k;
	int sear[10];

	for(int i=0;i<n;i++){
		cin>>sear[i];
	}
	
	cout<<search(sear,n,k);
	
}


