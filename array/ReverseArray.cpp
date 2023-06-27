#include <iostream>
using namespace std;

void reverse(int arr[],int n){
	int start=0;
	int end=n-1;

	while(start<=end){
		swap(arr[start],arr[end]);
		start++;
		end--;
	}
}
	 
void printArray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
	cout<<""<<endl;
}

int main(){
	int n;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
		
	int even[5]={1,3,5,7,9};
	int odd[5]={2,4,6,8,10};

	reverse(even,n);
	reverse(odd,n);

	printArray(even,n);
	printArray(odd,n);

	
}