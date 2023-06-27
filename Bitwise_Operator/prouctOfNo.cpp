#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	int p=1;
	int sum=0;
	
	while(n!=0){
		int digit=n%10;
		p=p*digit;
		sum=sum+digit;

		cout<<digit;
		n=n/10;
	}
	cout<<"\nThe product of the number is:"<<p<<endl;
	cout<<"The sum of the numbers is: "<<sum<<endl;
}