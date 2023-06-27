#include <iostream>
using namespace std;

void reverse(int n){
	int ans=0;
	while(n!=0){
	int digit=n%10;
	ans=(ans*10)+digit;
	n=n/10;
	}
	cout<<"The reverse of a number is : "<<ans<<endl;
	
}

int main(){
	int n;
	cin>>n;

	reverse(n);
	
}