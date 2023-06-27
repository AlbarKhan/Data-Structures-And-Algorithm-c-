#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;

	while(n!=0){
		int value=n%10;

		cout<<value;

		n=n/10;
	}

	return 0;
}