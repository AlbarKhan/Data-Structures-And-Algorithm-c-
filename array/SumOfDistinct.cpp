#include <iostream>
using namespace std;

void print(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
}
void reverse(int arr[],int n){
	int s=0;
	int e=n-1;
	for(int i=0;i<n;i++){
		if(s<e){
			swap(arr[s],arr[e]);
			s++;
			e--;
		}
	}
}

int main(){

	int num[6]={1,2,3,4,4,5};

	reverse(num,6);
	print(num,6);
}