#include <iostream>
using namespace std;

/*
Program to find the sum of even number 
*/
int main(){
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	int i=1;
	int sum=0;
	while(i<=n){
		sum=sum+i;
		i=i+2;
	}
	cout<<sum<<endl;
		

}