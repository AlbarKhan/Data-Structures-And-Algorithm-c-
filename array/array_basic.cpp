#include <iostream>
using namespace std;

void printarray(int arr[],int size){
	arr[size]={};
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}	
}

int main(){

	int one [5]={1,2,3,4,5};
	printarray(one,5);
	cout<<"Ending execution of array one "<<endl;

	int two[10]={0};
	printarray(two,10);
	cout<<"Ending execution of array two "<<endl;	

	int three[5]={};
	printarray(three,5);
	cout<<"Ending execution of array two "<<endl;

	int four[6]={};
	int n=6;
	for(int i=0;i<n;i++){
		four[i]={1};
		cout<<four[i]<<" ";
	}
}