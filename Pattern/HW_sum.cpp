#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;

	int i=0;
	int sum=0;
	while(i<n){
		sum=sum+i;
		i=i+1;
	}
	cout<<"The  sum odf the numbers is: "<< sum <<endl;
}